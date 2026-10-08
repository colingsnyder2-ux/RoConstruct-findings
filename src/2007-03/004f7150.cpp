// roc 2007-03 004f7150  unit: seg_004f0000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f7150
//
// 004f7150  8b442404             mov eax, dword ptr [esp + 4]
// 004f7154  56                   push esi
// 004f7155  8b7054               mov esi, dword ptr [eax + 0x54]
// 004f7158  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004f715b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f715e  57                   push edi
// 004f715f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004f7163  03c7                 add eax, edi
// 004f7165  3bc8                 cmp ecx, eax
// 004f7167  7c02                 jl 0x4f716b
// 004f7169  8bc1                 mov eax, ecx
// 004f716b  3b4638               cmp eax, dword ptr [esi + 0x38]
// 004f716e  894634               mov dword ptr [esi + 0x34], eax
// 004f7171  7e09                 jle 0x4f717c
// 004f7173  51                   push ecx
// 004f7174  57                   push edi
// 004f7175  8bce                 mov ecx, esi
// 004f7177  e814670000           call 0x4fd890
// 004f717c  8b5630               mov edx, dword ptr [esi + 0x30]
// 004f717f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f7183  03563c               add edx, dword ptr [esi + 0x3c]
// 004f7186  57                   push edi
// 004f7187  51                   push ecx
// 004f7188  52                   push edx
// 004f7189  e822cfffff           call 0x4f40b0
// 004f718e  017e3c               add dword ptr [esi + 0x3c], edi
// 004f7191  83c40c               add esp, 0xc
// 004f7194  5f                   pop edi
// 004f7195  5e                   pop esi
// 004f7196  c3                   ret 
// library rbxgs-g3d/G3Dcpp\GImage_png.cpp (function ?png_write_data@G3D@@YAXPAUpng_struct_def@@PAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage_png.cpp
