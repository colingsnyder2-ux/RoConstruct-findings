// from server: 100% by auto
// roc 2010-06 00592900  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00592900
//
// 00592900  64a100000000         mov eax, dword ptr fs:[0]
// 00592906  6aff                 push -1
// 00592908  68de1a9900           push 0x991ade
// 0059290d  50                   push eax
// 0059290e  b801000000           mov eax, 1
// 00592913  64892500000000       mov dword ptr fs:[0], esp
// 0059291a  84059ca6c000         test byte ptr [0xc0a69c], al
// 00592920  7525                 jne 0x592947
// 00592922  09059ca6c000         or dword ptr [0xc0a69c], eax
// 00592928  b9b0a5c000           mov ecx, 0xc0a5b0
// 0059292d  c744240800000000     mov dword ptr [esp + 8], 0
// 00592935  e836f0ffff           call 0x591970
// 0059293a  68f0e89d00           push 0x9de8f0
// 0059293f  e81f612100           call 0x7a8a63
// 00592944  83c404               add esp, 4
// 00592947  8b0c24               mov ecx, dword ptr [esp]
// 0059294a  b8b0a5c000           mov eax, 0xc0a5b0
// 0059294f  64890d00000000       mov dword ptr fs:[0], ecx
// 00592956  83c40c               add esp, 0xc
// 00592959  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
