// roc 2008-06 00524dd0  unit: seg_00520000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00524dd0
//
// 00524dd0  56                   push esi
// 00524dd1  8b742408             mov esi, dword ptr [esp + 8]
// 00524dd5  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 00524dd9  741b                 je 0x524df6
// 00524ddb  8b06                 mov eax, dword ptr [esi]
// 00524ddd  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00524de4  8b0e                 mov ecx, dword ptr [esi]
// 00524de6  8b5614               mov edx, dword ptr [esi + 0x14]
// 00524de9  895118               mov dword ptr [ecx + 0x18], edx
// 00524dec  8b06                 mov eax, dword ptr [esi]
// 00524dee  8b08                 mov ecx, dword ptr [eax]
// 00524df0  56                   push esi
// 00524df1  ffd1                 call ecx
// 00524df3  83c404               add esp, 4
// 00524df6  807c240c00           cmp byte ptr [esp + 0xc], 0
// 00524dfb  740b                 je 0x524e08
// 00524dfd  6a00                 push 0
// 00524dff  56                   push esi
// 00524e00  e83bfeffff           call 0x524c40
// 00524e05  83c408               add esp, 8
// 00524e08  8b16                 mov edx, dword ptr [esi]
// 00524e0a  8b4210               mov eax, dword ptr [edx + 0x10]
// 00524e0d  56                   push esi
// 00524e0e  ffd0                 call eax
// 00524e10  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00524e13  8b5108               mov edx, dword ptr [ecx + 8]
// 00524e16  56                   push esi
// 00524e17  ffd2                 call edx
// 00524e19  56                   push esi
// 00524e1a  e8b1b60000           call 0x5304d0
// 00524e1f  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00524e25  8b08                 mov ecx, dword ptr [eax]
// 00524e27  56                   push esi
// 00524e28  ffd1                 call ecx
// 00524e2a  33d2                 xor edx, edx
// 00524e2c  83c410               add esp, 0x10
// 00524e2f  3896b0000000         cmp byte ptr [esi + 0xb0], dl
// 00524e35  c786d000000000000000 mov dword ptr [esi + 0xd0], 0
// 00524e3f  0f95c2               setne dl
// 00524e42  83c265               add edx, 0x65
// 00524e45  895614               mov dword ptr [esi + 0x14], edx
// 00524e48  5e                   pop esi
// 00524e49  c3                   ret 
// library jpeg-6b/jcapistd.c (function _jpeg_start_compress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapistd.c
