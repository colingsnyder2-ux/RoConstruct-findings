// roc 2008-06 0048b9a0  unit: boost::any::placeholder  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b9a0
//
// 0048b9a0  83ec10               sub esp, 0x10
// 0048b9a3  53                   push ebx
// 0048b9a4  56                   push esi
// 0048b9a5  8bf1                 mov esi, ecx
// 0048b9a7  8b4614               mov eax, dword ptr [esi + 0x14]
// 0048b9aa  2b4610               sub eax, dword ptr [esi + 0x10]
// 0048b9ad  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0048b9b0  c1f802               sar eax, 2
// 0048b9b3  33c9                 xor ecx, ecx
// 0048b9b5  89542414             mov dword ptr [esp + 0x14], edx
// 0048b9b9  8d54240c             lea edx, [esp + 0xc]
// 0048b9bd  57                   push edi
// 0048b9be  894c2410             mov dword ptr [esp + 0x10], ecx
// 0048b9c2  89442414             mov dword ptr [esp + 0x14], eax
// 0048b9c6  89561c               mov dword ptr [esi + 0x1c], edx
// 0048b9c9  85c0                 test eax, eax
// 0048b9cb  765e                 jbe 0x48ba2b
// 0048b9cd  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0048b9d3  8b4614               mov eax, dword ptr [esi + 0x14]
// 0048b9d6  2b4610               sub eax, dword ptr [esi + 0x10]
// 0048b9d9  8bf9                 mov edi, ecx
// 0048b9db  c1f802               sar eax, 2
// 0048b9de  3bc8                 cmp ecx, eax
// 0048b9e0  7202                 jb 0x48b9e4
// 0048b9e2  ffd3                 call ebx
// 0048b9e4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0048b9e7  8b04b9               mov eax, dword ptr [ecx + edi*4]
// 0048b9ea  8b542420             mov edx, dword ptr [esp + 0x20]
// 0048b9ee  50                   push eax
// 0048b9ef  83ec08               sub esp, 8
// 0048b9f2  8bc4                 mov eax, esp
// 0048b9f4  8910                 mov dword ptr [eax], edx
// 0048b9f6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0048b9fa  894804               mov dword ptr [eax + 4], ecx
// 0048b9fd  8b442430             mov eax, dword ptr [esp + 0x30]
// 0048ba01  89642418             mov dword ptr [esp + 0x18], esp
// 0048ba05  85c0                 test eax, eax
// 0048ba07  740c                 je 0x48ba15
// 0048ba09  83c004               add eax, 4
// 0048ba0c  ba01000000           mov edx, 1
// 0048ba11  f00fc110             lock xadd dword ptr [eax], edx
// 0048ba15  8bce                 mov ecx, esi
// 0048ba17  e8f4f4ffff           call 0x48af10
// 0048ba1c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048ba20  41                   inc ecx
// 0048ba21  894c2410             mov dword ptr [esp + 0x10], ecx
// 0048ba25  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0048ba29  72a8                 jb 0x48b9d3
// 0048ba2b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048ba2f  89461c               mov dword ptr [esi + 0x1c], eax
// 0048ba32  8b742424             mov esi, dword ptr [esp + 0x24]
// 0048ba36  85f6                 test esi, esi
// 0048ba38  742a                 je 0x48ba64
// 0048ba3a  8d4e04               lea ecx, [esi + 4]
// 0048ba3d  83caff               or edx, 0xffffffff
// 0048ba40  f00fc111             lock xadd dword ptr [ecx], edx
// 0048ba44  751e                 jne 0x48ba64
// 0048ba46  8b06                 mov eax, dword ptr [esi]
// 0048ba48  8b5004               mov edx, dword ptr [eax + 4]
// 0048ba4b  8bce                 mov ecx, esi
// 0048ba4d  ffd2                 call edx
// 0048ba4f  8d4608               lea eax, [esi + 8]
// 0048ba52  83c9ff               or ecx, 0xffffffff
// 0048ba55  f00fc108             lock xadd dword ptr [eax], ecx
// 0048ba59  7509                 jne 0x48ba64
// 0048ba5b  8b16                 mov edx, dword ptr [esi]
// 0048ba5d  8b4208               mov eax, dword ptr [edx + 8]
// 0048ba60  8bce                 mov ecx, esi
// 0048ba62  ffd0                 call eax
// 0048ba64  5f                   pop edi
// 0048ba65  5e                   pop esi
// 0048ba66  5b                   pop ebx
// 0048ba67  83c410               add esp, 0x10
// 0048ba6a  c20800               ret 8
// library openrbx-client/App\v8tree\Service.cpp (function ?raise@?$Notifier@VServiceProvider@RBX@@UServiceAdded@2@@RBX@@IBEXUServiceAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Service.cpp
