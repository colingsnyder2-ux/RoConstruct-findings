// roc 2011-06 00875cf0  unit: CXTAuxData  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00875cf0
//
// 00875cf0  6aff                 push -1
// 00875cf2  689e7da000           push 0xa07d9e
// 00875cf7  64a100000000         mov eax, dword ptr fs:[0]
// 00875cfd  50                   push eax
// 00875cfe  a12058c900           mov eax, dword ptr [0xc95820]
// 00875d03  33c4                 xor eax, esp
// 00875d05  50                   push eax
// 00875d06  8d442404             lea eax, [esp + 4]
// 00875d0a  64a300000000         mov dword ptr fs:[0], eax
// 00875d10  b801000000           mov eax, 1
// 00875d15  8405ec8bd100         test byte ptr [0xd18bec], al
// 00875d1b  7525                 jne 0x875d42
// 00875d1d  0905ec8bd100         or dword ptr [0xd18bec], eax
// 00875d23  b9988ad100           mov ecx, 0xd18a98
// 00875d28  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00875d30  e8ebfdffff           call 0x875b20
// 00875d35  6890fca300           push 0xa3fc90
// 00875d3a  e81e54f9ff           call 0x80b15d
// 00875d3f  83c404               add esp, 4
// 00875d42  b8988ad100           mov eax, 0xd18a98
// 00875d47  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00875d4b  64890d00000000       mov dword ptr fs:[0], ecx
// 00875d52  59                   pop ecx
// 00875d53  83c40c               add esp, 0xc
// 00875d56  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
