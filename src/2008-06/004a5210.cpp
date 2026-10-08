// roc 2008-06 004a5210  unit: RBX::VHint::?$FactoryProduct::Creator  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5210
//
// 004a5210  53                   push ebx
// 004a5211  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004a5215  56                   push esi
// 004a5216  8bf1                 mov esi, ecx
// 004a5218  85db                 test ebx, ebx
// 004a521a  7f07                 jg 0x4a5223
// 004a521c  5e                   pop esi
// 004a521d  32c0                 xor al, al
// 004a521f  5b                   pop ebx
// 004a5220  c20c00               ret 0xc
// 004a5223  8b4608               mov eax, dword ptr [esi + 8]
// 004a5226  03c3                 add eax, ebx
// 004a5228  3b06                 cmp eax, dword ptr [esi]
// 004a522a  7ff0                 jg 0x4a521c
// 004a522c  55                   push ebp
// 004a522d  57                   push edi
// 004a522e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004a5232  8d4b07               lea ecx, [ebx + 7]
// 004a5235  c1f903               sar ecx, 3
// 004a5238  51                   push ecx
// 004a5239  6a00                 push 0
// 004a523b  57                   push edi
// 004a523c  e8c3c41f00           call 0x6a1704
// 004a5241  8b5608               mov edx, dword ptr [esi + 8]
// 004a5244  83c40c               add esp, 0xc
// 004a5247  83e207               and edx, 7
// 004a524a  89542418             mov dword ptr [esp + 0x18], edx
// 004a524e  8bff                 mov edi, edi
// 004a5250  8b4608               mov eax, dword ptr [esi + 8]
// 004a5253  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a5256  c1f803               sar eax, 3
// 004a5259  8a0408               mov al, byte ptr [eax + ecx]
// 004a525c  8bca                 mov ecx, edx
// 004a525e  d2e0                 shl al, cl
// 004a5260  0a07                 or al, byte ptr [edi]
// 004a5262  8807                 mov byte ptr [edi], al
// 004a5264  85d2                 test edx, edx
// 004a5266  7e28                 jle 0x4a5290
// 004a5268  b908000000           mov ecx, 8
// 004a526d  2bca                 sub ecx, edx
// 004a526f  3bd9                 cmp ebx, ecx
// 004a5271  7e1d                 jle 0x4a5290
// 004a5273  8b5608               mov edx, dword ptr [esi + 8]
// 004a5276  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 004a5279  c1fa03               sar edx, 3
// 004a527c  8a542a01             mov dl, byte ptr [edx + ebp + 1]
// 004a5280  b108                 mov cl, 8
// 004a5282  2a4c2418             sub cl, byte ptr [esp + 0x18]
// 004a5286  d2ea                 shr dl, cl
// 004a5288  0ad0                 or dl, al
// 004a528a  8817                 mov byte ptr [edi], dl
// 004a528c  8b542418             mov edx, dword ptr [esp + 0x18]
// 004a5290  83eb08               sub ebx, 8
// 004a5293  7915                 jns 0x4a52aa
// 004a5295  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 004a529a  7406                 je 0x4a52a2
// 004a529c  8acb                 mov cl, bl
// 004a529e  f6d9                 neg cl
// 004a52a0  d22f                 shr byte ptr [edi], cl
// 004a52a2  8d4308               lea eax, [ebx + 8]
// 004a52a5  014608               add dword ptr [esi + 8], eax
// 004a52a8  eb04                 jmp 0x4a52ae
// 004a52aa  83460808             add dword ptr [esi + 8], 8
// 004a52ae  47                   inc edi
// 004a52af  85db                 test ebx, ebx
// 004a52b1  7f9d                 jg 0x4a5250
// 004a52b3  5f                   pop edi
// 004a52b4  5d                   pop ebp
// 004a52b5  5e                   pop esi
// 004a52b6  b001                 mov al, 1
// 004a52b8  5b                   pop ebx
// 004a52b9  c20c00               ret 0xc
// library rbxgs-raknet/BitStream.cpp (function ?ReadBits@BitStream@RakNet@@QAE_NPAEH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
