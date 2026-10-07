// roc 2009-06 004a52e0  unit: G3D::TextureManager::TextureArgs  size: 523 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a52e0
//
// 004a52e0  55                   push ebp
// 004a52e1  8bec                 mov ebp, esp
// 004a52e3  83e4f8               and esp, 0xfffffff8
// 004a52e6  6aff                 push -1
// 004a52e8  68a6758500           push 0x8575a6
// 004a52ed  64a100000000         mov eax, dword ptr fs:[0]
// 004a52f3  50                   push eax
// 004a52f4  64892500000000       mov dword ptr fs:[0], esp
// 004a52fb  83ec18               sub esp, 0x18
// 004a52fe  53                   push ebx
// 004a52ff  56                   push esi
// 004a5300  57                   push edi
// 004a5301  8b7d08               mov edi, dword ptr [ebp + 8]
// 004a5304  8b07                 mov eax, dword ptr [edi]
// 004a5306  8b10                 mov edx, dword ptr [eax]
// 004a5308  8bd9                 mov ebx, ecx
// 004a530a  8bcf                 mov ecx, edi
// 004a530c  ffd2                 call edx
// 004a530e  8bc8                 mov ecx, eax
// 004a5310  33d2                 xor edx, edx
// 004a5312  f7730c               div dword ptr [ebx + 0xc]
// 004a5315  8b4308               mov eax, dword ptr [ebx + 8]
// 004a5318  894c2410             mov dword ptr [esp + 0x10], ecx
// 004a531c  8b3490               mov esi, dword ptr [eax + edx*4]
// 004a531f  89542414             mov dword ptr [esp + 0x14], edx
// 004a5323  85f6                 test esi, esi
// 004a5325  755d                 jne 0x4a5384
// 004a5327  6a50                 push 0x50
// 004a5329  e8125e0c00           call 0x56b140
// 004a532e  8bf0                 mov esi, eax
// 004a5330  83c404               add esp, 4
// 004a5333  89742418             mov dword ptr [esp + 0x18], esi
// 004a5337  33c0                 xor eax, eax
// 004a5339  8944242c             mov dword ptr [esp + 0x2c], eax
// 004a533d  3bf0                 cmp esi, eax
// 004a533f  0f8485010000         je 0x4a54ca
// 004a5345  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a5349  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004a534c  50                   push eax
// 004a534d  51                   push ecx
// 004a534e  51                   push ecx
// 004a534f  8bcc                 mov ecx, esp
// 004a5351  8901                 mov dword ptr [ecx], eax
// 004a5353  8b02                 mov eax, dword ptr [edx]
// 004a5355  8964241c             mov dword ptr [esp + 0x1c], esp
// 004a5359  50                   push eax
// 004a535a  e801a5ffff           call 0x49f860
// 004a535f  83ec38               sub esp, 0x38
// 004a5362  8bcc                 mov ecx, esp
// 004a5364  89642460             mov dword ptr [esp + 0x60], esp
// 004a5368  57                   push edi
// 004a5369  c644247401           mov byte ptr [esp + 0x74], 1
// 004a536e  e8ddf8ffff           call 0x4a4c50
// 004a5373  8bce                 mov ecx, esi
// 004a5375  c644247000           mov byte ptr [esp + 0x70], 0
// 004a537a  e861feffff           call 0x4a51e0
// 004a537f  e946010000           jmp 0x4a54ca
// 004a5384  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004a538c  b001                 mov al, 1
// 004a538e  8bff                 mov edi, edi
// 004a5390  84c0                 test al, al
// 004a5392  7409                 je 0x4a539d
// 004a5394  c644240f01           mov byte ptr [esp + 0xf], 1
// 004a5399  3b0e                 cmp ecx, dword ptr [esi]
// 004a539b  7409                 je 0x4a53a6
// 004a539d  c644240f00           mov byte ptr [esp + 0xf], 0
// 004a53a2  3b0e                 cmp ecx, dword ptr [esi]
// 004a53a4  7546                 jne 0x4a53ec
// 004a53a6  8b4628               mov eax, dword ptr [esi + 0x28]
// 004a53a9  3b4720               cmp eax, dword ptr [edi + 0x20]
// 004a53ac  753e                 jne 0x4a53ec
// 004a53ae  8b562c               mov edx, dword ptr [esi + 0x2c]
// 004a53b1  3b5724               cmp edx, dword ptr [edi + 0x24]
// 004a53b4  7536                 jne 0x4a53ec
// 004a53b6  8b4630               mov eax, dword ptr [esi + 0x30]
// 004a53b9  3b4728               cmp eax, dword ptr [edi + 0x28]
// 004a53bc  752e                 jne 0x4a53ec
// 004a53be  8d4f04               lea ecx, [edi + 4]
// 004a53c1  51                   push ecx
// 004a53c2  8d560c               lea edx, [esi + 0xc]
// 004a53c5  52                   push edx
// 004a53c6  ff1544e48900         call dword ptr [0x89e444]
// 004a53cc  83c408               add esp, 8
// 004a53cf  84c0                 test al, al
// 004a53d1  7415                 je 0x4a53e8
// 004a53d3  8b4634               mov eax, dword ptr [esi + 0x34]
// 004a53d6  3b472c               cmp eax, dword ptr [edi + 0x2c]
// 004a53d9  750d                 jne 0x4a53e8
// 004a53db  dd4730               fld qword ptr [edi + 0x30]
// 004a53de  dc5e38               fcomp qword ptr [esi + 0x38]
// 004a53e1  dfe0                 fnstsw ax
// 004a53e3  f6c444               test ah, 0x44
// 004a53e6  7b15                 jnp 0x4a53fd
// 004a53e8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a53ec  8b7648               mov esi, dword ptr [esi + 0x48]
// 004a53ef  ff442414             inc dword ptr [esp + 0x14]
// 004a53f3  85f6                 test esi, esi
// 004a53f5  7428                 je 0x4a541f
// 004a53f7  8a44240f             mov al, byte ptr [esp + 0xf]
// 004a53fb  eb93                 jmp 0x4a5390
// 004a53fd  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004a5400  8b11                 mov edx, dword ptr [ecx]
// 004a5402  52                   push edx
// 004a5403  8d4e40               lea ecx, [esi + 0x40]
// 004a5406  e855a4ffff           call 0x49f860
// 004a540b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004a540f  64890d00000000       mov dword ptr fs:[0], ecx
// 004a5416  5f                   pop edi
// 004a5417  5e                   pop esi
// 004a5418  5b                   pop ebx
// 004a5419  8be5                 mov esp, ebp
// 004a541b  5d                   pop ebp
// 004a541c  c20800               ret 8
// 004a541f  33c0                 xor eax, eax
// 004a5421  3844240f             cmp byte ptr [esp + 0xf], al
// 004a5425  0f94c0               sete al
// 004a5428  33d2                 xor edx, edx
// 004a542a  837c241405           cmp dword ptr [esp + 0x14], 5
// 004a542f  0f9fc2               setg dl
// 004a5432  85c2                 test edx, eax
// 004a5434  7421                 je 0x4a5457
// 004a5436  8b4304               mov eax, dword ptr [ebx + 4]
// 004a5439  8b530c               mov edx, dword ptr [ebx + 0xc]
// 004a543c  8d0480               lea eax, [eax + eax*4]
// 004a543f  03c0                 add eax, eax
// 004a5441  03c0                 add eax, eax
// 004a5443  3bd0                 cmp edx, eax
// 004a5445  7d10                 jge 0x4a5457
// 004a5447  8d4c1201             lea ecx, [edx + edx + 1]
// 004a544b  51                   push ecx
// 004a544c  8bcb                 mov ecx, ebx
// 004a544e  e8fdf5ffff           call 0x4a4a50
// 004a5453  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a5457  8bc1                 mov eax, ecx
// 004a5459  33d2                 xor edx, edx
// 004a545b  f7730c               div dword ptr [ebx + 0xc]
// 004a545e  6a50                 push 0x50
// 004a5460  89542418             mov dword ptr [esp + 0x18], edx
// 004a5464  e8d75c0c00           call 0x56b140
// 004a5469  8bf0                 mov esi, eax
// 004a546b  83c404               add esp, 4
// 004a546e  8974241c             mov dword ptr [esp + 0x1c], esi
// 004a5472  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 004a547a  85f6                 test esi, esi
// 004a547c  744a                 je 0x4a54c8
// 004a547e  8b5308               mov edx, dword ptr [ebx + 8]
// 004a5481  8b442414             mov eax, dword ptr [esp + 0x14]
// 004a5485  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 004a5488  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a548c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004a548f  51                   push ecx
// 004a5490  52                   push edx
// 004a5491  51                   push ecx
// 004a5492  8bcc                 mov ecx, esp
// 004a5494  c70100000000         mov dword ptr [ecx], 0
// 004a549a  8b10                 mov edx, dword ptr [eax]
// 004a549c  89642424             mov dword ptr [esp + 0x24], esp
// 004a54a0  52                   push edx
// 004a54a1  e8baa3ffff           call 0x49f860
// 004a54a6  83ec38               sub esp, 0x38
// 004a54a9  8bcc                 mov ecx, esp
// 004a54ab  89642454             mov dword ptr [esp + 0x54], esp
// 004a54af  57                   push edi
// 004a54b0  c644247403           mov byte ptr [esp + 0x74], 3
// 004a54b5  e896f7ffff           call 0x4a4c50
// 004a54ba  8bce                 mov ecx, esi
// 004a54bc  c644247002           mov byte ptr [esp + 0x70], 2
// 004a54c1  e81afdffff           call 0x4a51e0
// 004a54c6  eb02                 jmp 0x4a54ca
// 004a54c8  33c0                 xor eax, eax
// 004a54ca  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004a54cd  8b542414             mov edx, dword ptr [esp + 0x14]
// 004a54d1  890491               mov dword ptr [ecx + edx*4], eax
// 004a54d4  ff4304               inc dword ptr [ebx + 4]
// 004a54d7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004a54db  5f                   pop edi
// 004a54dc  5e                   pop esi
// 004a54dd  64890d00000000       mov dword ptr fs:[0], ecx
// 004a54e4  5b                   pop ebx
// 004a54e5  8be5                 mov esp, ebp
// 004a54e7  5d                   pop ebp
// 004a54e8  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?set@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QAEXABVTextureArgs@TextureManager@2@ABV?$ReferenceCountedPointer@VTexture@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
