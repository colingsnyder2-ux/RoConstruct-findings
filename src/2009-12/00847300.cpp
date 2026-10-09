// roc 2009-12 00847300  unit: CXTPControls  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00847300
//
// 00847300  8b442404             mov eax, dword ptr [esp + 4]
// 00847304  6a00                 push 0
// 00847306  6a00                 push 0
// 00847308  50                   push eax
// 00847309  6a00                 push 0
// 0084730b  e830e0ffff           call 0x845340
// 00847310  c20400               ret 4
// copied from an identical function in another client (function ?sub_0067c5e0@ns_ROCX00002c@ns_ROCX000035@@YGHH@Z)

namespace ns_ROCX00002c {
extern char G;

char* fn_ROCX00002c()
{
    return &G;
}
}
