// roc 2009-06 0059de60  unit: seg_00590000  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059de60
//
// 0059de60  53                   push ebx
// 0059de61  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0059de65  55                   push ebp
// 0059de66  56                   push esi
// 0059de67  8bb38c010000         mov esi, dword ptr [ebx + 0x18c]
// 0059de6d  837e1800             cmp dword ptr [esi + 0x18], 0
// 0059de71  57                   push edi
// 0059de72  751d                 jne 0x59de91
// 0059de74  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0059de77  8b5614               mov edx, dword ptr [esi + 0x14]
// 0059de7a  8b4304               mov eax, dword ptr [ebx + 4]
// 0059de7d  6a00                 push 0
// 0059de7f  51                   push ecx
// 0059de80  8b4e08               mov ecx, dword ptr [esi + 8]
// 0059de83  52                   push edx
// 0059de84  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0059de87  51                   push ecx
// 0059de88  53                   push ebx
// 0059de89  ffd2                 call edx
// 0059de8b  83c414               add esp, 0x14
// 0059de8e  89460c               mov dword ptr [esi + 0xc], eax
// 0059de91  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0059de95  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0059de98  8b4d00               mov ecx, dword ptr [ebp]
// 0059de9b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059de9f  2b7e18               sub edi, dword ptr [esi + 0x18]
// 0059dea2  2bc1                 sub eax, ecx
// 0059dea4  3bf8                 cmp edi, eax
// 0059dea6  7602                 jbe 0x59deaa
// 0059dea8  8bf8                 mov edi, eax
// 0059deaa  8b4360               mov eax, dword ptr [ebx + 0x60]
// 0059dead  2b4614               sub eax, dword ptr [esi + 0x14]
// 0059deb0  3bf8                 cmp edi, eax
// 0059deb2  7602                 jbe 0x59deb6
// 0059deb4  8bf8                 mov edi, eax
// 0059deb6  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059deba  8b83a8010000         mov eax, dword ptr [ebx + 0x1a8]
// 0059dec0  8b4004               mov eax, dword ptr [eax + 4]
// 0059dec3  8d0c8a               lea ecx, [edx + ecx*4]
// 0059dec6  8b5618               mov edx, dword ptr [esi + 0x18]
// 0059dec9  57                   push edi
// 0059deca  51                   push ecx
// 0059decb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0059dece  8d1491               lea edx, [ecx + edx*4]
// 0059ded1  52                   push edx
// 0059ded2  53                   push ebx
// 0059ded3  ffd0                 call eax
// 0059ded5  017d00               add dword ptr [ebp], edi
// 0059ded8  017e18               add dword ptr [esi + 0x18], edi
// 0059dedb  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0059dede  8b4610               mov eax, dword ptr [esi + 0x10]
// 0059dee1  83c410               add esp, 0x10
// 0059dee4  3bc8                 cmp ecx, eax
// 0059dee6  720a                 jb 0x59def2
// 0059dee8  014614               add dword ptr [esi + 0x14], eax
// 0059deeb  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0059def2  5f                   pop edi
// 0059def3  5e                   pop esi
// 0059def4  5d                   pop ebp
// 0059def5  5b                   pop ebx
// 0059def6  c3                   ret 
// library jpeg-6b/jdpostct.c (function _post_process_2pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
