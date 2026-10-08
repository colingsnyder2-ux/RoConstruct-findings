// from server: 100% by colin
// roc 2007-08 005a53f0  unit: RBX::Humanoid  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a53f0
//
// 005a53f0  8b8998000000         mov ecx, dword ptr [ecx + 0x98]
// 005a53f6  85c9                 test ecx, ecx
// 005a53f8  7407                 je 0x5a5401
// 005a53fa  8b01                 mov eax, dword ptr [ecx]
// 005a53fc  8b5014               mov edx, dword ptr [eax + 0x14]
// 005a53ff  ffe2                 jmp edx
// 005a5401  32c0                 xor al, al
// 005a5403  c3                   ret 

struct Humanoid {
    char pad[0x98];
    void* field98;
    bool getSomething();
};

bool Humanoid::getSomething()
{
    void* p = field98;
    if (p) {
        return (*(bool (__thiscall **)(void*))((*(char**)p) + 0x14))(p);
    }
    return false;
}
