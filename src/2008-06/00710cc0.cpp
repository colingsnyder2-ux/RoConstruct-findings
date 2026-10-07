// roc 2008-06 00710cc0  unit: CXTAuxData  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00710cc0
//
// 00710cc0  6aff                 push -1
// 00710cc2  689e517e00           push 0x7e519e
// 00710cc7  64a100000000         mov eax, dword ptr fs:[0]
// 00710ccd  50                   push eax
// 00710cce  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 00710cd3  33c4                 xor eax, esp
// 00710cd5  50                   push eax
// 00710cd6  8d442404             lea eax, [esp + 4]
// 00710cda  64a300000000         mov dword ptr fs:[0], eax
// 00710ce0  b801000000           mov eax, 1
// 00710ce5  840584ea9700         test byte ptr [0x97ea84], al
// 00710ceb  7525                 jne 0x710d12
// 00710ced  090584ea9700         or dword ptr [0x97ea84], eax
// 00710cf3  b930e99700           mov ecx, 0x97e930
// 00710cf8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00710d00  e8ebfdffff           call 0x710af0
// 00710d05  6860188000           push 0x801860
// 00710d0a  e8a00af9ff           call 0x6a17af
// 00710d0f  83c404               add esp, 4
// 00710d12  b830e99700           mov eax, 0x97e930
// 00710d17  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00710d1b  64890d00000000       mov dword ptr fs:[0], ecx
// 00710d22  59                   pop ecx
// 00710d23  83c40c               add esp, 0xc
// 00710d26  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
