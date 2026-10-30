// roc 2009-06 0079bc70  unit: CXTPNewToolbarDlg  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079bc70
//
// 0079bc70  83ec1c               sub esp, 0x1c
// 0079bc73  8b442424             mov eax, dword ptr [esp + 0x24]
// 0079bc77  53                   push ebx
// 0079bc78  55                   push ebp
// 0079bc79  56                   push esi
// 0079bc7a  57                   push edi
// 0079bc7b  8bf9                 mov edi, ecx
// 0079bc7d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0079bc81  50                   push eax
// 0079bc82  51                   push ecx
// 0079bc83  ff1534ef8900         call dword ptr [0x89ef34]
// 0079bc89  8b5f28               mov ebx, dword ptr [edi + 0x28]
// 0079bc8c  83eb01               sub ebx, 1
// 0079bc8f  89442410             mov dword ptr [esp + 0x10], eax
// 0079bc93  786a                 js 0x79bcff
// 0079bc95  85db                 test ebx, ebx
// 0079bc97  0f8c1c010000         jl 0x79bdb9
// 0079bc9d  3b5f28               cmp ebx, dword ptr [edi + 0x28]
// 0079bca0  0f8d13010000         jge 0x79bdb9
// 0079bca6  8b5724               mov edx, dword ptr [edi + 0x24]
// 0079bca9  8b349a               mov esi, dword ptr [edx + ebx*4]
// 0079bcac  8b06                 mov eax, dword ptr [esi]
// 0079bcae  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 0079bcb4  8bce                 mov ecx, esi
// 0079bcb6  ffd2                 call edx
// 0079bcb8  85c0                 test eax, eax
// 0079bcba  743e                 je 0x79bcfa
// 0079bcbc  8b442434             mov eax, dword ptr [esp + 0x34]
// 0079bcc0  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0079bcc4  56                   push esi
// 0079bcc5  8d4c2420             lea ecx, [esp + 0x20]
// 0079bcc9  8944241c             mov dword ptr [esp + 0x1c], eax
// 0079bccd  e89e47fdff           call 0x770470
// 0079bcd2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0079bcd6  51                   push ecx
// 0079bcd7  55                   push ebp
// 0079bcd8  50                   push eax
// 0079bcd9  ff15c0ed8900         call dword ptr [0x89edc0]
// 0079bcdf  85c0                 test eax, eax
// 0079bce1  7417                 je 0x79bcfa
// 0079bce3  8b4620               mov eax, dword ptr [esi + 0x20]
// 0079bce6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079bcea  3bc1                 cmp eax, ecx
// 0079bcec  743a                 je 0x79bd28
// 0079bcee  51                   push ecx
// 0079bcef  50                   push eax
// 0079bcf0  ff1508ef8900         call dword ptr [0x89ef08]
// 0079bcf6  85c0                 test eax, eax
// 0079bcf8  752e                 jne 0x79bd28
// 0079bcfa  83eb01               sub ebx, 1
// 0079bcfd  7996                 jns 0x79bc95
// 0079bcff  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0079bd02  85c9                 test ecx, ecx
// 0079bd04  7411                 je 0x79bd17
// 0079bd06  8b01                 mov eax, dword ptr [ecx]
// 0079bd08  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 0079bd0e  ffd2                 call edx
// 0079bd10  c7471000000000       mov dword ptr [edi + 0x10], 0
// 0079bd17  8bcf                 mov ecx, edi
// 0079bd19  e862f9ffff           call 0x79b680
// 0079bd1e  5f                   pop edi
// 0079bd1f  5e                   pop esi
// 0079bd20  5d                   pop ebp
// 0079bd21  5b                   pop ebx
// 0079bd22  83c41c               add esp, 0x1c
// 0079bd25  c20800               ret 8
// 0079bd28  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0079bd2b  8b1d30ee8900         mov ebx, dword ptr [0x89ee30]
// 0079bd31  3bce                 cmp ecx, esi
// 0079bd33  7528                 jne 0x79bd5d
// 0079bd35  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0079bd38  8d542430             lea edx, [esp + 0x30]
// 0079bd3c  52                   push edx
// 0079bd3d  50                   push eax
// 0079bd3e  ffd3                 call ebx
// 0079bd40  8b442434             mov eax, dword ptr [esp + 0x34]
// 0079bd44  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0079bd47  8b11                 mov edx, dword ptr [ecx]
// 0079bd49  8b9278010000         mov edx, dword ptr [edx + 0x178]
// 0079bd4f  50                   push eax
// 0079bd50  8b442434             mov eax, dword ptr [esp + 0x34]
// 0079bd54  50                   push eax
// 0079bd55  8b4704               mov eax, dword ptr [edi + 4]
// 0079bd58  50                   push eax
// 0079bd59  ffd2                 call edx
// 0079bd5b  eb15                 jmp 0x79bd72
// 0079bd5d  85c9                 test ecx, ecx
// 0079bd5f  7411                 je 0x79bd72
// 0079bd61  8b01                 mov eax, dword ptr [ecx]
// 0079bd63  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 0079bd69  ffd2                 call edx
// 0079bd6b  c7471000000000       mov dword ptr [edi + 0x10], 0
// 0079bd72  837f1000             cmp dword ptr [edi + 0x10], 0
// 0079bd76  759f                 jne 0x79bd17
// 0079bd78  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0079bd7b  8d442430             lea eax, [esp + 0x30]
// 0079bd7f  50                   push eax
// 0079bd80  51                   push ecx
// 0079bd81  ffd3                 call ebx
// 0079bd83  8b442434             mov eax, dword ptr [esp + 0x34]
// 0079bd87  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0079bd8b  8b16                 mov edx, dword ptr [esi]
// 0079bd8d  8b9270010000         mov edx, dword ptr [edx + 0x170]
// 0079bd93  50                   push eax
// 0079bd94  8b4704               mov eax, dword ptr [edi + 4]
// 0079bd97  51                   push ecx
// 0079bd98  50                   push eax
// 0079bd99  8bce                 mov ecx, esi
// 0079bd9b  ffd2                 call edx
// 0079bd9d  85c0                 test eax, eax
// 0079bd9f  0f8472ffffff         je 0x79bd17
// 0079bda5  8bcf                 mov ecx, edi
// 0079bda7  897710               mov dword ptr [edi + 0x10], esi
// 0079bdaa  e8d1f8ffff           call 0x79b680
// 0079bdaf  5f                   pop edi
// 0079bdb0  5e                   pop esi
// 0079bdb1  5d                   pop ebp
// 0079bdb2  5b                   pop ebx
// 0079bdb3  83c41c               add esp, 0x1c
// 0079bdb6  c20800               ret 8
// 0079bdb9  e826cff7ff           call 0x718ce4
// copied from an identical function in another client (function ?PickTarget@CXTPCustomizeDropSource@@AAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeTools.cpp