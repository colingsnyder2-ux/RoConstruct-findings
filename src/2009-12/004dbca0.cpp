// roc 2009-12 004dbca0  unit: G3D::Win32Window  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dbca0
//
// 004dbca0  a150d9b700           mov eax, dword ptr [0xb7d950]
// 004dbca5  56                   push esi
// 004dbca6  8bf1                 mov esi, ecx
// 004dbca8  85c0                 test eax, eax
// 004dbcaa  740c                 je 0x4dbcb8
// 004dbcac  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004dbcaf  51                   push ecx
// 004dbcb0  ffd0                 call eax
// 004dbcb2  c6462c00             mov byte ptr [esi + 0x2c], 0
// 004dbcb6  5e                   pop esi
// 004dbcb7  c3                   ret 
// 004dbcb8  ff154cbb9800         call dword ptr [0x98bb4c]
// 004dbcbe  c6462c00             mov byte ptr [esi + 0x2c], 0
// 004dbcc2  5e                   pop esi
// 004dbcc3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ?wait@Milestone@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
