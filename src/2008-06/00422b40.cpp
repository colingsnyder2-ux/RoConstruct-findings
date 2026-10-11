// from server: 60% by atomic.potato
// roc 2008-06 00422b40  unit: CRobloxTreeCtrl  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422b40
//
// 00422b40  6aff                 push -1
// 00422b42  6848e97b00           push 0x7be948
// 00422b47  64a100000000         mov eax, dword ptr fs:[0]
// 00422b4d  50                   push eax
// 00422b4e  64892500000000       mov dword ptr fs:[0], esp
// 00422b55  83ec08               sub esp, 8
// 00422b58  53                   push ebx
// 00422b59  56                   push esi
// 00422b5a  8bf1                 mov esi, ecx
// 00422b5c  8a9eb8000000         mov bl, byte ptr [esi + 0xb8]
// 00422b62  57                   push edi
// 00422b63  8dbeb8000000         lea edi, [esi + 0xb8]
// 00422b69  897c240c             mov dword ptr [esp + 0xc], edi
// 00422b6d  885c2410             mov byte ptr [esp + 0x10], bl
// 00422b71  c60701               mov byte ptr [edi], 1
// 00422b74  8b4620               mov eax, dword ptr [esi + 0x20]
// 00422b77  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00422b7f  85c0                 test eax, eax
// 00422b81  7430                 je 0x422bb3
// 00422b83  680000ffff           push 0xffff0000
// 00422b88  6a00                 push 0
// 00422b8a  6801110000           push 0x1101
// 00422b8f  50                   push eax
// 00422b90  ff15142e8000         call dword ptr [0x802e14]
// 00422b96  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00422b9c  85c9                 test ecx, ecx
// 00422b9e  7413                 je 0x422bb3
// 00422ba0  8b01                 mov eax, dword ptr [ecx]
// 00422ba2  8b5004               mov edx, dword ptr [eax + 4]
// 00422ba5  6a01                 push 1
// 00422ba7  ffd2                 call edx
// 00422ba9  c7869400000000000000 mov dword ptr [esi + 0x94], 0
// 00422bb3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00422bb7  881f                 mov byte ptr [edi], bl
// 00422bb9  5f                   pop edi
// 00422bba  5e                   pop esi
// 00422bbb  5b                   pop ebx
// 00422bbc  64890d00000000       mov dword ptr fs:[0], ecx
// 00422bc3  83c414               add esp, 0x14
// 00422bc6  c3                   ret 

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CRobloxTreeCtrl {
    char pad0[0x20];
    void* field20;
    char pad24[0x70];
    void* field94;
    char pad98[0x20];
    unsigned char fieldB8;
    int Method();
};

int CRobloxTreeCtrl::Method() {
    unsigned char saved = fieldB8;
    fieldB8 = 1;
    if (field20) {
        SendMessageA(field20, 0x1101, 0, 0xffff0000);
        if (field94) {
            void** vt = *(void***)field94;
            typedef void (__stdcall *Fn)(void*, int);
            ((Fn)vt[1])(field94, 1);
            field94 = 0;
        }
    }
    fieldB8 = saved;
    return 0;
}
