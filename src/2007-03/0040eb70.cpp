// roc 2007-03 0040eb70  unit: seg_00400000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040eb70
//
// 0040eb70  51                   push ecx
// 0040eb71  53                   push ebx
// 0040eb72  55                   push ebp
// 0040eb73  56                   push esi
// 0040eb74  8b742418             mov esi, dword ptr [esp + 0x18]
// 0040eb78  85f6                 test esi, esi
// 0040eb7a  57                   push edi
// 0040eb7b  8bf9                 mov edi, ecx
// 0040eb7d  7406                 je 0x40eb85
// 0040eb7f  3b742424             cmp esi, dword ptr [esp + 0x24]
// 0040eb83  7406                 je 0x40eb8b
// 0040eb85  ff1544e97700         call dword ptr [0x77e944]
// 0040eb8b  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0040eb8f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0040eb93  3beb                 cmp ebp, ebx
// 0040eb95  7447                 je 0x40ebde
// 0040eb97  8b542418             mov edx, dword ptr [esp + 0x18]
// 0040eb9b  8b7708               mov esi, dword ptr [edi + 8]
// 0040eb9e  c644242400           mov byte ptr [esp + 0x24], 0
// 0040eba3  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040eba7  50                   push eax
// 0040eba8  c644241400           mov byte ptr [esp + 0x14], 0
// 0040ebad  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040ebb1  51                   push ecx
// 0040ebb2  52                   push edx
// 0040ebb3  55                   push ebp
// 0040ebb4  56                   push esi
// 0040ebb5  53                   push ebx
// 0040ebb6  e895f8ffff           call 0x40e450
// 0040ebbb  8b442430             mov eax, dword ptr [esp + 0x30]
// 0040ebbf  8b4f08               mov ecx, dword ptr [edi + 8]
// 0040ebc2  50                   push eax
// 0040ebc3  2bf3                 sub esi, ebx
// 0040ebc5  57                   push edi
// 0040ebc6  c1fe03               sar esi, 3
// 0040ebc9  51                   push ecx
// 0040ebca  8d74f500             lea esi, [ebp + esi*8]
// 0040ebce  56                   push esi
// 0040ebcf  e81c0e0900           call 0x49f9f0
// 0040ebd4  897708               mov dword ptr [edi + 8], esi
// 0040ebd7  8b742444             mov esi, dword ptr [esp + 0x44]
// 0040ebdb  83c428               add esp, 0x28
// 0040ebde  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040ebe2  5f                   pop edi
// 0040ebe3  8930                 mov dword ptr [eax], esi
// 0040ebe5  5e                   pop esi
// 0040ebe6  896804               mov dword ptr [eax + 4], ebp
// 0040ebe9  5d                   pop ebp
// 0040ebea  5b                   pop ebx
// 0040ebeb  59                   pop ecx
// 0040ebec  c21400               ret 0x14
// library openrbx-client/App\v8tree\Service.cpp (function ?erase@?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@V32@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Service.cpp
