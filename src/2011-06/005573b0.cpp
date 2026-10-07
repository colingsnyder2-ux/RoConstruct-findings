// roc 2011-06 005573b0  unit: seg_00550000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005573b0
//
// 005573b0  56                   push esi
// 005573b1  8b742408             mov esi, dword ptr [esp + 8]
// 005573b5  8b4614               mov eax, dword ptr [esi + 0x14]
// 005573b8  3dc8000000           cmp eax, 0xc8
// 005573bd  7422                 je 0x5573e1
// 005573bf  3dc9000000           cmp eax, 0xc9
// 005573c4  741b                 je 0x5573e1
// 005573c6  8b06                 mov eax, dword ptr [esi]
// 005573c8  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 005573cf  8b0e                 mov ecx, dword ptr [esi]
// 005573d1  8b5614               mov edx, dword ptr [esi + 0x14]
// 005573d4  895118               mov dword ptr [ecx + 0x18], edx
// 005573d7  8b06                 mov eax, dword ptr [esi]
// 005573d9  8b08                 mov ecx, dword ptr [eax]
// 005573db  56                   push esi
// 005573dc  ffd1                 call ecx
// 005573de  83c404               add esp, 4
// 005573e1  56                   push esi
// 005573e2  e829feffff           call 0x557210
// 005573e7  8bc8                 mov ecx, eax
// 005573e9  83c404               add esp, 4
// 005573ec  83e901               sub ecx, 1
// 005573ef  742e                 je 0x55741f
// 005573f1  83e901               sub ecx, 1
// 005573f4  752e                 jne 0x557424
// 005573f6  384c240c             cmp byte ptr [esp + 0xc], cl
// 005573fa  7413                 je 0x55740f
// 005573fc  8b16                 mov edx, dword ptr [esi]
// 005573fe  c7421433000000       mov dword ptr [edx + 0x14], 0x33
// 00557405  8b06                 mov eax, dword ptr [esi]
// 00557407  8b08                 mov ecx, dword ptr [eax]
// 00557409  56                   push esi
// 0055740a  ffd1                 call ecx
// 0055740c  83c404               add esp, 4
// 0055740f  56                   push esi
// 00557410  e8db080100           call 0x567cf0
// 00557415  83c404               add esp, 4
// 00557418  b802000000           mov eax, 2
// 0055741d  5e                   pop esi
// 0055741e  c3                   ret 
// 0055741f  b801000000           mov eax, 1
// 00557424  5e                   pop esi
// 00557425  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_read_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
