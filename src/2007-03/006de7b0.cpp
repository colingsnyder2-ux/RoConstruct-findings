// roc 2007-03 006de7b0  unit: seg_006d0000  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006de7b0
//
// 006de7b0  6aff                 push -1
// 006de7b2  687b907600           push 0x76907b
// 006de7b7  64a100000000         mov eax, dword ptr fs:[0]
// 006de7bd  50                   push eax
// 006de7be  83ec08               sub esp, 8
// 006de7c1  53                   push ebx
// 006de7c2  56                   push esi
// 006de7c3  57                   push edi
// 006de7c4  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 006de7c9  33c4                 xor eax, esp
// 006de7cb  50                   push eax
// 006de7cc  8d442418             lea eax, [esp + 0x18]
// 006de7d0  64a300000000         mov dword ptr fs:[0], eax
// 006de7d6  8bf1                 mov esi, ecx
// 006de7d8  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006de7dc  85ff                 test edi, edi
// 006de7de  0f8c86000000         jl 0x6de86a
// 006de7e4  8d8e84000000         lea ecx, [esi + 0x84]
// 006de7ea  ff1520db7700         call dword ptr [0x77db20]
// 006de7f0  3bf8                 cmp edi, eax
// 006de7f2  7d76                 jge 0x6de86a
// 006de7f4  6aff                 push -1
// 006de7f6  57                   push edi
// 006de7f7  8d44241c             lea eax, [esp + 0x1c]
// 006de7fb  50                   push eax
// 006de7fc  8bce                 mov ecx, esi
// 006de7fe  e82dfdffff           call 0x6de530
// 006de803  8bd8                 mov ebx, eax
// 006de805  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006de809  6a01                 push 1
// 006de80b  51                   push ecx
// 006de80c  8d4c2418             lea ecx, [esp + 0x18]
// 006de810  c744242800000000     mov dword ptr [esp + 0x28], 0
// 006de818  ff15a4df7700         call dword ptr [0x77dfa4]
// 006de81e  53                   push ebx
// 006de81f  50                   push eax
// 006de820  8d542430             lea edx, [esp + 0x30]
// 006de824  52                   push edx
// 006de825  c644242c01           mov byte ptr [esp + 0x2c], 1
// 006de82a  e87155d3ff           call 0x413da0
// 006de82f  83c40c               add esp, 0xc
// 006de832  8d4c2410             lea ecx, [esp + 0x10]
// 006de836  ff1578dd7700         call dword ptr [0x77dd78]
// 006de83c  8d4c2414             lea ecx, [esp + 0x14]
// 006de840  c644242004           mov byte ptr [esp + 0x20], 4
// 006de845  ff1578dd7700         call dword ptr [0x77dd78]
// 006de84b  6a00                 push 0
// 006de84d  57                   push edi
// 006de84e  8d4c2430             lea ecx, [esp + 0x30]
// 006de852  ff1554dd7700         call dword ptr [0x77dd54]
// 006de858  50                   push eax
// 006de859  8bce                 mov ecx, esi
// 006de85b  e870fbffff           call 0x6de3d0
// 006de860  8d4c2428             lea ecx, [esp + 0x28]
// 006de864  ff1578dd7700         call dword ptr [0x77dd78]
// 006de86a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006de86e  64890d00000000       mov dword ptr fs:[0], ecx
// 006de875  59                   pop ecx
// 006de876  5f                   pop edi
// 006de877  5e                   pop esi
// 006de878  5b                   pop ebx
// 006de879  83c414               add esp, 0x14
// 006de87c  c20800               ret 8
// copied from an identical function in another client (function ?InsertCharAt@?$CXTMaskEditT@VCEdit@@@@QAEXHD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp