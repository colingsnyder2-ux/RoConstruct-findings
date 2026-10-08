// roc 2007-08 0049fd90  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049fd90
//
// 0049fd90  51                   push ecx
// 0049fd91  53                   push ebx
// 0049fd92  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0049fd96  85db                 test ebx, ebx
// 0049fd98  56                   push esi
// 0049fd99  8bf1                 mov esi, ecx
// 0049fd9b  0f8e87000000         jle 0x49fe28
// 0049fda1  55                   push ebp
// 0049fda2  57                   push edi
// 0049fda3  53                   push ebx
// 0049fda4  e897fdffff           call 0x49fb40
// 0049fda9  8b16                 mov edx, dword ptr [esi]
// 0049fdab  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0049fdaf  83e207               and edx, 7
// 0049fdb2  89542410             mov dword ptr [esp + 0x10], edx
// 0049fdb6  83fb08               cmp ebx, 8
// 0049fdb9  8a4500               mov al, byte ptr [ebp]
// 0049fdbc  7d0d                 jge 0x49fdcb
// 0049fdbe  807c242000           cmp byte ptr [esp + 0x20], 0
// 0049fdc3  7406                 je 0x49fdcb
// 0049fdc5  b108                 mov cl, 8
// 0049fdc7  2acb                 sub cl, bl
// 0049fdc9  d2e0                 shl al, cl
// 0049fdcb  8b0e                 mov ecx, dword ptr [esi]
// 0049fdcd  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0049fdd0  c1f903               sar ecx, 3
// 0049fdd3  85d2                 test edx, edx
// 0049fdd5  7505                 jne 0x49fddc
// 0049fdd7  880439               mov byte ptr [ecx + edi], al
// 0049fdda  eb34                 jmp 0x49fe10
// 0049fddc  03f9                 add edi, ecx
// 0049fdde  8ac8                 mov cl, al
// 0049fde0  884c241c             mov byte ptr [esp + 0x1c], cl
// 0049fde4  8aca                 mov cl, dl
// 0049fde6  8ad0                 mov dl, al
// 0049fde8  d2ea                 shr dl, cl
// 0049fdea  b908000000           mov ecx, 8
// 0049fdef  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0049fdf3  0817                 or byte ptr [edi], dl
// 0049fdf5  83f908               cmp ecx, 8
// 0049fdf8  7d12                 jge 0x49fe0c
// 0049fdfa  3bcb                 cmp ecx, ebx
// 0049fdfc  7d0e                 jge 0x49fe0c
// 0049fdfe  8b16                 mov edx, dword ptr [esi]
// 0049fe00  d2e0                 shl al, cl
// 0049fe02  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0049fe05  c1fa03               sar edx, 3
// 0049fe08  88440a01             mov byte ptr [edx + ecx + 1], al
// 0049fe0c  8b542410             mov edx, dword ptr [esp + 0x10]
// 0049fe10  83fb08               cmp ebx, 8
// 0049fe13  7c05                 jl 0x49fe1a
// 0049fe15  830608               add dword ptr [esi], 8
// 0049fe18  eb02                 jmp 0x49fe1c
// 0049fe1a  011e                 add dword ptr [esi], ebx
// 0049fe1c  83eb08               sub ebx, 8
// 0049fe1f  83c501               add ebp, 1
// 0049fe22  85db                 test ebx, ebx
// 0049fe24  7f90                 jg 0x49fdb6
// 0049fe26  5f                   pop edi
// 0049fe27  5d                   pop ebp
// 0049fe28  5e                   pop esi
// 0049fe29  5b                   pop ebx
// 0049fe2a  59                   pop ecx
// 0049fe2b  c20c00               ret 0xc
// library rbxgs-raknet/BitStream.cpp (function ?WriteBits@BitStream@RakNet@@QAEXPBEH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
