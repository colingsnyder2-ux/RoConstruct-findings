// roc 2007-03 004b9230  unit: seg_004b0000  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9230
//
// 004b9230  53                   push ebx
// 004b9231  57                   push edi
// 004b9232  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004b9236  57                   push edi
// 004b9237  8bd9                 mov ebx, ecx
// 004b9239  e892ffffff           call 0x4b91d0
// 004b923e  3cff                 cmp al, 0xff
// 004b9240  756e                 jne 0x4b92b0
// 004b9242  56                   push esi
// 004b9243  6a0c                 push 0xc
// 004b9245  e8be4e1600           call 0x61e108
// 004b924a  8bf0                 mov esi, eax
// 004b924c  8bc7                 mov eax, edi
// 004b924e  83c404               add esp, 4
// 004b9251  8d5001               lea edx, [eax + 1]
// 004b9254  8a08                 mov cl, byte ptr [eax]
// 004b9256  83c001               add eax, 1
// 004b9259  84c9                 test cl, cl
// 004b925b  75f7                 jne 0x4b9254
// 004b925d  2bc2                 sub eax, edx
// 004b925f  83c001               add eax, 1
// 004b9262  50                   push eax
// 004b9263  e8a04e1600           call 0x61e108
// 004b9268  83c404               add esp, 4
// 004b926b  8906                 mov dword ptr [esi], eax
// 004b926d  8bcf                 mov ecx, edi
// 004b926f  8bd0                 mov edx, eax
// 004b9271  8a01                 mov al, byte ptr [ecx]
// 004b9273  8802                 mov byte ptr [edx], al
// 004b9275  83c101               add ecx, 1
// 004b9278  83c201               add edx, 1
// 004b927b  84c0                 test al, al
// 004b927d  75f2                 jne 0x4b9271
// 004b927f  8b442414             mov eax, dword ptr [esp + 0x14]
// 004b9283  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 004b9287  894604               mov dword ptr [esi + 4], eax
// 004b928a  884e08               mov byte ptr [esi + 8], cl
// 004b928d  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004b9290  33c0                 xor eax, eax
// 004b9292  85c9                 test ecx, ecx
// 004b9294  7611                 jbe 0x4b92a7
// 004b9296  8b13                 mov edx, dword ptr [ebx]
// 004b9298  833a00               cmp dword ptr [edx], 0
// 004b929b  7418                 je 0x4b92b5
// 004b929d  83c001               add eax, 1
// 004b92a0  83c204               add edx, 4
// 004b92a3  3bc1                 cmp eax, ecx
// 004b92a5  72f1                 jb 0x4b9298
// 004b92a7  56                   push esi
// 004b92a8  8bcb                 mov ecx, ebx
// 004b92aa  e8d10e0000           call 0x4ba180
// 004b92af  5e                   pop esi
// 004b92b0  5f                   pop edi
// 004b92b1  5b                   pop ebx
// 004b92b2  c20c00               ret 0xc
// 004b92b5  50                   push eax
// 004b92b6  6a00                 push 0
// 004b92b8  56                   push esi
// 004b92b9  8bcb                 mov ecx, ebx
// 004b92bb  e8d00a0000           call 0x4b9d90
// 004b92c0  5e                   pop esi
// 004b92c1  5f                   pop edi
// 004b92c2  5b                   pop ebx
// 004b92c3  c20c00               ret 0xc
// library rbxgs-raknet/RPCMap.cpp (function ?AddIdentifierWithFunction@RPCMap@@QAEXPBDPAX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
