// roc 2012-06 00405fd0  unit: ATL::CComClassFactory  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00405fd0
//
// 00405fd0  55                   push ebp
// 00405fd1  8bec                 mov ebp, esp
// 00405fd3  6aff                 push -1
// 00405fd5  6810a2a900           push 0xa9a210
// 00405fda  64a100000000         mov eax, dword ptr fs:[0]
// 00405fe0  50                   push eax
// 00405fe1  64892500000000       mov dword ptr fs:[0], esp
// 00405fe8  83ec28               sub esp, 0x28
// 00405feb  8b4508               mov eax, dword ptr [ebp + 8]
// 00405fee  53                   push ebx
// 00405fef  56                   push esi
// 00405ff0  33db                 xor ebx, ebx
// 00405ff2  57                   push edi
// 00405ff3  8965f0               mov dword ptr [ebp - 0x10], esp
// 00405ff6  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 00405ff9  3bc3                 cmp eax, ebx
// 00405ffb  0f8428010000         je 0x406129
// 00406001  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 00406004  0f841f010000         je 0x406129
// 0040600a  50                   push eax
// 0040600b  895de4               mov dword ptr [ebp - 0x1c], ebx
// 0040600e  ff15a821b200         call dword ptr [0xb221a8]
// 00406014  8bf0                 mov esi, eax
// 00406016  46                   inc esi
// 00406017  56                   push esi
// 00406018  8975e0               mov dword ptr [ebp - 0x20], esi
// 0040601b  895dec               mov dword ptr [ebp - 0x14], ebx
// 0040601e  895dfc               mov dword ptr [ebp - 4], ebx
// 00406021  e8cac35700           call 0x9823f0
// 00406026  83c404               add esp, 4
// 00406029  8945ec               mov dword ptr [ebp - 0x14], eax
// 0040602c  eb13                 jmp 0x406041
// 0040602e  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 00406031  e8b4c35700           call 0x9823ea
// 00406036  b83c604000           mov eax, 0x40603c
// 0040603b  c3                   ret 
// 0040603c  8b75e0               mov esi, dword ptr [ebp - 0x20]
// 0040603f  33db                 xor ebx, ebx
// 00406041  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00406044  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00406047  51                   push ecx
// 00406048  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0040604f  8945dc               mov dword ptr [ebp - 0x24], eax
// 00406052  ff15c421b200         call dword ptr [0xb221c4]
// 00406058  8d7c0002             lea edi, [eax + eax + 2]
// 0040605c  33c9                 xor ecx, ecx
// 0040605e  8bc7                 mov eax, edi
// 00406060  ba02000000           mov edx, 2
// 00406065  f7e2                 mul edx
// 00406067  0f90c1               seto cl
// 0040606a  897dd8               mov dword ptr [ebp - 0x28], edi
// 0040606d  895de8               mov dword ptr [ebp - 0x18], ebx
// 00406070  c645fc03             mov byte ptr [ebp - 4], 3
// 00406074  f7d9                 neg ecx
// 00406076  0bc8                 or ecx, eax
// 00406078  51                   push ecx
// 00406079  e872c35700           call 0x9823f0
// 0040607e  8bd8                 mov ebx, eax
// 00406080  83c404               add esp, 4
// 00406083  895de8               mov dword ptr [ebp - 0x18], ebx
// 00406086  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0040608d  eb1e                 jmp 0x4060ad
// 0040608f  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 00406092  e853c35700           call 0x9823ea
// 00406097  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0040609e  b8a4604000           mov eax, 0x4060a4
// 004060a3  c3                   ret 
// 004060a4  8b75e0               mov esi, dword ptr [ebp - 0x20]
// 004060a7  8b7dd8               mov edi, dword ptr [ebp - 0x28]
// 004060aa  8b5de8               mov ebx, dword ptr [ebp - 0x18]
// 004060ad  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004060b0  c645fc05             mov byte ptr [ebp - 4], 5
// 004060b4  895dd8               mov dword ptr [ebp - 0x28], ebx
// 004060b7  85c0                 test eax, eax
// 004060b9  7433                 je 0x4060ee
// 004060bb  85db                 test ebx, ebx
// 004060bd  742f                 je 0x4060ee
// 004060bf  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004060c2  56                   push esi
// 004060c3  51                   push ecx
// 004060c4  56                   push esi
// 004060c5  50                   push eax
// 004060c6  e805e1ffff           call 0x4041d0
// 004060cb  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004060ce  57                   push edi
// 004060cf  52                   push edx
// 004060d0  57                   push edi
// 004060d1  53                   push ebx
// 004060d2  e8f9e0ffff           call 0x4041d0
// 004060d7  83c420               add esp, 0x20
// 004060da  8d45e8               lea eax, [ebp - 0x18]
// 004060dd  50                   push eax
// 004060de  8d4dec               lea ecx, [ebp - 0x14]
// 004060e1  51                   push ecx
// 004060e2  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 004060e5  e846fbffff           call 0x405c30
// 004060ea  85c0                 test eax, eax
// 004060ec  7509                 jne 0x4060f7
// 004060ee  c745e40e000780       mov dword ptr [ebp - 0x1c], 0x8007000e
// 004060f5  eb05                 jmp 0x4060fc
// 004060f7  33db                 xor ebx, ebx
// 004060f9  895ddc               mov dword ptr [ebp - 0x24], ebx
// 004060fc  53                   push ebx
// 004060fd  e8b8c25700           call 0x9823ba
// 00406102  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 00406105  52                   push edx
// 00406106  e8afc25700           call 0x9823ba
// 0040610b  33c0                 xor eax, eax
// 0040610d  83c408               add esp, 8
// 00406110  3945e4               cmp dword ptr [ebp - 0x1c], eax
// 00406113  0f9dc0               setge al
// 00406116  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00406119  64890d00000000       mov dword ptr fs:[0], ecx
// 00406120  5f                   pop edi
// 00406121  5e                   pop esi
// 00406122  5b                   pop ebx
// 00406123  8be5                 mov esp, ebp
// 00406125  5d                   pop ebp
// 00406126  c20800               ret 8
// 00406129  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040612c  5f                   pop edi
// 0040612d  5e                   pop esi
// 0040612e  33c0                 xor eax, eax
// 00406130  64890d00000000       mov dword ptr fs:[0], ecx
// 00406137  5b                   pop ebx
// 00406138  8be5                 mov esp, ebp
// 0040613a  5d                   pop ebp
// 0040613b  c20800               ret 8
// copied from an identical function in another client (function ?Add@CExpansionVector@ATL@@QAEHPBDPB_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_acf6ced398afe108.cpp