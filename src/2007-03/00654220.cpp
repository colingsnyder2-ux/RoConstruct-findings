// roc 2007-03 00654220  unit: seg_00650000  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00654220
//
// 00654220  83ec48               sub esp, 0x48
// 00654223  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00654228  33c4                 xor eax, esp
// 0065422a  89442444             mov dword ptr [esp + 0x44], eax
// 0065422e  53                   push ebx
// 0065422f  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00654233  55                   push ebp
// 00654234  56                   push esi
// 00654235  57                   push edi
// 00654236  6a3c                 push 0x3c
// 00654238  8d442414             lea eax, [esp + 0x14]
// 0065423c  83cfff               or edi, 0xffffffff
// 0065423f  6a00                 push 0
// 00654241  50                   push eax
// 00654242  8bf1                 mov esi, ecx
// 00654244  897c2458             mov dword ptr [esp + 0x58], edi
// 00654248  897c245c             mov dword ptr [esp + 0x5c], edi
// 0065424c  e8cbadfcff           call 0x61f01c
// 00654251  83c40c               add esp, 0xc
// 00654254  8d4c2410             lea ecx, [esp + 0x10]
// 00654258  51                   push ecx
// 00654259  8d6e18               lea ebp, [esi + 0x18]
// 0065425c  53                   push ebx
// 0065425d  8bcd                 mov ecx, ebp
// 0065425f  e84cf5ffff           call 0x6537b0
// 00654264  85c0                 test eax, eax
// 00654266  7504                 jne 0x65426c
// 00654268  897c244c             mov dword ptr [esp + 0x4c], edi
// 0065426c  8b742460             mov esi, dword ptr [esp + 0x60]
// 00654270  b90f000000           mov ecx, 0xf
// 00654275  8d7c2410             lea edi, [esp + 0x10]
// 00654279  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0065427b  53                   push ebx
// 0065427c  8bcd                 mov ecx, ebp
// 0065427e  e82dffffff           call 0x6541b0
// 00654283  b911000000           mov ecx, 0x11
// 00654288  8d742410             lea esi, [esp + 0x10]
// 0065428c  8bf8                 mov edi, eax
// 0065428e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00654290  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00654294  5f                   pop edi
// 00654295  5e                   pop esi
// 00654296  5d                   pop ebp
// 00654297  5b                   pop ebx
// 00654298  33cc                 xor ecx, esp
// 0065429a  e807acfcff           call 0x61eea6
// 0065429f  83c448               add esp, 0x48
// 006542a2  c20800               ret 8
// copied from an identical function in another client (function ?SetItemFont@CXTTreeBase@@UAEXPAU_TREEITEM@@AAUtagLOGFONTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp