// from server: 100% by colin
// roc 2008-06 005d3b50  unit: RBX::Skin  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d3b50
//
// 005d3b50  56                   push esi
// 005d3b51  8bf1                 mov esi, ecx
// 005d3b53  6a00                 push 0
// 005d3b55  56                   push esi
// 005d3b56  e85523ecff           call 0x495eb0
// 005d3b5b  83c408               add esp, 8
// 005d3b5e  84c0                 test al, al
// 005d3b60  741d                 je 0x5d3b7f
// 005d3b62  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 005d3b68  50                   push eax
// 005d3b69  e8b25e0000           call 0x5d9a20
// 005d3b6e  83c404               add esp, 4
// 005d3b71  85c0                 test eax, eax
// 005d3b73  740a                 je 0x5d3b7f
// 005d3b75  8b16                 mov edx, dword ptr [esi]
// 005d3b77  50                   push eax
// 005d3b78  8b4240               mov eax, dword ptr [edx + 0x40]
// 005d3b7b  8bce                 mov ecx, esi
// 005d3b7d  ffd0                 call eax
// 005d3b7f  5e                   pop esi
// 005d3b80  c20400               ret 4

struct Skin {
    char pad[0x104];
    int field_104;
    void func(int);
};

extern "C" bool __cdecl sub_495eb0(void*, void*);
extern "C" int __cdecl sub_5d9a20(int);

void Skin::func(int a) {
    if (sub_495eb0(this, 0)) {
        int r = sub_5d9a20(field_104);
        if (r) {
            void** vt = *(void***)this;
            void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))vt[0x10];
            fn(this, r);
        }
    }
}
