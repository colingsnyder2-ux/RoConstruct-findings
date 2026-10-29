// roc 2009-12 0069ea10  unit: std::strstream  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069ea10
//
// 0069ea10  6aff                 push -1
// 0069ea12  68a9e59200           push 0x92e5a9
// 0069ea17  64a100000000         mov eax, dword ptr fs:[0]
// 0069ea1d  50                   push eax
// 0069ea1e  64892500000000       mov dword ptr fs:[0], esp
// 0069ea25  83ec1c               sub esp, 0x1c
// 0069ea28  56                   push esi
// 0069ea29  8b742430             mov esi, dword ptr [esp + 0x30]
// 0069ea2d  56                   push esi
// 0069ea2e  e86dffffff           call 0x69e9a0
// 0069ea33  56                   push esi
// 0069ea34  8d44240c             lea eax, [esp + 0xc]
// 0069ea38  68342a9d00           push 0x9d2a34
// 0069ea3d  50                   push eax
// 0069ea3e  ff15a4b59800         call dword ptr [0x98b5a4]
// 0069ea44  83c410               add esp, 0x10
// 0069ea47  50                   push eax
// 0069ea48  8bce                 mov ecx, esi
// 0069ea4a  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0069ea52  ff159cb69800         call dword ptr [0x98b69c]
// 0069ea58  8d4c2404             lea ecx, [esp + 4]
// 0069ea5c  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0069ea64  ff15e4b69800         call dword ptr [0x98b6e4]
// 0069ea6a  6a01                 push 1
// 0069ea6c  6a28                 push 0x28
// 0069ea6e  8bce                 mov ecx, esi
// 0069ea70  ff158cb69800         call dword ptr [0x98b68c]
// 0069ea76  6a01                 push 1
// 0069ea78  6a1b                 push 0x1b
// 0069ea7a  8bce                 mov ecx, esi
// 0069ea7c  ff158cb69800         call dword ptr [0x98b68c]
// 0069ea82  6a01                 push 1
// 0069ea84  6a16                 push 0x16
// 0069ea86  8bce                 mov ecx, esi
// 0069ea88  ff158cb69800         call dword ptr [0x98b68c]
// 0069ea8e  6a01                 push 1
// 0069ea90  6a11                 push 0x11
// 0069ea92  8bce                 mov ecx, esi
// 0069ea94  ff158cb69800         call dword ptr [0x98b68c]
// 0069ea9a  6a01                 push 1
// 0069ea9c  6a0c                 push 0xc
// 0069ea9e  8bce                 mov ecx, esi
// 0069eaa0  ff158cb69800         call dword ptr [0x98b68c]
// 0069eaa6  6a01                 push 1
// 0069eaa8  6a03                 push 3
// 0069eaaa  8bce                 mov ecx, esi
// 0069eaac  ff158cb69800         call dword ptr [0x98b68c]
// 0069eab2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0069eab6  5e                   pop esi
// 0069eab7  64890d00000000       mov dword ptr fs:[0], ecx
// 0069eabe  83c428               add esp, 0x28
// 0069eac1  c3                   ret 
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