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

module Wfs_Types where
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


data WfsAck = WfsAck  { wfsAck_status :: P.Maybe I.Int32
  } deriving (P.Show,P.Eq,G.Generic,TY.Typeable)
instance H.Hashable WfsAck where
  hashWithSalt salt record = salt   `H.hashWithSalt` wfsAck_status record  
instance QC.Arbitrary WfsAck where 
  arbitrary = M.liftM WfsAck (M.liftM P.Just QC.arbitrary)
  shrink obj | obj == default_WfsAck = []
             | P.otherwise = M.catMaybes
    [ if obj == default_WfsAck{wfsAck_status = wfsAck_status obj} then P.Nothing else P.Just $ default_WfsAck{wfsAck_status = wfsAck_status obj}
    ]
from_WfsAck :: WfsAck -> T.ThriftVal
from_WfsAck record = T.TStruct $ Map.fromList $ M.catMaybes
  [ (\_v2 -> (1, ("status",T.TI32 _v2))) <$> wfsAck_status record
  ]
write_WfsAck :: (T.Protocol p, T.Transport t) => p t -> WfsAck -> P.IO ()
write_WfsAck oprot record = T.writeVal oprot $ from_WfsAck record
encode_WfsAck :: (T.Protocol p, T.Transport t) => p t -> WfsAck -> LBS.ByteString
encode_WfsAck oprot record = T.serializeVal oprot $ from_WfsAck record
to_WfsAck :: T.ThriftVal -> WfsAck
to_WfsAck (T.TStruct fields) = WfsAck{
  wfsAck_status = P.maybe (P.Nothing) (\(_,_val4) -> P.Just (case _val4 of {T.TI32 _val5 -> _val5; _ -> P.error "wrong type"})) (Map.lookup (1) fields)
  }
to_WfsAck _ = P.error "not a struct"
read_WfsAck :: (T.Transport t, T.Protocol p) => p t -> P.IO WfsAck
read_WfsAck iprot = to_WfsAck <$> T.readVal iprot (T.T_STRUCT typemap_WfsAck)
decode_WfsAck :: (T.Protocol p, T.Transport t) => p t -> LBS.ByteString -> WfsAck
decode_WfsAck iprot bs = to_WfsAck $ T.deserializeVal iprot (T.T_STRUCT typemap_WfsAck) bs
typemap_WfsAck :: T.TypeMap
typemap_WfsAck = Map.fromList [(1,("status",T.T_I32))]
default_WfsAck :: WfsAck
default_WfsAck = WfsAck{
  wfsAck_status = P.Nothing}
data Wfs = Wfs  { wfs_status :: P.Maybe I.Int32
  } deriving (P.Show,P.Eq,G.Generic,TY.Typeable)
instance H.Hashable Wfs where
  hashWithSalt salt record = salt   `H.hashWithSalt` wfs_status record  
instance QC.Arbitrary Wfs where 
  arbitrary = M.liftM Wfs (M.liftM P.Just QC.arbitrary)
  shrink obj | obj == default_Wfs = []
             | P.otherwise = M.catMaybes
    [ if obj == default_Wfs{wfs_status = wfs_status obj} then P.Nothing else P.Just $ default_Wfs{wfs_status = wfs_status obj}
    ]
from_Wfs :: Wfs -> T.ThriftVal
from_Wfs record = T.TStruct $ Map.fromList $ M.catMaybes
  [ (\_v8 -> (1, ("status",T.TI32 _v8))) <$> wfs_status record
  ]
write_Wfs :: (T.Protocol p, T.Transport t) => p t -> Wfs -> P.IO ()
write_Wfs oprot record = T.writeVal oprot $ from_Wfs record
encode_Wfs :: (T.Protocol p, T.Transport t) => p t -> Wfs -> LBS.ByteString
encode_Wfs oprot record = T.serializeVal oprot $ from_Wfs record
to_Wfs :: T.ThriftVal -> Wfs
to_Wfs (T.TStruct fields) = Wfs{
  wfs_status = P.maybe (P.Nothing) (\(_,_val10) -> P.Just (case _val10 of {T.TI32 _val11 -> _val11; _ -> P.error "wrong type"})) (Map.lookup (1) fields)
  }
to_Wfs _ = P.error "not a struct"
read_Wfs :: (T.Transport t, T.Protocol p) => p t -> P.IO Wfs
read_Wfs iprot = to_Wfs <$> T.readVal iprot (T.T_STRUCT typemap_Wfs)
decode_Wfs :: (T.Protocol p, T.Transport t) => p t -> LBS.ByteString -> Wfs
decode_Wfs iprot bs = to_Wfs $ T.deserializeVal iprot (T.T_STRUCT typemap_Wfs) bs
typemap_Wfs :: T.TypeMap
typemap_Wfs = Map.fromList [(1,("status",T.T_I32))]
default_Wfs :: Wfs
default_Wfs = Wfs{
  wfs_status = P.Nothing}
