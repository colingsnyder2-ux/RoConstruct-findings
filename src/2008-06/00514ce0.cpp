// roc 2008-06 00514ce0  unit: seg_00510000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514ce0
//
// 00514ce0  83ec0c               sub esp, 0xc
// 00514ce3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00514ce7  8bc8                 mov ecx, eax
// 00514ce9  c1e910               shr ecx, 0x10
// 00514cec  81e1ff000000         and ecx, 0xff
// 00514cf2  894c2414             mov dword ptr [esp + 0x14], ecx
// 00514cf6  db442414             fild dword ptr [esp + 0x14]
// 00514cfa  8bd0                 mov edx, eax
// 00514cfc  c1ea08               shr edx, 8
// 00514cff  81e2ff000000         and edx, 0xff
// 00514d05  d91c24               fstp dword ptr [esp]
// 00514d08  89542414             mov dword ptr [esp + 0x14], edx
// 00514d0c  db442414             fild dword ptr [esp + 0x14]
// 00514d10  8b542410             mov edx, dword ptr [esp + 0x10]
// 00514d14  0fb6c0               movzx eax, al
// 00514d17  89442414             mov dword ptr [esp + 0x14], eax
// 00514d1b  d95c2404             fstp dword ptr [esp + 4]
// 00514d1f  51                   push ecx
// 00514d20  8d4c2404             lea ecx, [esp + 4]
// 00514d24  db442418             fild dword ptr [esp + 0x18]
// 00514d28  d95c240c             fstp dword ptr [esp + 0xc]
// 00514d2c  d905bc888200         fld dword ptr [0x8288bc]
// 00514d32  d91c24               fstp dword ptr [esp]
// 00514d35  52                   push edx
// 00514d36  e805ffffff           call 0x514c40
// 00514d3b  8bc2                 mov eax, edx
// 00514d3d  83c40c               add esp, 0xc
// 00514d40  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?fromARGB@Color3@G3D@@SA?AV12@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
