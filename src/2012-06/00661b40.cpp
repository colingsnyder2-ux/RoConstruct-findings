// roc 2012-06 00661b40  unit: seg_00660000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00661b40
//
// 00661b40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00661b44  53                   push ebx
// 00661b45  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00661b49  3bc3                 cmp eax, ebx
// 00661b4b  57                   push edi
// 00661b4c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00661b50  7d22                 jge 0x661b74
// 00661b52  53                   push ebx
// 00661b53  50                   push eax
// 00661b54  8b442418             mov eax, dword ptr [esp + 0x18]
// 00661b58  50                   push eax
// 00661b59  57                   push edi
// 00661b5a  e8c1feffff           call 0x661a20
// 00661b5f  83c410               add esp, 0x10
// 00661b62  84c0                 test al, al
// 00661b64  7506                 jne 0x661b6c
// 00661b66  5f                   pop edi
// 00661b67  83c8ff               or eax, 0xffffffff
// 00661b6a  5b                   pop ebx
// 00661b6b  c3                   ret 
// 00661b6c  8b5708               mov edx, dword ptr [edi + 8]
// 00661b6f  8b470c               mov eax, dword ptr [edi + 0xc]
// 00661b72  eb04                 jmp 0x661b78
// 00661b74  8b542410             mov edx, dword ptr [esp + 0x10]
// 00661b78  55                   push ebp
// 00661b79  56                   push esi
// 00661b7a  2bc3                 sub eax, ebx
// 00661b7c  8bc8                 mov ecx, eax
// 00661b7e  8bf2                 mov esi, edx
// 00661b80  d3fe                 sar esi, cl
// 00661b82  8bcb                 mov ecx, ebx
// 00661b84  bd01000000           mov ebp, 1
// 00661b89  d3e5                 shl ebp, cl
// 00661b8b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00661b8f  4d                   dec ebp
// 00661b90  23f5                 and esi, ebp
// 00661b92  3b3499               cmp esi, dword ptr [ecx + ebx*4]
// 00661b95  7e34                 jle 0x661bcb
// 00661b97  03f6                 add esi, esi
// 00661b99  83f801               cmp eax, 1
// 00661b9c  7d17                 jge 0x661bb5
// 00661b9e  6a01                 push 1
// 00661ba0  50                   push eax
// 00661ba1  52                   push edx
// 00661ba2  57                   push edi
// 00661ba3  e878feffff           call 0x661a20
// 00661ba8  83c410               add esp, 0x10
// 00661bab  84c0                 test al, al
// 00661bad  744a                 je 0x661bf9
// 00661baf  8b5708               mov edx, dword ptr [edi + 8]
// 00661bb2  8b470c               mov eax, dword ptr [edi + 0xc]
// 00661bb5  48                   dec eax
// 00661bb6  8bc8                 mov ecx, eax
// 00661bb8  8bea                 mov ebp, edx
// 00661bba  d3fd                 sar ebp, cl
// 00661bbc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00661bc0  43                   inc ebx
// 00661bc1  83e501               and ebp, 1
// 00661bc4  0bf5                 or esi, ebp
// 00661bc6  3b3499               cmp esi, dword ptr [ecx + ebx*4]
// 00661bc9  7fcc                 jg 0x661b97
// 00661bcb  83fb10               cmp ebx, 0x10
// 00661bce  895708               mov dword ptr [edi + 8], edx
// 00661bd1  89470c               mov dword ptr [edi + 0xc], eax
// 00661bd4  7e2b                 jle 0x661c01
// 00661bd6  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00661bd9  8b11                 mov edx, dword ptr [ecx]
// 00661bdb  c7421476000000       mov dword ptr [edx + 0x14], 0x76
// 00661be2  8b7f10               mov edi, dword ptr [edi + 0x10]
// 00661be5  8b07                 mov eax, dword ptr [edi]
// 00661be7  8b4804               mov ecx, dword ptr [eax + 4]
// 00661bea  6aff                 push -1
// 00661bec  57                   push edi
// 00661bed  ffd1                 call ecx
// 00661bef  83c408               add esp, 8
// 00661bf2  5e                   pop esi
// 00661bf3  5d                   pop ebp
// 00661bf4  5f                   pop edi
// 00661bf5  33c0                 xor eax, eax
// 00661bf7  5b                   pop ebx
// 00661bf8  c3                   ret 
// 00661bf9  5e                   pop esi
// 00661bfa  5d                   pop ebp
// 00661bfb  5f                   pop edi
// 00661bfc  83c8ff               or eax, 0xffffffff
// 00661bff  5b                   pop ebx
// 00661c00  c3                   ret 
// 00661c01  8b549948             mov edx, dword ptr [ecx + ebx*4 + 0x48]
// 00661c05  03918c000000         add edx, dword ptr [ecx + 0x8c]
// 00661c0b  0fb6443211           movzx eax, byte ptr [edx + esi + 0x11]
// 00661c10  5e                   pop esi
// 00661c11  5d                   pop ebp
// 00661c12  5f                   pop edi
// 00661c13  5b                   pop ebx
// 00661c14  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_huff_decode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
