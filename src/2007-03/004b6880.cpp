// from server: 100% by auto
// roc 2007-03 004b6880  unit: seg_004b0000  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b6880
//
// 004b6880  83ec20               sub esp, 0x20
// 004b6883  53                   push ebx
// 004b6884  55                   push ebp
// 004b6885  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 004b6889  56                   push esi
// 004b688a  57                   push edi
// 004b688b  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 004b688f  8bf1                 mov esi, ecx
// 004b6891  55                   push ebp
// 004b6892  57                   push edi
// 004b6893  c6868000000001       mov byte ptr [esi + 0x80], 1
// 004b689a  e8b180ffff           call 0x4ae950
// 004b689f  83c408               add esp, 8
// 004b68a2  84c0                 test al, al
// 004b68a4  8d9ef4000000         lea ebx, [esi + 0xf4]
// 004b68aa  7435                 je 0x4b68e1
// 004b68ac  8b07                 mov eax, dword ptr [edi]
// 004b68ae  8903                 mov dword ptr [ebx], eax
// 004b68b0  8b4f04               mov ecx, dword ptr [edi + 4]
// 004b68b3  894b04               mov dword ptr [ebx + 4], ecx
// 004b68b6  8b5708               mov edx, dword ptr [edi + 8]
// 004b68b9  895308               mov dword ptr [ebx + 8], edx
// 004b68bc  8b470c               mov eax, dword ptr [edi + 0xc]
// 004b68bf  89430c               mov dword ptr [ebx + 0xc], eax
// 004b68c2  8b4d00               mov ecx, dword ptr [ebp]
// 004b68c5  8dbec4000000         lea edi, [esi + 0xc4]
// 004b68cb  890f                 mov dword ptr [edi], ecx
// 004b68cd  8b5504               mov edx, dword ptr [ebp + 4]
// 004b68d0  895704               mov dword ptr [edi + 4], edx
// 004b68d3  8b4508               mov eax, dword ptr [ebp + 8]
// 004b68d6  894708               mov dword ptr [edi + 8], eax
// 004b68d9  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004b68dc  894f0c               mov dword ptr [edi + 0xc], ecx
// 004b68df  eb3b                 jmp 0x4b691c
// 004b68e1  8b442434             mov eax, dword ptr [esp + 0x34]
// 004b68e5  8b10                 mov edx, dword ptr [eax]
// 004b68e7  8996c4000000         mov dword ptr [esi + 0xc4], edx
// 004b68ed  8b4804               mov ecx, dword ptr [eax + 4]
// 004b68f0  8dbec4000000         lea edi, [esi + 0xc4]
// 004b68f6  894f04               mov dword ptr [edi + 4], ecx
// 004b68f9  8b5008               mov edx, dword ptr [eax + 8]
// 004b68fc  895708               mov dword ptr [edi + 8], edx
// 004b68ff  8b400c               mov eax, dword ptr [eax + 0xc]
// 004b6902  89470c               mov dword ptr [edi + 0xc], eax
// 004b6905  8b4d00               mov ecx, dword ptr [ebp]
// 004b6908  890b                 mov dword ptr [ebx], ecx
// 004b690a  8b5504               mov edx, dword ptr [ebp + 4]
// 004b690d  895304               mov dword ptr [ebx + 4], edx
// 004b6910  8b4508               mov eax, dword ptr [ebp + 8]
// 004b6913  894308               mov dword ptr [ebx + 8], eax
// 004b6916  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004b6919  894b0c               mov dword ptr [ebx + 0xc], ecx
// 004b691c  8b17                 mov edx, dword ptr [edi]
// 004b691e  8b4f08               mov ecx, dword ptr [edi + 8]
// 004b6921  8b4704               mov eax, dword ptr [edi + 4]
// 004b6924  89542420             mov dword ptr [esp + 0x20], edx
// 004b6928  8b570c               mov edx, dword ptr [edi + 0xc]
// 004b692b  894c2428             mov dword ptr [esp + 0x28], ecx
// 004b692f  89442424             mov dword ptr [esp + 0x24], eax
// 004b6933  8954242c             mov dword ptr [esp + 0x2c], edx
// 004b6937  33c9                 xor ecx, ecx
// 004b6939  8da42400000000       lea esp, [esp]
// 004b6940  8b448c20             mov eax, dword ptr [esp + ecx*4 + 0x20]
// 004b6944  85c0                 test eax, eax
// 004b6946  8d50ff               lea edx, [eax - 1]
// 004b6949  89548c20             mov dword ptr [esp + ecx*4 + 0x20], edx
// 004b694d  7508                 jne 0x4b6957
// 004b694f  83c101               add ecx, 1
// 004b6952  83f904               cmp ecx, 4
// 004b6955  72e9                 jb 0x4b6940
// 004b6957  8b03                 mov eax, dword ptr [ebx]
// 004b6959  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004b695c  8b5308               mov edx, dword ptr [ebx + 8]
// 004b695f  89442410             mov dword ptr [esp + 0x10], eax
// 004b6963  8b430c               mov eax, dword ptr [ebx + 0xc]
// 004b6966  894c2414             mov dword ptr [esp + 0x14], ecx
// 004b696a  89542418             mov dword ptr [esp + 0x18], edx
// 004b696e  8944241c             mov dword ptr [esp + 0x1c], eax
// 004b6972  33c9                 xor ecx, ecx
// 004b6974  8b448c10             mov eax, dword ptr [esp + ecx*4 + 0x10]
// 004b6978  85c0                 test eax, eax
// 004b697a  8d50ff               lea edx, [eax - 1]
// 004b697d  89548c10             mov dword ptr [esp + ecx*4 + 0x10], edx
// 004b6981  7508                 jne 0x4b698b
// 004b6983  83c101               add ecx, 1
// 004b6986  83f904               cmp ecx, 4
// 004b6989  72e9                 jb 0x4b6974
// 004b698b  8daea4000000         lea ebp, [esi + 0xa4]
// 004b6991  55                   push ebp
// 004b6992  8d442414             lea eax, [esp + 0x14]
// 004b6996  50                   push eax
// 004b6997  8d4c2428             lea ecx, [esp + 0x28]
// 004b699b  51                   push ecx
// 004b699c  e88f94ffff           call 0x4afe30
// 004b69a1  56                   push esi
// 004b69a2  55                   push ebp
// 004b69a3  e8e8beffff           call 0x4b2890
// 004b69a8  8d9684000000         lea edx, [esi + 0x84]
// 004b69ae  52                   push edx
// 004b69af  55                   push ebp
// 004b69b0  56                   push esi
// 004b69b1  e86ac8ffff           call 0x4b3220
// 004b69b6  8d8624010000         lea eax, [esi + 0x124]
// 004b69bc  50                   push eax
// 004b69bd  53                   push ebx
// 004b69be  57                   push edi
// 004b69bf  e85cc0ffff           call 0x4b2a20
// 004b69c4  8d6e20               lea ebp, [esi + 0x20]
// 004b69c7  55                   push ebp
// 004b69c8  53                   push ebx
// 004b69c9  57                   push edi
// 004b69ca  e86194ffff           call 0x4afe30
// 004b69cf  8d4e40               lea ecx, [esi + 0x40]
// 004b69d2  51                   push ecx
// 004b69d3  55                   push ebp
// 004b69d4  e8d7ebffff           call 0x4b55b0
// 004b69d9  83c440               add esp, 0x40
// 004b69dc  8d5660               lea edx, [esi + 0x60]
// 004b69df  52                   push edx
// 004b69e0  55                   push ebp
// 004b69e1  e81abcffff           call 0x4b2600
// 004b69e6  8d86d4000000         lea eax, [esi + 0xd4]
// 004b69ec  50                   push eax
// 004b69ed  57                   push edi
// 004b69ee  e85defffff           call 0x4b5950
// 004b69f3  8d8ee4000000         lea ecx, [esi + 0xe4]
// 004b69f9  51                   push ecx
// 004b69fa  57                   push edi
// 004b69fb  e8d0c2ffff           call 0x4b2cd0
// 004b6a00  8d9604010000         lea edx, [esi + 0x104]
// 004b6a06  52                   push edx
// 004b6a07  53                   push ebx
// 004b6a08  e843efffff           call 0x4b5950
// 004b6a0d  81c614010000         add esi, 0x114
// 004b6a13  56                   push esi
// 004b6a14  53                   push ebx
// 004b6a15  e8b6c2ffff           call 0x4b2cd0
// 004b6a1a  83c428               add esp, 0x28
// 004b6a1d  5f                   pop edi
// 004b6a1e  5e                   pop esi
// 004b6a1f  5d                   pop ebp
// 004b6a20  5b                   pop ebx
// 004b6a21  83c420               add esp, 0x20
// 004b6a24  c20800               ret 8

// from server: 27% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: raknet-4.081 MessageFilter.cpp