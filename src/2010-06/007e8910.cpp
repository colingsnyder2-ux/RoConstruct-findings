// roc 2010-06 007e8910  unit: CRobloxTreeCtrl  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e8910
//
// 007e8910  83ec48               sub esp, 0x48
// 007e8913  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007e8918  33c4                 xor eax, esp
// 007e891a  89442444             mov dword ptr [esp + 0x44], eax
// 007e891e  53                   push ebx
// 007e891f  56                   push esi
// 007e8920  8b742454             mov esi, dword ptr [esp + 0x54]
// 007e8924  57                   push edi
// 007e8925  6a3c                 push 0x3c
// 007e8927  8d442410             lea eax, [esp + 0x10]
// 007e892b  6a00                 push 0
// 007e892d  50                   push eax
// 007e892e  8bd9                 mov ebx, ecx
// 007e8930  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 007e8938  e8a702fcff           call 0x7a8be4
// 007e893d  83c40c               add esp, 0xc
// 007e8940  8d4c240c             lea ecx, [esp + 0xc]
// 007e8944  51                   push ecx
// 007e8945  8d7b18               lea edi, [ebx + 0x18]
// 007e8948  56                   push esi
// 007e8949  8bcf                 mov ecx, edi
// 007e894b  e8d0f4ffff           call 0x7e7e20
// 007e8950  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 007e8954  56                   push esi
// 007e8955  8bcf                 mov ecx, edi
// 007e8957  8954244c             mov dword ptr [esp + 0x4c], edx
// 007e895b  e8b0feffff           call 0x7e8810
// 007e8960  8bf8                 mov edi, eax
// 007e8962  b911000000           mov ecx, 0x11
// 007e8967  8d74240c             lea esi, [esp + 0xc]
// 007e896b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007e896d  8b4334               mov eax, dword ptr [ebx + 0x34]
// 007e8970  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007e8973  6a01                 push 1
// 007e8975  6a00                 push 0
// 007e8977  51                   push ecx
// 007e8978  ff1578ba9e00         call dword ptr [0x9eba78]
// 007e897e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007e8982  5f                   pop edi
// 007e8983  5e                   pop esi
// 007e8984  5b                   pop ebx
// 007e8985  33cc                 xor ecx, esp
// 007e8987  e8480bfcff           call 0x7a94d4
// 007e898c  83c448               add esp, 0x48
// 007e898f  c20800               ret 8
// copied from an identical function in another client (function ?SetItemColor@CXTTreeBase@@UAEXPAU_TREEITEM@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp