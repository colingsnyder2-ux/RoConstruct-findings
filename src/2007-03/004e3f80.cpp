// roc 2007-03 004e3f80  unit: seg_004e0000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e3f80
//
// 004e3f80  83ec08               sub esp, 8
// 004e3f83  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004e3f87  56                   push esi
// 004e3f88  32c0                 xor al, al
// 004e3f8a  57                   push edi
// 004e3f8b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004e3f8f  8844240c             mov byte ptr [esp + 0xc], al
// 004e3f93  88442408             mov byte ptr [esp + 8], al
// 004e3f97  8b442408             mov eax, dword ptr [esp + 8]
// 004e3f9b  50                   push eax
// 004e3f9c  8bf1                 mov esi, ecx
// 004e3f9e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e3fa2  8b4608               mov eax, dword ptr [esi + 8]
// 004e3fa5  51                   push ecx
// 004e3fa6  52                   push edx
// 004e3fa7  57                   push edi
// 004e3fa8  50                   push eax
// 004e3fa9  8d4f04               lea ecx, [edi + 4]
// 004e3fac  51                   push ecx
// 004e3fad  e8aeedffff           call 0x4e2d60
// 004e3fb2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e3fb6  8b4608               mov eax, dword ptr [esi + 8]
// 004e3fb9  52                   push edx
// 004e3fba  56                   push esi
// 004e3fbb  50                   push eax
// 004e3fbc  83c0fc               add eax, -4
// 004e3fbf  50                   push eax
// 004e3fc0  e8fbf7ffff           call 0x4e37c0
// 004e3fc5  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004e3fc9  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004e3fcd  83c428               add esp, 0x28
// 004e3fd0  834608fc             add dword ptr [esi + 8], -4
// 004e3fd4  897804               mov dword ptr [eax + 4], edi
// 004e3fd7  5f                   pop edi
// 004e3fd8  8908                 mov dword ptr [eax], ecx
// 004e3fda  5e                   pop esi
// 004e3fdb  83c408               add esp, 8
// 004e3fde  c20c00               ret 0xc
// library rbxgs-render/AggregatingSceneManager.cpp (function ?erase@?$vector@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@2@V32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
