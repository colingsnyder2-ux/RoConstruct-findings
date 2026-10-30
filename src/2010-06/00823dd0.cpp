// roc 2010-06 00823dd0  unit: CXTPNewToolbarDlg  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00823dd0
//
// 00823dd0  83ec1c               sub esp, 0x1c
// 00823dd3  8b442424             mov eax, dword ptr [esp + 0x24]
// 00823dd7  53                   push ebx
// 00823dd8  55                   push ebp
// 00823dd9  56                   push esi
// 00823dda  57                   push edi
// 00823ddb  8bf9                 mov edi, ecx
// 00823ddd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00823de1  50                   push eax
// 00823de2  51                   push ecx
// 00823de3  ff15e0b99e00         call dword ptr [0x9eb9e0]
// 00823de9  8b5f28               mov ebx, dword ptr [edi + 0x28]
// 00823dec  83eb01               sub ebx, 1
// 00823def  89442410             mov dword ptr [esp + 0x10], eax
// 00823df3  786a                 js 0x823e5f
// 00823df5  85db                 test ebx, ebx
// 00823df7  0f8c1c010000         jl 0x823f19
// 00823dfd  3b5f28               cmp ebx, dword ptr [edi + 0x28]
// 00823e00  0f8d13010000         jge 0x823f19
// 00823e06  8b5724               mov edx, dword ptr [edi + 0x24]
// 00823e09  8b349a               mov esi, dword ptr [edx + ebx*4]
// 00823e0c  8b06                 mov eax, dword ptr [esi]
// 00823e0e  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00823e14  8bce                 mov ecx, esi
// 00823e16  ffd2                 call edx
// 00823e18  85c0                 test eax, eax
// 00823e1a  743e                 je 0x823e5a
// 00823e1c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00823e20  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00823e24  56                   push esi
// 00823e25  8d4c2420             lea ecx, [esp + 0x20]
// 00823e29  8944241c             mov dword ptr [esp + 0x1c], eax
// 00823e2d  e87eb4fdff           call 0x7ff2b0
// 00823e32  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00823e36  51                   push ecx
// 00823e37  55                   push ebp
// 00823e38  50                   push eax
// 00823e39  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 00823e3f  85c0                 test eax, eax
// 00823e41  7417                 je 0x823e5a
// 00823e43  8b4620               mov eax, dword ptr [esi + 0x20]
// 00823e46  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00823e4a  3bc1                 cmp eax, ecx
// 00823e4c  743a                 je 0x823e88
// 00823e4e  51                   push ecx
// 00823e4f  50                   push eax
// 00823e50  ff15acba9e00         call dword ptr [0x9ebaac]
// 00823e56  85c0                 test eax, eax
// 00823e58  752e                 jne 0x823e88
// 00823e5a  83eb01               sub ebx, 1
// 00823e5d  7996                 jns 0x823df5
// 00823e5f  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00823e62  85c9                 test ecx, ecx
// 00823e64  7411                 je 0x823e77
// 00823e66  8b01                 mov eax, dword ptr [ecx]
// 00823e68  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 00823e6e  ffd2                 call edx
// 00823e70  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00823e77  8bcf                 mov ecx, edi
// 00823e79  e862f9ffff           call 0x8237e0
// 00823e7e  5f                   pop edi
// 00823e7f  5e                   pop esi
// 00823e80  5d                   pop ebp
// 00823e81  5b                   pop ebx
// 00823e82  83c41c               add esp, 0x1c
// 00823e85  c20800               ret 8
// 00823e88  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00823e8b  8b1d78bc9e00         mov ebx, dword ptr [0x9ebc78]
// 00823e91  3bce                 cmp ecx, esi
// 00823e93  7528                 jne 0x823ebd
// 00823e95  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00823e98  8d542430             lea edx, [esp + 0x30]
// 00823e9c  52                   push edx
// 00823e9d  50                   push eax
// 00823e9e  ffd3                 call ebx
// 00823ea0  8b442434             mov eax, dword ptr [esp + 0x34]
// 00823ea4  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00823ea7  8b11                 mov edx, dword ptr [ecx]
// 00823ea9  8b9278010000         mov edx, dword ptr [edx + 0x178]
// 00823eaf  50                   push eax
// 00823eb0  8b442434             mov eax, dword ptr [esp + 0x34]
// 00823eb4  50                   push eax
// 00823eb5  8b4704               mov eax, dword ptr [edi + 4]
// 00823eb8  50                   push eax
// 00823eb9  ffd2                 call edx
// 00823ebb  eb15                 jmp 0x823ed2
// 00823ebd  85c9                 test ecx, ecx
// 00823ebf  7411                 je 0x823ed2
// 00823ec1  8b01                 mov eax, dword ptr [ecx]
// 00823ec3  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 00823ec9  ffd2                 call edx
// 00823ecb  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00823ed2  837f1000             cmp dword ptr [edi + 0x10], 0
// 00823ed6  759f                 jne 0x823e77
// 00823ed8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00823edb  8d442430             lea eax, [esp + 0x30]
// 00823edf  50                   push eax
// 00823ee0  51                   push ecx
// 00823ee1  ffd3                 call ebx
// 00823ee3  8b442434             mov eax, dword ptr [esp + 0x34]
// 00823ee7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00823eeb  8b16                 mov edx, dword ptr [esi]
// 00823eed  8b9270010000         mov edx, dword ptr [edx + 0x170]
// 00823ef3  50                   push eax
// 00823ef4  8b4704               mov eax, dword ptr [edi + 4]
// 00823ef7  51                   push ecx
// 00823ef8  50                   push eax
// 00823ef9  8bce                 mov ecx, esi
// 00823efb  ffd2                 call edx
// 00823efd  85c0                 test eax, eax
// 00823eff  0f8472ffffff         je 0x823e77
// 00823f05  8bcf                 mov ecx, edi
// 00823f07  897710               mov dword ptr [edi + 0x10], esi
// 00823f0a  e8d1f8ffff           call 0x8237e0
// 00823f0f  5f                   pop edi
// 00823f10  5e                   pop esi
// 00823f11  5d                   pop ebp
// 00823f12  5b                   pop ebx
// 00823f13  83c41c               add esp, 0x1c
// 00823f16  c20800               ret 8
// 00823f19  e82e3df8ff           call 0x7a7c4c
// copied from an identical function in another client (function ?PickTarget@CXTPCustomizeDropSource@@AAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeTools.cpp