// from server: 100% by auto
// roc 2011-06 005d0910  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0910
//
// 005d0910  64a100000000         mov eax, dword ptr fs:[0]
// 005d0916  6aff                 push -1
// 005d0918  68ae519e00           push 0x9e51ae
// 005d091d  50                   push eax
// 005d091e  b801000000           mov eax, 1
// 005d0923  64892500000000       mov dword ptr fs:[0], esp
// 005d092a  8405fc89cc00         test byte ptr [0xcc89fc], al
// 005d0930  7525                 jne 0x5d0957
// 005d0932  0905fc89cc00         or dword ptr [0xcc89fc], eax
// 005d0938  b95889cc00           mov ecx, 0xcc8958
// 005d093d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0945  e886e31000           call 0x6decd0
// 005d094a  68507fa300           push 0xa37f50
// 005d094f  e809a82300           call 0x80b15d
// 005d0954  83c404               add esp, 4
// 005d0957  8b0c24               mov ecx, dword ptr [esp]
// 005d095a  b85889cc00           mov eax, 0xcc8958
// 005d095f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0966  83c40c               add esp, 0xc
// 005d0969  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
