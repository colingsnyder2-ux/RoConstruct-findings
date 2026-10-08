// roc 2007-08 00568610  unit: RBX::RootInstance  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00568610
//
// 00568610  6aff                 push -1
// 00568612  6828447500           push 0x754428
// 00568617  64a100000000         mov eax, dword ptr fs:[0]
// 0056861d  50                   push eax
// 0056861e  64892500000000       mov dword ptr fs:[0], esp
// 00568625  83ec10               sub esp, 0x10
// 00568628  56                   push esi
// 00568629  57                   push edi
// 0056862a  33ff                 xor edi, edi
// 0056862c  8bf1                 mov esi, ecx
// 0056862e  897c240c             mov dword ptr [esp + 0xc], edi
// 00568632  897c2410             mov dword ptr [esp + 0x10], edi
// 00568636  897c2414             mov dword ptr [esp + 0x14], edi
// 0056863a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0056863e  8b542428             mov edx, dword ptr [esp + 0x28]
// 00568642  8d442408             lea eax, [esp + 8]
// 00568646  50                   push eax
// 00568647  51                   push ecx
// 00568648  52                   push edx
// 00568649  8bce                 mov ecx, esi
// 0056864b  897c242c             mov dword ptr [esp + 0x2c], edi
// 0056864f  e8bcf7ffff           call 0x567e10
// 00568654  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00568658  3bc7                 cmp eax, edi
// 0056865a  7466                 je 0x5686c2
// 0056865c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00568660  2bc8                 sub ecx, eax
// 00568662  c1f903               sar ecx, 3
// 00568665  745b                 je 0x5686c2
// 00568667  b801000000           mov eax, 1
// 0056866c  840538d18b00         test byte ptr [0x8bd138], al
// 00568672  751a                 jne 0x56868e
// 00568674  d9ee                 fldz 
// 00568676  090538d18b00         or dword ptr [0x8bd138], eax
// 0056867c  d9152cd18b00         fst dword ptr [0x8bd12c]
// 00568682  d91530d18b00         fst dword ptr [0x8bd130]
// 00568688  d91d34d18b00         fstp dword ptr [0x8bd134]
// 0056868e  d9052cd18b00         fld dword ptr [0x8bd12c]
// 00568694  50                   push eax
// 00568695  83ec0c               sub esp, 0xc
// 00568698  8bc4                 mov eax, esp
// 0056869a  d918                 fstp dword ptr [eax]
// 0056869c  8d542418             lea edx, [esp + 0x18]
// 005686a0  d90530d18b00         fld dword ptr [0x8bd130]
// 005686a6  8964243c             mov dword ptr [esp + 0x3c], esp
// 005686aa  d95804               fstp dword ptr [eax + 4]
// 005686ad  52                   push edx
// 005686ae  d90534d18b00         fld dword ptr [0x8bd134]
// 005686b4  8bce                 mov ecx, esi
// 005686b6  d95808               fstp dword ptr [eax + 8]
// 005686b9  e872f3ffff           call 0x567a30
// 005686be  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005686c2  3bc7                 cmp eax, edi
// 005686c4  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 005686cc  7422                 je 0x5686f0
// 005686ce  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005686d2  51                   push ecx
// 005686d3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005686d7  8d54240c             lea edx, [esp + 0xc]
// 005686db  52                   push edx
// 005686dc  51                   push ecx
// 005686dd  50                   push eax
// 005686de  e87df6ffff           call 0x567d60
// 005686e3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005686e7  52                   push edx
// 005686e8  e875750c00           call 0x62fc62
// 005686ed  83c414               add esp, 0x14
// 005686f0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005686f4  5f                   pop edi
// 005686f5  64890d00000000       mov dword ptr fs:[0], ecx
// 005686fc  5e                   pop esi
// 005686fd  83c41c               add esp, 0x1c
// 00568700  c20800               ret 8
// library rbxgs/v8datamodel\RootInstance.cpp (function ?insertToTree@RootInstance@RBX@@AAEXABV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@PAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
