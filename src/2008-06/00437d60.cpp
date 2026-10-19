// from server: 39% by colin
// from server: 35% by colin
// roc 2008-06 00437d60  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 268 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437d60
//
// 00437d60  6aff                 push -1
// 00437d62  6809e77c00           push 0x7ce709
// 00437d67  64a100000000         mov eax, dword ptr fs:[0]
// 00437d6d  50                   push eax
// 00437d6e  64892500000000       mov dword ptr fs:[0], esp
// 00437d75  83ec1c               sub esp, 0x1c
// 00437d78  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00437d7c  56                   push esi
// 00437d7d  50                   push eax
// 00437d7e  8d4c2408             lea ecx, [esp + 8]
// 00437d82  ff1558248000         call dword ptr [0x802458]
// 00437d88  8d4c2404             lea ecx, [esp + 4]
// 00437d8c  51                   push ecx
// 00437d8d  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00437d95  e816700d00           call 0x50edb0
// 00437d9a  83c404               add esp, 4
// 00437d9d  8d4c2404             lea ecx, [esp + 4]
// 00437da1  8bf0                 mov esi, eax
// 00437da3  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00437dab  ff1568248000         call dword ptr [0x802468]
// 00437db1  83fe05               cmp esi, 5
// 00437db4  0f8783000000         ja 0x437e3d
// 00437dba  ff24b5547e4300       jmp dword ptr [esi*4 + 0x437e54]
// 00437dc1  6aff                 push -1
// 00437dc3  687c378100           push 0x81377c
// 00437dc8  e8c3c11100           call 0x553f90
// 00437dcd  83c408               add esp, 8
// 00437dd0  5e                   pop esi
// 00437dd1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00437dd5  64890d00000000       mov dword ptr fs:[0], ecx
// 00437ddc  83c428               add esp, 0x28
// 00437ddf  c3                   ret 
// 00437de0  6aff                 push -1
// 00437de2  6870378100           push 0x813770
// 00437de7  e8a4c11100           call 0x553f90
// 00437dec  83c408               add esp, 8
// 00437def  5e                   pop esi
// 00437df0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00437df4  64890d00000000       mov dword ptr fs:[0], ecx
// 00437dfb  83c428               add esp, 0x28
// 00437dfe  c3                   ret 
// 00437dff  6aff                 push -1
// 00437e01  6854378100           push 0x813754
// 00437e06  e885c11100           call 0x553f90
// 00437e0b  83c408               add esp, 8
// 00437e0e  5e                   pop esi
// 00437e0f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00437e13  64890d00000000       mov dword ptr fs:[0], ecx
// 00437e1a  83c428               add esp, 0x28
// 00437e1d  c3                   ret 
// 00437e1e  6aff                 push -1
// 00437e20  6848378100           push 0x813748
// 00437e25  e866c11100           call 0x553f90
// 00437e2a  83c408               add esp, 8
// 00437e2d  5e                   pop esi
// 00437e2e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00437e32  64890d00000000       mov dword ptr fs:[0], ecx
// 00437e39  83c428               add esp, 0x28
// 00437e3c  c3                   ret 
// 00437e3d  e82ec41100           call 0x554270
// 00437e42  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00437e46  5e                   pop esi
// 00437e47  64890d00000000       mov dword ptr fs:[0], ecx
// 00437e4e  83c428               add esp, 0x28
// 00437e51  c3                   ret 
// 00437e52  8bff                 mov edi, edi
// 00437e54  c17d4300             sar dword ptr [ebp + 0x43], 0
// 00437e58  e07d                 loopne 0x437ed7
// 00437e5a  43                   inc ebx
// 00437e5b  003d7e43003d         add byte ptr [0x3d00437e], bh
// 00437e61  7e43                 jle 0x437ea6
// 00437e63  00ff                 add bh, bh
// 00437e65  7d43                 jge 0x437eaa
// 00437e67  001e                 add byte ptr [esi], bl
// 00437e69  7e43                 jle 0x437eae

struct String {
    char data[28];
    String(const char*);
    __declspec(dllimport) ~String() throw();
};

extern "C" {
    void __stdcall sub_802458(void*, const char*);
    void __stdcall sub_802468(void*);
    int __cdecl sub_50edb0(void*);
    void __cdecl sub_553f90(const char*, int);
    void __cdecl sub_554270();
}

struct Item {
    void construct(const char* name);
};

void Item::construct(const char* name) {
    String s(name);
    int idx = sub_50edb0(&s);
    switch (idx) {
    case 0:
        sub_553f90("image/jpeg", -1);
        break;
    case 1:
        sub_553f90("image/bmp", -1);
        break;
    case 2:
        sub_553f90("image/vnd.microsoft.icon", -1);
        break;
    case 3:
        sub_553f90("image/png", -1);
        break;
    case 4:
        sub_553f90("image/png", -1);
        break;
    case 5:
        sub_553f90("image/png", -1);
        break;
    default:
        sub_554270();
        break;
    }
}
