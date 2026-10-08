// roc 2007-03 004b92d0  unit: seg_004b0000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b92d0
//
// 004b92d0  53                   push ebx
// 004b92d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004b92d5  55                   push ebp
// 004b92d6  57                   push edi
// 004b92d7  53                   push ebx
// 004b92d8  8bf9                 mov edi, ecx
// 004b92da  e8f1feffff           call 0x4b91d0
// 004b92df  0fb66c2414           movzx ebp, byte ptr [esp + 0x14]
// 004b92e4  0fb6c0               movzx eax, al
// 004b92e7  3bc5                 cmp eax, ebp
// 004b92e9  0f849e000000         je 0x4b938d
// 004b92ef  3cff                 cmp al, 0xff
// 004b92f1  56                   push esi
// 004b92f2  741f                 je 0x4b9313
// 004b92f4  8b0f                 mov ecx, dword ptr [edi]
// 004b92f6  8b3481               mov esi, dword ptr [ecx + eax*4]
// 004b92f9  8d0481               lea eax, [ecx + eax*4]
// 004b92fc  c70000000000         mov dword ptr [eax], 0
// 004b9302  8b16                 mov edx, dword ptr [esi]
// 004b9304  52                   push edx
// 004b9305  e8e64d1600           call 0x61e0f0
// 004b930a  56                   push esi
// 004b930b  e8e04d1600           call 0x61e0f0
// 004b9310  83c408               add esp, 8
// 004b9313  6a0c                 push 0xc
// 004b9315  e8ee4d1600           call 0x61e108
// 004b931a  8bf0                 mov esi, eax
// 004b931c  8bc3                 mov eax, ebx
// 004b931e  83c404               add esp, 4
// 004b9321  8d5001               lea edx, [eax + 1]
// 004b9324  8a08                 mov cl, byte ptr [eax]
// 004b9326  83c001               add eax, 1
// 004b9329  84c9                 test cl, cl
// 004b932b  75f7                 jne 0x4b9324
// 004b932d  2bc2                 sub eax, edx
// 004b932f  83c001               add eax, 1
// 004b9332  50                   push eax
// 004b9333  e8d04d1600           call 0x61e108
// 004b9338  83c404               add esp, 4
// 004b933b  8906                 mov dword ptr [esi], eax
// 004b933d  8bcb                 mov ecx, ebx
// 004b933f  8bd0                 mov edx, eax
// 004b9341  8a01                 mov al, byte ptr [ecx]
// 004b9343  8802                 mov byte ptr [edx], al
// 004b9345  83c101               add ecx, 1
// 004b9348  83c201               add edx, 1
// 004b934b  84c0                 test al, al
// 004b934d  75f2                 jne 0x4b9341
// 004b934f  c7460400000000       mov dword ptr [esi + 4], 0
// 004b9356  3b6f04               cmp ebp, dword ptr [edi + 4]
// 004b9359  7326                 jae 0x4b9381
// 004b935b  8b07                 mov eax, dword ptr [edi]
// 004b935d  8b1ca8               mov ebx, dword ptr [eax + ebp*4]
// 004b9360  85db                 test ebx, ebx
// 004b9362  7411                 je 0x4b9375
// 004b9364  8b0b                 mov ecx, dword ptr [ebx]
// 004b9366  51                   push ecx
// 004b9367  e8844d1600           call 0x61e0f0
// 004b936c  53                   push ebx
// 004b936d  e87e4d1600           call 0x61e0f0
// 004b9372  83c408               add esp, 8
// 004b9375  8b17                 mov edx, dword ptr [edi]
// 004b9377  8934aa               mov dword ptr [edx + ebp*4], esi
// 004b937a  5e                   pop esi
// 004b937b  5f                   pop edi
// 004b937c  5d                   pop ebp
// 004b937d  5b                   pop ebx
// 004b937e  c20800               ret 8
// 004b9381  55                   push ebp
// 004b9382  6a00                 push 0
// 004b9384  56                   push esi
// 004b9385  8bcf                 mov ecx, edi
// 004b9387  e8040a0000           call 0x4b9d90
// 004b938c  5e                   pop esi
// 004b938d  5f                   pop edi
// 004b938e  5d                   pop ebp
// 004b938f  5b                   pop ebx
// 004b9390  c20800               ret 8
// library rbxgs-raknet/RPCMap.cpp (function ?AddIdentifierAtIndex@RPCMap@@QAEXPBDE@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
