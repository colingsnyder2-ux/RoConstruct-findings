// roc 2007-08 004ca060  unit: seg_004c0000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ca060
//
// 004ca060  53                   push ebx
// 004ca061  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004ca065  55                   push ebp
// 004ca066  57                   push edi
// 004ca067  53                   push ebx
// 004ca068  8bf9                 mov edi, ecx
// 004ca06a  e8f1feffff           call 0x4c9f60
// 004ca06f  0fb66c2414           movzx ebp, byte ptr [esp + 0x14]
// 004ca074  0fb6c0               movzx eax, al
// 004ca077  3bc5                 cmp eax, ebp
// 004ca079  0f849e000000         je 0x4ca11d
// 004ca07f  3cff                 cmp al, 0xff
// 004ca081  56                   push esi
// 004ca082  741f                 je 0x4ca0a3
// 004ca084  8b0f                 mov ecx, dword ptr [edi]
// 004ca086  8b3481               mov esi, dword ptr [ecx + eax*4]
// 004ca089  8d0481               lea eax, [ecx + eax*4]
// 004ca08c  c70000000000         mov dword ptr [eax], 0
// 004ca092  8b16                 mov edx, dword ptr [esi]
// 004ca094  52                   push edx
// 004ca095  e8c85b1600           call 0x62fc62
// 004ca09a  56                   push esi
// 004ca09b  e8c25b1600           call 0x62fc62
// 004ca0a0  83c408               add esp, 8
// 004ca0a3  6a0c                 push 0xc
// 004ca0a5  e84c5e1600           call 0x62fef6
// 004ca0aa  8bf0                 mov esi, eax
// 004ca0ac  8bc3                 mov eax, ebx
// 004ca0ae  83c404               add esp, 4
// 004ca0b1  8d5001               lea edx, [eax + 1]
// 004ca0b4  8a08                 mov cl, byte ptr [eax]
// 004ca0b6  83c001               add eax, 1
// 004ca0b9  84c9                 test cl, cl
// 004ca0bb  75f7                 jne 0x4ca0b4
// 004ca0bd  2bc2                 sub eax, edx
// 004ca0bf  83c001               add eax, 1
// 004ca0c2  50                   push eax
// 004ca0c3  e82e5e1600           call 0x62fef6
// 004ca0c8  83c404               add esp, 4
// 004ca0cb  8906                 mov dword ptr [esi], eax
// 004ca0cd  8bcb                 mov ecx, ebx
// 004ca0cf  8bd0                 mov edx, eax
// 004ca0d1  8a01                 mov al, byte ptr [ecx]
// 004ca0d3  8802                 mov byte ptr [edx], al
// 004ca0d5  83c101               add ecx, 1
// 004ca0d8  83c201               add edx, 1
// 004ca0db  84c0                 test al, al
// 004ca0dd  75f2                 jne 0x4ca0d1
// 004ca0df  c7460400000000       mov dword ptr [esi + 4], 0
// 004ca0e6  3b6f04               cmp ebp, dword ptr [edi + 4]
// 004ca0e9  7326                 jae 0x4ca111
// 004ca0eb  8b07                 mov eax, dword ptr [edi]
// 004ca0ed  8b1ca8               mov ebx, dword ptr [eax + ebp*4]
// 004ca0f0  85db                 test ebx, ebx
// 004ca0f2  7411                 je 0x4ca105
// 004ca0f4  8b0b                 mov ecx, dword ptr [ebx]
// 004ca0f6  51                   push ecx
// 004ca0f7  e8665b1600           call 0x62fc62
// 004ca0fc  53                   push ebx
// 004ca0fd  e8605b1600           call 0x62fc62
// 004ca102  83c408               add esp, 8
// 004ca105  8b17                 mov edx, dword ptr [edi]
// 004ca107  8934aa               mov dword ptr [edx + ebp*4], esi
// 004ca10a  5e                   pop esi
// 004ca10b  5f                   pop edi
// 004ca10c  5d                   pop ebp
// 004ca10d  5b                   pop ebx
// 004ca10e  c20800               ret 8
// 004ca111  55                   push ebp
// 004ca112  6a00                 push 0
// 004ca114  56                   push esi
// 004ca115  8bcf                 mov ecx, edi
// 004ca117  e804fdffff           call 0x4c9e20
// 004ca11c  5e                   pop esi
// 004ca11d  5f                   pop edi
// 004ca11e  5d                   pop ebp
// 004ca11f  5b                   pop ebx
// 004ca120  c20800               ret 8
// library rbxgs-raknet/RPCMap.cpp (function ?AddIdentifierAtIndex@RPCMap@@QAEXPBDE@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
