// roc 2011-06 006458d0  unit: RBX::Workspace  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006458d0
//
// 006458d0  6aff                 push -1
// 006458d2  68d9bc9d00           push 0x9dbcd9
// 006458d7  64a100000000         mov eax, dword ptr fs:[0]
// 006458dd  50                   push eax
// 006458de  64892500000000       mov dword ptr fs:[0], esp
// 006458e5  83ec1c               sub esp, 0x1c
// 006458e8  56                   push esi
// 006458e9  8b742430             mov esi, dword ptr [esp + 0x30]
// 006458ed  56                   push esi
// 006458ee  e86dffffff           call 0x645860
// 006458f3  56                   push esi
// 006458f4  8d44240c             lea eax, [esp + 0xc]
// 006458f8  68c483a900           push 0xa983c4
// 006458fd  50                   push eax
// 006458fe  ff15f004a400         call dword ptr [0xa404f0]
// 00645904  83c410               add esp, 0x10
// 00645907  50                   push eax
// 00645908  8bce                 mov ecx, esi
// 0064590a  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00645912  ff15a804a400         call dword ptr [0xa404a8]
// 00645918  8d4c2404             lea ecx, [esp + 4]
// 0064591c  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00645924  ff15d004a400         call dword ptr [0xa404d0]
// 0064592a  6a01                 push 1
// 0064592c  6a28                 push 0x28
// 0064592e  8bce                 mov ecx, esi
// 00645930  ff15e003a400         call dword ptr [0xa403e0]
// 00645936  6a01                 push 1
// 00645938  6a1b                 push 0x1b
// 0064593a  8bce                 mov ecx, esi
// 0064593c  ff15e003a400         call dword ptr [0xa403e0]
// 00645942  6a01                 push 1
// 00645944  6a16                 push 0x16
// 00645946  8bce                 mov ecx, esi
// 00645948  ff15e003a400         call dword ptr [0xa403e0]
// 0064594e  6a01                 push 1
// 00645950  6a11                 push 0x11
// 00645952  8bce                 mov ecx, esi
// 00645954  ff15e003a400         call dword ptr [0xa403e0]
// 0064595a  6a01                 push 1
// 0064595c  6a0c                 push 0xc
// 0064595e  8bce                 mov ecx, esi
// 00645960  ff15e003a400         call dword ptr [0xa403e0]
// 00645966  6a01                 push 1
// 00645968  6a03                 push 3
// 0064596a  8bce                 mov ecx, esi
// 0064596c  ff15e003a400         call dword ptr [0xa403e0]
// 00645972  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00645976  5e                   pop esi
// 00645977  64890d00000000       mov dword ptr fs:[0], ecx
// 0064597e  83c428               add esp, 0x28
// 00645981  c3                   ret 
// copied from an identical function in another client (function ?sub_5a8140@@YAXPAUString@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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