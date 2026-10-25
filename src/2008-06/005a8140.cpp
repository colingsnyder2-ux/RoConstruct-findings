// from server: 100% by king_originala
// roc 2008-06 005a8140  unit: RBX::Log  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8140
//
// 005a8140  6aff                 push -1
// 005a8142  6809e77c00           push 0x7ce709
// 005a8147  64a100000000         mov eax, dword ptr fs:[0]
// 005a814d  50                   push eax
// 005a814e  64892500000000       mov dword ptr fs:[0], esp
// 005a8155  83ec1c               sub esp, 0x1c
// 005a8158  56                   push esi
// 005a8159  8b742430             mov esi, dword ptr [esp + 0x30]
// 005a815d  56                   push esi
// 005a815e  e86dffffff           call 0x5a80d0
// 005a8163  56                   push esi
// 005a8164  8d44240c             lea eax, [esp + 0xc]
// 005a8168  6844438300           push 0x834344
// 005a816d  50                   push eax
// 005a816e  ff1568238000         call dword ptr [0x802368]
// 005a8174  83c410               add esp, 0x10
// 005a8177  50                   push eax
// 005a8178  8bce                 mov ecx, esi
// 005a817a  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005a8182  ff150c248000         call dword ptr [0x80240c]
// 005a8188  8d4c2404             lea ecx, [esp + 4]
// 005a818c  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005a8194  ff1568248000         call dword ptr [0x802468]
// 005a819a  6a01                 push 1
// 005a819c  6a28                 push 0x28
// 005a819e  8bce                 mov ecx, esi
// 005a81a0  ff15ec238000         call dword ptr [0x8023ec]
// 005a81a6  6a01                 push 1
// 005a81a8  6a1b                 push 0x1b
// 005a81aa  8bce                 mov ecx, esi
// 005a81ac  ff15ec238000         call dword ptr [0x8023ec]
// 005a81b2  6a01                 push 1
// 005a81b4  6a16                 push 0x16
// 005a81b6  8bce                 mov ecx, esi
// 005a81b8  ff15ec238000         call dword ptr [0x8023ec]
// 005a81be  6a01                 push 1
// 005a81c0  6a11                 push 0x11
// 005a81c2  8bce                 mov ecx, esi
// 005a81c4  ff15ec238000         call dword ptr [0x8023ec]
// 005a81ca  6a01                 push 1
// 005a81cc  6a0c                 push 0xc
// 005a81ce  8bce                 mov ecx, esi
// 005a81d0  ff15ec238000         call dword ptr [0x8023ec]
// 005a81d6  6a01                 push 1
// 005a81d8  6a03                 push 3
// 005a81da  8bce                 mov ecx, esi
// 005a81dc  ff15ec238000         call dword ptr [0x8023ec]
// 005a81e2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a81e6  5e                   pop esi
// 005a81e7  64890d00000000       mov dword ptr fs:[0], ecx
// 005a81ee  83c428               add esp, 0x28
// 005a81f1  c3                   ret 

struct String {
    char storage[28];
    ~String();
};

extern void __cdecl sub_5a80d0(String*);
extern const char prefix[];

extern String (__cdecl *addPrefix)(const char*, const String&);
extern String& (__thiscall *assignString)(String*, const String&);
extern String& (__thiscall *eraseString)(String*, unsigned int, unsigned int);
extern void (__thiscall *destroyString)(String*);

inline String::~String()
{
    destroyString(this);
}

void __cdecl sub_5a8140(String* value)
{
    sub_5a80d0(value);
    assignString(value, addPrefix(prefix, *value));
    eraseString(value, 40, 1);
    eraseString(value, 27, 1);
    eraseString(value, 22, 1);
    eraseString(value, 17, 1);
    eraseString(value, 12, 1);
    eraseString(value, 3, 1);
}
