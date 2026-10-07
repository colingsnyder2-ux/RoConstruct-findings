// roc 2012-06 00630990  unit: G3D::BinaryInput  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00630990
//
// 00630990  51                   push ecx
// 00630991  a1ec26b200           mov eax, dword ptr [0xb226ec]
// 00630996  8b00                 mov eax, dword ptr [eax]
// 00630998  56                   push esi
// 00630999  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063099d  6a01                 push 1
// 0063099f  50                   push eax
// 006309a0  681ccdb500           push 0xb5cd1c
// 006309a5  8bce                 mov ecx, esi
// 006309a7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006309af  ff153c25b200         call dword ptr [0xb2253c]
// 006309b5  85c0                 test eax, eax
// 006309b7  7c1c                 jl 0x6309d5
// 006309b9  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006309bc  57                   push edi
// 006309bd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006309c1  2bc8                 sub ecx, eax
// 006309c3  51                   push ecx
// 006309c4  40                   inc eax
// 006309c5  50                   push eax
// 006309c6  57                   push edi
// 006309c7  8bce                 mov ecx, esi
// 006309c9  ff15e826b200         call dword ptr [0xb226e8]
// 006309cf  8bc7                 mov eax, edi
// 006309d1  5f                   pop edi
// 006309d2  5e                   pop esi
// 006309d3  59                   pop ecx
// 006309d4  c3                   ret 
// 006309d5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006309d9  68e83bb400           push 0xb43be8
// 006309de  8bce                 mov ecx, esi
// 006309e0  ff154826b200         call dword ptr [0xb22648]
// 006309e6  8bc6                 mov eax, esi
// 006309e8  5e                   pop esi
// 006309e9  59                   pop ecx
// 006309ea  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?filenameExt@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
