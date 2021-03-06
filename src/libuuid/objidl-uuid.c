/**
 * @file objidl-uuid.c
 * Copyright 2012, 2013 MinGW.org project
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

/* Generate GUIDs for Object IDL interfaces */

/* All IIDs defined in this file were extracted from
 * HKEY_LOCAL_MACHINE\SOFTWARE\Classes\Interface\ */

#define INITGUID
#include <basetyps.h>
DEFINE_OLEGUID(IID_IMarshal,0x3,0,0);
DEFINE_OLEGUID(IID_IStream,0xc,0,0);
DEFINE_OLEGUID(IID_IMalloc,0x2,0,0);
DEFINE_OLEGUID(IID_IMessageFilter,0x16,0,0);
DEFINE_OLEGUID(IID_IPersist,0x10c,0,0);
DEFINE_OLEGUID(IID_IPersistFile,0x10b,0,0);
DEFINE_OLEGUID(IID_IPersistStorage,0x10a,0,0);
DEFINE_OLEGUID(IID_IPersistStream,0x109,0,0);
DEFINE_OLEGUID(IID_IMoniker,0xf,0,0);
DEFINE_OLEGUID(IID_IAdviseSink,0x10f,0,0);
DEFINE_OLEGUID(IID_IAdviseSink2,0x125,0,0);
DEFINE_OLEGUID(IID_IDataObject,0x10e,0,0);
DEFINE_OLEGUID(IID_IDataAdviseHolder,0x110,0,0);
DEFINE_OLEGUID(IID_IStorage,0xb,0,0);
DEFINE_OLEGUID(IID_IRootStorage,0x12,0,0);
DEFINE_GUID(IID_IRpcChannelBuffer,0xd5f56b60,0x593b,0x101a,0xb5,0x69,0x8,0,0x2b,0x2d,0xbf,0x7a);
DEFINE_GUID(IID_IRpcProxyBuffer,0xd5f56a34,0x593b,0x101a,0xb5,0x69,8,0,0x2b,0x2d,0xbf,0x7a);
DEFINE_GUID(IID_IRpcStubBuffer,0xd5f56afc,0x593b,0x101a,0xb5,0x69,0x8,0,0x2b,0x2d,0xbf,0x7a);
DEFINE_GUID(IID_ISequentialStream,0xc733a30,0x2a1c,0x11ce,0xad,0xe5,0,0xaa,0,0x44,0x77,0x3d);
DEFINE_OLEGUID(IID_IStdMarshalInfo,0x18,0,0);
DEFINE_OLEGUID(IID_IRunningObjectTable,0x10,0,0);
DEFINE_OLEGUID(IID_IBindCtx,0xe,0,0);
DEFINE_GUID(IID_IPSFactoryBuffer,0xd5f569d0,0x593b,0x101a,0xb5,0x69,0x8,0,0x2b,0x2d,0xbf,0x7a);
DEFINE_OLEGUID(IID_ILockBytes,0xa,0,0);
DEFINE_OLEGUID(IID_IExternalConnection,0x19,0,0);
DEFINE_OLEGUID(IID_IRunnableObject,0x126,0,0);
DEFINE_GUID(IID_IROTData,0xf29f6bc0,0x5021,0x11ce,0xaa,0x15,0,0,0x69,0x1,0x29,0x3f);
DEFINE_OLEGUID(IID_IPropertySetStorage,0x13a,0,0);
DEFINE_OLEGUID(IID_IPropertyStorage,0x138,0,0);
DEFINE_OLEGUID(IID_IClassActivator,0x140,0,0);
DEFINE_GUID(IID_IFillLockBytes,0x99caf010,0x415e,0x11cf,0x88,0x14,0,0xaa,0,0xb5,0x69,0xf5);
DEFINE_GUID(IID_IProgressNotify,0xa9d758a0,0x4617,0x11cf,0x95,0xfc,0,0xaa,0,0x68,0xd,0xb4);
DEFINE_OLEGUID(IID_IClientSecurity,0x13D,0,0);
DEFINE_OLEGUID(IID_IMallocSpy,0x1d,0,0);
DEFINE_OLEGUID(IID_IServerSecurity,0x13E,0,0);
DEFINE_OLEGUID(IID_IGlobalInterfaceTable,0x146,0,0);
DEFINE_GUID(FMTID_DocSummaryInformation,0xd5cdd502,0x2e9c,0x101b,0x93,0x97,0x8,0,0x2b,0x2c,0xf9,0xae);
DEFINE_GUID(FMTID_SummaryInformation,0xf29f85e0,0x4ff9,0x1068,0xab,0x91,0x8,0,0x2b,0x27,0xb3,0xd9);
DEFINE_GUID(FMTID_UserDefinedProperties,0xd5cdd505,0x2e9c,0x101b,0x93,0x97,0x8,0,0x2b,0x2c,0xf9,0xae);
