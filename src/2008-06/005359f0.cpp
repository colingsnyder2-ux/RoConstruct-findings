// roc 2008-06 005359f0  unit: seg_00530000  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005359f0
//
// 005359f0  81ec1c020000         sub esp, 0x21c
// 005359f6  57                   push edi
// 005359f7  b8ffffff7f           mov eax, 0x7fffffff
// 005359fc  b980000000           mov ecx, 0x80
// 00535a01  8d7c2420             lea edi, [esp + 0x20]
// 00535a05  f3ab                 rep stosd dword ptr es:[edi], eax
// 00535a07  33c0                 xor eax, eax
// 00535a09  39842434020000       cmp dword ptr [esp + 0x234], eax
// 00535a10  89442410             mov dword ptr [esp + 0x10], eax
// 00535a14  0f8e3f010000         jle 0x535b59
// 00535a1a  53                   push ebx
// 00535a1b  55                   push ebp
// 00535a1c  56                   push esi
// 00535a1d  8d4900               lea ecx, [ecx]
// 00535a20  8b8c2444020000       mov ecx, dword ptr [esp + 0x244]
// 00535a27  0fb61c08             movzx ebx, byte ptr [eax + ecx]
// 00535a2b  8b942430020000       mov edx, dword ptr [esp + 0x230]
// 00535a32  8b7274               mov esi, dword ptr [edx + 0x74]
// 00535a35  8b06                 mov eax, dword ptr [esi]
// 00535a37  0fb60c03             movzx ecx, byte ptr [ebx + eax]
// 00535a3b  8b5604               mov edx, dword ptr [esi + 4]
// 00535a3e  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 00535a42  8b842434020000       mov eax, dword ptr [esp + 0x234]
// 00535a49  2bc1                 sub eax, ecx
// 00535a4b  8b8c2438020000       mov ecx, dword ptr [esp + 0x238]
// 00535a52  2bca                 sub ecx, edx
// 00535a54  8d1449               lea edx, [ecx + ecx*2]
// 00535a57  8b4e08               mov ecx, dword ptr [esi + 8]
// 00535a5a  0fb63419             movzx esi, byte ptr [ecx + ebx]
// 00535a5e  8b8c243c020000       mov ecx, dword ptr [esp + 0x23c]
// 00535a65  2bce                 sub ecx, esi
// 00535a67  8bf1                 mov esi, ecx
// 00535a69  0faff1               imul esi, ecx
// 00535a6c  8bfa                 mov edi, edx
// 00535a6e  0faffa               imul edi, edx
// 00535a71  03f7                 add esi, edi
// 00535a73  03c0                 add eax, eax
// 00535a75  8bf8                 mov edi, eax
// 00535a77  0faff8               imul edi, eax
// 00535a7a  8d6c5212             lea ebp, [edx + edx*2 + 0x12]
// 00535a7e  8b942448020000       mov edx, dword ptr [esp + 0x248]
// 00535a85  03ed                 add ebp, ebp
// 00535a87  03f7                 add esi, edi
// 00535a89  03ed                 add ebp, ebp
// 00535a8b  8d7904               lea edi, [ecx + 4]
// 00535a8e  03ed                 add ebp, ebp
// 00535a90  83c008               add eax, 8
// 00535a93  c1e704               shl edi, 4
// 00535a96  c1e005               shl eax, 5
// 00535a99  896c2428             mov dword ptr [esp + 0x28], ebp
// 00535a9d  8d4c242c             lea ecx, [esp + 0x2c]
// 00535aa1  89442410             mov dword ptr [esp + 0x10], eax
// 00535aa5  c744241403000000     mov dword ptr [esp + 0x14], 3
// 00535aad  eb05                 jmp 0x535ab4
// 00535aaf  90                   nop 
// 00535ab0  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00535ab4  8bc6                 mov eax, esi
// 00535ab6  89442420             mov dword ptr [esp + 0x20], eax
// 00535aba  896c2418             mov dword ptr [esp + 0x18], ebp
// 00535abe  c744242407000000     mov dword ptr [esp + 0x24], 7
// 00535ac6  3b01                 cmp eax, dword ptr [ecx]
// 00535ac8  7d04                 jge 0x535ace
// 00535aca  8901                 mov dword ptr [ecx], eax
// 00535acc  881a                 mov byte ptr [edx], bl
// 00535ace  03c7                 add eax, edi
// 00535ad0  3b4104               cmp eax, dword ptr [ecx + 4]
// 00535ad3  7d06                 jge 0x535adb
// 00535ad5  894104               mov dword ptr [ecx + 4], eax
// 00535ad8  885a01               mov byte ptr [edx + 1], bl
// 00535adb  8daf80000000         lea ebp, [edi + 0x80]
// 00535ae1  03c5                 add eax, ebp
// 00535ae3  3b4108               cmp eax, dword ptr [ecx + 8]
// 00535ae6  7d06                 jge 0x535aee
// 00535ae8  894108               mov dword ptr [ecx + 8], eax
// 00535aeb  885a02               mov byte ptr [edx + 2], bl
// 00535aee  8daf00010000         lea ebp, [edi + 0x100]
// 00535af4  03c5                 add eax, ebp
// 00535af6  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 00535af9  7d06                 jge 0x535b01
// 00535afb  89410c               mov dword ptr [ecx + 0xc], eax
// 00535afe  885a03               mov byte ptr [edx + 3], bl
// 00535b01  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00535b05  8b442420             mov eax, dword ptr [esp + 0x20]
// 00535b09  03c5                 add eax, ebp
// 00535b0b  81c520010000         add ebp, 0x120
// 00535b11  83c110               add ecx, 0x10
// 00535b14  83c204               add edx, 4
// 00535b17  836c242401           sub dword ptr [esp + 0x24], 1
// 00535b1c  89442420             mov dword ptr [esp + 0x20], eax
// 00535b20  896c2418             mov dword ptr [esp + 0x18], ebp
// 00535b24  79a0                 jns 0x535ac6
// 00535b26  8b442410             mov eax, dword ptr [esp + 0x10]
// 00535b2a  03f0                 add esi, eax
// 00535b2c  0500020000           add eax, 0x200
// 00535b31  836c241401           sub dword ptr [esp + 0x14], 1
// 00535b36  89442410             mov dword ptr [esp + 0x10], eax
// 00535b3a  0f8970ffffff         jns 0x535ab0
// 00535b40  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00535b44  40                   inc eax
// 00535b45  3b842440020000       cmp eax, dword ptr [esp + 0x240]
// 00535b4c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00535b50  0f8ccafeffff         jl 0x535a20
// 00535b56  5e                   pop esi
// 00535b57  5d                   pop ebp
// 00535b58  5b                   pop ebx
// 00535b59  5f                   pop edi
// 00535b5a  81c41c020000         add esp, 0x21c
// 00535b60  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_best_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
