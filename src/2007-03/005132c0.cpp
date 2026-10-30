// roc 2007-03 005132c0  unit: seg_00510000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005132c0
//
// 005132c0  56                   push esi
// 005132c1  8b742408             mov esi, dword ptr [esp + 8]
// 005132c5  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 005132c9  741b                 je 0x5132e6
// 005132cb  8b06                 mov eax, dword ptr [esi]
// 005132cd  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 005132d4  8b0e                 mov ecx, dword ptr [esi]
// 005132d6  8b5614               mov edx, dword ptr [esi + 0x14]
// 005132d9  895118               mov dword ptr [ecx + 0x18], edx
// 005132dc  8b06                 mov eax, dword ptr [esi]
// 005132de  8b08                 mov ecx, dword ptr [eax]
// 005132e0  56                   push esi
// 005132e1  ffd1                 call ecx
// 005132e3  83c404               add esp, 4
// 005132e6  807c240c00           cmp byte ptr [esp + 0xc], 0
// 005132eb  740b                 je 0x5132f8
// 005132ed  6a00                 push 0
// 005132ef  56                   push esi
// 005132f0  e83bfeffff           call 0x513130
// 005132f5  83c408               add esp, 8
// 005132f8  8b16                 mov edx, dword ptr [esi]
// 005132fa  8b4210               mov eax, dword ptr [edx + 0x10]
// 005132fd  56                   push esi
// 005132fe  ffd0                 call eax
// 00513300  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00513303  8b5108               mov edx, dword ptr [ecx + 8]
// 00513306  56                   push esi
// 00513307  ffd2                 call edx
// 00513309  56                   push esi
// 0051330a  e811b70000           call 0x51ea20
// 0051330f  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00513315  8b08                 mov ecx, dword ptr [eax]
// 00513317  56                   push esi
// 00513318  ffd1                 call ecx
// 0051331a  33d2                 xor edx, edx
// 0051331c  83c410               add esp, 0x10
// 0051331f  3896b0000000         cmp byte ptr [esi + 0xb0], dl
// 00513325  c786d000000000000000 mov dword ptr [esi + 0xd0], 0
// 0051332f  0f95c2               setne dl
// 00513332  83c265               add edx, 0x65
// 00513335  895614               mov dword ptr [esi + 0x14], edx
// 00513338  5e                   pop esi
// 00513339  c3                   ret 
// library jpeg-6b/jcapistd.c (function _jpeg_start_compress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapistd.c
