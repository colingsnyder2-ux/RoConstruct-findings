// roc 2007-08 004ba1a0  unit: RakPeer  size: 362 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ba1a0
//
// 004ba1a0  83ec10               sub esp, 0x10
// 004ba1a3  55                   push ebp
// 004ba1a4  8be9                 mov ebp, ecx
// 004ba1a6  896c2410             mov dword ptr [esp + 0x10], ebp
// 004ba1aa  e8c1ddffff           call 0x4b7f70
// 004ba1af  8944240c             mov dword ptr [esp + 0xc], eax
// 004ba1b3  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ba1b7  85c0                 test eax, eax
// 004ba1b9  0f8444010000         je 0x4ba303
// 004ba1bf  803800               cmp byte ptr [eax], 0
// 004ba1c2  0f843b010000         je 0x4ba303
// 004ba1c8  8d5001               lea edx, [eax + 1]
// 004ba1cb  eb03                 jmp 0x4ba1d0
// 004ba1cd  8d4900               lea ecx, [ecx]
// 004ba1d0  8a08                 mov cl, byte ptr [eax]
// 004ba1d2  83c001               add eax, 1
// 004ba1d5  84c9                 test cl, cl
// 004ba1d7  75f7                 jne 0x4ba1d0
// 004ba1d9  2bc2                 sub eax, edx
// 004ba1db  83f80f               cmp eax, 0xf
// 004ba1de  0f871f010000         ja 0x4ba303
// 004ba1e4  56                   push esi
// 004ba1e5  57                   push edi
// 004ba1e6  8dbd84020000         lea edi, [ebp + 0x284]
// 004ba1ec  8bcf                 mov ecx, edi
// 004ba1ee  33f6                 xor esi, esi
// 004ba1f0  897c2410             mov dword ptr [esp + 0x10], edi
// 004ba1f4  e897711b00           call 0x671390
// 004ba1f9  8bada0020000         mov ebp, dword ptr [ebp + 0x2a0]
// 004ba1ff  85ed                 test ebp, ebp
// 004ba201  7654                 jbe 0x4ba257
// 004ba203  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ba207  8bb89c020000         mov edi, dword ptr [eax + 0x29c]
// 004ba20d  897c240c             mov dword ptr [esp + 0xc], edi
// 004ba211  8b0f                 mov ecx, dword ptr [edi]
// 004ba213  8b09                 mov ecx, dword ptr [ecx]
// 004ba215  8b442420             mov eax, dword ptr [esp + 0x20]
// 004ba219  8da42400000000       lea esp, [esp]
// 004ba220  8a10                 mov dl, byte ptr [eax]
// 004ba222  3a11                 cmp dl, byte ptr [ecx]
// 004ba224  751a                 jne 0x4ba240
// 004ba226  84d2                 test dl, dl
// 004ba228  7412                 je 0x4ba23c
// 004ba22a  8a5001               mov dl, byte ptr [eax + 1]
// 004ba22d  3a5101               cmp dl, byte ptr [ecx + 1]
// 004ba230  750e                 jne 0x4ba240
// 004ba232  83c002               add eax, 2
// 004ba235  83c102               add ecx, 2
// 004ba238  84d2                 test dl, dl
// 004ba23a  75e4                 jne 0x4ba220
// 004ba23c  33c0                 xor eax, eax
// 004ba23e  eb05                 jmp 0x4ba245
// 004ba240  1bc0                 sbb eax, eax
// 004ba242  83d8ff               sbb eax, -1
// 004ba245  85c0                 test eax, eax
// 004ba247  7437                 je 0x4ba280
// 004ba249  83c601               add esi, 1
// 004ba24c  83c704               add edi, 4
// 004ba24f  3bf5                 cmp esi, ebp
// 004ba251  72be                 jb 0x4ba211
// 004ba253  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004ba257  8bcf                 mov ecx, edi
// 004ba259  e872ff0000           call 0x4ca1d0
// 004ba25e  6a08                 push 8
// 004ba260  e8915c1700           call 0x62fef6
// 004ba265  6a10                 push 0x10
// 004ba267  8bf0                 mov esi, eax
// 004ba269  e8885c1700           call 0x62fef6
// 004ba26e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004ba272  83c408               add esp, 8
// 004ba275  85c9                 test ecx, ecx
// 004ba277  8906                 mov dword ptr [esi], eax
// 004ba279  754b                 jne 0x4ba2c6
// 004ba27b  894e04               mov dword ptr [esi + 4], ecx
// 004ba27e  eb4f                 jmp 0x4ba2cf
// 004ba280  8b442424             mov eax, dword ptr [esp + 0x24]
// 004ba284  85c0                 test eax, eax
// 004ba286  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004ba28a  751c                 jne 0x4ba2a8
// 004ba28c  8b04b2               mov eax, dword ptr [edx + esi*4]
// 004ba28f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ba293  c7400400000000       mov dword ptr [eax + 4], 0
// 004ba29a  e831ff0000           call 0x4ca1d0
// 004ba29f  5f                   pop edi
// 004ba2a0  5e                   pop esi
// 004ba2a1  5d                   pop ebp
// 004ba2a2  83c410               add esp, 0x10
// 004ba2a5  c20800               ret 8
// 004ba2a8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ba2ac  03c8                 add ecx, eax
// 004ba2ae  8b04b2               mov eax, dword ptr [edx + esi*4]
// 004ba2b1  894804               mov dword ptr [eax + 4], ecx
// 004ba2b4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ba2b8  e813ff0000           call 0x4ca1d0
// 004ba2bd  5f                   pop edi
// 004ba2be  5e                   pop esi
// 004ba2bf  5d                   pop ebp
// 004ba2c0  83c410               add esp, 0x10
// 004ba2c3  c20800               ret 8
// 004ba2c6  8b542414             mov edx, dword ptr [esp + 0x14]
// 004ba2ca  03d1                 add edx, ecx
// 004ba2cc  895604               mov dword ptr [esi + 4], edx
// 004ba2cf  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004ba2d3  8bd0                 mov edx, eax
// 004ba2d5  8a01                 mov al, byte ptr [ecx]
// 004ba2d7  8802                 mov byte ptr [edx], al
// 004ba2d9  83c101               add ecx, 1
// 004ba2dc  83c201               add edx, 1
// 004ba2df  84c0                 test al, al
// 004ba2e1  75f2                 jne 0x4ba2d5
// 004ba2e3  8bcf                 mov ecx, edi
// 004ba2e5  e8a6701b00           call 0x671390
// 004ba2ea  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004ba2ee  56                   push esi
// 004ba2ef  81c19c020000         add ecx, 0x29c
// 004ba2f5  e8e6efffff           call 0x4b92e0
// 004ba2fa  8bcf                 mov ecx, edi
// 004ba2fc  e8cffe0000           call 0x4ca1d0
// 004ba301  5f                   pop edi
// 004ba302  5e                   pop esi
// 004ba303  5d                   pop ebp
// 004ba304  83c410               add esp, 0x10
// 004ba307  c20800               ret 8
// library openrbx-raknet/RakPeer.cpp (function ?AddToBanList@RakPeer@@UAEXPBDI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
