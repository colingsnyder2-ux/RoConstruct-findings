// roc 2007-08 0060d6d0  unit: RBX::Block  size: 504 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060d6d0
//
// 0060d6d0  83ec0c               sub esp, 0xc
// 0060d6d3  56                   push esi
// 0060d6d4  8bf1                 mov esi, ecx
// 0060d6d6  837e0800             cmp dword ptr [esi + 8], 0
// 0060d6da  57                   push edi
// 0060d6db  7521                 jne 0x60d6fe
// 0060d6dd  8b442424             mov eax, dword ptr [esp + 0x24]
// 0060d6e1  8b4e04               mov ecx, dword ptr [esi + 4]
// 0060d6e4  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0060d6e8  50                   push eax
// 0060d6e9  51                   push ecx
// 0060d6ea  6a01                 push 1
// 0060d6ec  57                   push edi
// 0060d6ed  8bce                 mov ecx, esi
// 0060d6ef  e8dcf8ffff           call 0x60cfd0
// 0060d6f4  8bc7                 mov eax, edi
// 0060d6f6  5f                   pop edi
// 0060d6f7  5e                   pop esi
// 0060d6f8  83c40c               add esp, 0xc
// 0060d6fb  c21000               ret 0x10
// 0060d6fe  8b5604               mov edx, dword ptr [esi + 4]
// 0060d701  8b3a                 mov edi, dword ptr [edx]
// 0060d703  55                   push ebp
// 0060d704  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0060d708  85ed                 test ebp, ebp
// 0060d70a  7404                 je 0x60d710
// 0060d70c  3bee                 cmp ebp, esi
// 0060d70e  7406                 je 0x60d716
// 0060d710  ff15d8e67700         call dword ptr [0x77e6d8]
// 0060d716  53                   push ebx
// 0060d717  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0060d71b  3bdf                 cmp ebx, edi
// 0060d71d  7534                 jne 0x60d753
// 0060d71f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0060d723  8d430c               lea eax, [ebx + 0xc]
// 0060d726  50                   push eax
// 0060d727  57                   push edi
// 0060d728  8bce                 mov ecx, esi
// 0060d72a  e881ecffff           call 0x60c3b0
// 0060d72f  84c0                 test al, al
// 0060d731  0f846a010000         je 0x60d8a1
// 0060d737  57                   push edi
// 0060d738  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0060d73c  53                   push ebx
// 0060d73d  6a01                 push 1
// 0060d73f  57                   push edi
// 0060d740  8bce                 mov ecx, esi
// 0060d742  e889f8ffff           call 0x60cfd0
// 0060d747  5b                   pop ebx
// 0060d748  5d                   pop ebp
// 0060d749  8bc7                 mov eax, edi
// 0060d74b  5f                   pop edi
// 0060d74c  5e                   pop esi
// 0060d74d  83c40c               add esp, 0xc
// 0060d750  c21000               ret 0x10
// 0060d753  85ed                 test ebp, ebp
// 0060d755  8b7e04               mov edi, dword ptr [esi + 4]
// 0060d758  7404                 je 0x60d75e
// 0060d75a  3bee                 cmp ebp, esi
// 0060d75c  7406                 je 0x60d764
// 0060d75e  ff15d8e67700         call dword ptr [0x77e6d8]
// 0060d764  3bdf                 cmp ebx, edi
// 0060d766  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0060d76a  7536                 jne 0x60d7a2
// 0060d76c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0060d76f  8b5908               mov ebx, dword ptr [ecx + 8]
// 0060d772  57                   push edi
// 0060d773  8d530c               lea edx, [ebx + 0xc]
// 0060d776  52                   push edx
// 0060d777  8bce                 mov ecx, esi
// 0060d779  e832ecffff           call 0x60c3b0
// 0060d77e  84c0                 test al, al
// 0060d780  0f841b010000         je 0x60d8a1
// 0060d786  57                   push edi
// 0060d787  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0060d78b  53                   push ebx
// 0060d78c  6a00                 push 0
// 0060d78e  57                   push edi
// 0060d78f  8bce                 mov ecx, esi
// 0060d791  e83af8ffff           call 0x60cfd0
// 0060d796  5b                   pop ebx
// 0060d797  5d                   pop ebp
// 0060d798  8bc7                 mov eax, edi
// 0060d79a  5f                   pop edi
// 0060d79b  5e                   pop esi
// 0060d79c  83c40c               add esp, 0xc
// 0060d79f  c21000               ret 0x10
// 0060d7a2  8d430c               lea eax, [ebx + 0xc]
// 0060d7a5  50                   push eax
// 0060d7a6  57                   push edi
// 0060d7a7  8bce                 mov ecx, esi
// 0060d7a9  e802ecffff           call 0x60c3b0
// 0060d7ae  84c0                 test al, al
// 0060d7b0  7463                 je 0x60d815
// 0060d7b2  8d4c2424             lea ecx, [esp + 0x24]
// 0060d7b6  896c2424             mov dword ptr [esp + 0x24], ebp
// 0060d7ba  895c2428             mov dword ptr [esp + 0x28], ebx
// 0060d7be  e87df2ffff           call 0x60ca40
// 0060d7c3  8b442428             mov eax, dword ptr [esp + 0x28]
// 0060d7c7  57                   push edi
// 0060d7c8  83c00c               add eax, 0xc
// 0060d7cb  50                   push eax
// 0060d7cc  8bce                 mov ecx, esi
// 0060d7ce  e8ddebffff           call 0x60c3b0
// 0060d7d3  84c0                 test al, al
// 0060d7d5  743e                 je 0x60d815
// 0060d7d7  8b442428             mov eax, dword ptr [esp + 0x28]
// 0060d7db  8b4808               mov ecx, dword ptr [eax + 8]
// 0060d7de  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 0060d7e2  57                   push edi
// 0060d7e3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0060d7e7  8bce                 mov ecx, esi
// 0060d7e9  7415                 je 0x60d800
// 0060d7eb  50                   push eax
// 0060d7ec  6a00                 push 0
// 0060d7ee  57                   push edi
// 0060d7ef  e8dcf7ffff           call 0x60cfd0
// 0060d7f4  5b                   pop ebx
// 0060d7f5  5d                   pop ebp
// 0060d7f6  8bc7                 mov eax, edi
// 0060d7f8  5f                   pop edi
// 0060d7f9  5e                   pop esi
// 0060d7fa  83c40c               add esp, 0xc
// 0060d7fd  c21000               ret 0x10
// 0060d800  53                   push ebx
// 0060d801  6a01                 push 1
// 0060d803  57                   push edi
// 0060d804  e8c7f7ffff           call 0x60cfd0
// 0060d809  5b                   pop ebx
// 0060d80a  5d                   pop ebp
// 0060d80b  8bc7                 mov eax, edi
// 0060d80d  5f                   pop edi
// 0060d80e  5e                   pop esi
// 0060d80f  83c40c               add esp, 0xc
// 0060d812  c21000               ret 0x10
// 0060d815  57                   push edi
// 0060d816  8d430c               lea eax, [ebx + 0xc]
// 0060d819  50                   push eax
// 0060d81a  8bce                 mov ecx, esi
// 0060d81c  e88febffff           call 0x60c3b0
// 0060d821  84c0                 test al, al
// 0060d823  747c                 je 0x60d8a1
// 0060d825  8b5604               mov edx, dword ptr [esi + 4]
// 0060d828  8d4c2424             lea ecx, [esp + 0x24]
// 0060d82c  896c2424             mov dword ptr [esp + 0x24], ebp
// 0060d830  895c2428             mov dword ptr [esp + 0x28], ebx
// 0060d834  89542414             mov dword ptr [esp + 0x14], edx
// 0060d838  89742410             mov dword ptr [esp + 0x10], esi
// 0060d83c  e83ff5ffff           call 0x60cd80
// 0060d841  8d442410             lea eax, [esp + 0x10]
// 0060d845  50                   push eax
// 0060d846  8d4c2428             lea ecx, [esp + 0x28]
// 0060d84a  e86192e5ff           call 0x466ab0
// 0060d84f  84c0                 test al, al
// 0060d851  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0060d855  7510                 jne 0x60d867
// 0060d857  8d4d0c               lea ecx, [ebp + 0xc]
// 0060d85a  51                   push ecx
// 0060d85b  57                   push edi
// 0060d85c  8bce                 mov ecx, esi
// 0060d85e  e84debffff           call 0x60c3b0
// 0060d863  84c0                 test al, al
// 0060d865  743a                 je 0x60d8a1
// 0060d867  8b5308               mov edx, dword ptr [ebx + 8]
// 0060d86a  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 0060d86e  57                   push edi
// 0060d86f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0060d873  8bce                 mov ecx, esi
// 0060d875  7415                 je 0x60d88c
// 0060d877  53                   push ebx
// 0060d878  6a00                 push 0
// 0060d87a  57                   push edi
// 0060d87b  e850f7ffff           call 0x60cfd0
// 0060d880  5b                   pop ebx
// 0060d881  5d                   pop ebp
// 0060d882  8bc7                 mov eax, edi
// 0060d884  5f                   pop edi
// 0060d885  5e                   pop esi
// 0060d886  83c40c               add esp, 0xc
// 0060d889  c21000               ret 0x10
// 0060d88c  55                   push ebp
// 0060d88d  6a01                 push 1
// 0060d88f  57                   push edi
// 0060d890  e83bf7ffff           call 0x60cfd0
// 0060d895  5b                   pop ebx
// 0060d896  5d                   pop ebp
// 0060d897  8bc7                 mov eax, edi
// 0060d899  5f                   pop edi
// 0060d89a  5e                   pop esi
// 0060d89b  83c40c               add esp, 0xc
// 0060d89e  c21000               ret 0x10
// 0060d8a1  57                   push edi
// 0060d8a2  8d442414             lea eax, [esp + 0x14]
// 0060d8a6  50                   push eax
// 0060d8a7  8bce                 mov ecx, esi
// 0060d8a9  e852fcffff           call 0x60d500
// 0060d8ae  8b10                 mov edx, dword ptr [eax]
// 0060d8b0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060d8b4  5b                   pop ebx
// 0060d8b5  5d                   pop ebp
// 0060d8b6  8911                 mov dword ptr [ecx], edx
// 0060d8b8  8b4004               mov eax, dword ptr [eax + 4]
// 0060d8bb  5f                   pop edi
// 0060d8bc  894104               mov dword ptr [ecx + 4], eax
// 0060d8bf  8bc1                 mov eax, ecx
// 0060d8c1  5e                   pop esi
// 0060d8c2  83c40c               add esp, 0xc
// 0060d8c5  c21000               ret 0x10
// library rbxgs/v8world\Block.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@QAE?AViterator@12@V312@ABU?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
