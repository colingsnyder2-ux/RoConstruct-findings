// roc 2011-06 004ecfd0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ecfd0
//
// 004ecfd0  53                   push ebx
// 004ecfd1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004ecfd5  56                   push esi
// 004ecfd6  53                   push ebx
// 004ecfd7  8bf1                 mov esi, ecx
// 004ecfd9  e8f2fbffff           call 0x4ecbd0
// 004ecfde  8b06                 mov eax, dword ptr [esi]
// 004ecfe0  8bd0                 mov edx, eax
// 004ecfe2  83e207               and edx, 7
// 004ecfe5  89542410             mov dword ptr [esp + 0x10], edx
// 004ecfe9  7526                 jne 0x4ed011
// 004ecfeb  f6c307               test bl, 7
// 004ecfee  7521                 jne 0x4ed011
// 004ecff0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004ecff4  8bcb                 mov ecx, ebx
// 004ecff6  c1e903               shr ecx, 3
// 004ecff9  51                   push ecx
// 004ecffa  c1e803               shr eax, 3
// 004ecffd  03460c               add eax, dword ptr [esi + 0xc]
// 004ed000  52                   push edx
// 004ed001  50                   push eax
// 004ed002  e8d5e53100           call 0x80b5dc
// 004ed007  83c40c               add esp, 0xc
// 004ed00a  011e                 add dword ptr [esi], ebx
// 004ed00c  5e                   pop esi
// 004ed00d  5b                   pop ebx
// 004ed00e  c20c00               ret 0xc
// 004ed011  55                   push ebp
// 004ed012  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004ed016  85db                 test ebx, ebx
// 004ed018  7678                 jbe 0x4ed092
// 004ed01a  57                   push edi
// 004ed01b  eb03                 jmp 0x4ed020
// 004ed01d  8d4900               lea ecx, [ecx]
// 004ed020  8a4500               mov al, byte ptr [ebp]
// 004ed023  45                   inc ebp
// 004ed024  83fb08               cmp ebx, 8
// 004ed027  730d                 jae 0x4ed036
// 004ed029  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 004ed02e  7406                 je 0x4ed036
// 004ed030  b108                 mov cl, 8
// 004ed032  2acb                 sub cl, bl
// 004ed034  d2e0                 shl al, cl
// 004ed036  8b0e                 mov ecx, dword ptr [esi]
// 004ed038  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004ed03b  c1e903               shr ecx, 3
// 004ed03e  85d2                 test edx, edx
// 004ed040  7505                 jne 0x4ed047
// 004ed042  880439               mov byte ptr [ecx + edi], al
// 004ed045  eb34                 jmp 0x4ed07b
// 004ed047  03f9                 add edi, ecx
// 004ed049  8ac8                 mov cl, al
// 004ed04b  884c2414             mov byte ptr [esp + 0x14], cl
// 004ed04f  8aca                 mov cl, dl
// 004ed051  8ad0                 mov dl, al
// 004ed053  d2ea                 shr dl, cl
// 004ed055  b908000000           mov ecx, 8
// 004ed05a  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 004ed05e  0817                 or byte ptr [edi], dl
// 004ed060  83f908               cmp ecx, 8
// 004ed063  7312                 jae 0x4ed077
// 004ed065  3bcb                 cmp ecx, ebx
// 004ed067  730e                 jae 0x4ed077
// 004ed069  8b16                 mov edx, dword ptr [esi]
// 004ed06b  d2e0                 shl al, cl
// 004ed06d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ed070  c1ea03               shr edx, 3
// 004ed073  88440a01             mov byte ptr [edx + ecx + 1], al
// 004ed077  8b542418             mov edx, dword ptr [esp + 0x18]
// 004ed07b  83fb08               cmp ebx, 8
// 004ed07e  720f                 jb 0x4ed08f
// 004ed080  830608               add dword ptr [esi], 8
// 004ed083  83eb08               sub ebx, 8
// 004ed086  7598                 jne 0x4ed020
// 004ed088  5f                   pop edi
// 004ed089  5d                   pop ebp
// 004ed08a  5e                   pop esi
// 004ed08b  5b                   pop ebx
// 004ed08c  c20c00               ret 0xc
// 004ed08f  011e                 add dword ptr [esi], ebx
// 004ed091  5f                   pop edi
// 004ed092  5d                   pop ebp
// 004ed093  5e                   pop esi
// 004ed094  5b                   pop ebx
// 004ed095  c20c00               ret 0xc
// library rbx2016-raknet/BitStream.cpp (function ?WriteBits@BitStream@RakNet@@QAEXPBEI_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
