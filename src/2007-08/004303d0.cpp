// from server: 78% by colin
// roc 2007-08 004303d0  unit: CMainFrame  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004303d0
//
// 004303d0  56                   push esi
// 004303d1  57                   push edi
// 004303d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004303d6  837f0400             cmp dword ptr [edi + 4], 0
// 004303da  8bf1                 mov esi, ecx
// 004303dc  7448                 je 0x430426
// 004303de  8b4714               mov eax, dword ptr [edi + 0x14]
// 004303e1  68ccac7800           push 0x78accc
// 004303e6  50                   push eax
// 004303e7  ff1588e97700         call dword ptr [0x77e988]
// 004303ed  83c408               add esp, 8
// 004303f0  85c0                 test eax, eax
// 004303f2  7532                 jne 0x430426
// 004303f4  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 004303fa  50                   push eax
// 004303fb  e8906f2400           call 0x677390
// 00430400  83c404               add esp, 4
// 00430403  6890010000           push 0x190
// 00430408  8bf0                 mov esi, eax
// 0043040a  8b4714               mov eax, dword ptr [edi + 0x14]
// 0043040d  68e9030000           push 0x3e9
// 00430412  50                   push eax
// 00430413  8bce                 mov ecx, esi
// 00430415  e8c66f2400           call 0x6773e0
// 0043041a  8937                 mov dword ptr [edi], esi
// 0043041c  5f                   pop edi
// 0043041d  b801000000           mov eax, 1
// 00430422  5e                   pop esi
// 00430423  c20400               ret 4
// 00430426  5f                   pop edi
// 00430427  33c0                 xor eax, eax
// 00430429  5e                   pop esi
// 0043042a  c20400               ret 4

struct CMainFrame {
    int OnDropFiles(int a1);
};

extern "C" int __cdecl _mbscmp(const char*, const char*);
extern "C" int __cdecl sub_677390(int);
extern "C" int __cdecl sub_6773E0(int, int, int);

int CMainFrame::OnDropFiles(int a1)
{
    if (*(int*)(a1 + 4) != 0) {
        if (_mbscmp(*(const char**)(a1 + 0x14), (const char*)0x78accc) == 0) {
            int v = sub_677390(*(int*)((char*)this + 0xd8));
            sub_6773E0(v, 0x3e9, 0x190);
            *(int*)a1 = v;
            return 1;
        }
    }
    return 0;
}
