// roc 2010-06 00550d10  unit: G3D::Log  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00550d10
//
// 00550d10  8b442404             mov eax, dword ptr [esp + 4]
// 00550d14  56                   push esi
// 00550d15  8b7054               mov esi, dword ptr [eax + 0x54]
// 00550d18  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00550d1b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00550d1e  57                   push edi
// 00550d1f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00550d23  03c7                 add eax, edi
// 00550d25  3bc8                 cmp ecx, eax
// 00550d27  7c02                 jl 0x550d2b
// 00550d29  8bc1                 mov eax, ecx
// 00550d2b  3b4638               cmp eax, dword ptr [esi + 0x38]
// 00550d2e  894634               mov dword ptr [esi + 0x34], eax
// 00550d31  7e09                 jle 0x550d3c
// 00550d33  51                   push ecx
// 00550d34  57                   push edi
// 00550d35  8bce                 mov ecx, esi
// 00550d37  e8e4fb0000           call 0x560920
// 00550d3c  8b5630               mov edx, dword ptr [esi + 0x30]
// 00550d3f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00550d43  03563c               add edx, dword ptr [esi + 0x3c]
// 00550d46  57                   push edi
// 00550d47  51                   push ecx
// 00550d48  52                   push edx
// 00550d49  e802d8ffff           call 0x54e550
// 00550d4e  017e3c               add dword ptr [esi + 0x3c], edi
// 00550d51  83c40c               add esp, 0xc
// 00550d54  5f                   pop edi
// 00550d55  5e                   pop esi
// 00550d56  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?png_write_data@G3D@@YAXPAUpng_struct_def@@PAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
