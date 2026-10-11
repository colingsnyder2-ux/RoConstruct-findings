// roc 2008-06 0048ba70  unit: boost::any::placeholder  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048ba70
//
// 0048ba70  83ec10               sub esp, 0x10
// 0048ba73  53                   push ebx
// 0048ba74  56                   push esi
// 0048ba75  8bf1                 mov esi, ecx
// 0048ba77  8b4614               mov eax, dword ptr [esi + 0x14]
// 0048ba7a  2b4610               sub eax, dword ptr [esi + 0x10]
// 0048ba7d  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0048ba80  c1f802               sar eax, 2
// 0048ba83  33c9                 xor ecx, ecx
// 0048ba85  89542414             mov dword ptr [esp + 0x14], edx
// 0048ba89  8d54240c             lea edx, [esp + 0xc]
// 0048ba8d  57                   push edi
// 0048ba8e  894c2410             mov dword ptr [esp + 0x10], ecx
// 0048ba92  89442414             mov dword ptr [esp + 0x14], eax
// 0048ba96  89561c               mov dword ptr [esi + 0x1c], edx
// 0048ba99  85c0                 test eax, eax
// 0048ba9b  765e                 jbe 0x48bafb
// 0048ba9d  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0048baa3  8b4614               mov eax, dword ptr [esi + 0x14]
// 0048baa6  2b4610               sub eax, dword ptr [esi + 0x10]
// 0048baa9  8bf9                 mov edi, ecx
// 0048baab  c1f802               sar eax, 2
// 0048baae  3bc8                 cmp ecx, eax
// 0048bab0  7202                 jb 0x48bab4
// 0048bab2  ffd3                 call ebx
// 0048bab4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0048bab7  8b04b9               mov eax, dword ptr [ecx + edi*4]
// 0048baba  8b542420             mov edx, dword ptr [esp + 0x20]
// 0048babe  50                   push eax
// 0048babf  83ec08               sub esp, 8
// 0048bac2  8bc4                 mov eax, esp
// 0048bac4  8910                 mov dword ptr [eax], edx
// 0048bac6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0048baca  894804               mov dword ptr [eax + 4], ecx
// 0048bacd  8b442430             mov eax, dword ptr [esp + 0x30]
// 0048bad1  89642418             mov dword ptr [esp + 0x18], esp
// 0048bad5  85c0                 test eax, eax
// 0048bad7  740c                 je 0x48bae5
// 0048bad9  83c004               add eax, 4
// 0048badc  ba01000000           mov edx, 1
// 0048bae1  f00fc110             lock xadd dword ptr [eax], edx
// 0048bae5  8bce                 mov ecx, esi
// 0048bae7  e844f5ffff           call 0x48b030
// 0048baec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048baf0  41                   inc ecx
// 0048baf1  894c2410             mov dword ptr [esp + 0x10], ecx
// 0048baf5  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0048baf9  72a8                 jb 0x48baa3
// 0048bafb  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048baff  89461c               mov dword ptr [esi + 0x1c], eax
// 0048bb02  8b742424             mov esi, dword ptr [esp + 0x24]
// 0048bb06  85f6                 test esi, esi
// 0048bb08  742a                 je 0x48bb34
// 0048bb0a  8d4e04               lea ecx, [esi + 4]
// 0048bb0d  83caff               or edx, 0xffffffff
// 0048bb10  f00fc111             lock xadd dword ptr [ecx], edx
// 0048bb14  751e                 jne 0x48bb34
// 0048bb16  8b06                 mov eax, dword ptr [esi]
// 0048bb18  8b5004               mov edx, dword ptr [eax + 4]
// 0048bb1b  8bce                 mov ecx, esi
// 0048bb1d  ffd2                 call edx
// 0048bb1f  8d4608               lea eax, [esi + 8]
// 0048bb22  83c9ff               or ecx, 0xffffffff
// 0048bb25  f00fc108             lock xadd dword ptr [eax], ecx
// 0048bb29  7509                 jne 0x48bb34
// 0048bb2b  8b16                 mov edx, dword ptr [esi]
// 0048bb2d  8b4208               mov eax, dword ptr [edx + 8]
// 0048bb30  8bce                 mov ecx, esi
// 0048bb32  ffd0                 call eax
// 0048bb34  5f                   pop edi
// 0048bb35  5e                   pop esi
// 0048bb36  5b                   pop ebx
// 0048bb37  83c410               add esp, 0x10
// 0048bb3a  c20800               ret 8
// library openrbx-client/App\v8tree\Service.cpp (function ?raise@?$Notifier@VServiceProvider@RBX@@UServiceAdded@2@@RBX@@IBEXUServiceAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Service.cpp
