// roc 2008-06 004a52c0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a52c0
//
// 004a52c0  53                   push ebx
// 004a52c1  55                   push ebp
// 004a52c2  56                   push esi
// 004a52c3  57                   push edi
// 004a52c4  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004a52c8  c1ff03               sar edi, 3
// 004a52cb  4f                   dec edi
// 004a52cc  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 004a52d1  8bf1                 mov esi, ecx
// 004a52d3  740c                 je 0x4a52e1
// 004a52d5  c644241c00           mov byte ptr [esp + 0x1c], 0
// 004a52da  c644241800           mov byte ptr [esp + 0x18], 0
// 004a52df  eb0a                 jmp 0x4a52eb
// 004a52e1  c644241cff           mov byte ptr [esp + 0x1c], 0xff
// 004a52e6  c6442418f0           mov byte ptr [esp + 0x18], 0xf0
// 004a52eb  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004a52ef  85ff                 test edi, edi
// 004a52f1  7e35                 jle 0x4a5328
// 004a52f3  8b4608               mov eax, dword ptr [esi + 8]
// 004a52f6  8d6801               lea ebp, [eax + 1]
// 004a52f9  3b2e                 cmp ebp, dword ptr [esi]
// 004a52fb  7f6b                 jg 0x4a5368
// 004a52fd  8bc8                 mov ecx, eax
// 004a52ff  83e107               and ecx, 7
// 004a5302  ba80000000           mov edx, 0x80
// 004a5307  d3fa                 sar edx, cl
// 004a5309  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a530c  c1f803               sar eax, 3
// 004a530f  841408               test byte ptr [eax + ecx], dl
// 004a5312  896e08               mov dword ptr [esi + 8], ebp
// 004a5315  0f95c0               setne al
// 004a5318  84c0                 test al, al
// 004a531a  7455                 je 0x4a5371
// 004a531c  8a54241c             mov dl, byte ptr [esp + 0x1c]
// 004a5320  88141f               mov byte ptr [edi + ebx], dl
// 004a5323  4f                   dec edi
// 004a5324  85ff                 test edi, edi
// 004a5326  7fcb                 jg 0x4a52f3
// 004a5328  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a532b  41                   inc ecx
// 004a532c  3b0e                 cmp ecx, dword ptr [esi]
// 004a532e  7f38                 jg 0x4a5368
// 004a5330  8d54241c             lea edx, [esp + 0x1c]
// 004a5334  52                   push edx
// 004a5335  8bce                 mov ecx, esi
// 004a5337  e814fdffff           call 0x4a5050
// 004a533c  84c0                 test al, al
// 004a533e  7428                 je 0x4a5368
// 004a5340  03fb                 add edi, ebx
// 004a5342  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 004a5347  6a01                 push 1
// 004a5349  8bce                 mov ecx, esi
// 004a534b  7442                 je 0x4a538f
// 004a534d  6a04                 push 4
// 004a534f  57                   push edi
// 004a5350  e8bbfeffff           call 0x4a5210
// 004a5355  84c0                 test al, al
// 004a5357  740f                 je 0x4a5368
// 004a5359  8a442418             mov al, byte ptr [esp + 0x18]
// 004a535d  0807                 or byte ptr [edi], al
// 004a535f  5f                   pop edi
// 004a5360  5e                   pop esi
// 004a5361  5d                   pop ebp
// 004a5362  b001                 mov al, 1
// 004a5364  5b                   pop ebx
// 004a5365  c20c00               ret 0xc
// 004a5368  5f                   pop edi
// 004a5369  5e                   pop esi
// 004a536a  5d                   pop ebp
// 004a536b  32c0                 xor al, al
// 004a536d  5b                   pop ebx
// 004a536e  c20c00               ret 0xc
// 004a5371  6a01                 push 1
// 004a5373  8d04fd08000000       lea eax, [edi*8 + 8]
// 004a537a  50                   push eax
// 004a537b  53                   push ebx
// 004a537c  8bce                 mov ecx, esi
// 004a537e  e88dfeffff           call 0x4a5210
// 004a5383  5f                   pop edi
// 004a5384  5e                   pop esi
// 004a5385  84c0                 test al, al
// 004a5387  5d                   pop ebp
// 004a5388  0f95c0               setne al
// 004a538b  5b                   pop ebx
// 004a538c  c20c00               ret 0xc
// 004a538f  6a08                 push 8
// 004a5391  57                   push edi
// 004a5392  e879feffff           call 0x4a5210
// 004a5397  84c0                 test al, al
// 004a5399  74cd                 je 0x4a5368
// 004a539b  5f                   pop edi
// 004a539c  5e                   pop esi
// 004a539d  5d                   pop ebp
// 004a539e  b001                 mov al, 1
// 004a53a0  5b                   pop ebx
// 004a53a1  c20c00               ret 0xc
// library rbxgs-raknet/BitStream.cpp (function ?ReadCompressed@BitStream@RakNet@@AAE_NPAEH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
