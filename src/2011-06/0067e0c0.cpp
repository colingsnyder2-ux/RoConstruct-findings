// from server: 100% by atomic.potato
// roc 2011-06 0067e0c0  unit: RBX::KernelJoint  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067e0c0
//
// 0067e0c0  8b442404             mov eax, dword ptr [esp + 4]
// 0067e0c4  85c0                 test eax, eax
// 0067e0c6  741e                 je 0x67e0e6
// 0067e0c8  8b4044               mov eax, dword ptr [eax + 0x44]
// 0067e0cb  6a00                 push 0
// 0067e0cd  6834a9c100           push 0xc1a934
// 0067e0d2  68f871c000           push 0xc071f8
// 0067e0d7  6a00                 push 0
// 0067e0d9  50                   push eax
// 0067e0da  e80bd21800           call 0x80b2ea
// 0067e0df  83c414               add esp, 0x14
// 0067e0e2  85c0                 test eax, eax
// 0067e0e4  7502                 jne 0x67e0e8
// 0067e0e6  33c0                 xor eax, eax
// 0067e0e8  c3                   ret 

struct Instance
{
    char pad[0x44];
    int field44;
};

extern "C" int __cdecl G1_func_0080b2ea(int, int, int, int, int);

int func_0067e0c0(Instance* value)
{
    if (value != 0)
    {
        int r = G1_func_0080b2ea(value->field44, 0, 0xc071f8, 0xc1a934, 0);
        if (r != 0)
            return r;
    }
    return 0;
}
