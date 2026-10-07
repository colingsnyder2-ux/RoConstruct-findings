// roc 2007-08 004ff6f0  unit: G3D::Shader  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ff6f0
//
// 004ff6f0  55                   push ebp
// 004ff6f1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 004ff6f5  85ed                 test ebp, ebp
// 004ff6f7  56                   push esi
// 004ff6f8  8bf1                 mov esi, ecx
// 004ff6fa  0f84e7000000         je 0x4ff7e7
// 004ff700  8b860c280400         mov eax, dword ptr [esi + 0x4280c]
// 004ff706  3be8                 cmp ebp, eax
// 004ff708  57                   push edi
// 004ff709  7237                 jb 0x4ff742
// 004ff70b  0500007d00           add eax, 0x7d0000
// 004ff710  3be8                 cmp ebp, eax
// 004ff712  732e                 jae 0x4ff742
// 004ff714  8dbe10280400         lea edi, [esi + 0x42810]
// 004ff71a  57                   push edi
// 004ff71b  ff15fcd27700         call dword ptr [0x77d2fc]
// 004ff721  8b8608280400         mov eax, dword ptr [esi + 0x42808]
// 004ff727  89ac8608400000       mov dword ptr [esi + eax*4 + 0x4008], ebp
// 004ff72e  83860828040001       add dword ptr [esi + 0x42808], 1
// 004ff735  57                   push edi
// 004ff736  ff15f8d27700         call dword ptr [0x77d2f8]
// 004ff73c  5f                   pop edi
// 004ff73d  5e                   pop esi
// 004ff73e  5d                   pop ebp
// 004ff73f  c20400               ret 4
// 004ff742  8b7dfc               mov edi, dword ptr [ebp - 4]
// 004ff745  53                   push ebx
// 004ff746  8d45fc               lea eax, [ebp - 4]
// 004ff749  8d9e10280400         lea ebx, [esi + 0x42810]
// 004ff74f  53                   push ebx
// 004ff750  89442418             mov dword ptr [esp + 0x18], eax
// 004ff754  ff15fcd27700         call dword ptr [0x77d2fc]
// 004ff75a  81ff00040000         cmp edi, 0x400
// 004ff760  7729                 ja 0x4ff78b
// 004ff762  8b8600200000         mov eax, dword ptr [esi + 0x2000]
// 004ff768  3d00040000           cmp eax, 0x400
// 004ff76d  7d54                 jge 0x4ff7c3
// 004ff76f  892cc6               mov dword ptr [esi + eax*8], ebp
// 004ff772  897cc604             mov dword ptr [esi + eax*8 + 4], edi
// 004ff776  83860020000001       add dword ptr [esi + 0x2000], 1
// 004ff77d  53                   push ebx
// 004ff77e  ff15f8d27700         call dword ptr [0x77d2f8]
// 004ff784  5b                   pop ebx
// 004ff785  5f                   pop edi
// 004ff786  5e                   pop esi
// 004ff787  5d                   pop ebp
// 004ff788  c20400               ret 4
// 004ff78b  81ff00100000         cmp edi, 0x1000
// 004ff791  7730                 ja 0x4ff7c3
// 004ff793  8b8604400000         mov eax, dword ptr [esi + 0x4004]
// 004ff799  3d00040000           cmp eax, 0x400
// 004ff79e  7d23                 jge 0x4ff7c3
// 004ff7a0  89acc604200000       mov dword ptr [esi + eax*8 + 0x2004], ebp
// 004ff7a7  89bcc608200000       mov dword ptr [esi + eax*8 + 0x2008], edi
// 004ff7ae  83860440000001       add dword ptr [esi + 0x4004], 1
// 004ff7b5  53                   push ebx
// 004ff7b6  ff15f8d27700         call dword ptr [0x77d2f8]
// 004ff7bc  5b                   pop ebx
// 004ff7bd  5f                   pop edi
// 004ff7be  5e                   pop esi
// 004ff7bf  5d                   pop ebp
// 004ff7c0  c20400               ret 4
// 004ff7c3  b9fcffffff           mov ecx, 0xfffffffc
// 004ff7c8  2bcf                 sub ecx, edi
// 004ff7ca  018e38280400         add dword ptr [esi + 0x42838], ecx
// 004ff7d0  53                   push ebx
// 004ff7d1  ff15f8d27700         call dword ptr [0x77d2f8]
// 004ff7d7  8b542414             mov edx, dword ptr [esp + 0x14]
// 004ff7db  52                   push edx
// 004ff7dc  ff15c4e67700         call dword ptr [0x77e6c4]
// 004ff7e2  83c404               add esp, 4
// 004ff7e5  5b                   pop ebx
// 004ff7e6  5f                   pop edi
// 004ff7e7  5e                   pop esi
// 004ff7e8  5d                   pop ebp
// 004ff7e9  c20400               ret 4
// library g3d-6.09/G3Dcpp\System.cpp (function ?free@BufferPool@G3D@@QAEXPAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
