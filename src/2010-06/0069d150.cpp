// roc 2010-06 0069d150  unit: RBX::PART::VWedge::?$FactoryProduct  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069d150
//
// 0069d150  56                   push esi
// 0069d151  8bf1                 mov esi, ecx
// 0069d153  8d4e08               lea ecx, [esi + 8]
// 0069d156  e815b60700           call 0x718770
// 0069d15b  83f804               cmp eax, 4
// 0069d15e  7534                 jne 0x69d194
// 0069d160  8d4e20               lea ecx, [esi + 0x20]
// 0069d163  e808b60700           call 0x718770
// 0069d168  85c0                 test eax, eax
// 0069d16a  7528                 jne 0x69d194
// 0069d16c  8d4e28               lea ecx, [esi + 0x28]
// 0069d16f  e8fcb50700           call 0x718770
// 0069d174  85c0                 test eax, eax
// 0069d176  751c                 jne 0x69d194
// 0069d178  8d4e10               lea ecx, [esi + 0x10]
// 0069d17b  e8f0b50700           call 0x718770
// 0069d180  85c0                 test eax, eax
// 0069d182  7510                 jne 0x69d194
// 0069d184  8d4e18               lea ecx, [esi + 0x18]
// 0069d187  e8e4b50700           call 0x718770
// 0069d18c  85c0                 test eax, eax
// 0069d18e  7504                 jne 0x69d194
// 0069d190  b001                 mov al, 1
// 0069d192  5e                   pop esi
// 0069d193  c3                   ret 
// 0069d194  32c0                 xor al, al
// 0069d196  5e                   pop esi
// 0069d197  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?isStandardPart@Surfaces@RBX@@QBE?B_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
