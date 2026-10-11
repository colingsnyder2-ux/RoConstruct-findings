// roc 2007-08 004bc980  unit: RakPeer  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bc980
//
// 004bc980  83ec08               sub esp, 8
// 004bc983  53                   push ebx
// 004bc984  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004bc988  85db                 test ebx, ebx
// 004bc98a  56                   push esi
// 004bc98b  8bf1                 mov esi, ecx
// 004bc98d  89742408             mov dword ptr [esp + 8], esi
// 004bc991  0f8426010000         je 0x4bcabd
// 004bc997  803b00               cmp byte ptr [ebx], 0
// 004bc99a  0f841d010000         je 0x4bcabd
// 004bc9a0  8bc3                 mov eax, ebx
// 004bc9a2  8d5001               lea edx, [eax + 1]
// 004bc9a5  8a08                 mov cl, byte ptr [eax]
// 004bc9a7  83c001               add eax, 1
// 004bc9aa  84c9                 test cl, cl
// 004bc9ac  75f7                 jne 0x4bc9a5
// 004bc9ae  2bc2                 sub eax, edx
// 004bc9b0  83f80f               cmp eax, 0xf
// 004bc9b3  0f8704010000         ja 0x4bcabd
// 004bc9b9  57                   push edi
// 004bc9ba  33ff                 xor edi, edi
// 004bc9bc  39bea0020000         cmp dword ptr [esi + 0x2a0], edi
// 004bc9c2  750b                 jne 0x4bc9cf
// 004bc9c4  5f                   pop edi
// 004bc9c5  5e                   pop esi
// 004bc9c6  32c0                 xor al, al
// 004bc9c8  5b                   pop ebx
// 004bc9c9  83c408               add esp, 8
// 004bc9cc  c20400               ret 4
// 004bc9cf  55                   push ebp
// 004bc9d0  e89bb5ffff           call 0x4b7f70
// 004bc9d5  8dae84020000         lea ebp, [esi + 0x284]
// 004bc9db  8bcd                 mov ecx, ebp
// 004bc9dd  89442414             mov dword ptr [esp + 0x14], eax
// 004bc9e1  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004bc9e5  e8a6491b00           call 0x671390
// 004bc9ea  39bea0020000         cmp dword ptr [esi + 0x2a0], edi
// 004bc9f0  0f869f000000         jbe 0x4bca95
// 004bc9f6  8dae9c020000         lea ebp, [esi + 0x29c]
// 004bc9fc  8d642400             lea esp, [esp]
// 004bca00  8b4500               mov eax, dword ptr [ebp]
// 004bca03  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 004bca06  8b4104               mov eax, dword ptr [ecx + 4]
// 004bca09  85c0                 test eax, eax
// 004bca0b  7645                 jbe 0x4bca52
// 004bca0d  3b442414             cmp eax, dword ptr [esp + 0x14]
// 004bca11  733f                 jae 0x4bca52
// 004bca13  8b4500               mov eax, dword ptr [ebp]
// 004bca16  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004bca1a  8b91a0020000         mov edx, dword ptr [ecx + 0x2a0]
// 004bca20  8b5490fc             mov edx, dword ptr [eax + edx*4 - 4]
// 004bca24  8b34b8               mov esi, dword ptr [eax + edi*4]
// 004bca27  8914b8               mov dword ptr [eax + edi*4], edx
// 004bca2a  8b81a0020000         mov eax, dword ptr [ecx + 0x2a0]
// 004bca30  83e801               sub eax, 1
// 004bca33  50                   push eax
// 004bca34  8bcd                 mov ecx, ebp
// 004bca36  e865e1ffff           call 0x4baba0
// 004bca3b  8b0e                 mov ecx, dword ptr [esi]
// 004bca3d  51                   push ecx
// 004bca3e  e81f321700           call 0x62fc62
// 004bca43  56                   push esi
// 004bca44  e819321700           call 0x62fc62
// 004bca49  8b742418             mov esi, dword ptr [esp + 0x18]
// 004bca4d  83c408               add esp, 8
// 004bca50  eb33                 jmp 0x4bca85
// 004bca52  8b11                 mov edx, dword ptr [ecx]
// 004bca54  8a0b                 mov cl, byte ptr [ebx]
// 004bca56  33c0                 xor eax, eax
// 004bca58  380a                 cmp byte ptr [edx], cl
// 004bca5a  7514                 jne 0x4bca70
// 004bca5c  8d642400             lea esp, [esp]
// 004bca60  84c9                 test cl, cl
// 004bca62  7444                 je 0x4bcaa8
// 004bca64  8a4c1801             mov cl, byte ptr [eax + ebx + 1]
// 004bca68  83c001               add eax, 1
// 004bca6b  380c02               cmp byte ptr [edx + eax], cl
// 004bca6e  74f0                 je 0x4bca60
// 004bca70  8a1402               mov dl, byte ptr [edx + eax]
// 004bca73  84d2                 test dl, dl
// 004bca75  740b                 je 0x4bca82
// 004bca77  803c1800             cmp byte ptr [eax + ebx], 0
// 004bca7b  7405                 je 0x4bca82
// 004bca7d  80fa2a               cmp dl, 0x2a
// 004bca80  7426                 je 0x4bcaa8
// 004bca82  83c701               add edi, 1
// 004bca85  3bbea0020000         cmp edi, dword ptr [esi + 0x2a0]
// 004bca8b  0f826fffffff         jb 0x4bca00
// 004bca91  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004bca95  8bcd                 mov ecx, ebp
// 004bca97  e834d70000           call 0x4ca1d0
// 004bca9c  5d                   pop ebp
// 004bca9d  5f                   pop edi
// 004bca9e  5e                   pop esi
// 004bca9f  32c0                 xor al, al
// 004bcaa1  5b                   pop ebx
// 004bcaa2  83c408               add esp, 8
// 004bcaa5  c20400               ret 4
// 004bcaa8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004bcaac  e81fd70000           call 0x4ca1d0
// 004bcab1  5d                   pop ebp
// 004bcab2  5f                   pop edi
// 004bcab3  5e                   pop esi
// 004bcab4  b001                 mov al, 1
// 004bcab6  5b                   pop ebx
// 004bcab7  83c408               add esp, 8
// 004bcaba  c20400               ret 4
// 004bcabd  5e                   pop esi
// 004bcabe  32c0                 xor al, al
// 004bcac0  5b                   pop ebx
// 004bcac1  83c408               add esp, 8
// 004bcac4  c20400               ret 4
// library openrbx-raknet/RakPeer.cpp (function ?IsBanned@RakPeer@@UAE_NPBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
