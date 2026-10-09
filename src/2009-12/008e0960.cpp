// roc 2009-12 008e0960  unit: CXTPOffice2007Image  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e0960
//
// 008e0960  83ec08               sub esp, 8
// 008e0963  8d0424               lea eax, [esp]
// 008e0966  50                   push eax
// 008e0967  e804ffffff           call 0x8e0870
// 008e096c  8b00                 mov eax, dword ptr [eax]
// 008e096e  83c408               add esp, 8
// 008e0971  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX0000d7@ns_ROCX0000d7@@YAHXZ)

namespace ns_ROCX0000d7 {
extern int* __stdcall fn_ROCX0000d7(void*);

int fn_ROCX0000d7()
{
    int buffer[2];
    return *fn_ROCX0000d7(buffer);
}
}
