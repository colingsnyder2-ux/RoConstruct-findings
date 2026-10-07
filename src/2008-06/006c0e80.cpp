// roc 2008-06 006c0e80  unit: CXTPImageManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c0e80
//
// 006c0e80  6aff                 push -1
// 006c0e82  68ae077e00           push 0x7e07ae
// 006c0e87  64a100000000         mov eax, dword ptr fs:[0]
// 006c0e8d  50                   push eax
// 006c0e8e  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006c0e93  33c4                 xor eax, esp
// 006c0e95  50                   push eax
// 006c0e96  8d442404             lea eax, [esp + 4]
// 006c0e9a  64a300000000         mov dword ptr fs:[0], eax
// 006c0ea0  b801000000           mov eax, 1
// 006c0ea5  8405f4e09700         test byte ptr [0x97e0f4], al
// 006c0eab  7525                 jne 0x6c0ed2
// 006c0ead  0905f4e09700         or dword ptr [0x97e0f4], eax
// 006c0eb3  b978e09700           mov ecx, 0x97e078
// 006c0eb8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006c0ec0  e8dbc3ffff           call 0x6bd2a0
// 006c0ec5  6890168000           push 0x801690
// 006c0eca  e8e008feff           call 0x6a17af
// 006c0ecf  83c404               add esp, 4
// 006c0ed2  b878e09700           mov eax, 0x97e078
// 006c0ed7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c0edb  64890d00000000       mov dword ptr fs:[0], ecx
// 006c0ee2  59                   pop ecx
// 006c0ee3  83c40c               add esp, 0xc
// 006c0ee6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
