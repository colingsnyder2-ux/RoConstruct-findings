// roc 2011-06 00826110  unit: CXTPImageManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00826110
//
// 00826110  6aff                 push -1
// 00826112  689e36a000           push 0xa0369e
// 00826117  64a100000000         mov eax, dword ptr fs:[0]
// 0082611d  50                   push eax
// 0082611e  a12058c900           mov eax, dword ptr [0xc95820]
// 00826123  33c4                 xor eax, esp
// 00826125  50                   push eax
// 00826126  8d442404             lea eax, [esp + 4]
// 0082612a  64a300000000         mov dword ptr fs:[0], eax
// 00826130  b801000000           mov eax, 1
// 00826135  84054c82d100         test byte ptr [0xd1824c], al
// 0082613b  7525                 jne 0x826162
// 0082613d  09054c82d100         or dword ptr [0xd1824c], eax
// 00826143  b9d081d100           mov ecx, 0xd181d0
// 00826148  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00826150  e84bc8ffff           call 0x8229a0
// 00826155  68c0faa300           push 0xa3fac0
// 0082615a  e8fe4ffeff           call 0x80b15d
// 0082615f  83c404               add esp, 4
// 00826162  b8d081d100           mov eax, 0xd181d0
// 00826167  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0082616b  64890d00000000       mov dword ptr fs:[0], ecx
// 00826172  59                   pop ecx
// 00826173  83c40c               add esp, 0xc
// 00826176  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
