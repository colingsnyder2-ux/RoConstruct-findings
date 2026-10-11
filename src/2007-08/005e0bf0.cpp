// roc 2007-08 005e0bf0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e0bf0
//
// 005e0bf0  51                   push ecx
// 005e0bf1  53                   push ebx
// 005e0bf2  55                   push ebp
// 005e0bf3  56                   push esi
// 005e0bf4  8b742418             mov esi, dword ptr [esp + 0x18]
// 005e0bf8  85f6                 test esi, esi
// 005e0bfa  57                   push edi
// 005e0bfb  8bf9                 mov edi, ecx
// 005e0bfd  7406                 je 0x5e0c05
// 005e0bff  3b742424             cmp esi, dword ptr [esp + 0x24]
// 005e0c03  7406                 je 0x5e0c0b
// 005e0c05  ff15d8e67700         call dword ptr [0x77e6d8]
// 005e0c0b  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005e0c0f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 005e0c13  3beb                 cmp ebp, ebx
// 005e0c15  7447                 je 0x5e0c5e
// 005e0c17  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e0c1b  8b7708               mov esi, dword ptr [edi + 8]
// 005e0c1e  c644242400           mov byte ptr [esp + 0x24], 0
// 005e0c23  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e0c27  50                   push eax
// 005e0c28  c644241400           mov byte ptr [esp + 0x14], 0
// 005e0c2d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e0c31  51                   push ecx
// 005e0c32  52                   push edx
// 005e0c33  55                   push ebp
// 005e0c34  56                   push esi
// 005e0c35  53                   push ebx
// 005e0c36  e8a5f9ffff           call 0x5e05e0
// 005e0c3b  8b442430             mov eax, dword ptr [esp + 0x30]
// 005e0c3f  8b4f08               mov ecx, dword ptr [edi + 8]
// 005e0c42  50                   push eax
// 005e0c43  2bf3                 sub esi, ebx
// 005e0c45  57                   push edi
// 005e0c46  c1fe03               sar esi, 3
// 005e0c49  51                   push ecx
// 005e0c4a  8d74f500             lea esi, [ebp + esi*8]
// 005e0c4e  56                   push esi
// 005e0c4f  e80c71f8ff           call 0x567d60
// 005e0c54  897708               mov dword ptr [edi + 8], esi
// 005e0c57  8b742444             mov esi, dword ptr [esp + 0x44]
// 005e0c5b  83c428               add esp, 0x28
// 005e0c5e  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e0c62  5f                   pop edi
// 005e0c63  8930                 mov dword ptr [eax], esi
// 005e0c65  5e                   pop esi
// 005e0c66  896804               mov dword ptr [eax + 4], ebp
// 005e0c69  5d                   pop ebp
// 005e0c6a  5b                   pop ebx
// 005e0c6b  59                   pop ecx
// 005e0c6c  c21400               ret 0x14
// library openrbx-client/App\v8tree\Service.cpp (function ?erase@?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@V32@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Service.cpp
