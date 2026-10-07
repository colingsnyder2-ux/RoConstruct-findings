// roc 2008-06 0042bbb0  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042bbb0
//
// 0042bbb0  64a100000000         mov eax, dword ptr fs:[0]
// 0042bbb6  6aff                 push -1
// 0042bbb8  684ef57b00           push 0x7bf54e
// 0042bbbd  50                   push eax
// 0042bbbe  b801000000           mov eax, 1
// 0042bbc3  64892500000000       mov dword ptr fs:[0], esp
// 0042bbca  840518d19600         test byte ptr [0x96d118], al
// 0042bbd0  7525                 jne 0x42bbf7
// 0042bbd2  090518d19600         or dword ptr [0x96d118], eax
// 0042bbd8  b914d19600           mov ecx, 0x96d114
// 0042bbdd  c744240800000000     mov dword ptr [esp + 8], 0
// 0042bbe5  e806ffffff           call 0x42baf0
// 0042bbea  68f0a87f00           push 0x7fa8f0
// 0042bbef  e8bb5b2700           call 0x6a17af
// 0042bbf4  83c404               add esp, 4
// 0042bbf7  8b0c24               mov ecx, dword ptr [esp]
// 0042bbfa  b814d19600           mov eax, 0x96d114
// 0042bbff  64890d00000000       mov dword ptr fs:[0], ecx
// 0042bc06  83c40c               add esp, 0xc
// 0042bc09  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
