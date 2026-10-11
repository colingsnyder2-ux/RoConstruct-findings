// roc 2007-08 00554c30  unit: RBX::ServiceProvider  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00554c30
//
// 00554c30  83ec0c               sub esp, 0xc
// 00554c33  53                   push ebx
// 00554c34  55                   push ebp
// 00554c35  56                   push esi
// 00554c36  8bf1                 mov esi, ecx
// 00554c38  8b4e08               mov ecx, dword ptr [esi + 8]
// 00554c3b  33d2                 xor edx, edx
// 00554c3d  85c9                 test ecx, ecx
// 00554c3f  57                   push edi
// 00554c40  89542410             mov dword ptr [esp + 0x10], edx
// 00554c44  7504                 jne 0x554c4a
// 00554c46  33c0                 xor eax, eax
// 00554c48  eb08                 jmp 0x554c52
// 00554c4a  8b460c               mov eax, dword ptr [esi + 0xc]
// 00554c4d  2bc1                 sub eax, ecx
// 00554c4f  c1f802               sar eax, 2
// 00554c52  85c0                 test eax, eax
// 00554c54  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00554c57  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00554c5b  894c2418             mov dword ptr [esp + 0x18], ecx
// 00554c5f  8d4c2410             lea ecx, [esp + 0x10]
// 00554c63  89442414             mov dword ptr [esp + 0x14], eax
// 00554c67  894e14               mov dword ptr [esi + 0x14], ecx
// 00554c6a  765c                 jbe 0x554cc8
// 00554c6c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00554c70  8b4e08               mov ecx, dword ptr [esi + 8]
// 00554c73  85c9                 test ecx, ecx
// 00554c75  8bda                 mov ebx, edx
// 00554c77  740c                 je 0x554c85
// 00554c79  8b460c               mov eax, dword ptr [esi + 0xc]
// 00554c7c  2bc1                 sub eax, ecx
// 00554c7e  c1f802               sar eax, 2
// 00554c81  3bd0                 cmp edx, eax
// 00554c83  7206                 jb 0x554c8b
// 00554c85  ff15d8e67700         call dword ptr [0x77e6d8]
// 00554c8b  8b5608               mov edx, dword ptr [esi + 8]
// 00554c8e  8b049a               mov eax, dword ptr [edx + ebx*4]
// 00554c91  50                   push eax
// 00554c92  83ec08               sub esp, 8
// 00554c95  85ff                 test edi, edi
// 00554c97  8bc4                 mov eax, esp
// 00554c99  8928                 mov dword ptr [eax], ebp
// 00554c9b  8964242c             mov dword ptr [esp + 0x2c], esp
// 00554c9f  897804               mov dword ptr [eax + 4], edi
// 00554ca2  740c                 je 0x554cb0
// 00554ca4  8d4704               lea eax, [edi + 4]
// 00554ca7  b901000000           mov ecx, 1
// 00554cac  f00fc108             lock xadd dword ptr [eax], ecx
// 00554cb0  8bce                 mov ecx, esi
// 00554cb2  e849fdffff           call 0x554a00
// 00554cb7  8b542410             mov edx, dword ptr [esp + 0x10]
// 00554cbb  83c201               add edx, 1
// 00554cbe  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00554cc2  89542410             mov dword ptr [esp + 0x10], edx
// 00554cc6  72a8                 jb 0x554c70
// 00554cc8  85ff                 test edi, edi
// 00554cca  8b542418             mov edx, dword ptr [esp + 0x18]
// 00554cce  895614               mov dword ptr [esi + 0x14], edx
// 00554cd1  742a                 je 0x554cfd
// 00554cd3  8d4704               lea eax, [edi + 4]
// 00554cd6  83c9ff               or ecx, 0xffffffff
// 00554cd9  f00fc108             lock xadd dword ptr [eax], ecx
// 00554cdd  751e                 jne 0x554cfd
// 00554cdf  8b17                 mov edx, dword ptr [edi]
// 00554ce1  8b4204               mov eax, dword ptr [edx + 4]
// 00554ce4  8bcf                 mov ecx, edi
// 00554ce6  ffd0                 call eax
// 00554ce8  8d4f08               lea ecx, [edi + 8]
// 00554ceb  83caff               or edx, 0xffffffff
// 00554cee  f00fc111             lock xadd dword ptr [ecx], edx
// 00554cf2  7509                 jne 0x554cfd
// 00554cf4  8b07                 mov eax, dword ptr [edi]
// 00554cf6  8b5008               mov edx, dword ptr [eax + 8]
// 00554cf9  8bcf                 mov ecx, edi
// 00554cfb  ffd2                 call edx
// 00554cfd  5f                   pop edi
// 00554cfe  5e                   pop esi
// 00554cff  5d                   pop ebp
// 00554d00  5b                   pop ebx
// 00554d01  83c40c               add esp, 0xc
// 00554d04  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?raise@?$Notifier@VInstance@RBX@@UChildAdded@2@@RBX@@IBEXUChildAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
