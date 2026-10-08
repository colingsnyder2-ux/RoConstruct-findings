// from server: 100% by colin
// roc 2007-08 006439b0  unit: CXTPCommandBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006439b0
//
// 006439b0  e8cbffffff           call 0x643980
// 006439b5  85c0                 test eax, eax
// 006439b7  7404                 je 0x6439bd
// 006439b9  8b405c               mov eax, dword ptr [eax + 0x5c]
// 006439bc  c3                   ret 
// 006439bd  33c0                 xor eax, eax
// 006439bf  c3                   ret 

extern "C" void* sub_00643980();

int sub_006439b0()
{
    char* p = (char*)sub_00643980();
    if (p)
        return *(int*)(p + 0x5c);
    return 0;
}
