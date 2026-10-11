// roc 2007-03 00485c40  unit: seg_00480000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00485c40
//
// 00485c40  83ec0c               sub esp, 0xc
// 00485c43  53                   push ebx
// 00485c44  55                   push ebp
// 00485c45  56                   push esi
// 00485c46  8bf1                 mov esi, ecx
// 00485c48  8b4e08               mov ecx, dword ptr [esi + 8]
// 00485c4b  33d2                 xor edx, edx
// 00485c4d  85c9                 test ecx, ecx
// 00485c4f  57                   push edi
// 00485c50  89542410             mov dword ptr [esp + 0x10], edx
// 00485c54  7504                 jne 0x485c5a
// 00485c56  33c0                 xor eax, eax
// 00485c58  eb08                 jmp 0x485c62
// 00485c5a  8b460c               mov eax, dword ptr [esi + 0xc]
// 00485c5d  2bc1                 sub eax, ecx
// 00485c5f  c1f802               sar eax, 2
// 00485c62  85c0                 test eax, eax
// 00485c64  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00485c67  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00485c6b  894c2418             mov dword ptr [esp + 0x18], ecx
// 00485c6f  8d4c2410             lea ecx, [esp + 0x10]
// 00485c73  89442414             mov dword ptr [esp + 0x14], eax
// 00485c77  894e14               mov dword ptr [esi + 0x14], ecx
// 00485c7a  765c                 jbe 0x485cd8
// 00485c7c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00485c80  8b4e08               mov ecx, dword ptr [esi + 8]
// 00485c83  85c9                 test ecx, ecx
// 00485c85  8bda                 mov ebx, edx
// 00485c87  740c                 je 0x485c95
// 00485c89  8b460c               mov eax, dword ptr [esi + 0xc]
// 00485c8c  2bc1                 sub eax, ecx
// 00485c8e  c1f802               sar eax, 2
// 00485c91  3bd0                 cmp edx, eax
// 00485c93  7206                 jb 0x485c9b
// 00485c95  ff1544e97700         call dword ptr [0x77e944]
// 00485c9b  8b5608               mov edx, dword ptr [esi + 8]
// 00485c9e  8b049a               mov eax, dword ptr [edx + ebx*4]
// 00485ca1  50                   push eax
// 00485ca2  83ec08               sub esp, 8
// 00485ca5  85ff                 test edi, edi
// 00485ca7  8bc4                 mov eax, esp
// 00485ca9  8928                 mov dword ptr [eax], ebp
// 00485cab  8964242c             mov dword ptr [esp + 0x2c], esp
// 00485caf  897804               mov dword ptr [eax + 4], edi
// 00485cb2  740c                 je 0x485cc0
// 00485cb4  8d4704               lea eax, [edi + 4]
// 00485cb7  b901000000           mov ecx, 1
// 00485cbc  f00fc108             lock xadd dword ptr [eax], ecx
// 00485cc0  8bce                 mov ecx, esi
// 00485cc2  e899f9ffff           call 0x485660
// 00485cc7  8b542410             mov edx, dword ptr [esp + 0x10]
// 00485ccb  83c201               add edx, 1
// 00485cce  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00485cd2  89542410             mov dword ptr [esp + 0x10], edx
// 00485cd6  72a8                 jb 0x485c80
// 00485cd8  85ff                 test edi, edi
// 00485cda  8b542418             mov edx, dword ptr [esp + 0x18]
// 00485cde  895614               mov dword ptr [esi + 0x14], edx
// 00485ce1  742a                 je 0x485d0d
// 00485ce3  8d4704               lea eax, [edi + 4]
// 00485ce6  83c9ff               or ecx, 0xffffffff
// 00485ce9  f00fc108             lock xadd dword ptr [eax], ecx
// 00485ced  751e                 jne 0x485d0d
// 00485cef  8b17                 mov edx, dword ptr [edi]
// 00485cf1  8b4204               mov eax, dword ptr [edx + 4]
// 00485cf4  8bcf                 mov ecx, edi
// 00485cf6  ffd0                 call eax
// 00485cf8  8d4f08               lea ecx, [edi + 8]
// 00485cfb  83caff               or edx, 0xffffffff
// 00485cfe  f00fc111             lock xadd dword ptr [ecx], edx
// 00485d02  7509                 jne 0x485d0d
// 00485d04  8b07                 mov eax, dword ptr [edi]
// 00485d06  8b5008               mov edx, dword ptr [eax + 8]
// 00485d09  8bcf                 mov ecx, edi
// 00485d0b  ffd2                 call edx
// 00485d0d  5f                   pop edi
// 00485d0e  5e                   pop esi
// 00485d0f  5d                   pop ebp
// 00485d10  5b                   pop ebx
// 00485d11  83c40c               add esp, 0xc
// 00485d14  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?raise@?$Notifier@VInstance@RBX@@UChildAdded@2@@RBX@@IBEXUChildAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
