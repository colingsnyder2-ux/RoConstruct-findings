// roc 2012-06 00832970  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00832970
//
// 00832970  8b442408             mov eax, dword ptr [esp + 8]
// 00832974  53                   push ebx
// 00832975  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00832979  56                   push esi
// 0083297a  8b7310               mov esi, dword ptr [ebx + 0x10]
// 0083297d  57                   push edi
// 0083297e  33ff                 xor edi, edi
// 00832980  83f807               cmp eax, 7
// 00832983  0f87b1000000         ja 0x832a3a
// 00832989  ff2485442a8300       jmp dword ptr [eax*4 + 0x832a44]
// 00832990  8bc7                 mov eax, edi
// 00832992  5f                   pop edi
// 00832993  c74640fdffffff       mov dword ptr [esi + 0x40], 0xfffffffd
// 0083299a  5e                   pop esi
// 0083299b  5b                   pop ebx
// 0083299c  c3                   ret 
// 0083299d  8b4644               mov eax, dword ptr [esi + 0x44]
// 008329a0  894640               mov dword ptr [esi + 0x40], eax
// 008329a3  8bc7                 mov eax, edi
// 008329a5  5f                   pop edi
// 008329a6  5e                   pop esi
// 008329a7  5b                   pop ebx
// 008329a8  c3                   ret 
// 008329a9  53                   push ebx
// 008329aa  e881091000           call 0x933330
// 008329af  83c404               add esp, 4
// 008329b2  8bc7                 mov eax, edi
// 008329b4  5f                   pop edi
// 008329b5  5e                   pop esi
// 008329b6  5b                   pop ebx
// 008329b7  c3                   ret 
// 008329b8  8b7e44               mov edi, dword ptr [esi + 0x44]
// 008329bb  c1ef0a               shr edi, 0xa
// 008329be  8bc7                 mov eax, edi
// 008329c0  5f                   pop edi
// 008329c1  5e                   pop esi
// 008329c2  5b                   pop ebx
// 008329c3  c3                   ret 
// 008329c4  8b7e44               mov edi, dword ptr [esi + 0x44]
// 008329c7  81e7ff030000         and edi, 0x3ff
// 008329cd  8bc7                 mov eax, edi
// 008329cf  5f                   pop edi
// 008329d0  5e                   pop esi
// 008329d1  5b                   pop ebx
// 008329d2  c3                   ret 
// 008329d3  8b442418             mov eax, dword ptr [esp + 0x18]
// 008329d7  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 008329da  c1e00a               shl eax, 0xa
// 008329dd  3bc1                 cmp eax, ecx
// 008329df  7709                 ja 0x8329ea
// 008329e1  8bd1                 mov edx, ecx
// 008329e3  2bd0                 sub edx, eax
// 008329e5  895640               mov dword ptr [esi + 0x40], edx
// 008329e8  eb03                 jmp 0x8329ed
// 008329ea  897e40               mov dword ptr [esi + 0x40], edi
// 008329ed  394e40               cmp dword ptr [esi + 0x40], ecx
// 008329f0  774b                 ja 0x832a3d
// 008329f2  53                   push ebx
// 008329f3  e8b8081000           call 0x9332b0
// 008329f8  83c404               add esp, 4
// 008329fb  807e1500             cmp byte ptr [esi + 0x15], 0
// 008329ff  740e                 je 0x832a0f
// 00832a01  8b4640               mov eax, dword ptr [esi + 0x40]
// 00832a04  3b4644               cmp eax, dword ptr [esi + 0x44]
// 00832a07  76e9                 jbe 0x8329f2
// 00832a09  8bc7                 mov eax, edi
// 00832a0b  5f                   pop edi
// 00832a0c  5e                   pop esi
// 00832a0d  5b                   pop ebx
// 00832a0e  c3                   ret 
// 00832a0f  bf01000000           mov edi, 1
// 00832a14  8bc7                 mov eax, edi
// 00832a16  5f                   pop edi
// 00832a17  5e                   pop esi
// 00832a18  5b                   pop ebx
// 00832a19  c3                   ret 
// 00832a1a  8b7e50               mov edi, dword ptr [esi + 0x50]
// 00832a1d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00832a21  8bc7                 mov eax, edi
// 00832a23  5f                   pop edi
// 00832a24  894e50               mov dword ptr [esi + 0x50], ecx
// 00832a27  5e                   pop esi
// 00832a28  5b                   pop ebx
// 00832a29  c3                   ret 
// 00832a2a  8b7e54               mov edi, dword ptr [esi + 0x54]
// 00832a2d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00832a31  8bc7                 mov eax, edi
// 00832a33  5f                   pop edi
// 00832a34  895654               mov dword ptr [esi + 0x54], edx
// 00832a37  5e                   pop esi
// 00832a38  5b                   pop ebx
// 00832a39  c3                   ret 
// 00832a3a  83cfff               or edi, 0xffffffff
// 00832a3d  8bc7                 mov eax, edi
// 00832a3f  5f                   pop edi
// 00832a40  5e                   pop esi
// 00832a41  5b                   pop ebx
// 00832a42  c3                   ret 
// 00832a43  90                   nop 
// 00832a44  90                   nop 
// 00832a45  2983009d2983         sub dword ptr [ebx - 0x7cd66300], eax
// 00832a4b  00a9298300b8         add byte ptr [ecx - 0x47ff7cd7], ch
// 00832a51  298300c42983         sub dword ptr [ebx - 0x7cd63c00], eax
// 00832a57  00d3                 add bl, dl
// 00832a59  2983001a2a83         sub dword ptr [ebx - 0x7cd5e600], eax
// 00832a5f  002a                 add byte ptr [edx], ch
// library lua-5.1.4/lapi.c (function _lua_gc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
