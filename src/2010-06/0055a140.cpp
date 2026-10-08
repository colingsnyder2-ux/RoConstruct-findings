// from server: 100% by auto
// roc 2010-06 0055a140  unit: G3D::BinaryInput  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055a140
//
// 0055a140  83ec0c               sub esp, 0xc
// 0055a143  8b442414             mov eax, dword ptr [esp + 0x14]
// 0055a147  8bc8                 mov ecx, eax
// 0055a149  c1e910               shr ecx, 0x10
// 0055a14c  81e1ff000000         and ecx, 0xff
// 0055a152  894c2414             mov dword ptr [esp + 0x14], ecx
// 0055a156  db442414             fild dword ptr [esp + 0x14]
// 0055a15a  8bd0                 mov edx, eax
// 0055a15c  c1ea08               shr edx, 8
// 0055a15f  81e2ff000000         and edx, 0xff
// 0055a165  d91c24               fstp dword ptr [esp]
// 0055a168  89542414             mov dword ptr [esp + 0x14], edx
// 0055a16c  db442414             fild dword ptr [esp + 0x14]
// 0055a170  8b542410             mov edx, dword ptr [esp + 0x10]
// 0055a174  0fb6c0               movzx eax, al
// 0055a177  89442414             mov dword ptr [esp + 0x14], eax
// 0055a17b  d95c2404             fstp dword ptr [esp + 4]
// 0055a17f  51                   push ecx
// 0055a180  8d4c2404             lea ecx, [esp + 4]
// 0055a184  db442418             fild dword ptr [esp + 0x18]
// 0055a188  d95c240c             fstp dword ptr [esp + 0xc]
// 0055a18c  d90548f4a100         fld dword ptr [0xa1f448]
// 0055a192  d91c24               fstp dword ptr [esp]
// 0055a195  52                   push edx
// 0055a196  e8b5feffff           call 0x55a050
// 0055a19b  8bc2                 mov eax, edx
// 0055a19d  83c40c               add esp, 0xc
// 0055a1a0  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?fromARGB@Color3@G3D@@SA?AV12@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
