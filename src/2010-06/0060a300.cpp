// roc 2010-06 0060a300  unit: std::strstream  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060a300
//
// 0060a300  6aff                 push -1
// 0060a302  68095b9800           push 0x985b09
// 0060a307  64a100000000         mov eax, dword ptr fs:[0]
// 0060a30d  50                   push eax
// 0060a30e  64892500000000       mov dword ptr fs:[0], esp
// 0060a315  83ec1c               sub esp, 0x1c
// 0060a318  56                   push esi
// 0060a319  8b742430             mov esi, dword ptr [esp + 0x30]
// 0060a31d  56                   push esi
// 0060a31e  e86dffffff           call 0x60a290
// 0060a323  56                   push esi
// 0060a324  8d44240c             lea eax, [esp + 0xc]
// 0060a328  682c14a300           push 0xa3142c
// 0060a32d  50                   push eax
// 0060a32e  ff1518a59e00         call dword ptr [0x9ea518]
// 0060a334  83c410               add esp, 0x10
// 0060a337  50                   push eax
// 0060a338  8bce                 mov ecx, esi
// 0060a33a  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0060a342  ff1568a49e00         call dword ptr [0x9ea468]
// 0060a348  8d4c2404             lea ecx, [esp + 4]
// 0060a34c  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0060a354  ff1500a49e00         call dword ptr [0x9ea400]
// 0060a35a  6a01                 push 1
// 0060a35c  6a28                 push 0x28
// 0060a35e  8bce                 mov ecx, esi
// 0060a360  ff1578a49e00         call dword ptr [0x9ea478]
// 0060a366  6a01                 push 1
// 0060a368  6a1b                 push 0x1b
// 0060a36a  8bce                 mov ecx, esi
// 0060a36c  ff1578a49e00         call dword ptr [0x9ea478]
// 0060a372  6a01                 push 1
// 0060a374  6a16                 push 0x16
// 0060a376  8bce                 mov ecx, esi
// 0060a378  ff1578a49e00         call dword ptr [0x9ea478]
// 0060a37e  6a01                 push 1
// 0060a380  6a11                 push 0x11
// 0060a382  8bce                 mov ecx, esi
// 0060a384  ff1578a49e00         call dword ptr [0x9ea478]
// 0060a38a  6a01                 push 1
// 0060a38c  6a0c                 push 0xc
// 0060a38e  8bce                 mov ecx, esi
// 0060a390  ff1578a49e00         call dword ptr [0x9ea478]
// 0060a396  6a01                 push 1
// 0060a398  6a03                 push 3
// 0060a39a  8bce                 mov ecx, esi
// 0060a39c  ff1578a49e00         call dword ptr [0x9ea478]
// 0060a3a2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060a3a6  5e                   pop esi
// 0060a3a7  64890d00000000       mov dword ptr fs:[0], ecx
// 0060a3ae  83c428               add esp, 0x28
// 0060a3b1  c3                   ret 
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