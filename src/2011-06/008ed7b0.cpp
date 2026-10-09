// roc 2011-06 008ed7b0  unit: CXTPOffice2007Image  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ed7b0
//
// 008ed7b0  83ec08               sub esp, 8
// 008ed7b3  8d0424               lea eax, [esp]
// 008ed7b6  50                   push eax
// 008ed7b7  e804ffffff           call 0x8ed6c0
// 008ed7bc  8b00                 mov eax, dword ptr [eax]
// 008ed7be  83c408               add esp, 8
// 008ed7c1  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000028@ns_ROCX000028@@YAHXZ)

namespace ns_ROCX000028 {
extern int* __stdcall fn_ROCX000028(void*);

int fn_ROCX000028()
{
    int buffer[2];
    return *fn_ROCX000028(buffer);
}
}
