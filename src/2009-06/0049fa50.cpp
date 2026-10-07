// roc 2009-06 0049fa50  unit: G3D::VARArea  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049fa50
//
// 0049fa50  83ec10               sub esp, 0x10
// 0049fa53  8b442418             mov eax, dword ptr [esp + 0x18]
// 0049fa57  d900                 fld dword ptr [eax]
// 0049fa59  56                   push esi
// 0049fa5a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0049fa5e  d95c2404             fstp dword ptr [esp + 4]
// 0049fa62  d94004               fld dword ptr [eax + 4]
// 0049fa65  d95c2408             fstp dword ptr [esp + 8]
// 0049fa69  d94008               fld dword ptr [eax + 8]
// 0049fa6c  8d442404             lea eax, [esp + 4]
// 0049fa70  d95c240c             fstp dword ptr [esp + 0xc]
// 0049fa74  50                   push eax
// 0049fa75  d9e8                 fld1 
// 0049fa77  56                   push esi
// 0049fa78  d95c2418             fstp dword ptr [esp + 0x18]
// 0049fa7c  e8dfd90000           call 0x4ad460
// 0049fa81  83c408               add esp, 8
// 0049fa84  8bc6                 mov eax, esi
// 0049fa86  5e                   pop esi
// 0049fa87  83c410               add esp, 0x10
// 0049fa8a  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?project@RenderDevice@G3D@@QBE?AVVector4@2@ABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
