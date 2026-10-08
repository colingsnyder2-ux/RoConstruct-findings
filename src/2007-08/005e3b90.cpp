// from server: 39% by colin
// roc 2007-08 005e3b90  unit: RBX::Unlocked  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e3b90
//
// 005e3b90  51                   push ecx
// 005e3b91  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005e3b94  85c0                 test eax, eax
// 005e3b96  c7042400000000       mov dword ptr [esp], 0
// 005e3b9d  7407                 je 0x5e3ba6
// 005e3b9f  0528020000           add eax, 0x228
// 005e3ba4  eb02                 jmp 0x5e3ba8
// 005e3ba6  33c0                 xor eax, eax
// 005e3ba8  56                   push esi
// 005e3ba9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e3bad  50                   push eax
// 005e3bae  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e3bb2  50                   push eax
// 005e3bb3  56                   push esi
// 005e3bb4  e807ffffff           call 0x5e3ac0
// 005e3bb9  83c40c               add esp, 0xc
// 005e3bbc  8bc6                 mov eax, esi
// 005e3bbe  5e                   pop esi
// 005e3bbf  59                   pop ecx
// 005e3bc0  c20800               ret 8

struct HitTestFilter {
    int filterResult(const void* testMe) const;
};

struct Unlocked : HitTestFilter {
    int filterResult(const void* testMe) const;
};

int Unlocked::filterResult(const void* testMe) const {
    int result = 0;
    const char* base = 0;
    if (*(const char**)((const char*)this + 0x18)) {
        base = *(const char**)((const char*)this + 0x18) + 0x228;
    }
    return ((int (__thiscall*)(const Unlocked*, int*, const void*, const char*))0x5e3ac0)(this, &result, testMe, base);
}
