// from server: 100% by colin
// roc 2007-08 00680fd0  unit: CXTPDrawHelpers  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00680fd0
//
// 00680fd0  8b442404             mov eax, dword ptr [esp + 4]
// 00680fd4  85c0                 test eax, eax
// 00680fd6  7416                 je 0x680fee
// 00680fd8  8b4004               mov eax, dword ptr [eax + 4]
// 00680fdb  50                   push eax
// 00680fdc  e81fe8ffff           call 0x67f800
// 00680fe1  83c404               add esp, 4
// 00680fe4  85c0                 test eax, eax
// 00680fe6  7406                 je 0x680fee
// 00680fe8  b801000000           mov eax, 1
// 00680fed  c3                   ret 
// 00680fee  33c0                 xor eax, eax
// 00680ff0  c3                   ret 

extern int __cdecl func_0067f800(int);

int func_00680fd0(int* p)
{
    if (p)
    {
        if (func_0067f800(p[1]))
            return 1;
    }
    return 0;
}
