// from server: 70% by colin
// roc 2007-08 0057b4c0  unit: RBX::RootInstance  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b4c0
//
// 0057b4c0  56                   push esi
// 0057b4c1  8bf1                 mov esi, ecx
// 0057b4c3  8b8628020000         mov eax, dword ptr [esi + 0x228]
// 0057b4c9  8b5004               mov edx, dword ptr [eax + 4]
// 0057b4cc  8d8e28020000         lea ecx, [esi + 0x228]
// 0057b4d2  c6863803000000       mov byte ptr [esi + 0x338], 0
// 0057b4d9  ffd2                 call edx
// 0057b4db  8bc8                 mov ecx, eax
// 0057b4dd  e8eee40100           call 0x5999d0
// 0057b4e2  8b867c020000         mov eax, dword ptr [esi + 0x27c]
// 0057b4e8  c7405400000000       mov dword ptr [eax + 0x54], 0
// 0057b4ef  5e                   pop esi
// 0057b4f0  c3                   ret 

struct Sub {
    void f();
};

struct RootInstance {
    char pad[0x228];
    Sub sub;
    char pad2[0x27c - 0x228 - 4];
    int* ptr;
    char pad3[0x338 - 0x27c - 4];
    char flag;
    void func();
};

void RootInstance::func() {
    flag = 0;
    Sub* s = &sub;
    s->f();
    int* p = ptr;
    p[0x54 / 4] = 0;
}
