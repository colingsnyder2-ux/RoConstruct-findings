// roc 2007-03 004735c0  unit: seg_00470000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004735c0
//
// 004735c0  8bc1                 mov eax, ecx
// 004735c2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004735c6  d901                 fld dword ptr [ecx]
// 004735c8  d918                 fstp dword ptr [eax]
// 004735ca  d94104               fld dword ptr [ecx + 4]
// 004735cd  d95804               fstp dword ptr [eax + 4]
// 004735d0  d94108               fld dword ptr [ecx + 8]
// 004735d3  d95808               fstp dword ptr [eax + 8]
// 004735d6  d9410c               fld dword ptr [ecx + 0xc]
// 004735d9  d9580c               fstp dword ptr [eax + 0xc]
// 004735dc  d94110               fld dword ptr [ecx + 0x10]
// 004735df  d95810               fstp dword ptr [eax + 0x10]
// 004735e2  d94114               fld dword ptr [ecx + 0x14]
// 004735e5  d95814               fstp dword ptr [eax + 0x14]
// 004735e8  d94118               fld dword ptr [ecx + 0x18]
// 004735eb  d95818               fstp dword ptr [eax + 0x18]
// 004735ee  dd4120               fld qword ptr [ecx + 0x20]
// 004735f1  dd5820               fstp qword ptr [eax + 0x20]
// 004735f4  dd4128               fld qword ptr [ecx + 0x28]
// 004735f7  dd5828               fstp qword ptr [eax + 0x28]
// 004735fa  dd4130               fld qword ptr [ecx + 0x30]
// 004735fd  dd5830               fstp qword ptr [eax + 0x30]
// 00473600  dd4138               fld qword ptr [ecx + 0x38]
// 00473603  dd5838               fstp qword ptr [eax + 0x38]
// 00473606  d94140               fld dword ptr [ecx + 0x40]
// 00473609  d95840               fstp dword ptr [eax + 0x40]
// 0047360c  d94144               fld dword ptr [ecx + 0x44]
// 0047360f  d95844               fstp dword ptr [eax + 0x44]
// 00473612  d94148               fld dword ptr [ecx + 0x48]
// 00473615  d95848               fstp dword ptr [eax + 0x48]
// 00473618  0fb6514c             movzx edx, byte ptr [ecx + 0x4c]
// 0047361c  88504c               mov byte ptr [eax + 0x4c], dl
// 0047361f  0fb6514d             movzx edx, byte ptr [ecx + 0x4d]
// 00473623  88504d               mov byte ptr [eax + 0x4d], dl
// 00473626  8a494e               mov cl, byte ptr [ecx + 0x4e]
// 00473629  88484e               mov byte ptr [eax + 0x4e], cl
// 0047362c  c20400               ret 4
// library rbxgs-render/Chunk.cpp (function ??4GLight@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Chunk.cpp
