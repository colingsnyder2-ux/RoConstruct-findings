// roc 2009-12 006041d0  unit: seg_00600000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006041d0
//
// 006041d0  56                   push esi
// 006041d1  8b742408             mov esi, dword ptr [esp + 8]
// 006041d5  817e14ca000000       cmp dword ptr [esi + 0x14], 0xca
// 006041dc  7521                 jne 0x6041ff
// 006041de  56                   push esi
// 006041df  e83c180100           call 0x615a20
// 006041e4  83c404               add esp, 4
// 006041e7  807e4000             cmp byte ptr [esi + 0x40], 0
// 006041eb  740b                 je 0x6041f8
// 006041ed  c74614cf000000       mov dword ptr [esi + 0x14], 0xcf
// 006041f4  b001                 mov al, 1
// 006041f6  5e                   pop esi
// 006041f7  c3                   ret 
// 006041f8  c74614cb000000       mov dword ptr [esi + 0x14], 0xcb
// 006041ff  8b4614               mov eax, dword ptr [esi + 0x14]
// 00604202  3dcb000000           cmp eax, 0xcb
// 00604207  7570                 jne 0x604279
// 00604209  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0060420f  80781000             cmp byte ptr [eax + 0x10], 0
// 00604213  7454                 je 0x604269
// 00604215  8b4608               mov eax, dword ptr [esi + 8]
// 00604218  85c0                 test eax, eax
// 0060421a  7408                 je 0x604224
// 0060421c  8b08                 mov ecx, dword ptr [eax]
// 0060421e  56                   push esi
// 0060421f  ffd1                 call ecx
// 00604221  83c404               add esp, 4
// 00604224  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0060422a  8b02                 mov eax, dword ptr [edx]
// 0060422c  56                   push esi
// 0060422d  ffd0                 call eax
// 0060422f  83c404               add esp, 4
// 00604232  85c0                 test eax, eax
// 00604234  742f                 je 0x604265
// 00604236  83f802               cmp eax, 2
// 00604239  742e                 je 0x604269
// 0060423b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0060423e  85c9                 test ecx, ecx
// 00604240  74d3                 je 0x604215
// 00604242  83f803               cmp eax, 3
// 00604245  7405                 je 0x60424c
// 00604247  83f801               cmp eax, 1
// 0060424a  75c9                 jne 0x604215
// 0060424c  ff4104               inc dword ptr [ecx + 4]
// 0060424f  8b4608               mov eax, dword ptr [esi + 8]
// 00604252  8b4804               mov ecx, dword ptr [eax + 4]
// 00604255  3b4808               cmp ecx, dword ptr [eax + 8]
// 00604258  7cbb                 jl 0x604215
// 0060425a  8b961c010000         mov edx, dword ptr [esi + 0x11c]
// 00604260  015008               add dword ptr [eax + 8], edx
// 00604263  ebb0                 jmp 0x604215
// 00604265  32c0                 xor al, al
// 00604267  5e                   pop esi
// 00604268  c3                   ret 
// 00604269  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0060426c  898684000000         mov dword ptr [esi + 0x84], eax
// 00604272  e8e9fdffff           call 0x604060
// 00604277  5e                   pop esi
// 00604278  c3                   ret 
// 00604279  3dcc000000           cmp eax, 0xcc
// 0060427e  741b                 je 0x60429b
// 00604280  8b0e                 mov ecx, dword ptr [esi]
// 00604282  c7411414000000       mov dword ptr [ecx + 0x14], 0x14
// 00604289  8b16                 mov edx, dword ptr [esi]
// 0060428b  8b4614               mov eax, dword ptr [esi + 0x14]
// 0060428e  894218               mov dword ptr [edx + 0x18], eax
// 00604291  8b0e                 mov ecx, dword ptr [esi]
// 00604293  8b11                 mov edx, dword ptr [ecx]
// 00604295  56                   push esi
// 00604296  ffd2                 call edx
// 00604298  83c404               add esp, 4
// 0060429b  e8c0fdffff           call 0x604060
// 006042a0  5e                   pop esi
// 006042a1  c3                   ret 
// library jpeg-6b/jdapistd.c (function _jpeg_start_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
