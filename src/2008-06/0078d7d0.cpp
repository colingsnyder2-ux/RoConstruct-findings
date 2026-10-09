// roc 2008-06 0078d7d0  unit: CXTPOffice2007Image  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078d7d0
//
// 0078d7d0  83ec08               sub esp, 8
// 0078d7d3  8d0424               lea eax, [esp]
// 0078d7d6  50                   push eax
// 0078d7d7  e804ffffff           call 0x78d6e0
// 0078d7dc  8b00                 mov eax, dword ptr [eax]
// 0078d7de  83c408               add esp, 8
// 0078d7e1  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000074@ns_ROCX000074@@YAHXZ)

namespace ns_ROCX000074 {
extern int* __stdcall fn_ROCX000074(void*);

int fn_ROCX000074()
{
    int buffer[2];
    return *fn_ROCX000074(buffer);
}
}
