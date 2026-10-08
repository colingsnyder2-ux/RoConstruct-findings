// from server: 100% by auto
// roc 2010-06 00592970  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00592970
//
// 00592970  64a100000000         mov eax, dword ptr fs:[0]
// 00592976  6aff                 push -1
// 00592978  68fe1a9900           push 0x991afe
// 0059297d  50                   push eax
// 0059297e  b801000000           mov eax, 1
// 00592983  64892500000000       mov dword ptr fs:[0], esp
// 0059298a  84058ca7c000         test byte ptr [0xc0a78c], al
// 00592990  7525                 jne 0x5929b7
// 00592992  09058ca7c000         or dword ptr [0xc0a78c], eax
// 00592998  b9a0a6c000           mov ecx, 0xc0a6a0
// 0059299d  c744240800000000     mov dword ptr [esp + 8], 0
// 005929a5  e846f1ffff           call 0x591af0
// 005929aa  68e0e89d00           push 0x9de8e0
// 005929af  e8af602100           call 0x7a8a63
// 005929b4  83c404               add esp, 4
// 005929b7  8b0c24               mov ecx, dword ptr [esp]
// 005929ba  b8a0a6c000           mov eax, 0xc0a6a0
// 005929bf  64890d00000000       mov dword ptr fs:[0], ecx
// 005929c6  83c40c               add esp, 0xc
// 005929c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