data WfsFile = WfsFile  { wfsFile_name :: P.Maybe LT.Text
  , wfsFile_fileBody :: P.Maybe LBS.ByteString
  , wfsFile_fileType :: P.Maybe LT.Text
  } deriving (P.Show,P.Eq,G.Generic,TY.Typeable)
instance H.Hashable WfsFile where
  hashWithSalt salt record = salt   `H.hashWithSalt` wfsFile_name record   `H.hashWithSalt` wfsFile_fileBody record   `H.hashWithSalt` wfsFile_fileType record  
instance QC.Arbitrary WfsFile where 
  arbitrary = M.liftM WfsFile (M.liftM P.Just QC.arbitrary)
          `M.ap`(M.liftM P.Just QC.arbitrary)
          `M.ap`(M.liftM P.Just QC.arbitrary)
  shrink obj | obj == default_WfsFile = []
             | P.otherwise = M.catMaybes
    [ if obj == default_WfsFile{wfsFile_name = wfsFile_name obj} then P.Nothing else P.Just $ default_WfsFile{wfsFile_name = wfsFile_name obj}
    , if obj == default_WfsFile{wfsFile_fileBody = wfsFile_fileBody obj} then P.Nothing else P.Just $ default_WfsFile{wfsFile_fileBody = wfsFile_fileBody obj}
    , if obj == default_WfsFile{wfsFile_fileType = wfsFile_fileType obj} then P.Nothing else P.Just $ default_WfsFile{wfsFile_fileType = wfsFile_fileType obj}
    ]
from_WfsFile :: WfsFile -> T.ThriftVal
from_WfsFile record = T.TStruct $ Map.fromList $ M.catMaybes
  [ (\_v14 -> (1, ("name",T.TString $ E.encodeUtf8 _v14))) <$> wfsFile_name record
  , (\_v14 -> (2, ("fileBody",T.TString _v14))) <$> wfsFile_fileBody record
  , (\_v14 -> (3, ("fileType",T.TString $ E.encodeUtf8 _v14))) <$> wfsFile_fileType record
  ]
write_WfsFile :: (T.Protocol p, T.Transport t) => p t -> WfsFile -> P.IO ()
write_WfsFile oprot record = T.writeVal oprot $ from_WfsFile record
encode_WfsFile :: (T.Protocol p, T.Transport t) => p t -> WfsFile -> LBS.ByteString
encode_WfsFile oprot record = T.serializeVal oprot $ from_WfsFile record
to_WfsFile :: T.ThriftVal -> WfsFile
to_WfsFile (T.TStruct fields) = WfsFile{
  wfsFile_name = P.maybe (P.Nothing) (\(_,_val16) -> P.Just (case _val16 of {T.TString _val17 -> E.decodeUtf8 _val17; _ -> P.error "wrong type"})) (Map.lookup (1) fields),
  wfsFile_fileBody = P.maybe (P.Nothing) (\(_,_val16) -> P.Just (case _val16 of {T.TString _val18 -> _val18; _ -> P.error "wrong type"})) (Map.lookup (2) fields),
  wfsFile_fileType = P.maybe (P.Nothing) (\(_,_val16) -> P.Just (case _val16 of {T.TString _val19 -> E.decodeUtf8 _val19; _ -> P.error "wrong type"})) (Map.lookup (3) fields)
  }
to_WfsFile _ = P.error "not a struct"
read_WfsFile :: (T.Transport t, T.Protocol p) => p t -> P.IO WfsFile
read_WfsFile iprot = to_WfsFile <$> T.readVal iprot (T.T_STRUCT typemap_WfsFile)
decode_WfsFile :: (T.Protocol p, T.Transport t) => p t -> LBS.ByteString -> WfsFile
decode_WfsFile iprot bs = to_WfsFile $ T.deserializeVal iprot (T.T_STRUCT typemap_WfsFile) bs
typemap_WfsFile :: T.TypeMap
typemap_WfsFile = Map.fromList [(1,("name",T.T_STRING)),(2,("fileBody",T.T_STRING)),(3,("fileType",T.T_STRING))]
default_WfsFile :: WfsFile
default_WfsFile = WfsFile{
  wfsFile_name = P.Nothing,
  wfsFile_fileBody = P.Nothing,
  wfsFile_fileType = P.Nothing}