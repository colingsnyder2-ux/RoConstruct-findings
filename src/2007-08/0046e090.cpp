// roc 2007-08 0046e090  unit: G3D::PBVTextureFormat::?$Table  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046e090
//
// 0046e090  6aff                 push -1
// 0046e092  68b6447400           push 0x7444b6
// 0046e097  64a100000000         mov eax, dword ptr fs:[0]
// 0046e09d  50                   push eax
// 0046e09e  51                   push ecx
// 0046e09f  53                   push ebx
// 0046e0a0  55                   push ebp
// 0046e0a1  56                   push esi
// 0046e0a2  57                   push edi
// 0046e0a3  a188518b00           mov eax, dword ptr [0x8b5188]
// 0046e0a8  33c4                 xor eax, esp
// 0046e0aa  50                   push eax
// 0046e0ab  8d442418             lea eax, [esp + 0x18]
// 0046e0af  64a300000000         mov dword ptr fs:[0], eax
// 0046e0b5  8bf9                 mov edi, ecx
// 0046e0b7  8b442428             mov eax, dword ptr [esp + 0x28]
// 0046e0bb  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0046e0bf  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0046e0c2  7205                 jb 0x46e0c9
// 0046e0c4  8b4004               mov eax, dword ptr [eax + 4]
// 0046e0c7  eb03                 jmp 0x46e0cc
// 0046e0c9  83c004               add eax, 4
// 0046e0cc  51                   push ecx
// 0046e0cd  50                   push eax
// 0046e0ce  e86da60900           call 0x508740
// 0046e0d3  33d2                 xor edx, edx
// 0046e0d5  8be8                 mov ebp, eax
// 0046e0d7  f7770c               div dword ptr [edi + 0xc]
// 0046e0da  8b4708               mov eax, dword ptr [edi + 8]
// 0046e0dd  83c408               add esp, 8
// 0046e0e0  8bda                 mov ebx, edx
// 0046e0e2  8b3498               mov esi, dword ptr [eax + ebx*4]
// 0046e0e5  85f6                 test esi, esi
// 0046e0e7  7548                 jne 0x46e131
// 0046e0e9  6a28                 push 0x28
// 0046e0eb  e8201f0900           call 0x500010
// 0046e0f0  8bf0                 mov esi, eax
// 0046e0f2  83c404               add esp, 4
// 0046e0f5  89742414             mov dword ptr [esp + 0x14], esi
// 0046e0f9  33c0                 xor eax, eax
// 0046e0fb  3bf0                 cmp esi, eax
// 0046e0fd  89442420             mov dword ptr [esp + 0x20], eax
// 0046e101  0f8402010000         je 0x46e209
// 0046e107  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0046e10b  0fb611               movzx edx, byte ptr [ecx]
// 0046e10e  50                   push eax
// 0046e10f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0046e113  55                   push ebp
// 0046e114  52                   push edx
// 0046e115  83ec1c               sub esp, 0x1c
// 0046e118  8bcc                 mov ecx, esp
// 0046e11a  89642454             mov dword ptr [esp + 0x54], esp
// 0046e11e  50                   push eax
// 0046e11f  ff159ce67700         call dword ptr [0x77e69c]
// 0046e125  8bce                 mov ecx, esi
// 0046e127  e8c4f6ffff           call 0x46d7f0
// 0046e12c  e9d8000000           jmp 0x46e209
// 0046e131  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0046e139  b301                 mov bl, 1
// 0046e13b  eb03                 jmp 0x46e140
// 0046e13d  8d4900               lea ecx, [ecx]
// 0046e140  84db                 test bl, bl
// 0046e142  7408                 je 0x46e14c
// 0046e144  3b2e                 cmp ebp, dword ptr [esi]
// 0046e146  7504                 jne 0x46e14c
// 0046e148  b301                 mov bl, 1
// 0046e14a  eb02                 jmp 0x46e14e
// 0046e14c  32db                 xor bl, bl
// 0046e14e  3b2e                 cmp ebp, dword ptr [esi]
// 0046e150  751a                 jne 0x46e16c
// 0046e152  8b542428             mov edx, dword ptr [esp + 0x28]
// 0046e156  52                   push edx
// 0046e157  8d4604               lea eax, [esi + 4]
// 0046e15a  50                   push eax
// 0046e15b  ff1594e67700         call dword ptr [0x77e694]
// 0046e161  83c408               add esp, 8
// 0046e164  84c0                 test al, al
// 0046e166  0f8590000000         jne 0x46e1fc
// 0046e16c  8b7624               mov esi, dword ptr [esi + 0x24]
// 0046e16f  8344241401           add dword ptr [esp + 0x14], 1
// 0046e174  85f6                 test esi, esi
// 0046e176  75c8                 jne 0x46e140
// 0046e178  33c0                 xor eax, eax
// 0046e17a  84db                 test bl, bl
// 0046e17c  0f94c0               sete al
// 0046e17f  33c9                 xor ecx, ecx
// 0046e181  837c241405           cmp dword ptr [esp + 0x14], 5
// 0046e186  0f9fc1               setg cl
// 0046e189  85c1                 test ecx, eax
// 0046e18b  741d                 je 0x46e1aa
// 0046e18d  8b4704               mov eax, dword ptr [edi + 4]
// 0046e190  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0046e193  8d1480               lea edx, [eax + eax*4]
// 0046e196  03d2                 add edx, edx
// 0046e198  03d2                 add edx, edx
// 0046e19a  3bca                 cmp ecx, edx
// 0046e19c  7d0c                 jge 0x46e1aa
// 0046e19e  8d440901             lea eax, [ecx + ecx + 1]
// 0046e1a2  50                   push eax
// 0046e1a3  8bcf                 mov ecx, edi
// 0046e1a5  e806f1ffff           call 0x46d2b0
// 0046e1aa  33d2                 xor edx, edx
// 0046e1ac  8bc5                 mov eax, ebp
// 0046e1ae  f7770c               div dword ptr [edi + 0xc]
// 0046e1b1  6a28                 push 0x28
// 0046e1b3  8bda                 mov ebx, edx
// 0046e1b5  e8561e0900           call 0x500010
// 0046e1ba  8bf0                 mov esi, eax
// 0046e1bc  83c404               add esp, 4
// 0046e1bf  89742414             mov dword ptr [esp + 0x14], esi
// 0046e1c3  85f6                 test esi, esi
// 0046e1c5  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0046e1cd  7438                 je 0x46e207
// 0046e1cf  8b4f08               mov ecx, dword ptr [edi + 8]
// 0046e1d2  8b1499               mov edx, dword ptr [ecx + ebx*4]
// 0046e1d5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0046e1d9  0fb608               movzx ecx, byte ptr [eax]
// 0046e1dc  52                   push edx
// 0046e1dd  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0046e1e1  55                   push ebp
// 0046e1e2  51                   push ecx
// 0046e1e3  83ec1c               sub esp, 0x1c
// 0046e1e6  8bcc                 mov ecx, esp
// 0046e1e8  89642454             mov dword ptr [esp + 0x54], esp
// 0046e1ec  52                   push edx
// 0046e1ed  ff159ce67700         call dword ptr [0x77e69c]
// 0046e1f3  8bce                 mov ecx, esi
// 0046e1f5  e8f6f5ffff           call 0x46d7f0
// 0046e1fa  eb0d                 jmp 0x46e209
// 0046e1fc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0046e200  8a11                 mov dl, byte ptr [ecx]
// 0046e202  885620               mov byte ptr [esi + 0x20], dl
// 0046e205  eb0c                 jmp 0x46e213
// 0046e207  33c0                 xor eax, eax
// 0046e209  8b4f08               mov ecx, dword ptr [edi + 8]
// 0046e20c  890499               mov dword ptr [ecx + ebx*4], eax
// 0046e20f  83470401             add dword ptr [edi + 4], 1
// 0046e213  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0046e217  64890d00000000       mov dword ptr fs:[0], ecx
// 0046e21e  59                   pop ecx
// 0046e21f  5f                   pop edi
// 0046e220  5e                   pop esi
// 0046e221  5d                   pop ebp
// 0046e222  5b                   pop ebx
// 0046e223  83c410               add esp, 0x10
// 0046e226  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?set@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AB_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
