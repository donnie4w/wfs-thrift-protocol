-ifndef(_wfs_types_included).
-define(_wfs_types_included, yeah).

%% struct 'WfsAck'

-record('WfsAck', {'status' :: integer()}).
-type 'WfsAck'() :: #'WfsAck'{}.

%% struct 'Wfs'

-record('Wfs', {'status' :: integer()}).
-type 'Wfs'() :: #'Wfs'{}.

%% struct 'WfsFile'

-record('WfsFile', {'name' :: string() | binary(),
                    'fileBody' :: string() | binary(),
                    'fileType' :: string() | binary()}).
-type 'WfsFile'() :: #'WfsFile'{}.

-endif.
