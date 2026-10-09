// from server: 39% by colin
// roc 2007-08 005657b0  unit: RBX::Verb  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005657b0
//
// 005657b0  64a100000000         mov eax, dword ptr fs:[0]
// 005657b6  6aff                 push -1
// 005657b8  68993d7500           push 0x753d99
// 005657bd  50                   push eax
// 005657be  64892500000000       mov dword ptr fs:[0], esp
// 005657c5  56                   push esi
// 005657c6  8bf1                 mov esi, ecx
// 005657c8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005657cc  8d442418             lea eax, [esp + 0x18]
// 005657d0  50                   push eax
// 005657d1  51                   push ecx
// 005657d2  8d4e04               lea ecx, [esi + 4]
// 005657d5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005657dd  c70600000000         mov dword ptr [esi], 0
// 005657e3  e898bcf2ff           call 0x491480
// 005657e8  8d4c2418             lea ecx, [esp + 0x18]
// 005657ec  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 005657f4  ff15ace67700         call dword ptr [0x77e6ac]
// 005657fa  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005657fe  8bc6                 mov eax, esi
// 00565800  64890d00000000       mov dword ptr fs:[0], ecx
// 00565807  5e                   pop esi
// 00565808  83c40c               add esp, 0xc
// 0056580b  c22000               ret 0x20

struct Verb {
    void* vtable;
    char pad[0x20];
    Verb(const char* name, int a, int b, int c, int d, int e, int f, int g);
};

extern "C" void __stdcall sub_491480(void*, const char*, void*);
extern "C" void __stdcall sub_77E6AC(void*);

Verb::Verb(const char* name, int a, int b, int c, int d, int e, int f, int g)
{
    void* local;
    this->vtable = 0;
    sub_491480((char*)this + 4, name, &local);
    sub_77E6AC(&local);
}
