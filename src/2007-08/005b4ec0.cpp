// roc 2007-08 005b4ec0  unit: RBX::Geometry  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4ec0
//
// 005b4ec0  8b442404             mov eax, dword ptr [esp + 4]
// 005b4ec4  83e801               sub eax, 1
// 005b4ec7  7434                 je 0x5b4efd
// 005b4ec9  83e801               sub eax, 1
// 005b4ecc  7405                 je 0x5b4ed3
// 005b4ece  e95dfcffff           jmp 0x5b4b30
// 005b4ed3  6a18                 push 0x18
// 005b4ed5  e81cb00700           call 0x62fef6
// 005b4eda  83c404               add esp, 4
// 005b4edd  85c0                 test eax, eax
// 005b4edf  743f                 je 0x5b4f20
// 005b4ee1  d9ee                 fldz 
// 005b4ee3  d95004               fst dword ptr [eax + 4]
// 005b4ee6  d95008               fst dword ptr [eax + 8]
// 005b4ee9  d9500c               fst dword ptr [eax + 0xc]
// 005b4eec  d95814               fstp dword ptr [eax + 0x14]
// 005b4eef  c700ac7e7b00         mov dword ptr [eax], 0x7b7eac
// 005b4ef5  c7401000000000       mov dword ptr [eax + 0x10], 0
// 005b4efc  c3                   ret 
// 005b4efd  6a14                 push 0x14
// 005b4eff  e8f2af0700           call 0x62fef6
// 005b4f04  83c404               add esp, 4
// 005b4f07  85c0                 test eax, eax
// 005b4f09  7415                 je 0x5b4f20
// 005b4f0b  d9ee                 fldz 
// 005b4f0d  d95004               fst dword ptr [eax + 4]
// 005b4f10  d95008               fst dword ptr [eax + 8]
// 005b4f13  d9500c               fst dword ptr [eax + 0xc]
// 005b4f16  d95810               fstp dword ptr [eax + 0x10]
// 005b4f19  c700d47e7b00         mov dword ptr [eax], 0x7b7ed4
// 005b4f1f  c3                   ret 
// 005b4f20  33c0                 xor eax, eax
// 005b4f22  c3                   ret 
// library rbxgs/v8world\Primitive.cpp (function ?newGeometry@Primitive@RBX@@KAPAVGeometry@2@W4GeometryType@32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
