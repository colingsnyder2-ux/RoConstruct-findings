// roc 2011-06 00550f90  unit: seg_00550000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00550f90
//
// 00550f90  51                   push ecx
// 00550f91  a12c04a400           mov eax, dword ptr [0xa4042c]
// 00550f96  8b00                 mov eax, dword ptr [eax]
// 00550f98  56                   push esi
// 00550f99  8b742410             mov esi, dword ptr [esp + 0x10]
// 00550f9d  6a01                 push 1
// 00550f9f  50                   push eax
// 00550fa0  689c5da700           push 0xa75d9c
// 00550fa5  8bce                 mov ecx, esi
// 00550fa7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00550faf  ff156005a400         call dword ptr [0xa40560]
// 00550fb5  85c0                 test eax, eax
// 00550fb7  7c1c                 jl 0x550fd5
// 00550fb9  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00550fbc  57                   push edi
// 00550fbd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00550fc1  2bc8                 sub ecx, eax
// 00550fc3  51                   push ecx
// 00550fc4  40                   inc eax
// 00550fc5  50                   push eax
// 00550fc6  57                   push edi
// 00550fc7  8bce                 mov ecx, esi
// 00550fc9  ff153004a400         call dword ptr [0xa40430]
// 00550fcf  8bc7                 mov eax, edi
// 00550fd1  5f                   pop edi
// 00550fd2  5e                   pop esi
// 00550fd3  59                   pop ecx
// 00550fd4  c3                   ret 
// 00550fd5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00550fd9  68cabea500           push 0xa5beca
// 00550fde  8bce                 mov ecx, esi
// 00550fe0  ff15c404a400         call dword ptr [0xa404c4]
// 00550fe6  8bc6                 mov eax, esi
// 00550fe8  5e                   pop esi
// 00550fe9  59                   pop ecx
// 00550fea  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?filenameExt@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
