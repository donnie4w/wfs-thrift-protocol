%%
%% Autogenerated by Thrift Compiler (0.9.3)
%%
%% DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
%%

-module(i_wfs_thrift).
-behaviour(thrift_service).


-include("i_wfs_thrift.hrl").

-export([struct_info/1, function_info/2]).

struct_info(_) -> erlang:error(function_clause).
%%% interface
% wfsPost(This, Wf)
function_info('wfsPost', params_type) ->
  {struct, [{1, {struct, {'wfs_types', 'WfsFile'}}}]}
;
function_info('wfsPost', reply_type) ->
  {struct, {'wfs_types', 'WfsAck'}};
function_info('wfsPost', exceptions) ->
  {struct, []}
;
% wfsRead(This, Name)
function_info('wfsRead', params_type) ->
  {struct, [{1, string}]}
;
function_info('wfsRead', reply_type) ->
  {struct, {'wfs_types', 'WfsFile'}};
function_info('wfsRead', exceptions) ->
  {struct, []}
;
% wfsDel(This, Name)
function_info('wfsDel', params_type) ->
  {struct, [{1, string}]}
;
function_info('wfsDel', reply_type) ->
  {struct, {'wfs_types', 'WfsAck'}};
function_info('wfsDel', exceptions) ->
  {struct, []}
;
function_info(_Func, _Info) -> erlang:error(function_clause).

