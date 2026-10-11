// roc 2008-06 0058ecb0  unit: TextXmlWriter  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058ecb0
//
// 0058ecb0  64a100000000         mov eax, dword ptr fs:[0]
// 0058ecb6  6aff                 push -1
// 0058ecb8  68b3197d00           push 0x7d19b3
// 0058ecbd  50                   push eax
// 0058ecbe  64892500000000       mov dword ptr fs:[0], esp
// 0058ecc5  83ec3c               sub esp, 0x3c
// 0058ecc8  53                   push ebx
// 0058ecc9  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 0058eccd  56                   push esi
// 0058ecce  57                   push edi
// 0058eccf  8bf1                 mov esi, ecx
// 0058ecd1  8d7b10               lea edi, [ebx + 0x10]
// 0058ecd4  8bcf                 mov ecx, edi
// 0058ecd6  e815d5feff           call 0x57c1f0
// 0058ecdb  6a00                 push 0
// 0058ecdd  84c0                 test al, al
// 0058ecdf  0f84ae000000         je 0x58ed93
// 0058ece5  8b442460             mov eax, dword ptr [esp + 0x60]
// 0058ece9  50                   push eax
// 0058ecea  53                   push ebx
// 0058eceb  8bce                 mov ecx, esi
// 0058eced  e81efeffff           call 0x58eb10
// 0058ecf2  8d4c2428             lea ecx, [esp + 0x28]
// 0058ecf6  ff1560248000         call dword ptr [0x802460]
// 0058ecfc  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0058ed04  e86755fcff           call 0x554270
// 0058ed09  89442444             mov dword ptr [esp + 0x44], eax
// 0058ed0d  8d4c2428             lea ecx, [esp + 0x28]
// 0058ed11  51                   push ecx
// 0058ed12  bb01000000           mov ebx, 1
// 0058ed17  8bcf                 mov ecx, edi
// 0058ed19  895c2454             mov dword ptr [esp + 0x54], ebx
// 0058ed1d  e8aed6feff           call 0x57c3d0
// 0058ed22  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0058ed27  7517                 jne 0x58ed40
// 0058ed29  8b5624               mov edx, dword ptr [esi + 0x24]
// 0058ed2c  682c1b8300           push 0x831b2c
// 0058ed31  52                   push edx
// 0058ed32  e819b7ebff           call 0x44a450
// 0058ed37  8d4c2430             lea ecx, [esp + 0x30]
// 0058ed3b  e991000000           jmp 0x58edd1
// 0058ed40  8b4624               mov eax, dword ptr [esi + 0x24]
// 0058ed43  68241b8300           push 0x831b24
// 0058ed48  50                   push eax
// 0058ed49  e802b7ebff           call 0x44a450
// 0058ed4e  83c408               add esp, 8
// 0058ed51  56                   push esi
// 0058ed52  8d4c2410             lea ecx, [esp + 0x10]
// 0058ed56  51                   push ecx
// 0058ed57  8bcf                 mov ecx, edi
// 0058ed59  e8f2e2feff           call 0x57d050
// 0058ed5e  8b5624               mov edx, dword ptr [esi + 0x24]
// 0058ed61  50                   push eax
// 0058ed62  52                   push edx
// 0058ed63  c644245802           mov byte ptr [esp + 0x58], 2
// 0058ed68  ff1584238000         call dword ptr [0x802384]
// 0058ed6e  83c408               add esp, 8
// 0058ed71  8d4c240c             lea ecx, [esp + 0xc]
// 0058ed75  885c2450             mov byte ptr [esp + 0x50], bl
// 0058ed79  ff1568248000         call dword ptr [0x802468]
// 0058ed7f  8b4624               mov eax, dword ptr [esi + 0x24]
// 0058ed82  681c1b8300           push 0x831b1c
// 0058ed87  50                   push eax
// 0058ed88  e8c3b6ebff           call 0x44a450
// 0058ed8d  8d4c2430             lea ecx, [esp + 0x30]
// 0058ed91  eb3e                 jmp 0x58edd1
// 0058ed93  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0058ed97  51                   push ecx
// 0058ed98  53                   push ebx
// 0058ed99  8bce                 mov ecx, esi
// 0058ed9b  e870fdffff           call 0x58eb10
// 0058eda0  56                   push esi
// 0058eda1  8d542410             lea edx, [esp + 0x10]
// 0058eda5  52                   push edx
// 0058eda6  8bcf                 mov ecx, edi
// 0058eda8  e8a3e2feff           call 0x57d050
// 0058edad  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0058edb1  8b7624               mov esi, dword ptr [esi + 0x24]
// 0058edb4  c744245003000000     mov dword ptr [esp + 0x50], 3
// 0058edbc  7205                 jb 0x58edc3
// 0058edbe  8b4004               mov eax, dword ptr [eax + 4]
// 0058edc1  eb03                 jmp 0x58edc6
// 0058edc3  83c004               add eax, 4
// 0058edc6  50                   push eax
// 0058edc7  56                   push esi
// 0058edc8  e8d3f6ffff           call 0x58e4a0
// 0058edcd  8d4c2414             lea ecx, [esp + 0x14]
// 0058edd1  83c408               add esp, 8
// 0058edd4  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0058eddc  ff1568248000         call dword ptr [0x802468]
// 0058ede2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0058ede6  5f                   pop edi
// 0058ede7  5e                   pop esi
// 0058ede8  5b                   pop ebx
// 0058ede9  64890d00000000       mov dword ptr fs:[0], ecx
// 0058edf0  83c448               add esp, 0x48
// 0058edf3  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?serializeNode@TextXmlWriter@@MAEXPBVXmlElement@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
