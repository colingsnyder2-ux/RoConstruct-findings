// from server: 100% by auto
// roc 2007-08 0050b4c0  unit: seg_00500000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050b4c0
//
// 0050b4c0  83ec0c               sub esp, 0xc
// 0050b4c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0050b4c7  8bc8                 mov ecx, eax
// 0050b4c9  c1e910               shr ecx, 0x10
// 0050b4cc  81e1ff000000         and ecx, 0xff
// 0050b4d2  894c2414             mov dword ptr [esp + 0x14], ecx
// 0050b4d6  db442414             fild dword ptr [esp + 0x14]
// 0050b4da  8bd0                 mov edx, eax
// 0050b4dc  c1ea08               shr edx, 8
// 0050b4df  81e2ff000000         and edx, 0xff
// 0050b4e5  d91c24               fstp dword ptr [esp]
// 0050b4e8  89542414             mov dword ptr [esp + 0x14], edx
// 0050b4ec  db442414             fild dword ptr [esp + 0x14]
// 0050b4f0  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050b4f4  0fb6c0               movzx eax, al
// 0050b4f7  89442414             mov dword ptr [esp + 0x14], eax
// 0050b4fb  d95c2404             fstp dword ptr [esp + 4]
// 0050b4ff  51                   push ecx
// 0050b500  8d4c2404             lea ecx, [esp + 4]
// 0050b504  db442418             fild dword ptr [esp + 0x18]
// 0050b508  d95c240c             fstp dword ptr [esp + 0xc]
// 0050b50c  d905e40b7a00         fld dword ptr [0x7a0be4]
// 0050b512  d91c24               fstp dword ptr [esp]
// 0050b515  52                   push edx
// 0050b516  e8d5feffff           call 0x50b3f0
// 0050b51b  8bc2                 mov eax, edx
// 0050b51d  83c40c               add esp, 0xc
// 0050b520  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?fromARGB@Color3@G3D@@SA?AV12@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
