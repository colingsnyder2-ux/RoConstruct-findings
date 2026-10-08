// from server: 100% by colin
// roc 2007-08 005a6210  unit: RBX::VHumanoid::?$FactoryProduct  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a6210
//
// 005a6210  e84bfbffff           call 0x5a5d60
// 005a6215  85c0                 test eax, eax
// 005a6217  7407                 je 0x5a6220
// 005a6219  8b80d8010000         mov eax, dword ptr [eax + 0x1d8]
// 005a621f  c3                   ret 
// 005a6220  33c0                 xor eax, eax
// 005a6222  c3                   ret 

struct T_func_005a6210 {
    int m();
};

extern "C" void* __cdecl sub_005a5d60();

int T_func_005a6210::m()
{
    char* p = (char*)sub_005a5d60();
    if (p)
        return *(int*)(p + 0x1d8);
    return 0;
}
