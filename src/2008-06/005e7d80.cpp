// roc 2008-06 005e7d80  unit: RBX::Geometry  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7d80
//
// 005e7d80  8b442404             mov eax, dword ptr [esp + 4]
// 005e7d84  83e801               sub eax, 1
// 005e7d87  7434                 je 0x5e7dbd
// 005e7d89  83e801               sub eax, 1
// 005e7d8c  7405                 je 0x5e7d93
// 005e7d8e  e9ddfaffff           jmp 0x5e7870
// 005e7d93  6a18                 push 0x18
// 005e7d95  e8868b0b00           call 0x6a0920
// 005e7d9a  83c404               add esp, 4
// 005e7d9d  85c0                 test eax, eax
// 005e7d9f  743f                 je 0x5e7de0
// 005e7da1  d9ee                 fldz 
// 005e7da3  d95004               fst dword ptr [eax + 4]
// 005e7da6  d95008               fst dword ptr [eax + 8]
// 005e7da9  d9500c               fst dword ptr [eax + 0xc]
// 005e7dac  d95814               fstp dword ptr [eax + 0x14]
// 005e7daf  c700ecf78300         mov dword ptr [eax], 0x83f7ec
// 005e7db5  c7401000000000       mov dword ptr [eax + 0x10], 0
// 005e7dbc  c3                   ret 
// 005e7dbd  6a14                 push 0x14
// 005e7dbf  e85c8b0b00           call 0x6a0920
// 005e7dc4  83c404               add esp, 4
// 005e7dc7  85c0                 test eax, eax
// 005e7dc9  7415                 je 0x5e7de0
// 005e7dcb  d9ee                 fldz 
// 005e7dcd  d95004               fst dword ptr [eax + 4]
// 005e7dd0  d95008               fst dword ptr [eax + 8]
// 005e7dd3  d9500c               fst dword ptr [eax + 0xc]
// 005e7dd6  d95810               fstp dword ptr [eax + 0x10]
// 005e7dd9  c70014f88300         mov dword ptr [eax], 0x83f814
// 005e7ddf  c3                   ret 
// 005e7de0  33c0                 xor eax, eax
// 005e7de2  c3                   ret 
// library rbxgs/v8world\Primitive.cpp (function ?newGeometry@Primitive@RBX@@KAPAVGeometry@2@W4GeometryType@32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
