// roc 2007-08 006162d0  unit: seg_00610000  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006162d0
//
// 006162d0  83ec18               sub esp, 0x18
// 006162d3  53                   push ebx
// 006162d4  56                   push esi
// 006162d5  57                   push edi
// 006162d6  8bf0                 mov esi, eax
// 006162d8  33db                 xor ebx, ebx
// 006162da  55                   push ebp
// 006162db  eb03                 jmp 0x6162e0
// 006162dd  8d4900               lea ecx, [ecx]
// 006162e0  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 006162e7  7424                 je 0x61630d
// 006162e9  681d010000           push 0x11d
// 006162ee  56                   push esi
// 006162ef  e8cc110000           call 0x6174c0
// 006162f4  50                   push eax
// 006162f5  8b4634               mov eax, dword ptr [esi + 0x34]
// 006162f8  6870337c00           push 0x7c3370
// 006162fd  50                   push eax
// 006162fe  e88d8bffff           call 0x60ee90
// 00616303  50                   push eax
// 00616304  56                   push esi
// 00616305  e8b6120000           call 0x6175c0
// 0061630a  83c41c               add esp, 0x1c
// 0061630d  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00616310  56                   push esi
// 00616311  e8da260000           call 0x6189f0
// 00616316  8b7e30               mov edi, dword ptr [esi + 0x30]
// 00616319  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 0061631d  8d541901             lea edx, [ecx + ebx + 1]
// 00616321  83c404               add esp, 4
// 00616324  81fac8000000         cmp edx, 0xc8
// 0061632a  7e47                 jle 0x616373
// 0061632c  8b07                 mov eax, dword ptr [edi]
// 0061632e  8b403c               mov eax, dword ptr [eax + 0x3c]
// 00616331  85c0                 test eax, eax
// 00616333  6814347c00           push 0x7c3414
// 00616338  68c8000000           push 0xc8
// 0061633d  7513                 jne 0x616352
// 0061633f  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00616342  68a8337c00           push 0x7c33a8
// 00616347  51                   push ecx
// 00616348  e8438bffff           call 0x60ee90
// 0061634d  83c410               add esp, 0x10
// 00616350  eb12                 jmp 0x616364
// 00616352  8b5710               mov edx, dword ptr [edi + 0x10]
// 00616355  50                   push eax
// 00616356  6880337c00           push 0x7c3380
// 0061635b  52                   push edx
// 0061635c  e82f8bffff           call 0x60ee90
// 00616361  83c414               add esp, 0x14
// 00616364  6a00                 push 0
// 00616366  50                   push eax
// 00616367  8b470c               mov eax, dword ptr [edi + 0xc]
// 0061636a  50                   push eax
// 0061636b  e8b0110000           call 0x617520
// 00616370  83c40c               add esp, 0xc
// 00616373  55                   push ebp
// 00616374  56                   push esi
// 00616375  e896d8ffff           call 0x613c10
// 0061637a  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 0061637e  03cb                 add ecx, ebx
// 00616380  83c408               add esp, 8
// 00616383  6689844fac000000     mov word ptr [edi + ecx*2 + 0xac], ax
// 0061638b  83c301               add ebx, 1
// 0061638e  837e102c             cmp dword ptr [esi + 0x10], 0x2c
// 00616392  750e                 jne 0x6163a2
// 00616394  56                   push esi
// 00616395  e856260000           call 0x6189f0
// 0061639a  83c404               add esp, 4
// 0061639d  e93effffff           jmp 0x6162e0
// 006163a2  837e103d             cmp dword ptr [esi + 0x10], 0x3d
// 006163a6  5d                   pop ebp
// 006163a7  7514                 jne 0x6163bd
// 006163a9  56                   push esi
// 006163aa  e841260000           call 0x6189f0
// 006163af  83c404               add esp, 4
// 006163b2  8d7c240c             lea edi, [esp + 0xc]
// 006163b6  e8f5e6ffff           call 0x614ab0
// 006163bb  eb06                 jmp 0x6163c3
// 006163bd  33c0                 xor eax, eax
// 006163bf  8944240c             mov dword ptr [esp + 0xc], eax
// 006163c3  50                   push eax
// 006163c4  8d4c2410             lea ecx, [esp + 0x10]
// 006163c8  8bd3                 mov edx, ebx
// 006163ca  8bc6                 mov eax, esi
// 006163cc  e8ffdbffff           call 0x613fd0
// 006163d1  83c404               add esp, 4
// 006163d4  8bd3                 mov edx, ebx
// 006163d6  8bc6                 mov eax, esi
// 006163d8  e8e3d8ffff           call 0x613cc0
// 006163dd  5f                   pop edi
// 006163de  5e                   pop esi
// 006163df  5b                   pop ebx
// 006163e0  83c418               add esp, 0x18
// 006163e3  c3                   ret 
// library lua-5.1.4/lparser.c (function _localstat)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
