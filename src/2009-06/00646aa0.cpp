// from server: 100% by auto
// roc 2009-06 00646aa0  unit: RBX::Soundscape::VSoundChannel::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00646aa0
//
// 00646aa0  64a100000000         mov eax, dword ptr fs:[0]
// 00646aa6  6aff                 push -1
// 00646aa8  681eaa8600           push 0x86aa1e
// 00646aad  50                   push eax
// 00646aae  b801000000           mov eax, 1
// 00646ab3  64892500000000       mov dword ptr fs:[0], esp
// 00646aba  84054cc2a400         test byte ptr [0xa4c24c], al
// 00646ac0  7525                 jne 0x646ae7
// 00646ac2  09054cc2a400         or dword ptr [0xa4c24c], eax
// 00646ac8  b960c1a400           mov ecx, 0xa4c160
// 00646acd  c744240800000000     mov dword ptr [esp + 8], 0
// 00646ad5  e866faffff           call 0x646540
// 00646ada  6810a38900           push 0x89a310
// 00646adf  e817300d00           call 0x719afb
// 00646ae4  83c404               add esp, 4
// 00646ae7  8b0c24               mov ecx, dword ptr [esp]
// 00646aea  b860c1a400           mov eax, 0xa4c160
// 00646aef  64890d00000000       mov dword ptr fs:[0], ecx
// 00646af6  83c40c               add esp, 0xc
// 00646af9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
