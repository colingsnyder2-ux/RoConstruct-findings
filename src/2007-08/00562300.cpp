// roc 2007-08 00562300  unit: RBX::DuplicateSelectionVerb  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00562300
//
// 00562300  64a100000000         mov eax, dword ptr fs:[0]
// 00562306  6aff                 push -1
// 00562308  68d8bc7500           push 0x75bcd8
// 0056230d  50                   push eax
// 0056230e  64892500000000       mov dword ptr fs:[0], esp
// 00562315  83ec08               sub esp, 8
// 00562318  56                   push esi
// 00562319  8bf1                 mov esi, ecx
// 0056231b  837e0400             cmp dword ptr [esi + 4], 0
// 0056231f  0f8580000000         jne 0x5623a5
// 00562325  8b06                 mov eax, dword ptr [esi]
// 00562327  57                   push edi
// 00562328  50                   push eax
// 00562329  e812c8ebff           call 0x41eb40
// 0056232e  50                   push eax
// 0056232f  8d4c2410             lea ecx, [esp + 0x10]
// 00562333  51                   push ecx
// 00562334  e837b3f3ff           call 0x49d670
// 00562339  83c40c               add esp, 0xc
// 0056233c  8b10                 mov edx, dword ptr [eax]
// 0056233e  83c004               add eax, 4
// 00562341  50                   push eax
// 00562342  8d4e08               lea ecx, [esi + 8]
// 00562345  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0056234d  895604               mov dword ptr [esi + 4], edx
// 00562350  e80b07eaff           call 0x402a60
// 00562355  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00562359  85ff                 test edi, edi
// 0056235b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00562363  742a                 je 0x56238f
// 00562365  8d4704               lea eax, [edi + 4]
// 00562368  83c9ff               or ecx, 0xffffffff
// 0056236b  f00fc108             lock xadd dword ptr [eax], ecx
// 0056236f  751e                 jne 0x56238f
// 00562371  8b17                 mov edx, dword ptr [edi]
// 00562373  8b4204               mov eax, dword ptr [edx + 4]
// 00562376  8bcf                 mov ecx, edi
// 00562378  ffd0                 call eax
// 0056237a  8d4f08               lea ecx, [edi + 8]
// 0056237d  83caff               or edx, 0xffffffff
// 00562380  f00fc111             lock xadd dword ptr [ecx], edx
// 00562384  7509                 jne 0x56238f
// 00562386  8b07                 mov eax, dword ptr [edi]
// 00562388  8b5008               mov edx, dword ptr [eax + 8]
// 0056238b  8bcf                 mov ecx, edi
// 0056238d  ffd2                 call edx
// 0056238f  8b4604               mov eax, dword ptr [esi + 4]
// 00562392  5f                   pop edi
// 00562393  5e                   pop esi
// 00562394  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00562398  64890d00000000       mov dword ptr fs:[0], ecx
// 0056239f  83c414               add esp, 0x14
// 005623a2  c20400               ret 4
// 005623a5  8b4604               mov eax, dword ptr [esi + 4]
// 005623a8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005623ac  5e                   pop esi
// 005623ad  64890d00000000       mov dword ptr fs:[0], ecx
// 005623b4  83c414               add esp, 0x14
// 005623b7  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?createService@?$ServiceClient@VSelection@RBX@@@RBX@@ABEPAVSelection@2@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
