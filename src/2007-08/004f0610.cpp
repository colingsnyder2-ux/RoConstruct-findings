// roc 2007-08 004f0610  unit: RBX::Render::AggregatingSceneManager  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f0610
//
// 004f0610  83ec08               sub esp, 8
// 004f0613  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004f0617  56                   push esi
// 004f0618  32c0                 xor al, al
// 004f061a  57                   push edi
// 004f061b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004f061f  8844240c             mov byte ptr [esp + 0xc], al
// 004f0623  88442408             mov byte ptr [esp + 8], al
// 004f0627  8b442408             mov eax, dword ptr [esp + 8]
// 004f062b  50                   push eax
// 004f062c  8bf1                 mov esi, ecx
// 004f062e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f0632  8b4608               mov eax, dword ptr [esi + 8]
// 004f0635  51                   push ecx
// 004f0636  52                   push edx
// 004f0637  57                   push edi
// 004f0638  50                   push eax
// 004f0639  8d4f04               lea ecx, [edi + 4]
// 004f063c  51                   push ecx
// 004f063d  e82eedffff           call 0x4ef370
// 004f0642  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004f0646  8b4608               mov eax, dword ptr [esi + 8]
// 004f0649  52                   push edx
// 004f064a  56                   push esi
// 004f064b  50                   push eax
// 004f064c  83c0fc               add eax, -4
// 004f064f  50                   push eax
// 004f0650  e8fbf7ffff           call 0x4efe50
// 004f0655  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004f0659  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004f065d  83c428               add esp, 0x28
// 004f0660  834608fc             add dword ptr [esi + 8], -4
// 004f0664  897804               mov dword ptr [eax + 4], edi
// 004f0667  5f                   pop edi
// 004f0668  8908                 mov dword ptr [eax], ecx
// 004f066a  5e                   pop esi
// 004f066b  83c408               add esp, 8
// 004f066e  c20c00               ret 0xc
// library rbxgs-render/AggregatingSceneManager.cpp (function ?erase@?$vector@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@2@V32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
