// roc 2007-03 00497db0  unit: seg_00490000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00497db0
//
// 00497db0  51                   push ecx
// 00497db1  53                   push ebx
// 00497db2  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00497db6  85db                 test ebx, ebx
// 00497db8  56                   push esi
// 00497db9  8bf1                 mov esi, ecx
// 00497dbb  0f8e87000000         jle 0x497e48
// 00497dc1  55                   push ebp
// 00497dc2  57                   push edi
// 00497dc3  53                   push ebx
// 00497dc4  e867fdffff           call 0x497b30
// 00497dc9  8b16                 mov edx, dword ptr [esi]
// 00497dcb  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00497dcf  83e207               and edx, 7
// 00497dd2  89542410             mov dword ptr [esp + 0x10], edx
// 00497dd6  83fb08               cmp ebx, 8
// 00497dd9  8a4500               mov al, byte ptr [ebp]
// 00497ddc  7d0d                 jge 0x497deb
// 00497dde  807c242000           cmp byte ptr [esp + 0x20], 0
// 00497de3  7406                 je 0x497deb
// 00497de5  b108                 mov cl, 8
// 00497de7  2acb                 sub cl, bl
// 00497de9  d2e0                 shl al, cl
// 00497deb  8b0e                 mov ecx, dword ptr [esi]
// 00497ded  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00497df0  c1f903               sar ecx, 3
// 00497df3  85d2                 test edx, edx
// 00497df5  7505                 jne 0x497dfc
// 00497df7  880439               mov byte ptr [ecx + edi], al
// 00497dfa  eb34                 jmp 0x497e30
// 00497dfc  03f9                 add edi, ecx
// 00497dfe  8ac8                 mov cl, al
// 00497e00  884c241c             mov byte ptr [esp + 0x1c], cl
// 00497e04  8aca                 mov cl, dl
// 00497e06  8ad0                 mov dl, al
// 00497e08  d2ea                 shr dl, cl
// 00497e0a  b908000000           mov ecx, 8
// 00497e0f  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00497e13  0817                 or byte ptr [edi], dl
// 00497e15  83f908               cmp ecx, 8
// 00497e18  7d12                 jge 0x497e2c
// 00497e1a  3bcb                 cmp ecx, ebx
// 00497e1c  7d0e                 jge 0x497e2c
// 00497e1e  8b16                 mov edx, dword ptr [esi]
// 00497e20  d2e0                 shl al, cl
// 00497e22  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00497e25  c1fa03               sar edx, 3
// 00497e28  88440a01             mov byte ptr [edx + ecx + 1], al
// 00497e2c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00497e30  83fb08               cmp ebx, 8
// 00497e33  7c05                 jl 0x497e3a
// 00497e35  830608               add dword ptr [esi], 8
// 00497e38  eb02                 jmp 0x497e3c
// 00497e3a  011e                 add dword ptr [esi], ebx
// 00497e3c  83eb08               sub ebx, 8
// 00497e3f  83c501               add ebp, 1
// 00497e42  85db                 test ebx, ebx
// 00497e44  7f90                 jg 0x497dd6
// 00497e46  5f                   pop edi
// 00497e47  5d                   pop ebp
// 00497e48  5e                   pop esi
// 00497e49  5b                   pop ebx
// 00497e4a  59                   pop ecx
// 00497e4b  c20c00               ret 0xc
// library rbxgs-raknet/BitStream.cpp (function ?WriteBits@BitStream@RakNet@@QAEXPBEH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
