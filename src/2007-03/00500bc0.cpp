// roc 2007-03 00500bc0  unit: seg_00500000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00500bc0
//
// 00500bc0  83ec0c               sub esp, 0xc
// 00500bc3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00500bc7  8bc8                 mov ecx, eax
// 00500bc9  c1e910               shr ecx, 0x10
// 00500bcc  81e1ff000000         and ecx, 0xff
// 00500bd2  894c2414             mov dword ptr [esp + 0x14], ecx
// 00500bd6  db442414             fild dword ptr [esp + 0x14]
// 00500bda  8bd0                 mov edx, eax
// 00500bdc  c1ea08               shr edx, 8
// 00500bdf  81e2ff000000         and edx, 0xff
// 00500be5  d91c24               fstp dword ptr [esp]
// 00500be8  89542414             mov dword ptr [esp + 0x14], edx
// 00500bec  db442414             fild dword ptr [esp + 0x14]
// 00500bf0  8b542410             mov edx, dword ptr [esp + 0x10]
// 00500bf4  0fb6c0               movzx eax, al
// 00500bf7  89442414             mov dword ptr [esp + 0x14], eax
// 00500bfb  d95c2404             fstp dword ptr [esp + 4]
// 00500bff  51                   push ecx
// 00500c00  8d4c2404             lea ecx, [esp + 4]
// 00500c04  db442418             fild dword ptr [esp + 0x18]
// 00500c08  d95c240c             fstp dword ptr [esp + 0xc]
// 00500c0c  d905d4037a00         fld dword ptr [0x7a03d4]
// 00500c12  d91c24               fstp dword ptr [esp]
// 00500c15  52                   push edx
// 00500c16  e8d5feffff           call 0x500af0
// 00500c1b  8bc2                 mov eax, edx
// 00500c1d  83c40c               add esp, 0xc
// 00500c20  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Color3.cpp (function ?fromARGB@Color3@G3D@@SA?AV12@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Color3.cpp
