// from server: 100% by auto
// roc 2012-06 00468ee0  unit: RBX::CRenderSettings::W4ShadowMode::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00468ee0
//
// 00468ee0  64a100000000         mov eax, dword ptr fs:[0]
// 00468ee6  6aff                 push -1
// 00468ee8  682efca900           push 0xa9fc2e
// 00468eed  50                   push eax
// 00468eee  b801000000           mov eax, 1
// 00468ef3  64892500000000       mov dword ptr fs:[0], esp
// 00468efa  8405dc92e100         test byte ptr [0xe192dc], al
// 00468f00  7525                 jne 0x468f27
// 00468f02  0905dc92e100         or dword ptr [0xe192dc], eax
// 00468f08  b93092e100           mov ecx, 0xe19230
// 00468f0d  c744240800000000     mov dword ptr [esp + 8], 0
// 00468f15  e8a6f5ffff           call 0x4684c0
// 00468f1a  681024b100           push 0xb12410
// 00468f1f  e8d1a25100           call 0x9831f5
// 00468f24  83c404               add esp, 4
// 00468f27  8b0c24               mov ecx, dword ptr [esp]
// 00468f2a  b83092e100           mov eax, 0xe19230
// 00468f2f  64890d00000000       mov dword ptr fs:[0], ecx
// 00468f36  83c40c               add esp, 0xc
// 00468f39  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
