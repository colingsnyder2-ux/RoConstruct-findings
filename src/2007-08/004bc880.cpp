// roc 2007-08 004bc880  unit: RakPeer  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bc880
//
// 004bc880  83ec08               sub esp, 8
// 004bc883  53                   push ebx
// 004bc884  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004bc888  85db                 test ebx, ebx
// 004bc88a  55                   push ebp
// 004bc88b  8be9                 mov ebp, ecx
// 004bc88d  0f84e5000000         je 0x4bc978
// 004bc893  803b00               cmp byte ptr [ebx], 0
// 004bc896  0f84dc000000         je 0x4bc978
// 004bc89c  8bc3                 mov eax, ebx
// 004bc89e  8d5001               lea edx, [eax + 1]
// 004bc8a1  8a08                 mov cl, byte ptr [eax]
// 004bc8a3  83c001               add eax, 1
// 004bc8a6  84c9                 test cl, cl
// 004bc8a8  75f7                 jne 0x4bc8a1
// 004bc8aa  2bc2                 sub eax, edx
// 004bc8ac  83f80f               cmp eax, 0xf
// 004bc8af  0f87c3000000         ja 0x4bc978
// 004bc8b5  56                   push esi
// 004bc8b6  57                   push edi
// 004bc8b7  8d8d84020000         lea ecx, [ebp + 0x284]
// 004bc8bd  33ff                 xor edi, edi
// 004bc8bf  33f6                 xor esi, esi
// 004bc8c1  897c2410             mov dword ptr [esp + 0x10], edi
// 004bc8c5  894c2414             mov dword ptr [esp + 0x14], ecx
// 004bc8c9  e8c24a1b00           call 0x671390
// 004bc8ce  8b8da0020000         mov ecx, dword ptr [ebp + 0x2a0]
// 004bc8d4  85c9                 test ecx, ecx
// 004bc8d6  0f867c000000         jbe 0x4bc958
// 004bc8dc  8bbd9c020000         mov edi, dword ptr [ebp + 0x29c]
// 004bc8e2  eb04                 jmp 0x4bc8e8
// 004bc8e4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004bc8e8  8b07                 mov eax, dword ptr [edi]
// 004bc8ea  8b10                 mov edx, dword ptr [eax]
// 004bc8ec  8bc3                 mov eax, ebx
// 004bc8ee  8bff                 mov edi, edi
// 004bc8f0  8a18                 mov bl, byte ptr [eax]
// 004bc8f2  3a1a                 cmp bl, byte ptr [edx]
// 004bc8f4  751a                 jne 0x4bc910
// 004bc8f6  84db                 test bl, bl
// 004bc8f8  7412                 je 0x4bc90c
// 004bc8fa  8a5801               mov bl, byte ptr [eax + 1]
// 004bc8fd  3a5a01               cmp bl, byte ptr [edx + 1]
// 004bc900  750e                 jne 0x4bc910
// 004bc902  83c002               add eax, 2
// 004bc905  83c202               add edx, 2
// 004bc908  84db                 test bl, bl
// 004bc90a  75e4                 jne 0x4bc8f0
// 004bc90c  33c0                 xor eax, eax
// 004bc90e  eb05                 jmp 0x4bc915
// 004bc910  1bc0                 sbb eax, eax
// 004bc912  83d8ff               sbb eax, -1
// 004bc915  85c0                 test eax, eax
// 004bc917  740c                 je 0x4bc925
// 004bc919  83c601               add esi, 1
// 004bc91c  83c704               add edi, 4
// 004bc91f  3bf1                 cmp esi, ecx
// 004bc921  72c1                 jb 0x4bc8e4
// 004bc923  eb2f                 jmp 0x4bc954
// 004bc925  8b859c020000         mov eax, dword ptr [ebp + 0x29c]
// 004bc92b  8b14b0               mov edx, dword ptr [eax + esi*4]
// 004bc92e  8d8d9c020000         lea ecx, [ebp + 0x29c]
// 004bc934  89542410             mov dword ptr [esp + 0x10], edx
// 004bc938  8b95a0020000         mov edx, dword ptr [ebp + 0x2a0]
// 004bc93e  8b5490fc             mov edx, dword ptr [eax + edx*4 - 4]
// 004bc942  8914b0               mov dword ptr [eax + esi*4], edx
// 004bc945  8b85a0020000         mov eax, dword ptr [ebp + 0x2a0]
// 004bc94b  83e801               sub eax, 1
// 004bc94e  50                   push eax
// 004bc94f  e84ce2ffff           call 0x4baba0
// 004bc954  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004bc958  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004bc95c  e86fd80000           call 0x4ca1d0
// 004bc961  85ff                 test edi, edi
// 004bc963  7411                 je 0x4bc976
// 004bc965  8b0f                 mov ecx, dword ptr [edi]
// 004bc967  51                   push ecx
// 004bc968  e8f5321700           call 0x62fc62
// 004bc96d  57                   push edi
// 004bc96e  e8ef321700           call 0x62fc62
// 004bc973  83c408               add esp, 8
// 004bc976  5f                   pop edi
// 004bc977  5e                   pop esi
// 004bc978  5d                   pop ebp
// 004bc979  5b                   pop ebx
// 004bc97a  83c408               add esp, 8
// 004bc97d  c20400               ret 4
// library openrbx-raknet/RakPeer.cpp (function ?RemoveFromBanList@RakPeer@@UAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
