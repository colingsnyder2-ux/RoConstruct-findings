// roc 2009-12 005f72c0  unit: G3D::BinaryInput  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f72c0
//
// 005f72c0  83ec0c               sub esp, 0xc
// 005f72c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005f72c7  8bc8                 mov ecx, eax
// 005f72c9  c1e910               shr ecx, 0x10
// 005f72cc  81e1ff000000         and ecx, 0xff
// 005f72d2  894c2414             mov dword ptr [esp + 0x14], ecx
// 005f72d6  db442414             fild dword ptr [esp + 0x14]
// 005f72da  8bd0                 mov edx, eax
// 005f72dc  c1ea08               shr edx, 8
// 005f72df  81e2ff000000         and edx, 0xff
// 005f72e5  d91c24               fstp dword ptr [esp]
// 005f72e8  89542414             mov dword ptr [esp + 0x14], edx
// 005f72ec  db442414             fild dword ptr [esp + 0x14]
// 005f72f0  8b542410             mov edx, dword ptr [esp + 0x10]
// 005f72f4  0fb6c0               movzx eax, al
// 005f72f7  89442414             mov dword ptr [esp + 0x14], eax
// 005f72fb  d95c2404             fstp dword ptr [esp + 4]
// 005f72ff  51                   push ecx
// 005f7300  8d4c2404             lea ecx, [esp + 4]
// 005f7304  db442418             fild dword ptr [esp + 0x18]
// 005f7308  d95c240c             fstp dword ptr [esp + 0xc]
// 005f730c  d90560239b00         fld dword ptr [0x9b2360]
// 005f7312  d91c24               fstp dword ptr [esp]
// 005f7315  52                   push edx
// 005f7316  e8b5feffff           call 0x5f71d0
// 005f731b  8bc2                 mov eax, edx
// 005f731d  83c40c               add esp, 0xc
// 005f7320  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?fromARGB@Color3@G3D@@SA?AV12@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
