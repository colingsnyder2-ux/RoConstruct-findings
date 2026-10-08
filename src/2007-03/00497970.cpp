// roc 2007-03 00497970  unit: seg_00490000  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00497970
//
// 00497970  53                   push ebx
// 00497971  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00497975  85db                 test ebx, ebx
// 00497977  56                   push esi
// 00497978  8bf1                 mov esi, ecx
// 0049797a  7f07                 jg 0x497983
// 0049797c  5e                   pop esi
// 0049797d  32c0                 xor al, al
// 0049797f  5b                   pop ebx
// 00497980  c20c00               ret 0xc
// 00497983  8b4608               mov eax, dword ptr [esi + 8]
// 00497986  03c3                 add eax, ebx
// 00497988  3b06                 cmp eax, dword ptr [esi]
// 0049798a  7ff0                 jg 0x49797c
// 0049798c  55                   push ebp
// 0049798d  57                   push edi
// 0049798e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00497992  8d4b07               lea ecx, [ebx + 7]
// 00497995  c1f903               sar ecx, 3
// 00497998  51                   push ecx
// 00497999  6a00                 push 0
// 0049799b  57                   push edi
// 0049799c  e87b761800           call 0x61f01c
// 004979a1  8b5608               mov edx, dword ptr [esi + 8]
// 004979a4  83c40c               add esp, 0xc
// 004979a7  83e207               and edx, 7
// 004979aa  89542418             mov dword ptr [esp + 0x18], edx
// 004979ae  8bff                 mov edi, edi
// 004979b0  8b4608               mov eax, dword ptr [esi + 8]
// 004979b3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004979b6  c1f803               sar eax, 3
// 004979b9  8a0408               mov al, byte ptr [eax + ecx]
// 004979bc  8bca                 mov ecx, edx
// 004979be  d2e0                 shl al, cl
// 004979c0  0a07                 or al, byte ptr [edi]
// 004979c2  85d2                 test edx, edx
// 004979c4  8807                 mov byte ptr [edi], al
// 004979c6  7e28                 jle 0x4979f0
// 004979c8  b908000000           mov ecx, 8
// 004979cd  2bca                 sub ecx, edx
// 004979cf  3bd9                 cmp ebx, ecx
// 004979d1  7e1d                 jle 0x4979f0
// 004979d3  8b5608               mov edx, dword ptr [esi + 8]
// 004979d6  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 004979d9  c1fa03               sar edx, 3
// 004979dc  8a542a01             mov dl, byte ptr [edx + ebp + 1]
// 004979e0  b108                 mov cl, 8
// 004979e2  2a4c2418             sub cl, byte ptr [esp + 0x18]
// 004979e6  d2ea                 shr dl, cl
// 004979e8  0ad0                 or dl, al
// 004979ea  8817                 mov byte ptr [edi], dl
// 004979ec  8b542418             mov edx, dword ptr [esp + 0x18]
// 004979f0  83eb08               sub ebx, 8
// 004979f3  7915                 jns 0x497a0a
// 004979f5  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 004979fa  7406                 je 0x497a02
// 004979fc  8acb                 mov cl, bl
// 004979fe  f6d9                 neg cl
// 00497a00  d22f                 shr byte ptr [edi], cl
// 00497a02  8d4308               lea eax, [ebx + 8]
// 00497a05  014608               add dword ptr [esi + 8], eax
// 00497a08  eb04                 jmp 0x497a0e
// 00497a0a  83460808             add dword ptr [esi + 8], 8
// 00497a0e  83c701               add edi, 1
// 00497a11  85db                 test ebx, ebx
// 00497a13  7f9b                 jg 0x4979b0
// 00497a15  5f                   pop edi
// 00497a16  5d                   pop ebp
// 00497a17  5e                   pop esi
// 00497a18  b001                 mov al, 1
// 00497a1a  5b                   pop ebx
// 00497a1b  c20c00               ret 0xc
// library rbxgs-raknet/BitStream.cpp (function ?ReadBits@BitStream@RakNet@@QAE_NPAEH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
