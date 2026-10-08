// roc 2007-08 00584e80  unit: RBX::VHat::?$FactoryProduct  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00584e80
//
// 00584e80  6aff                 push -1
// 00584e82  68745e7500           push 0x755e74
// 00584e87  64a100000000         mov eax, dword ptr fs:[0]
// 00584e8d  50                   push eax
// 00584e8e  64892500000000       mov dword ptr fs:[0], esp
// 00584e95  83ec0c               sub esp, 0xc
// 00584e98  53                   push ebx
// 00584e99  56                   push esi
// 00584e9a  57                   push edi
// 00584e9b  8bf9                 mov edi, ecx
// 00584e9d  897c240c             mov dword ptr [esp + 0xc], edi
// 00584ea1  8b4748               mov eax, dword ptr [edi + 0x48]
// 00584ea4  8b08                 mov ecx, dword ptr [eax]
// 00584ea6  8d7744               lea esi, [edi + 0x44]
// 00584ea9  50                   push eax
// 00584eaa  56                   push esi
// 00584eab  51                   push ecx
// 00584eac  56                   push esi
// 00584ead  8d442420             lea eax, [esp + 0x20]
// 00584eb1  50                   push eax
// 00584eb2  8bce                 mov ecx, esi
// 00584eb4  c744243404000000     mov dword ptr [esp + 0x34], 4
// 00584ebc  e86f250300           call 0x5b7430
// 00584ec1  8b4604               mov eax, dword ptr [esi + 4]
// 00584ec4  50                   push eax
// 00584ec5  e898ad0a00           call 0x62fc62
// 00584eca  33db                 xor ebx, ebx
// 00584ecc  895e04               mov dword ptr [esi + 4], ebx
// 00584ecf  895e08               mov dword ptr [esi + 8], ebx
// 00584ed2  8b473c               mov eax, dword ptr [edi + 0x3c]
// 00584ed5  8b08                 mov ecx, dword ptr [eax]
// 00584ed7  83c404               add esp, 4
// 00584eda  8d7738               lea esi, [edi + 0x38]
// 00584edd  50                   push eax
// 00584ede  56                   push esi
// 00584edf  51                   push ecx
// 00584ee0  56                   push esi
// 00584ee1  8d4c2420             lea ecx, [esp + 0x20]
// 00584ee5  51                   push ecx
// 00584ee6  8bce                 mov ecx, esi
// 00584ee8  c644243403           mov byte ptr [esp + 0x34], 3
// 00584eed  e82efbffff           call 0x584a20
// 00584ef2  8b4604               mov eax, dword ptr [esi + 4]
// 00584ef5  50                   push eax
// 00584ef6  e867ad0a00           call 0x62fc62
// 00584efb  895e04               mov dword ptr [esi + 4], ebx
// 00584efe  895e08               mov dword ptr [esi + 8], ebx
// 00584f01  8b4730               mov eax, dword ptr [edi + 0x30]
// 00584f04  8b08                 mov ecx, dword ptr [eax]
// 00584f06  83c404               add esp, 4
// 00584f09  8d772c               lea esi, [edi + 0x2c]
// 00584f0c  50                   push eax
// 00584f0d  56                   push esi
// 00584f0e  51                   push ecx
// 00584f0f  56                   push esi
// 00584f10  8d542420             lea edx, [esp + 0x20]
// 00584f14  52                   push edx
// 00584f15  8bce                 mov ecx, esi
// 00584f17  c644243402           mov byte ptr [esp + 0x34], 2
// 00584f1c  e87ff3ffff           call 0x5842a0
// 00584f21  8b4604               mov eax, dword ptr [esi + 4]
// 00584f24  50                   push eax
// 00584f25  e838ad0a00           call 0x62fc62
// 00584f2a  895e04               mov dword ptr [esi + 4], ebx
// 00584f2d  895e08               mov dword ptr [esi + 8], ebx
// 00584f30  8b4724               mov eax, dword ptr [edi + 0x24]
// 00584f33  8b08                 mov ecx, dword ptr [eax]
// 00584f35  83c404               add esp, 4
// 00584f38  8d7720               lea esi, [edi + 0x20]
// 00584f3b  50                   push eax
// 00584f3c  56                   push esi
// 00584f3d  51                   push ecx
// 00584f3e  56                   push esi
// 00584f3f  8d442420             lea eax, [esp + 0x20]
// 00584f43  50                   push eax
// 00584f44  8bce                 mov ecx, esi
// 00584f46  c644243401           mov byte ptr [esp + 0x34], 1
// 00584f4b  e8e0240300           call 0x5b7430
// 00584f50  8b4e04               mov ecx, dword ptr [esi + 4]
// 00584f53  51                   push ecx
// 00584f54  e809ad0a00           call 0x62fc62
// 00584f59  83c404               add esp, 4
// 00584f5c  895e04               mov dword ptr [esi + 4], ebx
// 00584f5f  895e08               mov dword ptr [esi + 8], ebx
// 00584f62  8b4714               mov eax, dword ptr [edi + 0x14]
// 00584f65  3bc3                 cmp eax, ebx
// 00584f67  7409                 je 0x584f72
// 00584f69  50                   push eax
// 00584f6a  e8f3ac0a00           call 0x62fc62
// 00584f6f  83c404               add esp, 4
// 00584f72  895f14               mov dword ptr [edi + 0x14], ebx
// 00584f75  895f18               mov dword ptr [edi + 0x18], ebx
// 00584f78  895f1c               mov dword ptr [edi + 0x1c], ebx
// 00584f7b  8b4704               mov eax, dword ptr [edi + 4]
// 00584f7e  3bc3                 cmp eax, ebx
// 00584f80  7409                 je 0x584f8b
// 00584f82  50                   push eax
// 00584f83  e8daac0a00           call 0x62fc62
// 00584f88  83c404               add esp, 4
// 00584f8b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00584f8f  895f04               mov dword ptr [edi + 4], ebx
// 00584f92  895f08               mov dword ptr [edi + 8], ebx
// 00584f95  895f0c               mov dword ptr [edi + 0xc], ebx
// 00584f98  5f                   pop edi
// 00584f99  5e                   pop esi
// 00584f9a  5b                   pop ebx
// 00584f9b  64890d00000000       mov dword ptr fs:[0], ecx
// 00584fa2  83c418               add esp, 0x18
// 00584fa5  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??1BrickMap@BrickColor@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
