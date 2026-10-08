// roc 2007-08 0049f9a0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049f9a0
//
// 0049f9a0  53                   push ebx
// 0049f9a1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0049f9a5  85db                 test ebx, ebx
// 0049f9a7  56                   push esi
// 0049f9a8  8bf1                 mov esi, ecx
// 0049f9aa  7f07                 jg 0x49f9b3
// 0049f9ac  5e                   pop esi
// 0049f9ad  32c0                 xor al, al
// 0049f9af  5b                   pop ebx
// 0049f9b0  c20c00               ret 0xc
// 0049f9b3  8b4608               mov eax, dword ptr [esi + 8]
// 0049f9b6  03c3                 add eax, ebx
// 0049f9b8  3b06                 cmp eax, dword ptr [esi]
// 0049f9ba  7ff0                 jg 0x49f9ac
// 0049f9bc  55                   push ebp
// 0049f9bd  57                   push edi
// 0049f9be  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0049f9c2  8d4b07               lea ecx, [ebx + 7]
// 0049f9c5  c1f903               sar ecx, 3
// 0049f9c8  51                   push ecx
// 0049f9c9  6a00                 push 0
// 0049f9cb  57                   push edi
// 0049f9cc  e8bb111900           call 0x630b8c
// 0049f9d1  8b5608               mov edx, dword ptr [esi + 8]
// 0049f9d4  83c40c               add esp, 0xc
// 0049f9d7  83e207               and edx, 7
// 0049f9da  89542418             mov dword ptr [esp + 0x18], edx
// 0049f9de  8bff                 mov edi, edi
// 0049f9e0  8b4608               mov eax, dword ptr [esi + 8]
// 0049f9e3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0049f9e6  c1f803               sar eax, 3
// 0049f9e9  8a0408               mov al, byte ptr [eax + ecx]
// 0049f9ec  8bca                 mov ecx, edx
// 0049f9ee  d2e0                 shl al, cl
// 0049f9f0  0a07                 or al, byte ptr [edi]
// 0049f9f2  85d2                 test edx, edx
// 0049f9f4  8807                 mov byte ptr [edi], al
// 0049f9f6  7e28                 jle 0x49fa20
// 0049f9f8  b908000000           mov ecx, 8
// 0049f9fd  2bca                 sub ecx, edx
// 0049f9ff  3bd9                 cmp ebx, ecx
// 0049fa01  7e1d                 jle 0x49fa20
// 0049fa03  8b5608               mov edx, dword ptr [esi + 8]
// 0049fa06  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0049fa09  c1fa03               sar edx, 3
// 0049fa0c  8a542a01             mov dl, byte ptr [edx + ebp + 1]
// 0049fa10  b108                 mov cl, 8
// 0049fa12  2a4c2418             sub cl, byte ptr [esp + 0x18]
// 0049fa16  d2ea                 shr dl, cl
// 0049fa18  0ad0                 or dl, al
// 0049fa1a  8817                 mov byte ptr [edi], dl
// 0049fa1c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0049fa20  83eb08               sub ebx, 8
// 0049fa23  7915                 jns 0x49fa3a
// 0049fa25  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 0049fa2a  7406                 je 0x49fa32
// 0049fa2c  8acb                 mov cl, bl
// 0049fa2e  f6d9                 neg cl
// 0049fa30  d22f                 shr byte ptr [edi], cl
// 0049fa32  8d4308               lea eax, [ebx + 8]
// 0049fa35  014608               add dword ptr [esi + 8], eax
// 0049fa38  eb04                 jmp 0x49fa3e
// 0049fa3a  83460808             add dword ptr [esi + 8], 8
// 0049fa3e  83c701               add edi, 1
// 0049fa41  85db                 test ebx, ebx
// 0049fa43  7f9b                 jg 0x49f9e0
// 0049fa45  5f                   pop edi
// 0049fa46  5d                   pop ebp
// 0049fa47  5e                   pop esi
// 0049fa48  b001                 mov al, 1
// 0049fa4a  5b                   pop ebx
// 0049fa4b  c20c00               ret 0xc
// library rbxgs-raknet/BitStream.cpp (function ?ReadBits@BitStream@RakNet@@QAE_NPAEH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
