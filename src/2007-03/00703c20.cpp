// roc 2007-03 00703c20  unit: seg_00700000  size: 508 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00703c20
//
// 00703c20  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 00703c24  53                   push ebx
// 00703c25  55                   push ebp
// 00703c26  56                   push esi
// 00703c27  57                   push edi
// 00703c28  0f85b1000000         jne 0x703cdf
// 00703c2e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00703c32  bd03000000           mov ebp, 3
// 00703c37  896c2414             mov dword ptr [esp + 0x14], ebp
// 00703c3b  eb03                 jmp 0x703c40
// 00703c3d  8d4900               lea ecx, [ecx]
// 00703c40  8b742414             mov esi, dword ptr [esp + 0x14]
// 00703c44  33ff                 xor edi, edi
// 00703c46  8b4304               mov eax, dword ptr [ebx + 4]
// 00703c49  57                   push edi
// 00703c4a  55                   push ebp
// 00703c4b  50                   push eax
// 00703c4c  ff1500d17700         call dword ptr [0x77d100]
// 00703c52  8bc8                 mov ecx, eax
// 00703c54  e807fcffff           call 0x703860
// 00703c59  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00703c5c  50                   push eax
// 00703c5d  57                   push edi
// 00703c5e  55                   push ebp
// 00703c5f  51                   push ecx
// 00703c60  ff1504d17700         call dword ptr [0x77d104]
// 00703c66  03742414             add esi, dword ptr [esp + 0x14]
// 00703c6a  83c701               add edi, 1
// 00703c6d  83ff04               cmp edi, 4
// 00703c70  7cd4                 jl 0x703c46
// 00703c72  8344241403           add dword ptr [esp + 0x14], 3
// 00703c77  83ed01               sub ebp, 1
// 00703c7a  83fdff               cmp ebp, -1
// 00703c7d  7fc1                 jg 0x703c40
// 00703c7f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00703c83  8b420c               mov eax, dword ptr [edx + 0xc]
// 00703c86  33ed                 xor ebp, ebp
// 00703c88  be3c000000           mov esi, 0x3c
// 00703c8d  8d4900               lea ecx, [ecx]
// 00703c90  bf04000000           mov edi, 4
// 00703c95  3bc7                 cmp eax, edi
// 00703c97  7e35                 jle 0x703cce
// 00703c99  8da42400000000       lea esp, [esp]
// 00703ca0  8b4304               mov eax, dword ptr [ebx + 4]
// 00703ca3  57                   push edi
// 00703ca4  55                   push ebp
// 00703ca5  50                   push eax
// 00703ca6  ff1500d17700         call dword ptr [0x77d100]
// 00703cac  8bc8                 mov ecx, eax
// 00703cae  e8adfbffff           call 0x703860
// 00703cb3  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00703cb6  50                   push eax
// 00703cb7  57                   push edi
// 00703cb8  55                   push ebp
// 00703cb9  51                   push ecx
// 00703cba  ff1504d17700         call dword ptr [0x77d104]
// 00703cc0  8b542418             mov edx, dword ptr [esp + 0x18]
// 00703cc4  8b420c               mov eax, dword ptr [edx + 0xc]
// 00703cc7  83c701               add edi, 1
// 00703cca  3bf8                 cmp edi, eax
// 00703ccc  7cd2                 jl 0x703ca0
// 00703cce  83ee0f               sub esi, 0xf
// 00703cd1  83c501               add ebp, 1
// 00703cd4  85f6                 test esi, esi
// 00703cd6  7fb8                 jg 0x703c90
// 00703cd8  5f                   pop edi
// 00703cd9  5e                   pop esi
// 00703cda  5d                   pop ebp
// 00703cdb  5b                   pop ebx
// 00703cdc  c20800               ret 8
// 00703cdf  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00703ce3  33ed                 xor ebp, ebp
// 00703ce5  c744241403000000     mov dword ptr [esp + 0x14], 3
// 00703ced  8d4900               lea ecx, [ecx]
// 00703cf0  8b742414             mov esi, dword ptr [esp + 0x14]
// 00703cf4  bb03000000           mov ebx, 3
// 00703cf9  8da42400000000       lea esp, [esp]
// 00703d00  8b4704               mov eax, dword ptr [edi + 4]
// 00703d03  53                   push ebx
// 00703d04  55                   push ebp
// 00703d05  50                   push eax
// 00703d06  ff1500d17700         call dword ptr [0x77d100]
// 00703d0c  8bc8                 mov ecx, eax
// 00703d0e  e84dfbffff           call 0x703860
// 00703d13  8b4f04               mov ecx, dword ptr [edi + 4]
// 00703d16  50                   push eax
// 00703d17  53                   push ebx
// 00703d18  55                   push ebp
// 00703d19  51                   push ecx
// 00703d1a  ff1504d17700         call dword ptr [0x77d104]
// 00703d20  03742414             add esi, dword ptr [esp + 0x14]
// 00703d24  83eb01               sub ebx, 1
// 00703d27  83fbff               cmp ebx, -1
// 00703d2a  7fd4                 jg 0x703d00
// 00703d2c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00703d30  83c003               add eax, 3
// 00703d33  83c501               add ebp, 1
// 00703d36  83f80f               cmp eax, 0xf
// 00703d39  89442414             mov dword ptr [esp + 0x14], eax
// 00703d3d  7cb1                 jl 0x703cf0
// 00703d3f  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00703d43  8b4508               mov eax, dword ptr [ebp + 8]
// 00703d46  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00703d4e  83c0fc               add eax, -4
// 00703d51  be3c000000           mov esi, 0x3c
// 00703d56  bb04000000           mov ebx, 4
// 00703d5b  3bc3                 cmp eax, ebx
// 00703d5d  7e36                 jle 0x703d95
// 00703d5f  90                   nop 
// 00703d60  8b542414             mov edx, dword ptr [esp + 0x14]
// 00703d64  8b4704               mov eax, dword ptr [edi + 4]
// 00703d67  52                   push edx
// 00703d68  53                   push ebx
// 00703d69  50                   push eax
// 00703d6a  ff1500d17700         call dword ptr [0x77d100]
// 00703d70  8bc8                 mov ecx, eax
// 00703d72  e8e9faffff           call 0x703860
// 00703d77  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00703d7b  8b5704               mov edx, dword ptr [edi + 4]
// 00703d7e  50                   push eax
// 00703d7f  51                   push ecx
// 00703d80  53                   push ebx
// 00703d81  52                   push edx
// 00703d82  ff1504d17700         call dword ptr [0x77d104]
// 00703d88  8b4508               mov eax, dword ptr [ebp + 8]
// 00703d8b  83c301               add ebx, 1
// 00703d8e  83c0fc               add eax, -4
// 00703d91  3bd8                 cmp ebx, eax
// 00703d93  7ccb                 jl 0x703d60
// 00703d95  8344241401           add dword ptr [esp + 0x14], 1
// 00703d9a  83ee0f               sub esi, 0xf
// 00703d9d  85f6                 test esi, esi
// 00703d9f  7fb5                 jg 0x703d56
// 00703da1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00703da9  c744241403000000     mov dword ptr [esp + 0x14], 3
// 00703db1  8b742414             mov esi, dword ptr [esp + 0x14]
// 00703db5  bb03000000           mov ebx, 3
// 00703dba  8d9b00000000         lea ebx, [ebx]
// 00703dc0  8b4508               mov eax, dword ptr [ebp + 8]
// 00703dc3  2b442418             sub eax, dword ptr [esp + 0x18]
// 00703dc7  53                   push ebx
// 00703dc8  83e801               sub eax, 1
// 00703dcb  50                   push eax
// 00703dcc  8b4704               mov eax, dword ptr [edi + 4]
// 00703dcf  50                   push eax
// 00703dd0  ff1500d17700         call dword ptr [0x77d100]
// 00703dd6  8bc8                 mov ecx, eax
// 00703dd8  e883faffff           call 0x703860
// 00703ddd  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00703de0  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 00703de4  8b5704               mov edx, dword ptr [edi + 4]
// 00703de7  50                   push eax
// 00703de8  53                   push ebx
// 00703de9  83e901               sub ecx, 1
// 00703dec  51                   push ecx
// 00703ded  52                   push edx
// 00703dee  ff1504d17700         call dword ptr [0x77d104]
// 00703df4  03742414             add esi, dword ptr [esp + 0x14]
// 00703df8  83eb01               sub ebx, 1
// 00703dfb  83fbff               cmp ebx, -1
// 00703dfe  7fc0                 jg 0x703dc0
// 00703e00  8b442414             mov eax, dword ptr [esp + 0x14]
// 00703e04  8344241801           add dword ptr [esp + 0x18], 1
// 00703e09  83c003               add eax, 3
// 00703e0c  83f80f               cmp eax, 0xf
// 00703e0f  89442414             mov dword ptr [esp + 0x14], eax
// 00703e13  7c9c                 jl 0x703db1
// 00703e15  5f                   pop edi
// 00703e16  5e                   pop esi
// 00703e17  5d                   pop ebp
// 00703e18  5b                   pop ebx
// 00703e19  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTWndShadow.cpp (function ?ComputePseudoShadow@CXTShadowWnd@@IAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndShadow.cpp
