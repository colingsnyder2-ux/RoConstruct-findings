// from server: 100% by auto
// roc 2010-06 0056c730  unit: seg_00560000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056c730
//
// 0056c730  56                   push esi
// 0056c731  8b742408             mov esi, dword ptr [esp + 8]
// 0056c735  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0056c739  741b                 je 0x56c756
// 0056c73b  8b06                 mov eax, dword ptr [esi]
// 0056c73d  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0056c744  8b0e                 mov ecx, dword ptr [esi]
// 0056c746  8b5614               mov edx, dword ptr [esi + 0x14]
// 0056c749  895118               mov dword ptr [ecx + 0x18], edx
// 0056c74c  8b06                 mov eax, dword ptr [esi]
// 0056c74e  8b08                 mov ecx, dword ptr [eax]
// 0056c750  56                   push esi
// 0056c751  ffd1                 call ecx
// 0056c753  83c404               add esp, 4
// 0056c756  807c240c00           cmp byte ptr [esp + 0xc], 0
// 0056c75b  740b                 je 0x56c768
// 0056c75d  6a00                 push 0
// 0056c75f  56                   push esi
// 0056c760  e83bfeffff           call 0x56c5a0
// 0056c765  83c408               add esp, 8
// 0056c768  8b16                 mov edx, dword ptr [esi]
// 0056c76a  8b4210               mov eax, dword ptr [edx + 0x10]
// 0056c76d  56                   push esi
// 0056c76e  ffd0                 call eax
// 0056c770  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056c773  8b5108               mov edx, dword ptr [ecx + 8]
// 0056c776  56                   push esi
// 0056c777  ffd2                 call edx
// 0056c779  56                   push esi
// 0056c77a  e831f50000           call 0x57bcb0
// 0056c77f  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0056c785  8b08                 mov ecx, dword ptr [eax]
// 0056c787  56                   push esi
// 0056c788  ffd1                 call ecx
// 0056c78a  33d2                 xor edx, edx
// 0056c78c  83c410               add esp, 0x10
// 0056c78f  3896b0000000         cmp byte ptr [esi + 0xb0], dl
// 0056c795  c786d000000000000000 mov dword ptr [esi + 0xd0], 0
// 0056c79f  0f95c2               setne dl
// 0056c7a2  83c265               add edx, 0x65
// 0056c7a5  895614               mov dword ptr [esi + 0x14], edx
// 0056c7a8  5e                   pop esi
// 0056c7a9  c3                   ret 
// library jpeg-6b/jcapistd.c (function _jpeg_start_compress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapistd.c
