// from server: 100% by auto
// roc 2012-06 00529620  unit: RBX::VObjectValue::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00529620
//
// 00529620  64a100000000         mov eax, dword ptr fs:[0]
// 00529626  6aff                 push -1
// 00529628  689eb5aa00           push 0xaab59e
// 0052962d  50                   push eax
// 0052962e  b801000000           mov eax, 1
// 00529633  64892500000000       mov dword ptr fs:[0], esp
// 0052963a  8405c4e2e100         test byte ptr [0xe1e2c4], al
// 00529640  7525                 jne 0x529667
// 00529642  0905c4e2e100         or dword ptr [0xe1e2c4], eax
// 00529648  b918e2e100           mov ecx, 0xe1e218
// 0052964d  c744240800000000     mov dword ptr [esp + 8], 0
// 00529655  e856071600           call 0x689db0
// 0052965a  68f031b100           push 0xb131f0
// 0052965f  e8919b4500           call 0x9831f5
// 00529664  83c404               add esp, 4
// 00529667  8b0c24               mov ecx, dword ptr [esp]
// 0052966a  b818e2e100           mov eax, 0xe1e218
// 0052966f  64890d00000000       mov dword ptr fs:[0], ecx
// 00529676  83c40c               add esp, 0xc
// 00529679  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
