// roc 2007-03 0073a7c0  unit: seg_00730000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0073a7c0
//
// 0073a7c0  56                   push esi
// 0073a7c1  57                   push edi
// 0073a7c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0073a7c6  d907                 fld dword ptr [edi]
// 0073a7c8  83ec08               sub esp, 8
// 0073a7cb  dc05584f7900         fadd qword ptr [0x794f58]
// 0073a7d1  8bf1                 mov esi, ecx
// 0073a7d3  dd1c24               fstp qword ptr [esp]
// 0073a7d6  e8ed4deeff           call 0x61f5c8
// 0073a7db  e8204aeeff           call 0x61f200
// 0073a7e0  668906               mov word ptr [esi], ax
// 0073a7e3  d94704               fld dword ptr [edi + 4]
// 0073a7e6  dc05584f7900         fadd qword ptr [0x794f58]
// 0073a7ec  dd1c24               fstp qword ptr [esp]
// 0073a7ef  e8d44deeff           call 0x61f5c8
// 0073a7f4  e8074aeeff           call 0x61f200
// 0073a7f9  66894602             mov word ptr [esi + 2], ax
// 0073a7fd  d94708               fld dword ptr [edi + 8]
// 0073a800  dc05584f7900         fadd qword ptr [0x794f58]
// 0073a806  dd1c24               fstp qword ptr [esp]
// 0073a809  e8ba4deeff           call 0x61f5c8
// 0073a80e  83c408               add esp, 8
// 0073a811  e8ea49eeff           call 0x61f200
// 0073a816  66894604             mov word ptr [esi + 4], ax
// 0073a81a  5f                   pop edi
// 0073a81b  8bc6                 mov eax, esi
// 0073a81d  5e                   pop esi
// 0073a81e  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Vector3int16.cpp (function ??0Vector3int16@G3D@@QAE@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Vector3int16.cpp
