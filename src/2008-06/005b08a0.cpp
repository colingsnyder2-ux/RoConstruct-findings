// from server: 100% by king_originala
// roc 2008-06 005b08a0  unit: RBX::Accoutrement  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b08a0
//
// 005b08a0  6aff                 push -1
// 005b08a2  6809e77c00           push 0x7ce709
// 005b08a7  64a100000000         mov eax, dword ptr fs:[0]
// 005b08ad  50                   push eax
// 005b08ae  64892500000000       mov dword ptr fs:[0], esp
// 005b08b5  83ec1c               sub esp, 0x1c
// 005b08b8  56                   push esi
// 005b08b9  8bf1                 mov esi, ecx
// 005b08bb  68284a8300           push 0x834a28
// 005b08c0  8d4c2408             lea ecx, [esp + 8]
// 005b08c4  ff1558248000         call dword ptr [0x802458]
// 005b08ca  6a00                 push 0
// 005b08cc  6850dd9200           push 0x92dd50
// 005b08d1  687c909200           push 0x92907c
// 005b08d6  6a00                 push 0
// 005b08d8  8d442414             lea eax, [esp + 0x14]
// 005b08dc  50                   push eax
// 005b08dd  8bce                 mov ecx, esi
// 005b08df  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005b08e7  e86470faff           call 0x557950
// 005b08ec  50                   push eax
// 005b08ed  e8d40e0f00           call 0x6a17c6
// 005b08f2  83c414               add esp, 0x14
// 005b08f5  8d4c2404             lea ecx, [esp + 4]
// 005b08f9  8bf0                 mov esi, eax
// 005b08fb  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005b0903  ff1568248000         call dword ptr [0x802468]
// 005b0909  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b090d  8bc6                 mov eax, esi
// 005b090f  5e                   pop esi
// 005b0910  64890d00000000       mov dword ptr fs:[0], ecx
// 005b0917  83c428               add esp, 0x28
// 005b091a  c3                   ret 

typedef void (__thiscall *StringCtor)(void*, const char*);
typedef void (__thiscall *StringDtor)(void*);

extern StringCtor stringCtor;
extern StringDtor stringDtor;
extern char instanceType;
extern char partType;

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

struct String {
    char storage[28];
    String(const char* text) { stringCtor(this, text); }
    ~String() { stringDtor(this); }
};

struct S {
    void* find(const String&);
    void* f();
};

void* S::f()
{
    String name("Handle");
    return __RTDynamicCast(find(name), 0, &instanceType, &partType, 0);
}
