// from server: 100% by auto
// roc 2011-06 00576430  unit: seg_00570000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00576430
//
// 00576430  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00576434  53                   push ebx
// 00576435  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00576439  3bc3                 cmp eax, ebx
// 0057643b  57                   push edi
// 0057643c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00576440  7d22                 jge 0x576464
// 00576442  53                   push ebx
// 00576443  50                   push eax
// 00576444  8b442418             mov eax, dword ptr [esp + 0x18]
// 00576448  50                   push eax
// 00576449  57                   push edi
// 0057644a  e8c1feffff           call 0x576310
// 0057644f  83c410               add esp, 0x10
// 00576452  84c0                 test al, al
// 00576454  7506                 jne 0x57645c
// 00576456  5f                   pop edi
// 00576457  83c8ff               or eax, 0xffffffff
// 0057645a  5b                   pop ebx
// 0057645b  c3                   ret 
// 0057645c  8b5708               mov edx, dword ptr [edi + 8]
// 0057645f  8b470c               mov eax, dword ptr [edi + 0xc]
// 00576462  eb04                 jmp 0x576468
// 00576464  8b542410             mov edx, dword ptr [esp + 0x10]
// 00576468  55                   push ebp
// 00576469  56                   push esi
// 0057646a  2bc3                 sub eax, ebx
// 0057646c  8bc8                 mov ecx, eax
// 0057646e  8bf2                 mov esi, edx
// 00576470  d3fe                 sar esi, cl
// 00576472  8bcb                 mov ecx, ebx
// 00576474  bd01000000           mov ebp, 1
// 00576479  d3e5                 shl ebp, cl
// 0057647b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057647f  4d                   dec ebp
// 00576480  23f5                 and esi, ebp
// 00576482  3b3499               cmp esi, dword ptr [ecx + ebx*4]
// 00576485  7e34                 jle 0x5764bb
// 00576487  03f6                 add esi, esi
// 00576489  83f801               cmp eax, 1
// 0057648c  7d17                 jge 0x5764a5
// 0057648e  6a01                 push 1
// 00576490  50                   push eax
// 00576491  52                   push edx
// 00576492  57                   push edi
// 00576493  e878feffff           call 0x576310
// 00576498  83c410               add esp, 0x10
// 0057649b  84c0                 test al, al
// 0057649d  744a                 je 0x5764e9
// 0057649f  8b5708               mov edx, dword ptr [edi + 8]
// 005764a2  8b470c               mov eax, dword ptr [edi + 0xc]
// 005764a5  48                   dec eax
// 005764a6  8bc8                 mov ecx, eax
// 005764a8  8bea                 mov ebp, edx
// 005764aa  d3fd                 sar ebp, cl
// 005764ac  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005764b0  43                   inc ebx
// 005764b1  83e501               and ebp, 1
// 005764b4  0bf5                 or esi, ebp
// 005764b6  3b3499               cmp esi, dword ptr [ecx + ebx*4]
// 005764b9  7fcc                 jg 0x576487
// 005764bb  83fb10               cmp ebx, 0x10
// 005764be  895708               mov dword ptr [edi + 8], edx
// 005764c1  89470c               mov dword ptr [edi + 0xc], eax
// 005764c4  7e2b                 jle 0x5764f1
// 005764c6  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 005764c9  8b11                 mov edx, dword ptr [ecx]
// 005764cb  c7421476000000       mov dword ptr [edx + 0x14], 0x76
// 005764d2  8b7f10               mov edi, dword ptr [edi + 0x10]
// 005764d5  8b07                 mov eax, dword ptr [edi]
// 005764d7  8b4804               mov ecx, dword ptr [eax + 4]
// 005764da  6aff                 push -1
// 005764dc  57                   push edi
// 005764dd  ffd1                 call ecx
// 005764df  83c408               add esp, 8
// 005764e2  5e                   pop esi
// 005764e3  5d                   pop ebp
// 005764e4  5f                   pop edi
// 005764e5  33c0                 xor eax, eax
// 005764e7  5b                   pop ebx
// 005764e8  c3                   ret 
// 005764e9  5e                   pop esi
// 005764ea  5d                   pop ebp
// 005764eb  5f                   pop edi
// 005764ec  83c8ff               or eax, 0xffffffff
// 005764ef  5b                   pop ebx
// 005764f0  c3                   ret 
// 005764f1  8b549948             mov edx, dword ptr [ecx + ebx*4 + 0x48]
// 005764f5  03918c000000         add edx, dword ptr [ecx + 0x8c]
// 005764fb  0fb6443211           movzx eax, byte ptr [edx + esi + 0x11]
// 00576500  5e                   pop esi
// 00576501  5d                   pop ebp
// 00576502  5f                   pop edi
// 00576503  5b                   pop ebx
// 00576504  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_huff_decode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
