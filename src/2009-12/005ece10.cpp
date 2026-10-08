// roc 2009-12 005ece10  unit: G3D::Log  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ece10
//
// 005ece10  8b442404             mov eax, dword ptr [esp + 4]
// 005ece14  56                   push esi
// 005ece15  8b7054               mov esi, dword ptr [eax + 0x54]
// 005ece18  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005ece1b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ece1e  57                   push edi
// 005ece1f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005ece23  03c7                 add eax, edi
// 005ece25  3bc8                 cmp ecx, eax
// 005ece27  7c02                 jl 0x5ece2b
// 005ece29  8bc1                 mov eax, ecx
// 005ece2b  3b4638               cmp eax, dword ptr [esi + 0x38]
// 005ece2e  894634               mov dword ptr [esi + 0x34], eax
// 005ece31  7e09                 jle 0x5ece3c
// 005ece33  51                   push ecx
// 005ece34  57                   push edi
// 005ece35  8bce                 mov ecx, esi
// 005ece37  e874210100           call 0x5fefb0
// 005ece3c  8b5630               mov edx, dword ptr [esi + 0x30]
// 005ece3f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ece43  03563c               add edx, dword ptr [esi + 0x3c]
// 005ece46  57                   push edi
// 005ece47  51                   push ecx
// 005ece48  52                   push edx
// 005ece49  e822e1ffff           call 0x5eaf70
// 005ece4e  017e3c               add dword ptr [esi + 0x3c], edi
// 005ece51  83c40c               add esp, 0xc
// 005ece54  5f                   pop edi
// 005ece55  5e                   pop esi
// 005ece56  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?png_write_data@G3D@@YAXPAUpng_struct_def@@PAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
