// roc 2009-06 00576820  unit: G3D::BinaryInput  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00576820
//
// 00576820  83ec0c               sub esp, 0xc
// 00576823  8b442414             mov eax, dword ptr [esp + 0x14]
// 00576827  8bc8                 mov ecx, eax
// 00576829  c1e910               shr ecx, 0x10
// 0057682c  81e1ff000000         and ecx, 0xff
// 00576832  894c2414             mov dword ptr [esp + 0x14], ecx
// 00576836  db442414             fild dword ptr [esp + 0x14]
// 0057683a  8bd0                 mov edx, eax
// 0057683c  c1ea08               shr edx, 8
// 0057683f  81e2ff000000         and edx, 0xff
// 00576845  d91c24               fstp dword ptr [esp]
// 00576848  89542414             mov dword ptr [esp + 0x14], edx
// 0057684c  db442414             fild dword ptr [esp + 0x14]
// 00576850  8b542410             mov edx, dword ptr [esp + 0x10]
// 00576854  0fb6c0               movzx eax, al
// 00576857  89442414             mov dword ptr [esp + 0x14], eax
// 0057685b  d95c2404             fstp dword ptr [esp + 4]
// 0057685f  51                   push ecx
// 00576860  8d4c2404             lea ecx, [esp + 4]
// 00576864  db442418             fild dword ptr [esp + 0x18]
// 00576868  d95c240c             fstp dword ptr [esp + 0xc]
// 0057686c  d90570b88c00         fld dword ptr [0x8cb870]
// 00576872  d91c24               fstp dword ptr [esp]
// 00576875  52                   push edx
// 00576876  e8c5feffff           call 0x576740
// 0057687b  8bc2                 mov eax, edx
// 0057687d  83c40c               add esp, 0xc
// 00576880  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?fromARGB@Color3@G3D@@SA?AV12@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
