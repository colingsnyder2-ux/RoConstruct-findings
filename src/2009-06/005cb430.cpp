// from server: 100% by auto
// roc 2009-06 005cb430  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cb430
//
// 005cb430  64a100000000         mov eax, dword ptr fs:[0]
// 005cb436  6aff                 push -1
// 005cb438  68de228600           push 0x8622de
// 005cb43d  50                   push eax
// 005cb43e  b801000000           mov eax, 1
// 005cb443  64892500000000       mov dword ptr fs:[0], esp
// 005cb44a  8405f430a400         test byte ptr [0xa430f4], al
// 005cb450  7525                 jne 0x5cb477
// 005cb452  0905f430a400         or dword ptr [0xa430f4], eax
// 005cb458  b90830a400           mov ecx, 0xa43008
// 005cb45d  c744240800000000     mov dword ptr [esp + 8], 0
// 005cb465  e8d6fc0700           call 0x64b140
// 005cb46a  6830728900           push 0x897230
// 005cb46f  e887e61400           call 0x719afb
// 005cb474  83c404               add esp, 4
// 005cb477  8b0c24               mov ecx, dword ptr [esp]
// 005cb47a  b80830a400           mov eax, 0xa43008
// 005cb47f  64890d00000000       mov dword ptr fs:[0], ecx
// 005cb486  83c40c               add esp, 0xc
// 005cb489  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
