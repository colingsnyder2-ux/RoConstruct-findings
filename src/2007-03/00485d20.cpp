// roc 2007-03 00485d20  unit: seg_00480000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00485d20
//
// 00485d20  83ec0c               sub esp, 0xc
// 00485d23  53                   push ebx
// 00485d24  55                   push ebp
// 00485d25  56                   push esi
// 00485d26  8bf1                 mov esi, ecx
// 00485d28  8b4e08               mov ecx, dword ptr [esi + 8]
// 00485d2b  33d2                 xor edx, edx
// 00485d2d  85c9                 test ecx, ecx
// 00485d2f  57                   push edi
// 00485d30  89542410             mov dword ptr [esp + 0x10], edx
// 00485d34  7504                 jne 0x485d3a
// 00485d36  33c0                 xor eax, eax
// 00485d38  eb08                 jmp 0x485d42
// 00485d3a  8b460c               mov eax, dword ptr [esi + 0xc]
// 00485d3d  2bc1                 sub eax, ecx
// 00485d3f  c1f802               sar eax, 2
// 00485d42  85c0                 test eax, eax
// 00485d44  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00485d47  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00485d4b  894c2418             mov dword ptr [esp + 0x18], ecx
// 00485d4f  8d4c2410             lea ecx, [esp + 0x10]
// 00485d53  89442414             mov dword ptr [esp + 0x14], eax
// 00485d57  894e14               mov dword ptr [esi + 0x14], ecx
// 00485d5a  765c                 jbe 0x485db8
// 00485d5c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00485d60  8b4e08               mov ecx, dword ptr [esi + 8]
// 00485d63  85c9                 test ecx, ecx
// 00485d65  8bda                 mov ebx, edx
// 00485d67  740c                 je 0x485d75
// 00485d69  8b460c               mov eax, dword ptr [esi + 0xc]
// 00485d6c  2bc1                 sub eax, ecx
// 00485d6e  c1f802               sar eax, 2
// 00485d71  3bd0                 cmp edx, eax
// 00485d73  7206                 jb 0x485d7b
// 00485d75  ff1544e97700         call dword ptr [0x77e944]
// 00485d7b  8b5608               mov edx, dword ptr [esi + 8]
// 00485d7e  8b049a               mov eax, dword ptr [edx + ebx*4]
// 00485d81  50                   push eax
// 00485d82  83ec08               sub esp, 8
// 00485d85  85ff                 test edi, edi
// 00485d87  8bc4                 mov eax, esp
// 00485d89  8928                 mov dword ptr [eax], ebp
// 00485d8b  8964242c             mov dword ptr [esp + 0x2c], esp
// 00485d8f  897804               mov dword ptr [eax + 4], edi
// 00485d92  740c                 je 0x485da0
// 00485d94  8d4704               lea eax, [edi + 4]
// 00485d97  b901000000           mov ecx, 1
// 00485d9c  f00fc108             lock xadd dword ptr [eax], ecx
// 00485da0  8bce                 mov ecx, esi
// 00485da2  e8d9f9ffff           call 0x485780
// 00485da7  8b542410             mov edx, dword ptr [esp + 0x10]
// 00485dab  83c201               add edx, 1
// 00485dae  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00485db2  89542410             mov dword ptr [esp + 0x10], edx
// 00485db6  72a8                 jb 0x485d60
// 00485db8  85ff                 test edi, edi
// 00485dba  8b542418             mov edx, dword ptr [esp + 0x18]
// 00485dbe  895614               mov dword ptr [esi + 0x14], edx
// 00485dc1  742a                 je 0x485ded
// 00485dc3  8d4704               lea eax, [edi + 4]
// 00485dc6  83c9ff               or ecx, 0xffffffff
// 00485dc9  f00fc108             lock xadd dword ptr [eax], ecx
// 00485dcd  751e                 jne 0x485ded
// 00485dcf  8b17                 mov edx, dword ptr [edi]
// 00485dd1  8b4204               mov eax, dword ptr [edx + 4]
// 00485dd4  8bcf                 mov ecx, edi
// 00485dd6  ffd0                 call eax
// 00485dd8  8d4f08               lea ecx, [edi + 8]
// 00485ddb  83caff               or edx, 0xffffffff
// 00485dde  f00fc111             lock xadd dword ptr [ecx], edx
// 00485de2  7509                 jne 0x485ded
// 00485de4  8b07                 mov eax, dword ptr [edi]
// 00485de6  8b5008               mov edx, dword ptr [eax + 8]
// 00485de9  8bcf                 mov ecx, edi
// 00485deb  ffd2                 call edx
// 00485ded  5f                   pop edi
// 00485dee  5e                   pop esi
// 00485def  5d                   pop ebp
// 00485df0  5b                   pop ebx
// 00485df1  83c40c               add esp, 0xc
// 00485df4  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?raise@?$Notifier@VInstance@RBX@@UChildAdded@2@@RBX@@IBEXUChildAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
