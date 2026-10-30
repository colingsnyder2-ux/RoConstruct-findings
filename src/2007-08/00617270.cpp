// from server: 100% by auto
// roc 2007-08 00617270  unit: seg_00610000  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00617270
//
// 00617270  83ec18               sub esp, 0x18
// 00617273  8b4f04               mov ecx, dword ptr [edi + 4]
// 00617276  53                   push ebx
// 00617277  56                   push esi
// 00617278  6a0c                 push 0xc
// 0061727a  8d442418             lea eax, [esp + 0x18]
// 0061727e  bb04000000           mov ebx, 4
// 00617283  50                   push eax
// 00617284  51                   push ecx
// 00617285  c74424141b4c7561     mov dword ptr [esp + 0x14], 0x61754c1b
// 0061728d  c644241851           mov byte ptr [esp + 0x18], 0x51
// 00617292  c644241900           mov byte ptr [esp + 0x19], 0
// 00617297  c644241a01           mov byte ptr [esp + 0x1a], 1
// 0061729c  885c241b             mov byte ptr [esp + 0x1b], bl
// 006172a0  885c241c             mov byte ptr [esp + 0x1c], bl
// 006172a4  885c241d             mov byte ptr [esp + 0x1d], bl
// 006172a8  c644241e08           mov byte ptr [esp + 0x1e], 8
// 006172ad  c644241f00           mov byte ptr [esp + 0x1f], 0
// 006172b2  e809c1ffff           call 0x6133c0
// 006172b7  83c40c               add esp, 0xc
// 006172ba  85c0                 test eax, eax
// 006172bc  7423                 je 0x6172e1
// 006172be  8b570c               mov edx, dword ptr [edi + 0xc]
// 006172c1  8b07                 mov eax, dword ptr [edi]
// 006172c3  68e0357c00           push 0x7c35e0
// 006172c8  52                   push edx
// 006172c9  68c4357c00           push 0x7c35c4
// 006172ce  50                   push eax
// 006172cf  e8bc7bffff           call 0x60ee90
// 006172d4  8b0f                 mov ecx, dword ptr [edi]
// 006172d6  6a03                 push 3
// 006172d8  51                   push ecx
// 006172d9  e842edfaff           call 0x5c6020
// 006172de  83c418               add esp, 0x18
// 006172e1  b80c000000           mov eax, 0xc
// 006172e6  8d4c2414             lea ecx, [esp + 0x14]
// 006172ea  8d542408             lea edx, [esp + 8]
// 006172ee  8bff                 mov edi, edi
// 006172f0  8b32                 mov esi, dword ptr [edx]
// 006172f2  3b31                 cmp esi, dword ptr [ecx]
// 006172f4  750e                 jne 0x617304
// 006172f6  2bc3                 sub eax, ebx
// 006172f8  03cb                 add ecx, ebx
// 006172fa  03d3                 add edx, ebx
// 006172fc  3bc3                 cmp eax, ebx
// 006172fe  73f0                 jae 0x6172f0
// 00617300  85c0                 test eax, eax
// 00617302  745d                 je 0x617361
// 00617304  0fb632               movzx esi, byte ptr [edx]
// 00617307  0fb619               movzx ebx, byte ptr [ecx]
// 0061730a  2bf3                 sub esi, ebx
// 0061730c  7545                 jne 0x617353
// 0061730e  83e801               sub eax, 1
// 00617311  83c101               add ecx, 1
// 00617314  83c201               add edx, 1
// 00617317  85c0                 test eax, eax
// 00617319  7446                 je 0x617361
// 0061731b  0fb632               movzx esi, byte ptr [edx]
// 0061731e  0fb619               movzx ebx, byte ptr [ecx]
// 00617321  2bf3                 sub esi, ebx
// 00617323  752e                 jne 0x617353
// 00617325  83e801               sub eax, 1
// 00617328  83c101               add ecx, 1
// 0061732b  83c201               add edx, 1
// 0061732e  85c0                 test eax, eax
// 00617330  742f                 je 0x617361
// 00617332  0fb632               movzx esi, byte ptr [edx]
// 00617335  0fb619               movzx ebx, byte ptr [ecx]
// 00617338  2bf3                 sub esi, ebx
// 0061733a  7517                 jne 0x617353
// 0061733c  83e801               sub eax, 1
// 0061733f  83c101               add ecx, 1
// 00617342  83c201               add edx, 1
// 00617345  85c0                 test eax, eax
// 00617347  7418                 je 0x617361
// 00617349  0fb632               movzx esi, byte ptr [edx]
// 0061734c  0fb611               movzx edx, byte ptr [ecx]
// 0061734f  2bf2                 sub esi, edx
// 00617351  740e                 je 0x617361
// 00617353  85f6                 test esi, esi
// 00617355  b801000000           mov eax, 1
// 0061735a  7f07                 jg 0x617363
// 0061735c  83c8ff               or eax, 0xffffffff
// 0061735f  eb02                 jmp 0x617363
// 00617361  33c0                 xor eax, eax
// 00617363  85c0                 test eax, eax
// 00617365  5e                   pop esi
// 00617366  5b                   pop ebx
// 00617367  7423                 je 0x61738c
// 00617369  8b470c               mov eax, dword ptr [edi + 0xc]
// 0061736c  8b0f                 mov ecx, dword ptr [edi]
// 0061736e  6818367c00           push 0x7c3618
// 00617373  50                   push eax
// 00617374  68c4357c00           push 0x7c35c4
// 00617379  51                   push ecx
// 0061737a  e8117bffff           call 0x60ee90
// 0061737f  8b17                 mov edx, dword ptr [edi]
// 00617381  6a03                 push 3
// 00617383  52                   push edx
// 00617384  e897ecfaff           call 0x5c6020
// 00617389  83c418               add esp, 0x18
// 0061738c  83c418               add esp, 0x18
// 0061738f  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadHeader)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
