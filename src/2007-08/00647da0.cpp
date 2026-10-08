// from server: 100% by auto
// roc 2007-08 00647da0  unit: CXTPCommandBar  size: 539 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00647da0
//
// 00647da0  83ec58               sub esp, 0x58
// 00647da3  56                   push esi
// 00647da4  8b35ccd07700         mov esi, dword ptr [0x77d0cc]
// 00647daa  57                   push edi
// 00647dab  8d442430             lea eax, [esp + 0x30]
// 00647daf  50                   push eax
// 00647db0  8bf9                 mov edi, ecx
// 00647db2  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00647db6  6a18                 push 0x18
// 00647db8  51                   push ecx
// 00647db9  ffd6                 call esi
// 00647dbb  85c0                 test eax, eax
// 00647dbd  0f84ee010000         je 0x647fb1
// 00647dc3  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00647dc7  8d542448             lea edx, [esp + 0x48]
// 00647dcb  52                   push edx
// 00647dcc  6a18                 push 0x18
// 00647dce  50                   push eax
// 00647dcf  ffd6                 call esi
// 00647dd1  85c0                 test eax, eax
// 00647dd3  0f84d8010000         je 0x647fb1
// 00647dd9  8b542474             mov edx, dword ptr [esp + 0x74]
// 00647ddd  8d4c2418             lea ecx, [esp + 0x18]
// 00647de1  51                   push ecx
// 00647de2  6a18                 push 0x18
// 00647de4  52                   push edx
// 00647de5  ffd6                 call esi
// 00647de7  85c0                 test eax, eax
// 00647de9  0f84c2010000         je 0x647fb1
// 00647def  8d442448             lea eax, [esp + 0x48]
// 00647df3  50                   push eax
// 00647df4  8d4c2434             lea ecx, [esp + 0x34]
// 00647df8  51                   push ecx
// 00647df9  8bcf                 mov ecx, edi
// 00647dfb  e8b0fcffff           call 0x647ab0
// 00647e00  85c0                 test eax, eax
// 00647e02  0f84a9010000         je 0x647fb1
// 00647e08  8d542418             lea edx, [esp + 0x18]
// 00647e0c  52                   push edx
// 00647e0d  8d442434             lea eax, [esp + 0x34]
// 00647e11  50                   push eax
// 00647e12  8bcf                 mov ecx, edi
// 00647e14  e897fcffff           call 0x647ab0
// 00647e19  85c0                 test eax, eax
// 00647e1b  0f8490010000         je 0x647fb1
// 00647e21  66837c244220         cmp word ptr [esp + 0x42], 0x20
// 00647e27  0f8584010000         jne 0x647fb1
// 00647e2d  66837c244001         cmp word ptr [esp + 0x40], 1
// 00647e33  0f8578010000         jne 0x647fb1
// 00647e39  8b442444             mov eax, dword ptr [esp + 0x44]
// 00647e3d  85c0                 test eax, eax
// 00647e3f  0f846c010000         je 0x647fb1
// 00647e45  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00647e49  85d2                 test edx, edx
// 00647e4b  0f8460010000         je 0x647fb1
// 00647e51  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00647e55  85f6                 test esi, esi
// 00647e57  0f8454010000         je 0x647fb1
// 00647e5d  837c242000           cmp dword ptr [esp + 0x20], 0
// 00647e62  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00647e66  894c2414             mov dword ptr [esp + 0x14], ecx
// 00647e6a  89442464             mov dword ptr [esp + 0x64], eax
// 00647e6e  89542474             mov dword ptr [esp + 0x74], edx
// 00647e72  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00647e7a  0f8e24010000         jle 0x647fa4
// 00647e80  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00647e84  53                   push ebx
// 00647e85  8d7e01               lea edi, [esi + 1]
// 00647e88  55                   push ebp
// 00647e89  897c2410             mov dword ptr [esp + 0x10], edi
// 00647e8d  8d4900               lea ecx, [ecx]
// 00647e90  33ed                 xor ebp, ebp
// 00647e92  85c0                 test eax, eax
// 00647e94  0f8edf000000         jle 0x647f79
// 00647e9a  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00647e9e  8bda                 mov ebx, edx
// 00647ea0  2bca                 sub ecx, edx
// 00647ea2  895c2474             mov dword ptr [esp + 0x74], ebx
// 00647ea6  894c2418             mov dword ptr [esp + 0x18], ecx
// 00647eaa  eb0c                 jmp 0x647eb8
// 00647eac  8d642400             lea esp, [esp]
// 00647eb0  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 00647eb4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00647eb8  837c247000           cmp dword ptr [esp + 0x70], 0
// 00647ebd  740e                 je 0x647ecd
// 00647ebf  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00647ec3  8bc8                 mov ecx, eax
// 00647ec5  2bcd                 sub ecx, ebp
// 00647ec7  8d4c8efc             lea ecx, [esi + ecx*4 - 4]
// 00647ecb  eb02                 jmp 0x647ecf
// 00647ecd  03cb                 add ecx, ebx
// 00647ecf  837c247800           cmp dword ptr [esp + 0x78], 0
// 00647ed4  7406                 je 0x647edc
// 00647ed6  2bc5                 sub eax, ebp
// 00647ed8  8d5c82fc             lea ebx, [edx + eax*4 - 4]
// 00647edc  0fb65103             movzx edx, byte ptr [ecx + 3]
// 00647ee0  0fb67302             movzx esi, byte ptr [ebx + 2]
// 00647ee4  b8ff000000           mov eax, 0xff
// 00647ee9  2bc2                 sub eax, edx
// 00647eeb  0faff0               imul esi, eax
// 00647eee  b881808080           mov eax, 0x80808081
// 00647ef3  f7ee                 imul esi
// 00647ef5  03d6                 add edx, esi
// 00647ef7  c1fa07               sar edx, 7
// 00647efa  8bc2                 mov eax, edx
// 00647efc  c1e81f               shr eax, 0x1f
// 00647eff  03c2                 add eax, edx
// 00647f01  024102               add al, byte ptr [ecx + 2]
// 00647f04  8344247404           add dword ptr [esp + 0x74], 4
// 00647f09  884701               mov byte ptr [edi + 1], al
// 00647f0c  0fb65103             movzx edx, byte ptr [ecx + 3]
// 00647f10  0fb67301             movzx esi, byte ptr [ebx + 1]
// 00647f14  b8ff000000           mov eax, 0xff
// 00647f19  2bc2                 sub eax, edx
// 00647f1b  0faff0               imul esi, eax
// 00647f1e  b881808080           mov eax, 0x80808081
// 00647f23  f7ee                 imul esi
// 00647f25  03d6                 add edx, esi
// 00647f27  c1fa07               sar edx, 7
// 00647f2a  8bc2                 mov eax, edx
// 00647f2c  c1e81f               shr eax, 0x1f
// 00647f2f  03c2                 add eax, edx
// 00647f31  024101               add al, byte ptr [ecx + 1]
// 00647f34  beff000000           mov esi, 0xff
// 00647f39  8807                 mov byte ptr [edi], al
// 00647f3b  0fb65103             movzx edx, byte ptr [ecx + 3]
// 00647f3f  0fb603               movzx eax, byte ptr [ebx]
// 00647f42  2bf2                 sub esi, edx
// 00647f44  0faff0               imul esi, eax
// 00647f47  b881808080           mov eax, 0x80808081
// 00647f4c  f7ee                 imul esi
// 00647f4e  03d6                 add edx, esi
// 00647f50  c1fa07               sar edx, 7
// 00647f53  8bc2                 mov eax, edx
// 00647f55  c1e81f               shr eax, 0x1f
// 00647f58  03c2                 add eax, edx
// 00647f5a  0201                 add al, byte ptr [ecx]
// 00647f5c  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00647f60  8847ff               mov byte ptr [edi - 1], al
// 00647f63  8b442424             mov eax, dword ptr [esp + 0x24]
// 00647f67  83c501               add ebp, 1
// 00647f6a  83c704               add edi, 4
// 00647f6d  3be8                 cmp ebp, eax
// 00647f6f  0f8c3bffffff         jl 0x647eb0
// 00647f75  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00647f79  8b742414             mov esi, dword ptr [esp + 0x14]
// 00647f7d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00647f81  014c246c             add dword ptr [esp + 0x6c], ecx
// 00647f85  83c601               add esi, 1
// 00647f88  03d1                 add edx, ecx
// 00647f8a  03f9                 add edi, ecx
// 00647f8c  3b742428             cmp esi, dword ptr [esp + 0x28]
// 00647f90  8954247c             mov dword ptr [esp + 0x7c], edx
// 00647f94  897c2410             mov dword ptr [esp + 0x10], edi
// 00647f98  89742414             mov dword ptr [esp + 0x14], esi
// 00647f9c  0f8ceefeffff         jl 0x647e90
// 00647fa2  5d                   pop ebp
// 00647fa3  5b                   pop ebx
// 00647fa4  5f                   pop edi
// 00647fa5  b801000000           mov eax, 1
// 00647faa  5e                   pop esi
// 00647fab  83c458               add esp, 0x58
// 00647fae  c21400               ret 0x14
// 00647fb1  5f                   pop edi
// 00647fb2  33c0                 xor eax, eax
// 00647fb4  5e                   pop esi
// 00647fb5  83c458               add esp, 0x58
// 00647fb8  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?BlendImages@CXTPImageManager@@ABEHPAUHBITMAP__@@H0H0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
