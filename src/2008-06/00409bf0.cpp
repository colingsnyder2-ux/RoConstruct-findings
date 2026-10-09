// roc 2008-06 00409bf0  unit: RBX::VSelection::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409bf0
//
// 00409bf0  64a100000000         mov eax, dword ptr fs:[0]
// 00409bf6  6aff                 push -1
// 00409bf8  68bed07b00           push 0x7bd0be
// 00409bfd  50                   push eax
// 00409bfe  b801000000           mov eax, 1
// 00409c03  64892500000000       mov dword ptr fs:[0], esp
// 00409c0a  840568c39600         test byte ptr [0x96c368], al
// 00409c10  7530                 jne 0x409c42
// 00409c12  090568c39600         or dword ptr [0x96c368], eax
// 00409c18  6aff                 push -1
// 00409c1a  68ec009300           push 0x9300ec
// 00409c1f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00409c27  e864a31400           call 0x553f90
// 00409c2c  83c408               add esp, 8
// 00409c2f  a364c39600           mov dword ptr [0x96c364], eax
// 00409c34  8b0c24               mov ecx, dword ptr [esp]
// 00409c37  64890d00000000       mov dword ptr fs:[0], ecx
// 00409c3e  83c40c               add esp, 0xc
// 00409c41  c3                   ret 
// 00409c42  8b0c24               mov ecx, dword ptr [esp]
// 00409c45  a164c39600           mov eax, dword ptr [0x96c364]
// 00409c4a  64890d00000000       mov dword ptr fs:[0], ecx
// 00409c51  83c40c               add esp, 0xc
// 00409c54  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
