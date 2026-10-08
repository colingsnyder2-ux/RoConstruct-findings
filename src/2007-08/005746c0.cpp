// from server: 100% by colin
// roc 2007-08 005746c0  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005746c0
//
// 005746c0  8b442404             mov eax, dword ptr [esp + 4]
// 005746c4  85c0                 test eax, eax
// 005746c6  8bd1                 mov edx, ecx
// 005746c8  7405                 je 0x5746cf
// 005746ca  83c0fc               add eax, -4
// 005746cd  eb02                 jmp 0x5746d1
// 005746cf  33c0                 xor eax, eax
// 005746d1  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 005746d7  56                   push esi
// 005746d8  8b7210               mov esi, dword ptr [edx + 0x10]
// 005746db  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005746de  034a0c               add ecx, dword ptr [edx + 0xc]
// 005746e1  8b5208               mov edx, dword ptr [edx + 8]
// 005746e4  8d8c01ec000000       lea ecx, [ecx + eax + 0xec]
// 005746eb  ffd2                 call edx
// 005746ed  5e                   pop esi
// 005746ee  c20400               ret 4

struct P8ModelInstance {
    char pad[8];
    int field8;
    int fieldC;
    int field10;
    void (__thiscall *field14)(int);

    void GetSetImpl(int arg);
};

void P8ModelInstance::GetSetImpl(int arg) {
    int *p;
    if (arg != 0) {
        p = (int *)(arg - 4);
    } else {
        p = 0;
    }
    int ecx = *(int *)((char *)p + 0xec);
    int esi = field10;
    int v = *(int *)(ecx + esi);
    v += fieldC;
    void (__thiscall *fn)(int) = *(void (__thiscall **)(int))((char *)this + 8);
    fn(v + (int)p + 0xec);
}
