// roc 2007-08 004ff580  unit: G3D::Shader  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ff580
//
// 004ff580  53                   push ebx
// 004ff581  55                   push ebp
// 004ff582  56                   push esi
// 004ff583  57                   push edi
// 004ff584  8bf1                 mov esi, ecx
// 004ff586  8dbe10280400         lea edi, [esi + 0x42810]
// 004ff58c  57                   push edi
// 004ff58d  ff15fcd27700         call dword ptr [0x77d2fc]
// 004ff593  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004ff597  83862828040001       add dword ptr [esi + 0x42828], 1
// 004ff59e  81fd80000000         cmp ebp, 0x80
// 004ff5a4  7735                 ja 0x4ff5db
// 004ff5a6  8b8608280400         mov eax, dword ptr [esi + 0x42808]
// 004ff5ac  85c0                 test eax, eax
// 004ff5ae  7e2b                 jle 0x4ff5db
// 004ff5b0  83c0ff               add eax, -1
// 004ff5b3  898608280400         mov dword ptr [esi + 0x42808], eax
// 004ff5b9  8b9c8608400000       mov ebx, dword ptr [esi + eax*4 + 0x4008]
// 004ff5c0  85db                 test ebx, ebx
// 004ff5c2  7417                 je 0x4ff5db
// 004ff5c4  83862c28040001       add dword ptr [esi + 0x4282c], 1
// 004ff5cb  57                   push edi
// 004ff5cc  ff15f8d27700         call dword ptr [0x77d2f8]
// 004ff5d2  5f                   pop edi
// 004ff5d3  5e                   pop esi
// 004ff5d4  5d                   pop ebp
// 004ff5d5  8bc3                 mov eax, ebx
// 004ff5d7  5b                   pop ebx
// 004ff5d8  c20400               ret 4
// 004ff5db  81fd00040000         cmp ebp, 0x400
// 004ff5e1  772d                 ja 0x4ff610
// 004ff5e3  55                   push ebp
// 004ff5e4  8d8600200000         lea eax, [esi + 0x2000]
// 004ff5ea  50                   push eax
// 004ff5eb  56                   push esi
// 004ff5ec  8bce                 mov ecx, esi
// 004ff5ee  e83dffffff           call 0x4ff530
// 004ff5f3  8bd8                 mov ebx, eax
// 004ff5f5  85db                 test ebx, ebx
// 004ff5f7  7452                 je 0x4ff64b
// 004ff5f9  83863028040001       add dword ptr [esi + 0x42830], 1
// 004ff600  57                   push edi
// 004ff601  ff15f8d27700         call dword ptr [0x77d2f8]
// 004ff607  5f                   pop edi
// 004ff608  5e                   pop esi
// 004ff609  5d                   pop ebp
// 004ff60a  8bc3                 mov eax, ebx
// 004ff60c  5b                   pop ebx
// 004ff60d  c20400               ret 4
// 004ff610  81fd00100000         cmp ebp, 0x1000
// 004ff616  7733                 ja 0x4ff64b
// 004ff618  55                   push ebp
// 004ff619  8d8e04400000         lea ecx, [esi + 0x4004]
// 004ff61f  51                   push ecx
// 004ff620  8d9604200000         lea edx, [esi + 0x2004]
// 004ff626  52                   push edx
// 004ff627  8bce                 mov ecx, esi
// 004ff629  e802ffffff           call 0x4ff530
// 004ff62e  8bd8                 mov ebx, eax
// 004ff630  85db                 test ebx, ebx
// 004ff632  7417                 je 0x4ff64b
// 004ff634  83863428040001       add dword ptr [esi + 0x42834], 1
// 004ff63b  57                   push edi
// 004ff63c  ff15f8d27700         call dword ptr [0x77d2f8]
// 004ff642  5f                   pop edi
// 004ff643  5e                   pop esi
// 004ff644  5d                   pop ebp
// 004ff645  8bc3                 mov eax, ebx
// 004ff647  5b                   pop ebx
// 004ff648  c20400               ret 4
// 004ff64b  8d4504               lea eax, [ebp + 4]
// 004ff64e  018638280400         add dword ptr [esi + 0x42838], eax
// 004ff654  57                   push edi
// 004ff655  ff15f8d27700         call dword ptr [0x77d2f8]
// 004ff65b  8b1dd0e67700         mov ebx, dword ptr [0x77e6d0]
// 004ff661  8d7d04               lea edi, [ebp + 4]
// 004ff664  57                   push edi
// 004ff665  ffd3                 call ebx
// 004ff667  83c404               add esp, 4
// 004ff66a  85c0                 test eax, eax
// 004ff66c  7567                 jne 0x4ff6d5
// 004ff66e  8d8e00200000         lea ecx, [esi + 0x2000]
// 004ff674  51                   push ecx
// 004ff675  56                   push esi
// 004ff676  8bce                 mov ecx, esi
// 004ff678  e863feffff           call 0x4ff4e0
// 004ff67d  8d9604400000         lea edx, [esi + 0x4004]
// 004ff683  52                   push edx
// 004ff684  8d8604200000         lea eax, [esi + 0x2004]
// 004ff68a  50                   push eax
// 004ff68b  8bce                 mov ecx, esi
// 004ff68d  e84efeffff           call 0x4ff4e0
// 004ff692  57                   push edi
// 004ff693  ffd3                 call ebx
// 004ff695  83c404               add esp, 4
// 004ff698  85c0                 test eax, eax
// 004ff69a  7539                 jne 0x4ff6d5
// 004ff69c  a1a0088c00           mov eax, dword ptr [0x8c08a0]
// 004ff6a1  85c0                 test eax, eax
// 004ff6a3  7427                 je 0x4ff6cc
// 004ff6a5  6a01                 push 1
// 004ff6a7  57                   push edi
// 004ff6a8  ffd0                 call eax
// 004ff6aa  83c408               add esp, 8
// 004ff6ad  3c01                 cmp al, 1
// 004ff6af  750a                 jne 0x4ff6bb
// 004ff6b1  57                   push edi
// 004ff6b2  ffd3                 call ebx
// 004ff6b4  83c404               add esp, 4
// 004ff6b7  85c0                 test eax, eax
// 004ff6b9  751a                 jne 0x4ff6d5
// 004ff6bb  a1a0088c00           mov eax, dword ptr [0x8c08a0]
// 004ff6c0  85c0                 test eax, eax
// 004ff6c2  7408                 je 0x4ff6cc
// 004ff6c4  6a00                 push 0
// 004ff6c6  57                   push edi
// 004ff6c7  ffd0                 call eax
// 004ff6c9  83c408               add esp, 8
// 004ff6cc  5f                   pop edi
// 004ff6cd  5e                   pop esi
// 004ff6ce  5d                   pop ebp
// 004ff6cf  33c0                 xor eax, eax
// 004ff6d1  5b                   pop ebx
// 004ff6d2  c20400               ret 4
// 004ff6d5  5f                   pop edi
// 004ff6d6  5e                   pop esi
// 004ff6d7  8928                 mov dword ptr [eax], ebp
// 004ff6d9  5d                   pop ebp
// 004ff6da  83c004               add eax, 4
// 004ff6dd  5b                   pop ebx
// 004ff6de  c20400               ret 4
// library g3d-6.09/G3Dcpp\System.cpp (function ?malloc@BufferPool@G3D@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
