// roc 2007-08 006299d0  unit: RBX::AssemblyStage  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006299d0
//
// 006299d0  8b442404             mov eax, dword ptr [esp + 4]
// 006299d4  55                   push ebp
// 006299d5  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006299d9  56                   push esi
// 006299da  50                   push eax
// 006299db  8bc5                 mov eax, ebp
// 006299dd  8bf3                 mov esi, ebx
// 006299df  e8ecf1ffff           call 0x628bd0
// 006299e4  83c404               add esp, 4
// 006299e7  85c0                 test eax, eax
// 006299e9  0f858a000000         jne 0x629a79
// 006299ef  53                   push ebx
// 006299f0  57                   push edi
// 006299f1  e88afaffff           call 0x629480
// 006299f6  8b542414             mov edx, dword ptr [esp + 0x14]
// 006299fa  83c408               add esp, 8
// 006299fd  83fa12               cmp edx, 0x12
// 00629a00  8bf0                 mov esi, eax
// 00629a02  7415                 je 0x629a19
// 00629a04  83fa14               cmp edx, 0x14
// 00629a07  7410                 je 0x629a19
// 00629a09  55                   push ebp
// 00629a0a  57                   push edi
// 00629a0b  e870faffff           call 0x629480
// 00629a10  8b542414             mov edx, dword ptr [esp + 0x14]
// 00629a14  83c408               add esp, 8
// 00629a17  eb02                 jmp 0x629a1b
// 00629a19  33c0                 xor eax, eax
// 00629a1b  837d000c             cmp dword ptr [ebp], 0xc
// 00629a1f  7517                 jne 0x629a38
// 00629a21  8b6d08               mov ebp, dword ptr [ebp + 8]
// 00629a24  f7c500010000         test ebp, 0x100
// 00629a2a  750c                 jne 0x629a38
// 00629a2c  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 00629a30  3be9                 cmp ebp, ecx
// 00629a32  7c04                 jl 0x629a38
// 00629a34  834724ff             add dword ptr [edi + 0x24], -1
// 00629a38  833b0c               cmp dword ptr [ebx], 0xc
// 00629a3b  7517                 jne 0x629a54
// 00629a3d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00629a40  f7c100010000         test ecx, 0x100
// 00629a46  750c                 jne 0x629a54
// 00629a48  0fb66f32             movzx ebp, byte ptr [edi + 0x32]
// 00629a4c  3bcd                 cmp ecx, ebp
// 00629a4e  7c04                 jl 0x629a54
// 00629a50  834724ff             add dword ptr [edi + 0x24], -1
// 00629a54  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00629a57  8b4908               mov ecx, dword ptr [ecx + 8]
// 00629a5a  c1e609               shl esi, 9
// 00629a5d  0bf0                 or esi, eax
// 00629a5f  c1e60e               shl esi, 0xe
// 00629a62  0bf2                 or esi, edx
// 00629a64  51                   push ecx
// 00629a65  56                   push esi
// 00629a66  8bf7                 mov esi, edi
// 00629a68  e873f2ffff           call 0x628ce0
// 00629a6d  83c408               add esp, 8
// 00629a70  894308               mov dword ptr [ebx + 8], eax
// 00629a73  c7030b000000         mov dword ptr [ebx], 0xb
// 00629a79  5e                   pop esi
// 00629a7a  5d                   pop ebp
// 00629a7b  c3                   ret 
// library lua-5.1.1/lcode.c (function _codearith)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lcode.c
