// from server: 100% by tester
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

extern int* __stdcall func_0070ff90(void*);

int func_00710080()
{
    int buffer[2];
    return *func_0070ff90(buffer);
}
