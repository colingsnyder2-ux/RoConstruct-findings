// roc 2011-06 00557aa0  unit: seg_00550000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00557aa0
//
// 00557aa0  56                   push esi
// 00557aa1  8b742408             mov esi, dword ptr [esp + 8]
// 00557aa5  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 00557aa9  741b                 je 0x557ac6
// 00557aab  8b06                 mov eax, dword ptr [esi]
// 00557aad  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00557ab4  8b0e                 mov ecx, dword ptr [esi]
// 00557ab6  8b5614               mov edx, dword ptr [esi + 0x14]
// 00557ab9  895118               mov dword ptr [ecx + 0x18], edx
// 00557abc  8b06                 mov eax, dword ptr [esi]
// 00557abe  8b08                 mov ecx, dword ptr [eax]
// 00557ac0  56                   push esi
// 00557ac1  ffd1                 call ecx
// 00557ac3  83c404               add esp, 4
// 00557ac6  807c240c00           cmp byte ptr [esp + 0xc], 0
// 00557acb  740b                 je 0x557ad8
// 00557acd  6a00                 push 0
// 00557acf  56                   push esi
// 00557ad0  e83bfeffff           call 0x557910
// 00557ad5  83c408               add esp, 8
// 00557ad8  8b16                 mov edx, dword ptr [esi]
// 00557ada  8b4210               mov eax, dword ptr [edx + 0x10]
// 00557add  56                   push esi
// 00557ade  ffd0                 call eax
// 00557ae0  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00557ae3  8b5108               mov edx, dword ptr [ecx + 8]
// 00557ae6  56                   push esi
// 00557ae7  ffd2                 call edx
// 00557ae9  56                   push esi
// 00557aea  e8912d0100           call 0x56a880
// 00557aef  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00557af5  8b08                 mov ecx, dword ptr [eax]
// 00557af7  56                   push esi
// 00557af8  ffd1                 call ecx
// 00557afa  33d2                 xor edx, edx
// 00557afc  83c410               add esp, 0x10
// 00557aff  3896b0000000         cmp byte ptr [esi + 0xb0], dl
// 00557b05  c786d000000000000000 mov dword ptr [esi + 0xd0], 0
// 00557b0f  0f95c2               setne dl
// 00557b12  83c265               add edx, 0x65
// 00557b15  895614               mov dword ptr [esi + 0x14], edx
// 00557b18  5e                   pop esi
// 00557b19  c3                   ret 
// library jpeg-6b/jcapistd.c (function _jpeg_start_compress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapistd.c
