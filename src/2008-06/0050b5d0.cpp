// roc 2008-06 0050b5d0  unit: G3D::Log  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050b5d0
//
// 0050b5d0  8b442404             mov eax, dword ptr [esp + 4]
// 0050b5d4  56                   push esi
// 0050b5d5  8b7054               mov esi, dword ptr [eax + 0x54]
// 0050b5d8  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0050b5db  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050b5de  57                   push edi
// 0050b5df  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0050b5e3  03c7                 add eax, edi
// 0050b5e5  3bc8                 cmp ecx, eax
// 0050b5e7  7c02                 jl 0x50b5eb
// 0050b5e9  8bc1                 mov eax, ecx
// 0050b5eb  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0050b5ee  894634               mov dword ptr [esi + 0x34], eax
// 0050b5f1  7e09                 jle 0x50b5fc
// 0050b5f3  51                   push ecx
// 0050b5f4  57                   push edi
// 0050b5f5  8bce                 mov ecx, esi
// 0050b5f7  e834e20000           call 0x519830
// 0050b5fc  8b5630               mov edx, dword ptr [esi + 0x30]
// 0050b5ff  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050b603  03563c               add edx, dword ptr [esi + 0x3c]
// 0050b606  57                   push edi
// 0050b607  51                   push ecx
// 0050b608  52                   push edx
// 0050b609  e8d2d3ffff           call 0x5089e0
// 0050b60e  017e3c               add dword ptr [esi + 0x3c], edi
// 0050b611  83c40c               add esp, 0xc
// 0050b614  5f                   pop edi
// 0050b615  5e                   pop esi
// 0050b616  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?png_write_data@G3D@@YAXPAUpng_struct_def@@PAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
