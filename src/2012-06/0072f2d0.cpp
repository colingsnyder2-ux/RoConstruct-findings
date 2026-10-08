// from server: 100% by auto
// roc 2012-06 0072f2d0  unit: RBX::GameSettings::W4UploadSetting::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0072f2d0
//
// 0072f2d0  64a100000000         mov eax, dword ptr fs:[0]
// 0072f2d6  6aff                 push -1
// 0072f2d8  686e03ac00           push 0xac036e
// 0072f2dd  50                   push eax
// 0072f2de  b801000000           mov eax, 1
// 0072f2e3  64892500000000       mov dword ptr fs:[0], esp
// 0072f2ea  84053c2fe300         test byte ptr [0xe32f3c], al
// 0072f2f0  7525                 jne 0x72f317
// 0072f2f2  09053c2fe300         or dword ptr [0xe32f3c], eax
// 0072f2f8  b9902ee300           mov ecx, 0xe32e90
// 0072f2fd  c744240800000000     mov dword ptr [esp + 8], 0
// 0072f305  e876fcffff           call 0x72ef80
// 0072f30a  68f07bb100           push 0xb17bf0
// 0072f30f  e8e13e2500           call 0x9831f5
// 0072f314  83c404               add esp, 4
// 0072f317  8b0c24               mov ecx, dword ptr [esp]
// 0072f31a  b8902ee300           mov eax, 0xe32e90
// 0072f31f  64890d00000000       mov dword ptr fs:[0], ecx
// 0072f326  83c40c               add esp, 0xc
// 0072f329  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
