// roc 2010-06 00894bd0  unit: CXTPOffice2007Image  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00894bd0
//
// 00894bd0  83ec08               sub esp, 8
// 00894bd3  8d0424               lea eax, [esp]
// 00894bd6  50                   push eax
// 00894bd7  e804ffffff           call 0x894ae0
// 00894bdc  8b00                 mov eax, dword ptr [eax]
// 00894bde  83c408               add esp, 8
// 00894be1  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000056@ns_ROCX000056@@YAHXZ)

namespace ns_ROCX000056 {
extern int* __stdcall fn_ROCX000056(void*);

int fn_ROCX000056()
{
    int buffer[2];
    return *fn_ROCX000056(buffer);
}
}
