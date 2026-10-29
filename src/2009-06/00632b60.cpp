// roc 2009-06 00632b60  unit: std::strstream  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00632b60
//
// 00632b60  6aff                 push -1
// 00632b62  68d9b88500           push 0x85b8d9
// 00632b67  64a100000000         mov eax, dword ptr fs:[0]
// 00632b6d  50                   push eax
// 00632b6e  64892500000000       mov dword ptr fs:[0], esp
// 00632b75  83ec1c               sub esp, 0x1c
// 00632b78  56                   push esi
// 00632b79  8b742430             mov esi, dword ptr [esp + 0x30]
// 00632b7d  56                   push esi
// 00632b7e  e86dffffff           call 0x632af0
// 00632b83  56                   push esi
// 00632b84  8d44240c             lea eax, [esp + 0xc]
// 00632b88  68b4b28d00           push 0x8db2b4
// 00632b8d  50                   push eax
// 00632b8e  ff1510e58900         call dword ptr [0x89e510]
// 00632b94  83c410               add esp, 0x10
// 00632b97  50                   push eax
// 00632b98  8bce                 mov ecx, esi
// 00632b9a  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00632ba2  ff1564e48900         call dword ptr [0x89e464]
// 00632ba8  8d4c2404             lea ecx, [esp + 4]
// 00632bac  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00632bb4  ff15c4e48900         call dword ptr [0x89e4c4]
// 00632bba  6a01                 push 1
// 00632bbc  6a28                 push 0x28
// 00632bbe  8bce                 mov ecx, esi
// 00632bc0  ff1554e48900         call dword ptr [0x89e454]
// 00632bc6  6a01                 push 1
// 00632bc8  6a1b                 push 0x1b
// 00632bca  8bce                 mov ecx, esi
// 00632bcc  ff1554e48900         call dword ptr [0x89e454]
// 00632bd2  6a01                 push 1
// 00632bd4  6a16                 push 0x16
// 00632bd6  8bce                 mov ecx, esi
// 00632bd8  ff1554e48900         call dword ptr [0x89e454]
// 00632bde  6a01                 push 1
// 00632be0  6a11                 push 0x11
// 00632be2  8bce                 mov ecx, esi
// 00632be4  ff1554e48900         call dword ptr [0x89e454]
// 00632bea  6a01                 push 1
// 00632bec  6a0c                 push 0xc
// 00632bee  8bce                 mov ecx, esi
// 00632bf0  ff1554e48900         call dword ptr [0x89e454]
// 00632bf6  6a01                 push 1
// 00632bf8  6a03                 push 3
// 00632bfa  8bce                 mov ecx, esi
// 00632bfc  ff1554e48900         call dword ptr [0x89e454]
// 00632c02  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00632c06  5e                   pop esi
// 00632c07  64890d00000000       mov dword ptr fs:[0], ecx
// 00632c0e  83c428               add esp, 0x28
// 00632c11  c3                   ret 
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