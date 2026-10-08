// roc 2007-03 004e40b0  unit: seg_004e0000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e40b0
//
// 004e40b0  51                   push ecx
// 004e40b1  53                   push ebx
// 004e40b2  55                   push ebp
// 004e40b3  56                   push esi
// 004e40b4  8b742418             mov esi, dword ptr [esp + 0x18]
// 004e40b8  85f6                 test esi, esi
// 004e40ba  57                   push edi
// 004e40bb  8bf9                 mov edi, ecx
// 004e40bd  7406                 je 0x4e40c5
// 004e40bf  3b742424             cmp esi, dword ptr [esp + 0x24]
// 004e40c3  7406                 je 0x4e40cb
// 004e40c5  ff1544e97700         call dword ptr [0x77e944]
// 004e40cb  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004e40cf  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004e40d3  3beb                 cmp ebp, ebx
// 004e40d5  7447                 je 0x4e411e
// 004e40d7  8b542418             mov edx, dword ptr [esp + 0x18]
// 004e40db  8b7708               mov esi, dword ptr [edi + 8]
// 004e40de  c644242400           mov byte ptr [esp + 0x24], 0
// 004e40e3  8b442424             mov eax, dword ptr [esp + 0x24]
// 004e40e7  50                   push eax
// 004e40e8  c644241400           mov byte ptr [esp + 0x14], 0
// 004e40ed  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e40f1  51                   push ecx
// 004e40f2  52                   push edx
// 004e40f3  55                   push ebp
// 004e40f4  56                   push esi
// 004e40f5  53                   push ebx
// 004e40f6  e865ecffff           call 0x4e2d60
// 004e40fb  8b442430             mov eax, dword ptr [esp + 0x30]
// 004e40ff  8b4f08               mov ecx, dword ptr [edi + 8]
// 004e4102  50                   push eax
// 004e4103  2bf3                 sub esi, ebx
// 004e4105  57                   push edi
// 004e4106  c1fe02               sar esi, 2
// 004e4109  51                   push ecx
// 004e410a  8d74b500             lea esi, [ebp + esi*4]
// 004e410e  56                   push esi
// 004e410f  e8acf6ffff           call 0x4e37c0
// 004e4114  897708               mov dword ptr [edi + 8], esi
// 004e4117  8b742444             mov esi, dword ptr [esp + 0x44]
// 004e411b  83c428               add esp, 0x28
// 004e411e  8b442418             mov eax, dword ptr [esp + 0x18]
// 004e4122  5f                   pop edi
// 004e4123  8930                 mov dword ptr [eax], esi
// 004e4125  5e                   pop esi
// 004e4126  896804               mov dword ptr [eax + 4], ebp
// 004e4129  5d                   pop ebp
// 004e412a  5b                   pop ebx
// 004e412b  59                   pop ecx
// 004e412c  c21400               ret 0x14
// library rbxgs-render/AggregatingSceneManager.cpp (function ?erase@?$vector@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@2@V32@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
