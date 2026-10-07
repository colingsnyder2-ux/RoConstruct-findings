// roc 2009-06 00589030  unit: seg_00580000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00589030
//
// 00589030  56                   push esi
// 00589031  8b742408             mov esi, dword ptr [esp + 8]
// 00589035  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 00589039  741b                 je 0x589056
// 0058903b  8b06                 mov eax, dword ptr [esi]
// 0058903d  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00589044  8b0e                 mov ecx, dword ptr [esi]
// 00589046  8b5614               mov edx, dword ptr [esi + 0x14]
// 00589049  895118               mov dword ptr [ecx + 0x18], edx
// 0058904c  8b06                 mov eax, dword ptr [esi]
// 0058904e  8b08                 mov ecx, dword ptr [eax]
// 00589050  56                   push esi
// 00589051  ffd1                 call ecx
// 00589053  83c404               add esp, 4
// 00589056  807c240c00           cmp byte ptr [esp + 0xc], 0
// 0058905b  740b                 je 0x589068
// 0058905d  6a00                 push 0
// 0058905f  56                   push esi
// 00589060  e83bfeffff           call 0x588ea0
// 00589065  83c408               add esp, 8
// 00589068  8b16                 mov edx, dword ptr [esi]
// 0058906a  8b4210               mov eax, dword ptr [edx + 0x10]
// 0058906d  56                   push esi
// 0058906e  ffd0                 call eax
// 00589070  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00589073  8b5108               mov edx, dword ptr [ecx + 8]
// 00589076  56                   push esi
// 00589077  ffd2                 call edx
// 00589079  56                   push esi
// 0058907a  e8e1f20000           call 0x598360
// 0058907f  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00589085  8b08                 mov ecx, dword ptr [eax]
// 00589087  56                   push esi
// 00589088  ffd1                 call ecx
// 0058908a  33d2                 xor edx, edx
// 0058908c  83c410               add esp, 0x10
// 0058908f  3896b0000000         cmp byte ptr [esi + 0xb0], dl
// 00589095  c786d000000000000000 mov dword ptr [esi + 0xd0], 0
// 0058909f  0f95c2               setne dl
// 005890a2  83c265               add edx, 0x65
// 005890a5  895614               mov dword ptr [esi + 0x14], edx
// 005890a8  5e                   pop esi
// 005890a9  c3                   ret 
// library jpeg-6b/jcapistd.c (function _jpeg_start_compress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapistd.c
