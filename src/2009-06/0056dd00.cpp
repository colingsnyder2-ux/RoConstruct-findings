// from server: 100% by auto
// roc 2009-06 0056dd00  unit: G3D::Log  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056dd00
//
// 0056dd00  8b442404             mov eax, dword ptr [esp + 4]
// 0056dd04  56                   push esi
// 0056dd05  8b7054               mov esi, dword ptr [eax + 0x54]
// 0056dd08  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0056dd0b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056dd0e  57                   push edi
// 0056dd0f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0056dd13  03c7                 add eax, edi
// 0056dd15  3bc8                 cmp ecx, eax
// 0056dd17  7c02                 jl 0x56dd1b
// 0056dd19  8bc1                 mov eax, ecx
// 0056dd1b  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0056dd1e  894634               mov dword ptr [esi + 0x34], eax
// 0056dd21  7e09                 jle 0x56dd2c
// 0056dd23  51                   push ecx
// 0056dd24  57                   push edi
// 0056dd25  8bce                 mov ecx, esi
// 0056dd27  e8a4f40000           call 0x57d1d0
// 0056dd2c  8b5630               mov edx, dword ptr [esi + 0x30]
// 0056dd2f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056dd33  03563c               add edx, dword ptr [esi + 0x3c]
// 0056dd36  57                   push edi
// 0056dd37  51                   push ecx
// 0056dd38  52                   push edx
// 0056dd39  e802e1ffff           call 0x56be40
// 0056dd3e  017e3c               add dword ptr [esi + 0x3c], edi
// 0056dd41  83c40c               add esp, 0xc
// 0056dd44  5f                   pop edi
// 0056dd45  5e                   pop esi
// 0056dd46  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?png_write_data@G3D@@YAXPAUpng_struct_def@@PAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
