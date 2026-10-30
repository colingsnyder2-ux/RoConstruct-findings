// roc 2009-12 007f5bf0  unit: CXTPControlAction  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5bf0
//
// 007f5bf0  56                   push esi
// 007f5bf1  8b742408             mov esi, dword ptr [esp + 8]
// 007f5bf5  57                   push edi
// 007f5bf6  8bf9                 mov edi, ecx
// 007f5bf8  85f6                 test esi, esi
// 007f5bfa  7461                 je 0x7f5c5d
// 007f5bfc  803e00               cmp byte ptr [esi], 0
// 007f5bff  745c                 je 0x7f5c5d
// 007f5c01  6a0a                 push 0xa
// 007f5c03  56                   push esi
// 007f5c04  ff1504ba9800         call dword ptr [0x98ba04]
// 007f5c0a  83c408               add esp, 8
// 007f5c0d  85c0                 test eax, eax
// 007f5c0f  741e                 je 0x7f5c2f
// 007f5c11  6a0a                 push 0xa
// 007f5c13  6a01                 push 1
// 007f5c15  56                   push esi
// 007f5c16  8d4744               lea eax, [edi + 0x44]
// 007f5c19  50                   push eax
// 007f5c1a  e8ff071300           call 0x92641e
// 007f5c1f  6a0a                 push 0xa
// 007f5c21  6a00                 push 0
// 007f5c23  56                   push esi
// 007f5c24  8d4f48               lea ecx, [edi + 0x48]
// 007f5c27  51                   push ecx
// 007f5c28  e8f1071300           call 0x92641e
// 007f5c2d  eb14                 jmp 0x7f5c43
// 007f5c2f  56                   push esi
// 007f5c30  8d4f44               lea ecx, [edi + 0x44]
// 007f5c33  ff155cde9800         call dword ptr [0x98de5c]
// 007f5c39  50                   push eax
// 007f5c3a  8d4f48               lea ecx, [edi + 0x48]
// 007f5c3d  ff1538d59800         call dword ptr [0x98d538]
// 007f5c43  83c758               add edi, 0x58
// 007f5c46  8bcf                 mov ecx, edi
// 007f5c48  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007f5c4e  84c0                 test al, al
// 007f5c50  740b                 je 0x7f5c5d
// 007f5c52  6a0a                 push 0xa
// 007f5c54  6a03                 push 3
// 007f5c56  56                   push esi
// 007f5c57  57                   push edi
// 007f5c58  e8c1071300           call 0x92641e
// 007f5c5d  5f                   pop edi
// 007f5c5e  5e                   pop esi
// 007f5c5f  c20400               ret 4
// copied from an identical function in another client (function ?SetPrompt@CXTPControlAction@@QAEXPBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp