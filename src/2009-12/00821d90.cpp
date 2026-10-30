// roc 2009-12 00821d90  unit: CXTPReportControl  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00821d90
//
// 00821d90  6aff                 push -1
// 00821d92  6888b19500           push 0x95b188
// 00821d97  64a100000000         mov eax, dword ptr fs:[0]
// 00821d9d  50                   push eax
// 00821d9e  83ec1c               sub esp, 0x1c
// 00821da1  53                   push ebx
// 00821da2  55                   push ebp
// 00821da3  56                   push esi
// 00821da4  57                   push edi
// 00821da5  a10052b600           mov eax, dword ptr [0xb65200]
// 00821daa  33c4                 xor eax, esp
// 00821dac  50                   push eax
// 00821dad  8d442430             lea eax, [esp + 0x30]
// 00821db1  64a300000000         mov dword ptr fs:[0], eax
// 00821db7  894c2420             mov dword ptr [esp + 0x20], ecx
// 00821dbb  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00821dbf  e88cad0000           call 0x82cb50
// 00821dc4  8b742440             mov esi, dword ptr [esp + 0x40]
// 00821dc8  33db                 xor ebx, ebx
// 00821dca  3bf3                 cmp esi, ebx
// 00821dcc  7455                 je 0x821e23
// 00821dce  395e28               cmp dword ptr [esi + 0x28], ebx
// 00821dd1  7450                 je 0x821e23
// 00821dd3  8b06                 mov eax, dword ptr [esi]
// 00821dd5  8b5070               mov edx, dword ptr [eax + 0x70]
// 00821dd8  6860509f00           push 0x9f5060
// 00821ddd  8bce                 mov ecx, esi
// 00821ddf  ffd2                 call edx
// 00821de1  8bf8                 mov edi, eax
// 00821de3  897c2424             mov dword ptr [esp + 0x24], edi
// 00821de7  8d442418             lea eax, [esp + 0x18]
// 00821deb  50                   push eax
// 00821dec  686cf49900           push 0x99f46c
// 00821df1  56                   push esi
// 00821df2  895c2444             mov dword ptr [esp + 0x44], ebx
// 00821df6  895c2424             mov dword ptr [esp + 0x24], ebx
// 00821dfa  e8d1eb0200           call 0x8509d0
// 00821dff  83c40c               add esp, 0xc
// 00821e02  8bce                 mov ecx, esi
// 00821e04  e877fc0200           call 0x851a80
// 00821e09  837c241801           cmp dword ptr [esp + 0x18], 1
// 00821e0e  742b                 je 0x821e3b
// 00821e10  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00821e18  3bfb                 cmp edi, ebx
// 00821e1a  7407                 je 0x821e23
// 00821e1c  8bcf                 mov ecx, edi
// 00821e1e  e8b91ffdff           call 0x7f3ddc
// 00821e23  33c0                 xor eax, eax
// 00821e25  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00821e29  64890d00000000       mov dword ptr fs:[0], ecx
// 00821e30  59                   pop ecx
// 00821e31  5f                   pop edi
// 00821e32  5e                   pop esi
// 00821e33  5d                   pop ebp
// 00821e34  5b                   pop ebx
// 00821e35  83c428               add esp, 0x28
// 00821e38  c20800               ret 8
// 00821e3b  8b17                 mov edx, dword ptr [edi]
// 00821e3d  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 00821e43  6858509f00           push 0x9f5058
// 00821e48  8bcf                 mov ecx, edi
// 00821e4a  ffd0                 call eax
// 00821e4c  8be8                 mov ebp, eax
// 00821e4e  896c2428             mov dword ptr [esp + 0x28], ebp
// 00821e52  8b5500               mov edx, dword ptr [ebp]
// 00821e55  8b4204               mov eax, dword ptr [edx + 4]
// 00821e58  6a01                 push 1
// 00821e5a  53                   push ebx
// 00821e5b  8bcd                 mov ecx, ebp
// 00821e5d  c644244001           mov byte ptr [esp + 0x40], 1
// 00821e62  ffd0                 call eax
// 00821e64  8944241c             mov dword ptr [esp + 0x1c], eax
// 00821e68  3bc3                 cmp eax, ebx
// 00821e6a  0f84ae000000         je 0x821f1e
// 00821e70  8b5500               mov edx, dword ptr [ebp]
// 00821e73  8b5208               mov edx, dword ptr [edx + 8]
// 00821e76  8d44241c             lea eax, [esp + 0x1c]
// 00821e7a  50                   push eax
// 00821e7b  8bcd                 mov ecx, ebp
// 00821e7d  ffd2                 call edx
// 00821e7f  8bf0                 mov esi, eax
// 00821e81  8974242c             mov dword ptr [esp + 0x2c], esi
// 00821e85  c644243802           mov byte ptr [esp + 0x38], 2
// 00821e8a  895c2440             mov dword ptr [esp + 0x40], ebx
// 00821e8e  e87d8e0000           call 0x82ad10
// 00821e93  8b16                 mov edx, dword ptr [esi]
// 00821e95  8b5264               mov edx, dword ptr [edx + 0x64]
// 00821e98  50                   push eax
// 00821e99  8d442444             lea eax, [esp + 0x44]
// 00821e9d  50                   push eax
// 00821e9e  8bce                 mov ecx, esi
// 00821ea0  ffd2                 call edx
// 00821ea2  85c0                 test eax, eax
// 00821ea4  740c                 je 0x821eb2
// 00821ea6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00821eaa  8b01                 mov eax, dword ptr [ecx]
// 00821eac  8b5060               mov edx, dword ptr [eax + 0x60]
// 00821eaf  56                   push esi
// 00821eb0  ffd2                 call edx
// 00821eb2  8b442440             mov eax, dword ptr [esp + 0x40]
// 00821eb6  3bc3                 cmp eax, ebx
// 00821eb8  0f8488000000         je 0x821f46
// 00821ebe  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00821ec2  89442414             mov dword ptr [esp + 0x14], eax
// 00821ec6  8b01                 mov eax, dword ptr [ecx]
// 00821ec8  8b8000020000         mov eax, dword ptr [eax + 0x200]
// 00821ece  8d542414             lea edx, [esp + 0x14]
// 00821ed2  52                   push edx
// 00821ed3  ffd0                 call eax
// 00821ed5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00821ed9  8bf8                 mov edi, eax
// 00821edb  3bfb                 cmp edi, ebx
// 00821edd  7506                 jne 0x821ee5
// 00821edf  394c2414             cmp dword ptr [esp + 0x14], ecx
// 00821ee3  7411                 je 0x821ef6
// 00821ee5  3bcb                 cmp ecx, ebx
// 00821ee7  7409                 je 0x821ef2
// 00821ee9  e8ee1efdff           call 0x7f3ddc
// 00821eee  895c2440             mov dword ptr [esp + 0x40], ebx
// 00821ef2  3bfb                 cmp edi, ebx
// 00821ef4  750e                 jne 0x821f04
// 00821ef6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00821efa  51                   push ecx
// 00821efb  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00821eff  e8acb00000           call 0x82cfb0
// 00821f04  8bce                 mov ecx, esi
// 00821f06  c644243801           mov byte ptr [esp + 0x38], 1
// 00821f0b  e8cc1efdff           call 0x7f3ddc
// 00821f10  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 00821f14  0f8556ffffff         jne 0x821e70
// 00821f1a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00821f1e  8b5500               mov edx, dword ptr [ebp]
// 00821f21  8b02                 mov eax, dword ptr [edx]
// 00821f23  6a01                 push 1
// 00821f25  8bcd                 mov ecx, ebp
// 00821f27  885c243c             mov byte ptr [esp + 0x3c], bl
// 00821f2b  ffd0                 call eax
// 00821f2d  8bcf                 mov ecx, edi
// 00821f2f  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00821f37  e8a01efdff           call 0x7f3ddc
// 00821f3c  b801000000           mov eax, 1
// 00821f41  e9dffeffff           jmp 0x821e25
// 00821f46  53                   push ebx
// 00821f47  6a06                 push 6
// 00821f49  e88224fdff           call 0x7f43d0
// copied from an identical function in another client (function ?_ReadRecodsFromData@CXTPReportControl@@MAEHPAVCXTPPropExchange@@AAVCXTPReportRecords@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp