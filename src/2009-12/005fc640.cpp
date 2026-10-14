// roc 2009-12 005fc640  unit: G3D::TextInput::WrongSymbol  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fc640
//
// 005fc640  6aff                 push -1
// 005fc642  685bfa9300           push 0x93fa5b
// 005fc647  64a100000000         mov eax, dword ptr fs:[0]
// 005fc64d  50                   push eax
// 005fc64e  64892500000000       mov dword ptr fs:[0], esp
// 005fc655  81eca8000000         sub esp, 0xa8
// 005fc65b  56                   push esi
// 005fc65c  57                   push edi
// 005fc65d  8d442408             lea eax, [esp + 8]
// 005fc661  50                   push eax
// 005fc662  8bf1                 mov esi, ecx
// 005fc664  e807ffffff           call 0x5fc570
// 005fc669  8bbc24c0000000       mov edi, dword ptr [esp + 0xc0]
// 005fc670  8d4c2408             lea ecx, [esp + 8]
// 005fc674  57                   push edi
// 005fc675  51                   push ecx
// 005fc676  c78424c000000000000000 mov dword ptr [esp + 0xc0], 0
// 005fc681  ff157cb69800         call dword ptr [0x98b67c]
// 005fc687  83c408               add esp, 8
// 005fc68a  84c0                 test al, al
// 005fc68c  742e                 je 0x5fc6bc
// 005fc68e  8d4c2408             lea ecx, [esp + 8]
// 005fc692  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 005fc69d  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fc6a3  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 005fc6aa  5f                   pop edi
// 005fc6ab  5e                   pop esi
// 005fc6ac  64890d00000000       mov dword ptr fs:[0], ecx
// 005fc6b3  81c4b4000000         add esp, 0xb4
// 005fc6b9  c20400               ret 4
// 005fc6bc  8d542408             lea edx, [esp + 8]
// 005fc6c0  52                   push edx
// 005fc6c1  8bce                 mov ecx, esi
// 005fc6c3  e868fcffff           call 0x5fc330
// 005fc6c8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005fc6cc  8b542424             mov edx, dword ptr [esp + 0x24]
// 005fc6d0  8d442408             lea eax, [esp + 8]
// 005fc6d4  50                   push eax
// 005fc6d5  57                   push edi
// 005fc6d6  51                   push ecx
// 005fc6d7  52                   push edx
// 005fc6d8  83c640               add esi, 0x40
// 005fc6db  56                   push esi
// 005fc6dc  8d4c2448             lea ecx, [esp + 0x48]
// 005fc6e0  e80be7ffff           call 0x5fadf0
// 005fc6e5  68f832ab00           push 0xab32f8
// 005fc6ea  8d442438             lea eax, [esp + 0x38]
// 005fc6ee  50                   push eax
// 005fc6ef  e884811f00           call 0x7f4878
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ?readString@TextInput@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
