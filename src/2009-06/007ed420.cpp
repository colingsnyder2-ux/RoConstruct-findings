// roc 2009-06 007ed420  unit: VCEdit::?$CXTMaskEditT  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ed420
//
// 007ed420  6aff                 push -1
// 007ed422  681b078800           push 0x88071b
// 007ed427  64a100000000         mov eax, dword ptr fs:[0]
// 007ed42d  50                   push eax
// 007ed42e  83ec08               sub esp, 8
// 007ed431  53                   push ebx
// 007ed432  56                   push esi
// 007ed433  57                   push edi
// 007ed434  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007ed439  33c4                 xor eax, esp
// 007ed43b  50                   push eax
// 007ed43c  8d442418             lea eax, [esp + 0x18]
// 007ed440  64a300000000         mov dword ptr fs:[0], eax
// 007ed446  8bf1                 mov esi, ecx
// 007ed448  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007ed44c  85ff                 test edi, edi
// 007ed44e  0f8c86000000         jl 0x7ed4da
// 007ed454  8d8e84000000         lea ecx, [esi + 0x84]
// 007ed45a  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed460  3bf8                 cmp edi, eax
// 007ed462  7d76                 jge 0x7ed4da
// 007ed464  6aff                 push -1
// 007ed466  57                   push edi
// 007ed467  8d44241c             lea eax, [esp + 0x1c]
// 007ed46b  50                   push eax
// 007ed46c  8bce                 mov ecx, esi
// 007ed46e  e82dfdffff           call 0x7ed1a0
// 007ed473  8bd8                 mov ebx, eax
// 007ed475  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007ed479  6a01                 push 1
// 007ed47b  51                   push ecx
// 007ed47c  8d4c2418             lea ecx, [esp + 0x18]
// 007ed480  c744242800000000     mov dword ptr [esp + 0x28], 0
// 007ed488  ff15dcf88900         call dword ptr [0x89f8dc]
// 007ed48e  53                   push ebx
// 007ed48f  50                   push eax
// 007ed490  8d542430             lea edx, [esp + 0x30]
// 007ed494  52                   push edx
// 007ed495  c644242c01           mov byte ptr [esp + 0x2c], 1
// 007ed49a  e8b16ec6ff           call 0x454350
// 007ed49f  83c40c               add esp, 0xc
// 007ed4a2  8d4c2410             lea ecx, [esp + 0x10]
// 007ed4a6  ff1510fd8900         call dword ptr [0x89fd10]
// 007ed4ac  8d4c2414             lea ecx, [esp + 0x14]
// 007ed4b0  c644242004           mov byte ptr [esp + 0x20], 4
// 007ed4b5  ff1510fd8900         call dword ptr [0x89fd10]
// 007ed4bb  6a00                 push 0
// 007ed4bd  57                   push edi
// 007ed4be  8d4c2430             lea ecx, [esp + 0x30]
// 007ed4c2  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007ed4c8  50                   push eax
// 007ed4c9  8bce                 mov ecx, esi
// 007ed4cb  e870fbffff           call 0x7ed040
// 007ed4d0  8d4c2428             lea ecx, [esp + 0x28]
// 007ed4d4  ff1510fd8900         call dword ptr [0x89fd10]
// 007ed4da  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ed4de  64890d00000000       mov dword ptr fs:[0], ecx
// 007ed4e5  59                   pop ecx
// 007ed4e6  5f                   pop edi
// 007ed4e7  5e                   pop esi
// 007ed4e8  5b                   pop ebx
// 007ed4e9  83c414               add esp, 0x14
// 007ed4ec  c20800               ret 8
// copied from an identical function in another client (function ?InsertCharAt@?$CXTMaskEditT@VCEdit@@@@QAEXHD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp