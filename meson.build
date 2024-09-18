project(
  'cppari',
  'cpp',
  license: 'MIT',
  default_options: [
    'cpp_std=c++20',
  ],
)

json = declare_dependency(include_directories: include_directories('dependencies/json/include'))
uri = declare_dependency(include_directories: include_directories('dependencies/ada/include'))
websocket = declare_dependency(include_directories: include_directories('dependencies/websocketpp/websocketpp'))
http = declare_dependency(include_directories: include_directories('dependencies/cpp-httplib'))

library(
  'cppari',
  sources: [
    'src/Bridge.cxx',
    'src/Channel.cxx',
    'src/Client.cxx',
    'src/Playback.cxx',
    'src/Recording.cxx',
  ],
  dependencies: [json, uri, websocket, http],
  include_directories: include_directories('include'),
)
