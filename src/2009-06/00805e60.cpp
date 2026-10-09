// roc 2009-06 00805e60  unit: CXTPOffice2007Image  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00805e60
//
// 00805e60  83ec08               sub esp, 8
// 00805e63  8d0424               lea eax, [esp]
// 00805e66  50                   push eax
// 00805e67  e804ffffff           call 0x805d70
// 00805e6c  8b00                 mov eax, dword ptr [eax]
// 00805e6e  83c408               add esp, 8
// 00805e71  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00004c@ns_ROCX00004c@@YAHXZ)

namespace ns_ROCX00004c {
extern int* __stdcall fn_ROCX00004c(void*);

int fn_ROCX00004c()
{
    int buffer[2];
    return *fn_ROCX00004c(buffer);
}
}
