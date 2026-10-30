// roc 2007-08 006ef830  unit: CXTPDockingPaneContext  size: 904 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ef830
//
// 006ef830  83ec28               sub esp, 0x28
// 006ef833  53                   push ebx
// 006ef834  55                   push ebp
// 006ef835  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 006ef839  56                   push esi
// 006ef83a  8bf1                 mov esi, ecx
// 006ef83c  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 006ef842  8b96f0000000         mov edx, dword ptr [esi + 0xf0]
// 006ef848  8bc5                 mov eax, ebp
// 006ef84a  2bc1                 sub eax, ecx
// 006ef84c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006ef850  57                   push edi
// 006ef851  2bca                 sub ecx, edx
// 006ef853  51                   push ecx
// 006ef854  50                   push eax
// 006ef855  8dbe0c010000         lea edi, [esi + 0x10c]
// 006ef85b  57                   push edi
// 006ef85c  ff15d8ed7700         call dword ptr [0x77edd8]
// 006ef862  8d9efc000000         lea ebx, [esi + 0xfc]
// 006ef868  8d442418             lea eax, [esp + 0x18]
// 006ef86c  53                   push ebx
// 006ef86d  50                   push eax
// 006ef86e  e83d29f8ff           call 0x6721b0
// 006ef873  8bc8                 mov ecx, eax
// 006ef875  e89624f8ff           call 0x671d10
// 006ef87a  50                   push eax
// 006ef87b  57                   push edi
// 006ef87c  8d4c2430             lea ecx, [esp + 0x30]
// 006ef880  51                   push ecx
// 006ef881  ff155cee7700         call dword ptr [0x77ee5c]
// 006ef887  85c0                 test eax, eax
// 006ef889  7416                 je 0x6ef8a1
// 006ef88b  8b17                 mov edx, dword ptr [edi]
// 006ef88d  8b4704               mov eax, dword ptr [edi + 4]
// 006ef890  8b4f08               mov ecx, dword ptr [edi + 8]
// 006ef893  8913                 mov dword ptr [ebx], edx
// 006ef895  8b570c               mov edx, dword ptr [edi + 0xc]
// 006ef898  894304               mov dword ptr [ebx + 4], eax
// 006ef89b  894b08               mov dword ptr [ebx + 8], ecx
// 006ef89e  89530c               mov dword ptr [ebx + 0xc], edx
// 006ef8a1  53                   push ebx
// 006ef8a2  e899d4ffff           call 0x6ecd40
// 006ef8a7  83c404               add esp, 4
// 006ef8aa  53                   push ebx
// 006ef8ab  ff15dced7700         call dword ptr [0x77eddc]
// 006ef8b1  85c0                 test eax, eax
// 006ef8b3  7519                 jne 0x6ef8ce
// 006ef8b5  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 006ef8bb  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 006ef8c2  740a                 je 0x6ef8ce
// 006ef8c4  8b16                 mov edx, dword ptr [esi]
// 006ef8c6  8b4224               mov eax, dword ptr [edx + 0x24]
// 006ef8c9  53                   push ebx
// 006ef8ca  8bce                 mov ecx, esi
// 006ef8cc  ffd0                 call eax
// 006ef8ce  8d86b8000000         lea eax, [esi + 0xb8]
// 006ef8d4  33ff                 xor edi, edi
// 006ef8d6  50                   push eax
// 006ef8d7  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 006ef8dd  89be44010000         mov dword ptr [esi + 0x144], edi
// 006ef8e3  ff1514ee7700         call dword ptr [0x77ee14]
// 006ef8e9  6a11                 push 0x11
// 006ef8eb  89bec8000000         mov dword ptr [esi + 0xc8], edi
// 006ef8f1  ff154cec7700         call dword ptr [0x77ec4c]
// 006ef8f7  6685c0               test ax, ax
// 006ef8fa  7c17                 jl 0x6ef913
// 006ef8fc  39be4c010000         cmp dword ptr [esi + 0x14c], edi
// 006ef902  740f                 je 0x6ef913
// 006ef904  8b442440             mov eax, dword ptr [esp + 0x40]
// 006ef908  8b16                 mov edx, dword ptr [esi]
// 006ef90a  8b5220               mov edx, dword ptr [edx + 0x20]
// 006ef90d  50                   push eax
// 006ef90e  55                   push ebp
// 006ef90f  8bce                 mov ecx, esi
// 006ef911  ffd2                 call edx
// 006ef913  39beb0000000         cmp dword ptr [esi + 0xb0], edi
// 006ef919  8b442440             mov eax, dword ptr [esp + 0x40]
// 006ef91d  89aeec000000         mov dword ptr [esi + 0xec], ebp
// 006ef923  8986f0000000         mov dword ptr [esi + 0xf0], eax
// 006ef929  0f844a020000         je 0x6efb79
// 006ef92f  8bce                 mov ecx, esi
// 006ef931  e86afbffff           call 0x6ef4a0
// 006ef936  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 006ef93c  33ed                 xor ebp, ebp
// 006ef93e  3bc7                 cmp eax, edi
// 006ef940  0f8433020000         je 0x6efb79
// 006ef946  eb0c                 jmp 0x6ef954
// 006ef948  eb06                 jmp 0x6ef950
// 006ef94a  8d9b00000000         lea ebx, [ebx]
// 006ef950  8b442414             mov eax, dword ptr [esp + 0x14]
// 006ef954  85ed                 test ebp, ebp
// 006ef956  8b4804               mov ecx, dword ptr [eax + 4]
// 006ef959  8b7808               mov edi, dword ptr [eax + 8]
// 006ef95c  894c2414             mov dword ptr [esp + 0x14], ecx
// 006ef960  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006ef968  0f85e6010000         jne 0x6efb54
// 006ef96e  8b542440             mov edx, dword ptr [esp + 0x40]
// 006ef972  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006ef976  52                   push edx
// 006ef977  50                   push eax
// 006ef978  8bcf                 mov ecx, edi
// 006ef97a  e801cbffff           call 0x6ec480
// 006ef97f  8bd8                 mov ebx, eax
// 006ef981  85db                 test ebx, ebx
// 006ef983  0f84cb010000         je 0x6efb54
// 006ef989  f6475420             test byte ptr [edi + 0x54], 0x20
// 006ef98d  743e                 je 0x6ef9cd
// 006ef98f  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 006ef995  8b96b8000000         mov edx, dword ptr [esi + 0xb8]
// 006ef99b  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 006ef9a1  899630010000         mov dword ptr [esi + 0x130], edx
// 006ef9a7  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 006ef9ad  898e2c010000         mov dword ptr [esi + 0x12c], ecx
// 006ef9b3  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 006ef9b9  898634010000         mov dword ptr [esi + 0x134], eax
// 006ef9bf  898e38010000         mov dword ptr [esi + 0x138], ecx
// 006ef9c5  89963c010000         mov dword ptr [esi + 0x13c], edx
// 006ef9cb  eb40                 jmp 0x6efa0d
// 006ef9cd  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 006ef9d3  e8b8e7f7ff           call 0x66e190
// 006ef9d8  8d4c2428             lea ecx, [esp + 0x28]
// 006ef9dc  51                   push ecx
// 006ef9dd  8bc8                 mov ecx, eax
// 006ef9df  89862c010000         mov dword ptr [esi + 0x12c], eax
// 006ef9e5  e8b60affff           call 0x6e04a0
// 006ef9ea  8b10                 mov edx, dword ptr [eax]
// 006ef9ec  899630010000         mov dword ptr [esi + 0x130], edx
// 006ef9f2  8b4804               mov ecx, dword ptr [eax + 4]
// 006ef9f5  898e34010000         mov dword ptr [esi + 0x134], ecx
// 006ef9fb  8b5008               mov edx, dword ptr [eax + 8]
// 006ef9fe  899638010000         mov dword ptr [esi + 0x138], edx
// 006efa04  8b400c               mov eax, dword ptr [eax + 0xc]
// 006efa07  89863c010000         mov dword ptr [esi + 0x13c], eax
// 006efa0d  8d43ff               lea eax, [ebx - 1]
// 006efa10  83f80f               cmp eax, 0xf
// 006efa13  0f87a4000000         ja 0x6efabd
// 006efa19  0fb688a8fb6e00       movzx ecx, byte ptr [eax + 0x6efba8]
// 006efa20  ff248d90fb6e00       jmp dword ptr [ecx*4 + 0x6efb90]
// 006efa27  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 006efa2d  038634010000         add eax, dword ptr [esi + 0x134]
// 006efa33  c7868801000002000000 mov dword ptr [esi + 0x188], 2
// 006efa3d  99                   cdq 
// 006efa3e  2bc2                 sub eax, edx
// 006efa40  d1f8                 sar eax, 1
// 006efa42  89863c010000         mov dword ptr [esi + 0x13c], eax
// 006efa48  eb73                 jmp 0x6efabd
// 006efa4a  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 006efa50  038634010000         add eax, dword ptr [esi + 0x134]
// 006efa56  c7868801000003000000 mov dword ptr [esi + 0x188], 3
// 006efa60  99                   cdq 
// 006efa61  2bc2                 sub eax, edx
// 006efa63  d1f8                 sar eax, 1
// 006efa65  898634010000         mov dword ptr [esi + 0x134], eax
// 006efa6b  eb50                 jmp 0x6efabd
// 006efa6d  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 006efa73  038630010000         add eax, dword ptr [esi + 0x130]
// 006efa79  c7868801000000000000 mov dword ptr [esi + 0x188], 0
// 006efa83  99                   cdq 
// 006efa84  2bc2                 sub eax, edx
// 006efa86  d1f8                 sar eax, 1
// 006efa88  898638010000         mov dword ptr [esi + 0x138], eax
// 006efa8e  eb2d                 jmp 0x6efabd
// 006efa90  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 006efa96  038630010000         add eax, dword ptr [esi + 0x130]
// 006efa9c  c7868801000001000000 mov dword ptr [esi + 0x188], 1
// 006efaa6  99                   cdq 
// 006efaa7  2bc2                 sub eax, edx
// 006efaa9  d1f8                 sar eax, 1
// 006efaab  898630010000         mov dword ptr [esi + 0x130], eax
// 006efab1  eb0a                 jmp 0x6efabd
// 006efab3  c7864401000001000000 mov dword ptr [esi + 0x144], 1
// 006efabd  83fb10               cmp ebx, 0x10
// 006efac0  7421                 je 0x6efae3
// 006efac2  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 006efac8  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 006eface  52                   push edx
// 006efacf  50                   push eax
// 006efad0  8bce                 mov ecx, esi
// 006efad2  e819e8ffff           call 0x6ee2f0
// 006efad7  85c0                 test eax, eax
// 006efad9  7528                 jne 0x6efb03
// 006efadb  89862c010000         mov dword ptr [esi + 0x12c], eax
// 006efae1  eb6c                 jmp 0x6efb4f
// 006efae3  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 006efae9  51                   push ecx
// 006efaea  8bce                 mov ecx, esi
// 006efaec  e8cfe8ffff           call 0x6ee3c0
// 006efaf1  85c0                 test eax, eax
// 006efaf3  7556                 jne 0x6efb4b
// 006efaf5  89862c010000         mov dword ptr [esi + 0x12c], eax
// 006efafb  898644010000         mov dword ptr [esi + 0x144], eax
// 006efb01  eb4c                 jmp 0x6efb4f
// 006efb03  8b962c010000         mov edx, dword ptr [esi + 0x12c]
// 006efb09  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 006efb0f  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 006efb15  52                   push edx
// 006efb16  50                   push eax
// 006efb17  51                   push ecx
// 006efb18  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 006efb1e  8d542424             lea edx, [esp + 0x24]
// 006efb22  52                   push edx
// 006efb23  e868ecf7ff           call 0x66e790
// 006efb28  8b08                 mov ecx, dword ptr [eax]
// 006efb2a  898e30010000         mov dword ptr [esi + 0x130], ecx
// 006efb30  8b5004               mov edx, dword ptr [eax + 4]
// 006efb33  899634010000         mov dword ptr [esi + 0x134], edx
// 006efb39  8b4808               mov ecx, dword ptr [eax + 8]
// 006efb3c  898e38010000         mov dword ptr [esi + 0x138], ecx
// 006efb42  8b500c               mov edx, dword ptr [eax + 0xc]
// 006efb45  89963c010000         mov dword ptr [esi + 0x13c], edx
// 006efb4b  895c2410             mov dword ptr [esp + 0x10], ebx
// 006efb4f  bd01000000           mov ebp, 1
// 006efb54  8b442410             mov eax, dword ptr [esp + 0x10]
// 006efb58  394758               cmp dword ptr [edi + 0x58], eax
// 006efb5b  7411                 je 0x6efb6e
// 006efb5d  6a00                 push 0
// 006efb5f  894758               mov dword ptr [edi + 0x58], eax
// 006efb62  8b4720               mov eax, dword ptr [edi + 0x20]
// 006efb65  6a00                 push 0
// 006efb67  50                   push eax
// 006efb68  ff15dcec7700         call dword ptr [0x77ecdc]
// 006efb6e  837c241400           cmp dword ptr [esp + 0x14], 0
// 006efb73  0f85d7fdffff         jne 0x6ef950
// 006efb79  8b16                 mov edx, dword ptr [esi]
// 006efb7b  8b421c               mov eax, dword ptr [edx + 0x1c]
// 006efb7e  6a00                 push 0
// 006efb80  8bce                 mov ecx, esi
// 006efb82  ffd0                 call eax
// 006efb84  5f                   pop edi
// 006efb85  5e                   pop esi
// 006efb86  5d                   pop ebp
// 006efb87  5b                   pop ebx
// 006efb88  83c428               add esp, 0x28
// 006efb8b  c20800               ret 8
// 006efb8e  8bff                 mov edi, edi
// 006efb90  6d                   insd dword ptr es:[edi], dx
// 006efb91  fa                   cli 
// 006efb92  6e                   outsb dx, byte ptr [esi]
// 006efb93  0090fa6e0027         add byte ptr [eax + 0x27006efa], dl
// 006efb99  fa                   cli 
// 006efb9a  6e                   outsb dx, byte ptr [esi]
// 006efb9b  004afa               add byte ptr [edx - 6], cl
// 006efb9e  6e                   outsb dx, byte ptr [esi]
// 006efb9f  00b3fa6e00bd         add byte ptr [ebx - 0x42ff9106], dh
// 006efba5  fa                   cli 
// 006efba6  6e                   outsb dx, byte ptr [esi]
// 006efba7  0000                 add byte ptr [eax], al
// 006efba9  010502050505         add dword ptr [0x5050502], eax
// 006efbaf  030505050505         add eax, dword ptr [0x5050505]
// copied from an identical function in another client (function ?Move@CXTPDockingPaneContext@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp