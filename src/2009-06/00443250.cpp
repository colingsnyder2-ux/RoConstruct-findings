// roc 2009-06 00443250  unit: RBX::CRenderSettings::W4MaterialQuality::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00443250
//
// 00443250  64a100000000         mov eax, dword ptr fs:[0]
// 00443256  6aff                 push -1
// 00443258  683e048500           push 0x85043e
// 0044325d  50                   push eax
// 0044325e  b801000000           mov eax, 1
// 00443263  64892500000000       mov dword ptr fs:[0], esp
// 0044326a  84056ca8a300         test byte ptr [0xa3a86c], al
// 00443270  7525                 jne 0x443297
// 00443272  09056ca8a300         or dword ptr [0xa3a86c], eax
// 00443278  b980a7a300           mov ecx, 0xa3a780
// 0044327d  c744240800000000     mov dword ptr [esp + 8], 0
// 00443285  e8d6f3ffff           call 0x442660
// 0044328a  6880478900           push 0x894780
// 0044328f  e867682d00           call 0x719afb
// 00443294  83c404               add esp, 4
// 00443297  8b0c24               mov ecx, dword ptr [esp]
// 0044329a  b880a7a300           mov eax, 0xa3a780
// 0044329f  64890d00000000       mov dword ptr fs:[0], ecx
// 004432a6  83c40c               add esp, 0xc
// 004432a9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
