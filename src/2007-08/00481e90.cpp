// roc 2007-08 00481e90  unit: G3D::Win32Window  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00481e90
//
// 00481e90  a12cd98b00           mov eax, dword ptr [0x8bd92c]
// 00481e95  85c0                 test eax, eax
// 00481e97  56                   push esi
// 00481e98  8bf1                 mov esi, ecx
// 00481e9a  740c                 je 0x481ea8
// 00481e9c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00481e9f  51                   push ecx
// 00481ea0  ffd0                 call eax
// 00481ea2  c6462c00             mov byte ptr [esi + 0x2c], 0
// 00481ea6  5e                   pop esi
// 00481ea7  c3                   ret 
// 00481ea8  ff1554ea7700         call dword ptr [0x77ea54]
// 00481eae  c6462c00             mov byte ptr [esi + 0x2c], 0
// 00481eb2  5e                   pop esi
// 00481eb3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ?wait@Milestone@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
