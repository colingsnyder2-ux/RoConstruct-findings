// roc 2012-06 00644920  unit: seg_00640000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00644920
//
// 00644920  56                   push esi
// 00644921  8b742408             mov esi, dword ptr [esp + 8]
// 00644925  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 00644929  741b                 je 0x644946
// 0064492b  8b06                 mov eax, dword ptr [esi]
// 0064492d  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00644934  8b0e                 mov ecx, dword ptr [esi]
// 00644936  8b5614               mov edx, dword ptr [esi + 0x14]
// 00644939  895118               mov dword ptr [ecx + 0x18], edx
// 0064493c  8b06                 mov eax, dword ptr [esi]
// 0064493e  8b08                 mov ecx, dword ptr [eax]
// 00644940  56                   push esi
// 00644941  ffd1                 call ecx
// 00644943  83c404               add esp, 4
// 00644946  807c240c00           cmp byte ptr [esp + 0xc], 0
// 0064494b  740b                 je 0x644958
// 0064494d  6a00                 push 0
// 0064494f  56                   push esi
// 00644950  e83bfeffff           call 0x644790
// 00644955  83c408               add esp, 8
// 00644958  8b16                 mov edx, dword ptr [esi]
// 0064495a  8b4210               mov eax, dword ptr [edx + 0x10]
// 0064495d  56                   push esi
// 0064495e  ffd0                 call eax
// 00644960  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00644963  8b5108               mov edx, dword ptr [ecx + 8]
// 00644966  56                   push esi
// 00644967  ffd2                 call edx
// 00644969  56                   push esi
// 0064496a  e821160100           call 0x655f90
// 0064496f  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00644975  8b08                 mov ecx, dword ptr [eax]
// 00644977  56                   push esi
// 00644978  ffd1                 call ecx
// 0064497a  33d2                 xor edx, edx
// 0064497c  83c410               add esp, 0x10
// 0064497f  3896b0000000         cmp byte ptr [esi + 0xb0], dl
// 00644985  c786d000000000000000 mov dword ptr [esi + 0xd0], 0
// 0064498f  0f95c2               setne dl
// 00644992  83c265               add edx, 0x65
// 00644995  895614               mov dword ptr [esi + 0x14], edx
// 00644998  5e                   pop esi
// 00644999  c3                   ret 
// library jpeg-6b/jcapistd.c (function _jpeg_start_compress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapistd.c
