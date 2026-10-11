// roc 2007-08 004c1bb0  unit: RakPeer  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c1bb0
//
// 004c1bb0  83ec20               sub esp, 0x20
// 004c1bb3  53                   push ebx
// 004c1bb4  55                   push ebp
// 004c1bb5  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 004c1bb9  56                   push esi
// 004c1bba  57                   push edi
// 004c1bbb  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 004c1bbf  8bf1                 mov esi, ecx
// 004c1bc1  55                   push ebp
// 004c1bc2  57                   push edi
// 004c1bc3  c6868000000001       mov byte ptr [esi + 0x80], 1
// 004c1bca  e8217cffff           call 0x4b97f0
// 004c1bcf  83c408               add esp, 8
// 004c1bd2  84c0                 test al, al
// 004c1bd4  8d9ef4000000         lea ebx, [esi + 0xf4]
// 004c1bda  7435                 je 0x4c1c11
// 004c1bdc  8b07                 mov eax, dword ptr [edi]
// 004c1bde  8903                 mov dword ptr [ebx], eax
// 004c1be0  8b4f04               mov ecx, dword ptr [edi + 4]
// 004c1be3  894b04               mov dword ptr [ebx + 4], ecx
// 004c1be6  8b5708               mov edx, dword ptr [edi + 8]
// 004c1be9  895308               mov dword ptr [ebx + 8], edx
// 004c1bec  8b470c               mov eax, dword ptr [edi + 0xc]
// 004c1bef  89430c               mov dword ptr [ebx + 0xc], eax
// 004c1bf2  8b4d00               mov ecx, dword ptr [ebp]
// 004c1bf5  8dbec4000000         lea edi, [esi + 0xc4]
// 004c1bfb  890f                 mov dword ptr [edi], ecx
// 004c1bfd  8b5504               mov edx, dword ptr [ebp + 4]
// 004c1c00  895704               mov dword ptr [edi + 4], edx
// 004c1c03  8b4508               mov eax, dword ptr [ebp + 8]
// 004c1c06  894708               mov dword ptr [edi + 8], eax
// 004c1c09  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004c1c0c  894f0c               mov dword ptr [edi + 0xc], ecx
// 004c1c0f  eb3b                 jmp 0x4c1c4c
// 004c1c11  8b442434             mov eax, dword ptr [esp + 0x34]
// 004c1c15  8b10                 mov edx, dword ptr [eax]
// 004c1c17  8996c4000000         mov dword ptr [esi + 0xc4], edx
// 004c1c1d  8b4804               mov ecx, dword ptr [eax + 4]
// 004c1c20  8dbec4000000         lea edi, [esi + 0xc4]
// 004c1c26  894f04               mov dword ptr [edi + 4], ecx
// 004c1c29  8b5008               mov edx, dword ptr [eax + 8]
// 004c1c2c  895708               mov dword ptr [edi + 8], edx
// 004c1c2f  8b400c               mov eax, dword ptr [eax + 0xc]
// 004c1c32  89470c               mov dword ptr [edi + 0xc], eax
// 004c1c35  8b4d00               mov ecx, dword ptr [ebp]
// 004c1c38  890b                 mov dword ptr [ebx], ecx
// 004c1c3a  8b5504               mov edx, dword ptr [ebp + 4]
// 004c1c3d  895304               mov dword ptr [ebx + 4], edx
// 004c1c40  8b4508               mov eax, dword ptr [ebp + 8]
// 004c1c43  894308               mov dword ptr [ebx + 8], eax
// 004c1c46  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004c1c49  894b0c               mov dword ptr [ebx + 0xc], ecx
// 004c1c4c  8b17                 mov edx, dword ptr [edi]
// 004c1c4e  8b4f08               mov ecx, dword ptr [edi + 8]
// 004c1c51  8b4704               mov eax, dword ptr [edi + 4]
// 004c1c54  89542420             mov dword ptr [esp + 0x20], edx
// 004c1c58  8b570c               mov edx, dword ptr [edi + 0xc]
// 004c1c5b  894c2428             mov dword ptr [esp + 0x28], ecx
// 004c1c5f  89442424             mov dword ptr [esp + 0x24], eax
// 004c1c63  8954242c             mov dword ptr [esp + 0x2c], edx
// 004c1c67  33c9                 xor ecx, ecx
// 004c1c69  8da42400000000       lea esp, [esp]
// 004c1c70  8b448c20             mov eax, dword ptr [esp + ecx*4 + 0x20]
// 004c1c74  85c0                 test eax, eax
// 004c1c76  8d50ff               lea edx, [eax - 1]
// 004c1c79  89548c20             mov dword ptr [esp + ecx*4 + 0x20], edx
// 004c1c7d  7508                 jne 0x4c1c87
// 004c1c7f  83c101               add ecx, 1
// 004c1c82  83f904               cmp ecx, 4
// 004c1c85  72e9                 jb 0x4c1c70
// 004c1c87  8b03                 mov eax, dword ptr [ebx]
// 004c1c89  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004c1c8c  8b5308               mov edx, dword ptr [ebx + 8]
// 004c1c8f  89442410             mov dword ptr [esp + 0x10], eax
// 004c1c93  8b430c               mov eax, dword ptr [ebx + 0xc]
// 004c1c96  894c2414             mov dword ptr [esp + 0x14], ecx
// 004c1c9a  89542418             mov dword ptr [esp + 0x18], edx
// 004c1c9e  8944241c             mov dword ptr [esp + 0x1c], eax
// 004c1ca2  33c9                 xor ecx, ecx
// 004c1ca4  8b448c10             mov eax, dword ptr [esp + ecx*4 + 0x10]
// 004c1ca8  85c0                 test eax, eax
// 004c1caa  8d50ff               lea edx, [eax - 1]
// 004c1cad  89548c10             mov dword ptr [esp + ecx*4 + 0x10], edx
// 004c1cb1  7508                 jne 0x4c1cbb
// 004c1cb3  83c101               add ecx, 1
// 004c1cb6  83f904               cmp ecx, 4
// 004c1cb9  72e9                 jb 0x4c1ca4
// 004c1cbb  8daea4000000         lea ebp, [esi + 0xa4]
// 004c1cc1  55                   push ebp
// 004c1cc2  8d442414             lea eax, [esp + 0x14]
// 004c1cc6  50                   push eax
// 004c1cc7  8d4c2428             lea ecx, [esp + 0x28]
// 004c1ccb  51                   push ecx
// 004c1ccc  e8ff90ffff           call 0x4badd0
// 004c1cd1  56                   push esi
// 004c1cd2  55                   push ebp
// 004c1cd3  e808bcffff           call 0x4bd8e0
// 004c1cd8  8d9684000000         lea edx, [esi + 0x84]
// 004c1cde  52                   push edx
// 004c1cdf  55                   push ebp
// 004c1ce0  56                   push esi
// 004c1ce1  e88ac5ffff           call 0x4be270
// 004c1ce6  8d8624010000         lea eax, [esi + 0x124]
// 004c1cec  50                   push eax
// 004c1ced  53                   push ebx
// 004c1cee  57                   push edi
// 004c1cef  e87cbdffff           call 0x4bda70
// 004c1cf4  8d6e20               lea ebp, [esi + 0x20]
// 004c1cf7  55                   push ebp
// 004c1cf8  53                   push ebx
// 004c1cf9  57                   push edi
// 004c1cfa  e8d190ffff           call 0x4badd0
// 004c1cff  8d4e40               lea ecx, [esi + 0x40]
// 004c1d02  51                   push ecx
// 004c1d03  55                   push ebp
// 004c1d04  e8e7ebffff           call 0x4c08f0
// 004c1d09  83c440               add esp, 0x40
// 004c1d0c  8d5660               lea edx, [esi + 0x60]
// 004c1d0f  52                   push edx
// 004c1d10  55                   push ebp
// 004c1d11  e83ab9ffff           call 0x4bd650
// 004c1d16  8d86d4000000         lea eax, [esi + 0xd4]
// 004c1d1c  50                   push eax
// 004c1d1d  57                   push edi
// 004c1d1e  e86defffff           call 0x4c0c90
// 004c1d23  8d8ee4000000         lea ecx, [esi + 0xe4]
// 004c1d29  51                   push ecx
// 004c1d2a  57                   push edi
// 004c1d2b  e8f0bfffff           call 0x4bdd20
// 004c1d30  8d9604010000         lea edx, [esi + 0x104]
// 004c1d36  52                   push edx
// 004c1d37  53                   push ebx
// 004c1d38  e853efffff           call 0x4c0c90
// 004c1d3d  81c614010000         add esi, 0x114
// 004c1d43  56                   push esi
// 004c1d44  53                   push ebx
// 004c1d45  e8d6bfffff           call 0x4bdd20
// 004c1d4a  83c428               add esp, 0x28
// 004c1d4d  5f                   pop edi
// 004c1d4e  5e                   pop esi
// 004c1d4f  5d                   pop ebp
// 004c1d50  5b                   pop ebx
// 004c1d51  83c420               add esp, 0x20
// 004c1d54  c20800               ret 8
// library openrbx-raknet/RakPeer.cpp (function ??$setPrivateKey@$$BY03I@?$RSACrypt@$$BY07I@big@@QAEXAAY03I0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
