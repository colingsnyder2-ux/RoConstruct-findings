// roc 2009-12 008346c0  unit: CRobloxTreeCtrl  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008346c0
//
// 008346c0  83ec48               sub esp, 0x48
// 008346c3  a10052b600           mov eax, dword ptr [0xb65200]
// 008346c8  33c4                 xor eax, esp
// 008346ca  89442444             mov dword ptr [esp + 0x44], eax
// 008346ce  53                   push ebx
// 008346cf  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 008346d3  55                   push ebp
// 008346d4  56                   push esi
// 008346d5  57                   push edi
// 008346d6  6a3c                 push 0x3c
// 008346d8  8d442414             lea eax, [esp + 0x14]
// 008346dc  83cfff               or edi, 0xffffffff
// 008346df  6a00                 push 0
// 008346e1  50                   push eax
// 008346e2  8bf1                 mov esi, ecx
// 008346e4  897c2458             mov dword ptr [esp + 0x58], edi
// 008346e8  897c245c             mov dword ptr [esp + 0x5c], edi
// 008346ec  e8b303fcff           call 0x7f4aa4
// 008346f1  83c40c               add esp, 0xc
// 008346f4  8d4c2410             lea ecx, [esp + 0x10]
// 008346f8  51                   push ecx
// 008346f9  8d6e18               lea ebp, [esi + 0x18]
// 008346fc  53                   push ebx
// 008346fd  8bcd                 mov ecx, ebp
// 008346ff  e85cf5ffff           call 0x833c60
// 00834704  85c0                 test eax, eax
// 00834706  7504                 jne 0x83470c
// 00834708  897c244c             mov dword ptr [esp + 0x4c], edi
// 0083470c  8b742460             mov esi, dword ptr [esp + 0x60]
// 00834710  b90f000000           mov ecx, 0xf
// 00834715  8d7c2410             lea edi, [esp + 0x10]
// 00834719  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0083471b  53                   push ebx
// 0083471c  8bcd                 mov ecx, ebp
// 0083471e  e82dffffff           call 0x834650
// 00834723  b911000000           mov ecx, 0x11
// 00834728  8d742410             lea esi, [esp + 0x10]
// 0083472c  8bf8                 mov edi, eax
// 0083472e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00834730  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00834734  5f                   pop edi
// 00834735  5e                   pop esi
// 00834736  5d                   pop ebp
// 00834737  5b                   pop ebx
// 00834738  33cc                 xor ecx, esp
// 0083473a  e85b0cfcff           call 0x7f539a
// 0083473f  83c448               add esp, 0x48
// 00834742  c20800               ret 8
// copied from an identical function in another client (function ?SetItemFont@CXTTreeBase@@UAEXPAU_TREEITEM@@AAUtagLOGFONTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp