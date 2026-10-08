// from server: 100% by auto
// roc 2008-06 0047ddc0  unit: G3D::TextureManager::TextureArgs  size: 523 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047ddc0
//
// 0047ddc0  55                   push ebp
// 0047ddc1  8bec                 mov ebp, esp
// 0047ddc3  83e4f8               and esp, 0xfffffff8
// 0047ddc6  6aff                 push -1
// 0047ddc8  68764f7c00           push 0x7c4f76
// 0047ddcd  64a100000000         mov eax, dword ptr fs:[0]
// 0047ddd3  50                   push eax
// 0047ddd4  64892500000000       mov dword ptr fs:[0], esp
// 0047dddb  83ec18               sub esp, 0x18
// 0047ddde  53                   push ebx
// 0047dddf  56                   push esi
// 0047dde0  57                   push edi
// 0047dde1  8b7d08               mov edi, dword ptr [ebp + 8]
// 0047dde4  8b07                 mov eax, dword ptr [edi]
// 0047dde6  8b10                 mov edx, dword ptr [eax]
// 0047dde8  8bd9                 mov ebx, ecx
// 0047ddea  8bcf                 mov ecx, edi
// 0047ddec  ffd2                 call edx
// 0047ddee  8bc8                 mov ecx, eax
// 0047ddf0  33d2                 xor edx, edx
// 0047ddf2  f7730c               div dword ptr [ebx + 0xc]
// 0047ddf5  8b4308               mov eax, dword ptr [ebx + 8]
// 0047ddf8  894c2410             mov dword ptr [esp + 0x10], ecx
// 0047ddfc  8b3490               mov esi, dword ptr [eax + edx*4]
// 0047ddff  89542414             mov dword ptr [esp + 0x14], edx
// 0047de03  85f6                 test esi, esi
// 0047de05  755d                 jne 0x47de64
// 0047de07  6a50                 push 0x50
// 0047de09  e822a70800           call 0x508530
// 0047de0e  8bf0                 mov esi, eax
// 0047de10  83c404               add esp, 4
// 0047de13  89742418             mov dword ptr [esp + 0x18], esi
// 0047de17  33c0                 xor eax, eax
// 0047de19  8944242c             mov dword ptr [esp + 0x2c], eax
// 0047de1d  3bf0                 cmp esi, eax
// 0047de1f  0f8485010000         je 0x47dfaa
// 0047de25  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047de29  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0047de2c  50                   push eax
// 0047de2d  51                   push ecx
// 0047de2e  51                   push ecx
// 0047de2f  8bcc                 mov ecx, esp
// 0047de31  8901                 mov dword ptr [ecx], eax
// 0047de33  8b02                 mov eax, dword ptr [edx]
// 0047de35  8964241c             mov dword ptr [esp + 0x1c], esp
// 0047de39  50                   push eax
// 0047de3a  e861b11100           call 0x598fa0
// 0047de3f  83ec38               sub esp, 0x38
// 0047de42  8bcc                 mov ecx, esp
// 0047de44  89642460             mov dword ptr [esp + 0x60], esp
// 0047de48  57                   push edi
// 0047de49  c644247401           mov byte ptr [esp + 0x74], 1
// 0047de4e  e8ddf8ffff           call 0x47d730
// 0047de53  8bce                 mov ecx, esi
// 0047de55  c644247000           mov byte ptr [esp + 0x70], 0
// 0047de5a  e861feffff           call 0x47dcc0
// 0047de5f  e946010000           jmp 0x47dfaa
// 0047de64  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0047de6c  b001                 mov al, 1
// 0047de6e  8bff                 mov edi, edi
// 0047de70  84c0                 test al, al
// 0047de72  7409                 je 0x47de7d
// 0047de74  c644240f01           mov byte ptr [esp + 0xf], 1
// 0047de79  3b0e                 cmp ecx, dword ptr [esi]
// 0047de7b  7409                 je 0x47de86
// 0047de7d  c644240f00           mov byte ptr [esp + 0xf], 0
// 0047de82  3b0e                 cmp ecx, dword ptr [esi]
// 0047de84  7546                 jne 0x47decc
// 0047de86  8b4628               mov eax, dword ptr [esi + 0x28]
// 0047de89  3b4720               cmp eax, dword ptr [edi + 0x20]
// 0047de8c  753e                 jne 0x47decc
// 0047de8e  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0047de91  3b5724               cmp edx, dword ptr [edi + 0x24]
// 0047de94  7536                 jne 0x47decc
// 0047de96  8b4630               mov eax, dword ptr [esi + 0x30]
// 0047de99  3b4728               cmp eax, dword ptr [edi + 0x28]
// 0047de9c  752e                 jne 0x47decc
// 0047de9e  8d4f04               lea ecx, [edi + 4]
// 0047dea1  51                   push ecx
// 0047dea2  8d560c               lea edx, [esi + 0xc]
// 0047dea5  52                   push edx
// 0047dea6  ff1544248000         call dword ptr [0x802444]
// 0047deac  83c408               add esp, 8
// 0047deaf  84c0                 test al, al
// 0047deb1  7415                 je 0x47dec8
// 0047deb3  8b4634               mov eax, dword ptr [esi + 0x34]
// 0047deb6  3b472c               cmp eax, dword ptr [edi + 0x2c]
// 0047deb9  750d                 jne 0x47dec8
// 0047debb  dd4730               fld qword ptr [edi + 0x30]
// 0047debe  dc5e38               fcomp qword ptr [esi + 0x38]
// 0047dec1  dfe0                 fnstsw ax
// 0047dec3  f6c444               test ah, 0x44
// 0047dec6  7b15                 jnp 0x47dedd
// 0047dec8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047decc  8b7648               mov esi, dword ptr [esi + 0x48]
// 0047decf  ff442414             inc dword ptr [esp + 0x14]
// 0047ded3  85f6                 test esi, esi
// 0047ded5  7428                 je 0x47deff
// 0047ded7  8a44240f             mov al, byte ptr [esp + 0xf]
// 0047dedb  eb93                 jmp 0x47de70
// 0047dedd  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0047dee0  8b11                 mov edx, dword ptr [ecx]
// 0047dee2  52                   push edx
// 0047dee3  8d4e40               lea ecx, [esi + 0x40]
// 0047dee6  e8b5b01100           call 0x598fa0
// 0047deeb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0047deef  64890d00000000       mov dword ptr fs:[0], ecx
// 0047def6  5f                   pop edi
// 0047def7  5e                   pop esi
// 0047def8  5b                   pop ebx
// 0047def9  8be5                 mov esp, ebp
// 0047defb  5d                   pop ebp
// 0047defc  c20800               ret 8
// 0047deff  33c0                 xor eax, eax
// 0047df01  3844240f             cmp byte ptr [esp + 0xf], al
// 0047df05  0f94c0               sete al
// 0047df08  33d2                 xor edx, edx
// 0047df0a  837c241405           cmp dword ptr [esp + 0x14], 5
// 0047df0f  0f9fc2               setg dl
// 0047df12  85c2                 test edx, eax
// 0047df14  7421                 je 0x47df37
// 0047df16  8b4304               mov eax, dword ptr [ebx + 4]
// 0047df19  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0047df1c  8d0480               lea eax, [eax + eax*4]
// 0047df1f  03c0                 add eax, eax
// 0047df21  03c0                 add eax, eax
// 0047df23  3bd0                 cmp edx, eax
// 0047df25  7d10                 jge 0x47df37
// 0047df27  8d4c1201             lea ecx, [edx + edx + 1]
// 0047df2b  51                   push ecx
// 0047df2c  8bcb                 mov ecx, ebx
// 0047df2e  e8fdf5ffff           call 0x47d530
// 0047df33  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047df37  8bc1                 mov eax, ecx
// 0047df39  33d2                 xor edx, edx
// 0047df3b  f7730c               div dword ptr [ebx + 0xc]
// 0047df3e  6a50                 push 0x50
// 0047df40  89542418             mov dword ptr [esp + 0x18], edx
// 0047df44  e8e7a50800           call 0x508530
// 0047df49  8bf0                 mov esi, eax
// 0047df4b  83c404               add esp, 4
// 0047df4e  8974241c             mov dword ptr [esp + 0x1c], esi
// 0047df52  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 0047df5a  85f6                 test esi, esi
// 0047df5c  744a                 je 0x47dfa8
// 0047df5e  8b5308               mov edx, dword ptr [ebx + 8]
// 0047df61  8b442414             mov eax, dword ptr [esp + 0x14]
// 0047df65  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 0047df68  8b542410             mov edx, dword ptr [esp + 0x10]
// 0047df6c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0047df6f  51                   push ecx
// 0047df70  52                   push edx
// 0047df71  51                   push ecx
// 0047df72  8bcc                 mov ecx, esp
// 0047df74  c70100000000         mov dword ptr [ecx], 0
// 0047df7a  8b10                 mov edx, dword ptr [eax]
// 0047df7c  89642424             mov dword ptr [esp + 0x24], esp
// 0047df80  52                   push edx
// 0047df81  e81ab01100           call 0x598fa0
// 0047df86  83ec38               sub esp, 0x38
// 0047df89  8bcc                 mov ecx, esp
// 0047df8b  89642454             mov dword ptr [esp + 0x54], esp
// 0047df8f  57                   push edi
// 0047df90  c644247403           mov byte ptr [esp + 0x74], 3
// 0047df95  e896f7ffff           call 0x47d730
// 0047df9a  8bce                 mov ecx, esi
// 0047df9c  c644247002           mov byte ptr [esp + 0x70], 2
// 0047dfa1  e81afdffff           call 0x47dcc0
// 0047dfa6  eb02                 jmp 0x47dfaa
// 0047dfa8  33c0                 xor eax, eax
// 0047dfaa  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0047dfad  8b542414             mov edx, dword ptr [esp + 0x14]
// 0047dfb1  890491               mov dword ptr [ecx + edx*4], eax
// 0047dfb4  ff4304               inc dword ptr [ebx + 4]
// 0047dfb7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0047dfbb  5f                   pop edi
// 0047dfbc  5e                   pop esi
// 0047dfbd  64890d00000000       mov dword ptr fs:[0], ecx
// 0047dfc4  5b                   pop ebx
// 0047dfc5  8be5                 mov esp, ebp
// 0047dfc7  5d                   pop ebp
// 0047dfc8  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?set@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QAEXABVTextureArgs@TextureManager@2@ABV?$ReferenceCountedPointer@VTexture@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
