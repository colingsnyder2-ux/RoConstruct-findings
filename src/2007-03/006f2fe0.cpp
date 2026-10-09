// roc 2007-03 006f2fe0  unit: seg_006f0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f2fe0
//
// 006f2fe0  83ec08               sub esp, 8
// 006f2fe3  8d0424               lea eax, [esp]
// 006f2fe6  50                   push eax
// 006f2fe7  e824ffffff           call 0x6f2f10
// 006f2fec  8b00                 mov eax, dword ptr [eax]
// 006f2fee  83c408               add esp, 8
// 006f2ff1  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX0000dd@ns_ROCX0000dd@@YAHXZ)

namespace ns_ROCX0000dd {
extern int* __stdcall fn_ROCX0000dd(void*);

int fn_ROCX0000dd()
{
    int buffer[2];
    return *fn_ROCX0000dd(buffer);
}
}
