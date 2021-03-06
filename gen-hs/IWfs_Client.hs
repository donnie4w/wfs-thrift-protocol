{-# LANGUAGE DeriveDataTypeable #-}
{-# LANGUAGE DeriveGeneric #-}
{-# LANGUAGE OverloadedStrings #-}
{-# OPTIONS_GHC -fno-warn-missing-fields #-}
{-# OPTIONS_GHC -fno-warn-missing-signatures #-}
{-# OPTIONS_GHC -fno-warn-name-shadowing #-}
{-# OPTIONS_GHC -fno-warn-unused-imports #-}
{-# OPTIONS_GHC -fno-warn-unused-matches #-}

-----------------------------------------------------------------
-- Autogenerated by Thrift Compiler (0.9.3)                      --
--                                                             --
-- DO NOT EDIT UNLESS YOU ARE SURE YOU KNOW WHAT YOU ARE DOING --
-----------------------------------------------------------------

module IWfs_Client(wfsPost,wfsRead,wfsDel) where
import qualified Data.IORef as R
import Prelude (($), (.), (>>=), (==), (++))
import qualified Prelude as P
import qualified Control.Exception as X
import qualified Control.Monad as M ( liftM, ap, when )
import Data.Functor ( (<$>) )
import qualified Data.ByteString.Lazy as LBS
import qualified Data.Hashable as H
import qualified Data.Int as I
import qualified Data.Maybe as M (catMaybes)
import qualified Data.Text.Lazy.Encoding as E ( decodeUtf8, encodeUtf8 )
import qualified Data.Text.Lazy as LT
import qualified GHC.Generics as G (Generic)
import qualified Data.Typeable as TY ( Typeable )
import qualified Data.HashMap.Strict as Map
import qualified Data.HashSet as Set
import qualified Data.Vector as Vector
import qualified Test.QuickCheck.Arbitrary as QC ( Arbitrary(..) )
import qualified Test.QuickCheck as QC ( elements )

import qualified Thrift as T
import qualified Thrift.Types as T
import qualified Thrift.Arbitraries as T


import Wfs_Types
import IWfs
seqid = R.newIORef 0
wfsPost (ip,op) arg_wf = do
  send_wfsPost op arg_wf
  recv_wfsPost ip
send_wfsPost op arg_wf = do
  seq <- seqid
  seqn <- R.readIORef seq
  T.writeMessageBegin op ("wfsPost", T.M_CALL, seqn)
  write_WfsPost_args op (WfsPost_args{wfsPost_args_wf=arg_wf})
  T.writeMessageEnd op
  T.tFlush (T.getTransport op)
recv_wfsPost ip = do
  (fname, mtype, rseqid) <- T.readMessageBegin ip
  M.when (mtype == T.M_EXCEPTION) $ do { exn <- T.readAppExn ip ; T.readMessageEnd ip ; X.throw exn }
  res <- read_WfsPost_result ip
  T.readMessageEnd ip
  P.return $ wfsPost_result_success res
wfsRead (ip,op) arg_name = do
  send_wfsRead op arg_name
  recv_wfsRead ip
send_wfsRead op arg_name = do
  seq <- seqid
  seqn <- R.readIORef seq
  T.writeMessageBegin op ("wfsRead", T.M_CALL, seqn)
  write_WfsRead_args op (WfsRead_args{wfsRead_args_name=arg_name})
  T.writeMessageEnd op
  T.tFlush (T.getTransport op)
recv_wfsRead ip = do
  (fname, mtype, rseqid) <- T.readMessageBegin ip
  M.when (mtype == T.M_EXCEPTION) $ do { exn <- T.readAppExn ip ; T.readMessageEnd ip ; X.throw exn }
  res <- read_WfsRead_result ip
  T.readMessageEnd ip
  P.return $ wfsRead_result_success res
wfsDel (ip,op) arg_name = do
  send_wfsDel op arg_name
  recv_wfsDel ip
send_wfsDel op arg_name = do
  seq <- seqid
  seqn <- R.readIORef seq
  T.writeMessageBegin op ("wfsDel", T.M_CALL, seqn)
  write_WfsDel_args op (WfsDel_args{wfsDel_args_name=arg_name})
  T.writeMessageEnd op
  T.tFlush (T.getTransport op)
recv_wfsDel ip = do
  (fname, mtype, rseqid) <- T.readMessageBegin ip
  M.when (mtype == T.M_EXCEPTION) $ do { exn <- T.readAppExn ip ; T.readMessageEnd ip ; X.throw exn }
  res <- read_WfsDel_result ip
  T.readMessageEnd ip
  P.return $ wfsDel_result_success res
