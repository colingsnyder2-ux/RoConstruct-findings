// roc 2007-08 006f76e0  unit: VCEdit::?$CXTMaskEditT  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f76e0
//
// 006f76e0  6aff                 push -1
// 006f76e2  689b917600           push 0x76919b
// 006f76e7  64a100000000         mov eax, dword ptr fs:[0]
// 006f76ed  50                   push eax
// 006f76ee  83ec08               sub esp, 8
// 006f76f1  53                   push ebx
// 006f76f2  56                   push esi
// 006f76f3  57                   push edi
// 006f76f4  a188518b00           mov eax, dword ptr [0x8b5188]
// 006f76f9  33c4                 xor eax, esp
// 006f76fb  50                   push eax
// 006f76fc  8d442418             lea eax, [esp + 0x18]
// 006f7700  64a300000000         mov dword ptr fs:[0], eax
// 006f7706  8bf1                 mov esi, ecx
// 006f7708  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006f770c  85ff                 test edi, edi
// 006f770e  0f8c86000000         jl 0x6f779a
// 006f7714  8d8e84000000         lea ecx, [esi + 0x84]
// 006f771a  ff15c8dc7700         call dword ptr [0x77dcc8]
// 006f7720  3bf8                 cmp edi, eax
// 006f7722  7d76                 jge 0x6f779a
// 006f7724  6aff                 push -1
// 006f7726  57                   push edi
// 006f7727  8d44241c             lea eax, [esp + 0x1c]
// 006f772b  50                   push eax
// 006f772c  8bce                 mov ecx, esi
// 006f772e  e82dfdffff           call 0x6f7460
// 006f7733  8bd8                 mov ebx, eax
// 006f7735  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006f7739  6a01                 push 1
// 006f773b  51                   push ecx
// 006f773c  8d4c2418             lea ecx, [esp + 0x18]
// 006f7740  c744242800000000     mov dword ptr [esp + 0x28], 0
// 006f7748  ff154ce27700         call dword ptr [0x77e24c]
// 006f774e  53                   push ebx
// 006f774f  50                   push eax
// 006f7750  8d542430             lea edx, [esp + 0x30]
// 006f7754  52                   push edx
// 006f7755  c644242c01           mov byte ptr [esp + 0x2c], 1
// 006f775a  e821b7d1ff           call 0x412e80
// 006f775f  83c40c               add esp, 0xc
// 006f7762  8d4c2410             lea ecx, [esp + 0x10]
// 006f7766  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006f776c  8d4c2414             lea ecx, [esp + 0x14]
// 006f7770  c644242004           mov byte ptr [esp + 0x20], 4
// 006f7775  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006f777b  6a00                 push 0
// 006f777d  57                   push edi
// 006f777e  8d4c2430             lea ecx, [esp + 0x30]
// 006f7782  ff1598dd7700         call dword ptr [0x77dd98]
// 006f7788  50                   push eax
// 006f7789  8bce                 mov ecx, esi
// 006f778b  e870fbffff           call 0x6f7300
// 006f7790  8d4c2428             lea ecx, [esp + 0x28]
// 006f7794  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006f779a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006f779e  64890d00000000       mov dword ptr fs:[0], ecx
// 006f77a5  59                   pop ecx
// 006f77a6  5f                   pop edi
// 006f77a7  5e                   pop esi
// 006f77a8  5b                   pop ebx
// 006f77a9  83c414               add esp, 0x14
// 006f77ac  c20800               ret 8
// copied from an identical function in another client (function ?InsertCharAt@?$CXTMaskEditT@VCEdit@@@@QAEXHD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp