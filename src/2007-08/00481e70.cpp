// roc 2007-08 00481e70  unit: G3D::Win32Window  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00481e70
//
// 00481e70  a128d98b00           mov eax, dword ptr [0x8bd928]
// 00481e75  85c0                 test eax, eax
// 00481e77  56                   push esi
// 00481e78  8bf1                 mov esi, ecx
// 00481e7a  740b                 je 0x481e87
// 00481e7c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00481e7f  68f2840000           push 0x84f2
// 00481e84  51                   push ecx
// 00481e85  ffd0                 call eax
// 00481e87  c6462c01             mov byte ptr [esi + 0x2c], 1
// 00481e8b  5e                   pop esi
// 00481e8c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ?set@Milestone@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
