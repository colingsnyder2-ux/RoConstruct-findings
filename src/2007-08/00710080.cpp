// from server: 100% by colin
// roc 2007-08 00710080  unit: CXTPOffice2007Image  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00710080
//
// 00710080  83ec08               sub esp, 8
// 00710083  8d0424               lea eax, [esp]
// 00710086  50                   push eax
// 00710087  e804ffffff           call 0x70ff90
// 0071008c  8b00                 mov eax, dword ptr [eax]
// 0071008e  83c408               add esp, 8
// 00710091  c3                   ret 

extern int* __stdcall func_0070ff90(void*);

int func_00710080()
{
    int buffer[2];
    return *func_0070ff90(buffer);
}
