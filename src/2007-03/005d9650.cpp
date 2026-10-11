// roc 2007-03 005d9650  unit: seg_005d0000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d9650
//
// 005d9650  51                   push ecx
// 005d9651  53                   push ebx
// 005d9652  55                   push ebp
// 005d9653  56                   push esi
// 005d9654  8b742418             mov esi, dword ptr [esp + 0x18]
// 005d9658  85f6                 test esi, esi
// 005d965a  57                   push edi
// 005d965b  8bf9                 mov edi, ecx
// 005d965d  7406                 je 0x5d9665
// 005d965f  3b742424             cmp esi, dword ptr [esp + 0x24]
// 005d9663  7406                 je 0x5d966b
// 005d9665  ff1544e97700         call dword ptr [0x77e944]
// 005d966b  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005d966f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 005d9673  3beb                 cmp ebp, ebx
// 005d9675  7447                 je 0x5d96be
// 005d9677  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d967b  8b7708               mov esi, dword ptr [edi + 8]
// 005d967e  c644242400           mov byte ptr [esp + 0x24], 0
// 005d9683  8b442424             mov eax, dword ptr [esp + 0x24]
// 005d9687  50                   push eax
// 005d9688  c644241400           mov byte ptr [esp + 0x14], 0
// 005d968d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d9691  51                   push ecx
// 005d9692  52                   push edx
// 005d9693  55                   push ebp
// 005d9694  56                   push esi
// 005d9695  53                   push ebx
// 005d9696  e8a5f9ffff           call 0x5d9040
// 005d969b  8b442430             mov eax, dword ptr [esp + 0x30]
// 005d969f  8b4f08               mov ecx, dword ptr [edi + 8]
// 005d96a2  50                   push eax
// 005d96a3  2bf3                 sub esi, ebx
// 005d96a5  57                   push edi
// 005d96a6  c1fe03               sar esi, 3
// 005d96a9  51                   push ecx
// 005d96aa  8d74f500             lea esi, [ebp + esi*8]
// 005d96ae  56                   push esi
// 005d96af  e82cb3f9ff           call 0x5749e0
// 005d96b4  897708               mov dword ptr [edi + 8], esi
// 005d96b7  8b742444             mov esi, dword ptr [esp + 0x44]
// 005d96bb  83c428               add esp, 0x28
// 005d96be  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d96c2  5f                   pop edi
// 005d96c3  8930                 mov dword ptr [eax], esi
// 005d96c5  5e                   pop esi
// 005d96c6  896804               mov dword ptr [eax + 4], ebp
// 005d96c9  5d                   pop ebp
// 005d96ca  5b                   pop ebx
// 005d96cb  59                   pop ecx
// 005d96cc  c21400               ret 0x14
// library openrbx-client/App\v8tree\Service.cpp (function ?erase@?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@V32@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Service.cpp
