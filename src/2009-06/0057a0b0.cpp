// roc 2009-06 0057a0b0  unit: G3D::LineSegment  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a0b0
//
// 0057a0b0  6aff                 push -1
// 0057a0b2  68c23f8700           push 0x873fc2
// 0057a0b7  64a100000000         mov eax, dword ptr fs:[0]
// 0057a0bd  50                   push eax
// 0057a0be  64892500000000       mov dword ptr fs:[0], esp
// 0057a0c5  83ec38               sub esp, 0x38
// 0057a0c8  8b442450             mov eax, dword ptr [esp + 0x50]
// 0057a0cc  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0057a0d0  56                   push esi
// 0057a0d1  50                   push eax
// 0057a0d2  51                   push ecx
// 0057a0d3  8d542428             lea edx, [esp + 0x28]
// 0057a0d7  52                   push edx
// 0057a0d8  e883f1ffff           call 0x579260
// 0057a0dd  83c40c               add esp, 0xc
// 0057a0e0  8d4c2404             lea ecx, [esp + 4]
// 0057a0e4  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0057a0ec  ff15c0e48900         call dword ptr [0x89e4c0]
// 0057a0f2  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0057a0f6  8d442404             lea eax, [esp + 4]
// 0057a0fa  50                   push eax
// 0057a0fb  8d4c2424             lea ecx, [esp + 0x24]
// 0057a0ff  51                   push ecx
// 0057a100  8bce                 mov ecx, esi
// 0057a102  c644244c01           mov byte ptr [esp + 0x4c], 1
// 0057a107  e8d4f6ffff           call 0x5797e0
// 0057a10c  8d542404             lea edx, [esp + 4]
// 0057a110  52                   push edx
// 0057a111  8bce                 mov ecx, esi
// 0057a113  e848fcffff           call 0x579d60
// 0057a118  8d4c2404             lea ecx, [esp + 4]
// 0057a11c  c644244400           mov byte ptr [esp + 0x44], 0
// 0057a121  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057a127  8d4c2420             lea ecx, [esp + 0x20]
// 0057a12b  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0057a133  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057a139  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0057a13d  5e                   pop esi
// 0057a13e  64890d00000000       mov dword ptr fs:[0], ecx
// 0057a145  83c444               add esp, 0x44
// 0057a148  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?vprintf@TextOutput@G3D@@QAAXPBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
