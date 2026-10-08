// from server: 100% by colin
// roc 2007-08 005a16e0  unit: RBX::VInstance::?$NonFactoryProduct  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a16e0
//
// 005a16e0  56                   push esi
// 005a16e1  8bf1                 mov esi, ecx
// 005a16e3  6a00                 push 0
// 005a16e5  56                   push esi
// 005a16e6  e805ffeeff           call 0x4915f0
// 005a16eb  83c408               add esp, 8
// 005a16ee  84c0                 test al, al
// 005a16f0  741d                 je 0x5a170f
// 005a16f2  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 005a16f8  50                   push eax
// 005a16f9  e8b23f0000           call 0x5a56b0
// 005a16fe  83c404               add esp, 4
// 005a1701  85c0                 test eax, eax
// 005a1703  740a                 je 0x5a170f
// 005a1705  8b16                 mov edx, dword ptr [esi]
// 005a1707  50                   push eax
// 005a1708  8b4244               mov eax, dword ptr [edx + 0x44]
// 005a170b  8bce                 mov ecx, esi
// 005a170d  ffd0                 call eax
// 005a170f  5e                   pop esi
// 005a1710  c20400               ret 4

struct S {
    void f(int);
};

extern "C" bool __cdecl sub_4915F0(void*, int);
extern "C" void* __cdecl sub_5A56B0(void*);

void S::f(int a)
{
    if (sub_4915F0(this, 0)) {
        void* p = sub_5A56B0(*(void**)((char*)this + 0xbc));
        if (p) {
            void** vt = *(void***)this;
            void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vt[0x44 / 4];
            fn(this, p);
        }
    }
}
