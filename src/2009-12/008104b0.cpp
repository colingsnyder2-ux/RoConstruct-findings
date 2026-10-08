// roc 2009-12 008104b0  unit: CXTPImageManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008104b0
//
// 008104b0  6aff                 push -1
// 008104b2  683ea09500           push 0x95a03e
// 008104b7  64a100000000         mov eax, dword ptr fs:[0]
// 008104bd  50                   push eax
// 008104be  a10052b600           mov eax, dword ptr [0xb65200]
// 008104c3  33c4                 xor eax, esp
// 008104c5  50                   push eax
// 008104c6  8d442404             lea eax, [esp + 4]
// 008104ca  64a300000000         mov dword ptr fs:[0], eax
// 008104d0  b801000000           mov eax, 1
// 008104d5  840534aeb900         test byte ptr [0xb9ae34], al
// 008104db  7525                 jne 0x810502
// 008104dd  090534aeb900         or dword ptr [0xb9ae34], eax
// 008104e3  b9b8adb900           mov ecx, 0xb9adb8
// 008104e8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 008104f0  e82bc3ffff           call 0x80c820
// 008104f5  6810a59800           push 0x98a510
// 008104fa  e82a44feff           call 0x7f4929
// 008104ff  83c404               add esp, 4
// 00810502  b8b8adb900           mov eax, 0xb9adb8
// 00810507  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0081050b  64890d00000000       mov dword ptr fs:[0], ecx
// 00810512  59                   pop ecx
// 00810513  83c40c               add esp, 0xc
// 00810516  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
