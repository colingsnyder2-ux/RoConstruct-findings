// roc 2012-06 007429f0  unit: RBX::PluginManager  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007429f0
//
// 007429f0  64a100000000         mov eax, dword ptr fs:[0]
// 007429f6  6aff                 push -1
// 007429f8  685e13ac00           push 0xac135e
// 007429fd  50                   push eax
// 007429fe  b801000000           mov eax, 1
// 00742a03  64892500000000       mov dword ptr fs:[0], esp
// 00742a0a  84051456e300         test byte ptr [0xe35614], al
// 00742a10  7525                 jne 0x742a37
// 00742a12  09051456e300         or dword ptr [0xe35614], eax
// 00742a18  b9a855e300           mov ecx, 0xe355a8
// 00742a1d  c744240800000000     mov dword ptr [esp + 8], 0
// 00742a25  e8a6e1ffff           call 0x740bd0
// 00742a2a  686082b100           push 0xb18260
// 00742a2f  e8c1072400           call 0x9831f5
// 00742a34  83c404               add esp, 4
// 00742a37  8b0c24               mov ecx, dword ptr [esp]
// 00742a3a  b8a855e300           mov eax, 0xe355a8
// 00742a3f  64890d00000000       mov dword ptr fs:[0], ecx
// 00742a46  83c40c               add esp, 0xc
// 00742a49  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
