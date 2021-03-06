%%
%% Autogenerated by Thrift Compiler (0.9.3)
%%
%% DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
%%

-module(wfs_types).

-include("wfs_types.hrl").

-export([struct_info/1, struct_info_ext/1]).

struct_info('WfsAck') ->
  {struct, [{1, i32}]}
;

struct_info('Wfs') ->
  {struct, [{1, i32}]}
;

struct_info('WfsFile') ->
  {struct, [{1, string},
          {2, string},
          {3, string}]}
;

struct_info(_) -> erlang:error(function_clause).

struct_info_ext('WfsAck') ->
  {struct, [{1, optional, i32, 'status', undefined}]}
;

struct_info_ext('Wfs') ->
  {struct, [{1, optional, i32, 'status', undefined}]}
;

struct_info_ext('WfsFile') ->
  {struct, [{1, optional, string, 'name', undefined},
          {2, optional, string, 'fileBody', undefined},
          {3, optional, string, 'fileType', undefined}]}
;

struct_info_ext(_) -> erlang:error(function_clause).

