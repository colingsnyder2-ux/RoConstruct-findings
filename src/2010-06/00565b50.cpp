// from server: 100% by auto
// roc 2010-06 00565b50  unit: seg_00560000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00565b50
//
// 00565b50  56                   push esi
// 00565b51  8b742408             mov esi, dword ptr [esp + 8]
// 00565b55  817e14ca000000       cmp dword ptr [esi + 0x14], 0xca
// 00565b5c  7521                 jne 0x565b7f
// 00565b5e  56                   push esi
// 00565b5f  e8dc170100           call 0x577340
// 00565b64  83c404               add esp, 4
// 00565b67  807e4000             cmp byte ptr [esi + 0x40], 0
// 00565b6b  740b                 je 0x565b78
// 00565b6d  c74614cf000000       mov dword ptr [esi + 0x14], 0xcf
// 00565b74  b001                 mov al, 1
// 00565b76  5e                   pop esi
// 00565b77  c3                   ret 
// 00565b78  c74614cb000000       mov dword ptr [esi + 0x14], 0xcb
// 00565b7f  8b4614               mov eax, dword ptr [esi + 0x14]
// 00565b82  3dcb000000           cmp eax, 0xcb
// 00565b87  7570                 jne 0x565bf9
// 00565b89  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00565b8f  80781000             cmp byte ptr [eax + 0x10], 0
// 00565b93  7454                 je 0x565be9
// 00565b95  8b4608               mov eax, dword ptr [esi + 8]
// 00565b98  85c0                 test eax, eax
// 00565b9a  7408                 je 0x565ba4
// 00565b9c  8b08                 mov ecx, dword ptr [eax]
// 00565b9e  56                   push esi
// 00565b9f  ffd1                 call ecx
// 00565ba1  83c404               add esp, 4
// 00565ba4  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00565baa  8b02                 mov eax, dword ptr [edx]
// 00565bac  56                   push esi
// 00565bad  ffd0                 call eax
// 00565baf  83c404               add esp, 4
// 00565bb2  85c0                 test eax, eax
// 00565bb4  742f                 je 0x565be5
// 00565bb6  83f802               cmp eax, 2
// 00565bb9  742e                 je 0x565be9
// 00565bbb  8b4e08               mov ecx, dword ptr [esi + 8]
// 00565bbe  85c9                 test ecx, ecx
// 00565bc0  74d3                 je 0x565b95
// 00565bc2  83f803               cmp eax, 3
// 00565bc5  7405                 je 0x565bcc
// 00565bc7  83f801               cmp eax, 1
// 00565bca  75c9                 jne 0x565b95
// 00565bcc  ff4104               inc dword ptr [ecx + 4]
// 00565bcf  8b4608               mov eax, dword ptr [esi + 8]
// 00565bd2  8b4804               mov ecx, dword ptr [eax + 4]
// 00565bd5  3b4808               cmp ecx, dword ptr [eax + 8]
// 00565bd8  7cbb                 jl 0x565b95
// 00565bda  8b961c010000         mov edx, dword ptr [esi + 0x11c]
// 00565be0  015008               add dword ptr [eax + 8], edx
// 00565be3  ebb0                 jmp 0x565b95
// 00565be5  32c0                 xor al, al
// 00565be7  5e                   pop esi
// 00565be8  c3                   ret 
// 00565be9  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00565bec  898684000000         mov dword ptr [esi + 0x84], eax
// 00565bf2  e8e9fdffff           call 0x5659e0
// 00565bf7  5e                   pop esi
// 00565bf8  c3                   ret 
// 00565bf9  3dcc000000           cmp eax, 0xcc
// 00565bfe  741b                 je 0x565c1b
// 00565c00  8b0e                 mov ecx, dword ptr [esi]
// 00565c02  c7411414000000       mov dword ptr [ecx + 0x14], 0x14
// 00565c09  8b16                 mov edx, dword ptr [esi]
// 00565c0b  8b4614               mov eax, dword ptr [esi + 0x14]
// 00565c0e  894218               mov dword ptr [edx + 0x18], eax
// 00565c11  8b0e                 mov ecx, dword ptr [esi]
// 00565c13  8b11                 mov edx, dword ptr [ecx]
// 00565c15  56                   push esi
// 00565c16  ffd2                 call edx
// 00565c18  83c404               add esp, 4
// 00565c1b  e8c0fdffff           call 0x5659e0
// 00565c20  5e                   pop esi
// 00565c21  c3                   ret 
// library jpeg-6b/jdapistd.c (function _jpeg_start_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
