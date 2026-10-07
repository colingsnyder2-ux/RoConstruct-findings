// roc 2011-06 008453e0  unit: CXTPColorManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008453e0
//
// 008453e0  6aff                 push -1
// 008453e2  684e54a000           push 0xa0544e
// 008453e7  64a100000000         mov eax, dword ptr fs:[0]
// 008453ed  50                   push eax
// 008453ee  a12058c900           mov eax, dword ptr [0xc95820]
// 008453f3  33c4                 xor eax, esp
// 008453f5  50                   push eax
// 008453f6  8d442404             lea eax, [esp + 4]
// 008453fa  64a300000000         mov dword ptr fs:[0], eax
// 00845400  b801000000           mov eax, 1
// 00845405  84057c87d100         test byte ptr [0xd1877c], al
// 0084540b  7525                 jne 0x845432
// 0084540d  09057c87d100         or dword ptr [0xd1877c], eax
// 00845413  b91083d100           mov ecx, 0xd18310
// 00845418  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00845420  e83bf5ffff           call 0x844960
// 00845425  6820fca300           push 0xa3fc20
// 0084542a  e82e5dfcff           call 0x80b15d
// 0084542f  83c404               add esp, 4
// 00845432  b81083d100           mov eax, 0xd18310
// 00845437  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084543b  64890d00000000       mov dword ptr fs:[0], ecx
// 00845442  59                   pop ecx
// 00845443  83c40c               add esp, 0xc
// 00845446  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
