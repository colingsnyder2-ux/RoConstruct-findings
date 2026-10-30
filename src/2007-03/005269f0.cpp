// roc 2007-03 005269f0  unit: seg_00520000  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005269f0
//
// 005269f0  53                   push ebx
// 005269f1  8a5c2408             mov bl, byte ptr [esp + 8]
// 005269f5  56                   push esi
// 005269f6  57                   push edi
// 005269f7  8bf8                 mov edi, eax
// 005269f9  8bf7                 mov esi, edi
// 005269fb  e820feffff           call 0x526820
// 00526a00  84c0                 test al, al
// 00526a02  7506                 jne 0x526a0a
// 00526a04  5f                   pop edi
// 00526a05  5e                   pop esi
// 00526a06  32c0                 xor al, al
// 00526a08  5b                   pop ebx
// 00526a09  c3                   ret 
// 00526a0a  8b07                 mov eax, dword ptr [edi]
// 00526a0c  c600ff               mov byte ptr [eax], 0xff
// 00526a0f  830701               add dword ptr [edi], 1
// 00526a12  83ceff               or esi, 0xffffffff
// 00526a15  017704               add dword ptr [edi + 4], esi
// 00526a18  7509                 jne 0x526a23
// 00526a1a  e821fdffff           call 0x526740
// 00526a1f  84c0                 test al, al
// 00526a21  74e1                 je 0x526a04
// 00526a23  8b0f                 mov ecx, dword ptr [edi]
// 00526a25  80eb30               sub bl, 0x30
// 00526a28  8819                 mov byte ptr [ecx], bl
// 00526a2a  830701               add dword ptr [edi], 1
// 00526a2d  017704               add dword ptr [edi + 4], esi
// 00526a30  7509                 jne 0x526a3b
// 00526a32  e809fdffff           call 0x526740
// 00526a37  84c0                 test al, al
// 00526a39  74c9                 je 0x526a04
// 00526a3b  8b5720               mov edx, dword ptr [edi + 0x20]
// 00526a3e  33c0                 xor eax, eax
// 00526a40  3982e4000000         cmp dword ptr [edx + 0xe4], eax
// 00526a46  7e1f                 jle 0x526a67
// 00526a48  8d4f10               lea ecx, [edi + 0x10]
// 00526a4b  eb03                 jmp 0x526a50
// 00526a4d  8d4900               lea ecx, [ecx]
// 00526a50  c70100000000         mov dword ptr [ecx], 0
// 00526a56  8b5720               mov edx, dword ptr [edi + 0x20]
// 00526a59  83c001               add eax, 1
// 00526a5c  83c104               add ecx, 4
// 00526a5f  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 00526a65  7ce9                 jl 0x526a50
// 00526a67  5f                   pop edi
// 00526a68  5e                   pop esi
// 00526a69  b001                 mov al, 1
// 00526a6b  5b                   pop ebx
// 00526a6c  c3                   ret 
// library jpeg-6b/jchuff.c (function _emit_restart)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
