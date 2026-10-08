// from server: 100% by auto
// roc 2012-06 00734ae0  unit: RBX::Frame::W4Style::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00734ae0
//
// 00734ae0  64a100000000         mov eax, dword ptr fs:[0]
// 00734ae6  6aff                 push -1
// 00734ae8  686e07ac00           push 0xac076e
// 00734aed  50                   push eax
// 00734aee  b801000000           mov eax, 1
// 00734af3  64892500000000       mov dword ptr fs:[0], esp
// 00734afa  84056c3fe300         test byte ptr [0xe33f6c], al
// 00734b00  7525                 jne 0x734b27
// 00734b02  09056c3fe300         or dword ptr [0xe33f6c], eax
// 00734b08  b9c03ee300           mov ecx, 0xe33ec0
// 00734b0d  c744240800000000     mov dword ptr [esp + 8], 0
// 00734b15  e826feffff           call 0x734940
// 00734b1a  68407eb100           push 0xb17e40
// 00734b1f  e8d1e62400           call 0x9831f5
// 00734b24  83c404               add esp, 4
// 00734b27  8b0c24               mov ecx, dword ptr [esp]
// 00734b2a  b8c03ee300           mov eax, 0xe33ec0
// 00734b2f  64890d00000000       mov dword ptr fs:[0], ecx
// 00734b36  83c40c               add esp, 0xc
// 00734b39  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
