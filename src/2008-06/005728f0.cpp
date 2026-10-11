// roc 2008-06 005728f0  unit: RBX::ServiceProvider  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005728f0
//
// 005728f0  83ec10               sub esp, 0x10
// 005728f3  53                   push ebx
// 005728f4  56                   push esi
// 005728f5  8bf1                 mov esi, ecx
// 005728f7  8b4614               mov eax, dword ptr [esi + 0x14]
// 005728fa  2b4610               sub eax, dword ptr [esi + 0x10]
// 005728fd  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00572900  c1f802               sar eax, 2
// 00572903  33c9                 xor ecx, ecx
// 00572905  89542414             mov dword ptr [esp + 0x14], edx
// 00572909  8d54240c             lea edx, [esp + 0xc]
// 0057290d  57                   push edi
// 0057290e  894c2410             mov dword ptr [esp + 0x10], ecx
// 00572912  89442414             mov dword ptr [esp + 0x14], eax
// 00572916  89561c               mov dword ptr [esi + 0x1c], edx
// 00572919  85c0                 test eax, eax
// 0057291b  765e                 jbe 0x57297b
// 0057291d  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00572923  8b4614               mov eax, dword ptr [esi + 0x14]
// 00572926  2b4610               sub eax, dword ptr [esi + 0x10]
// 00572929  8bf9                 mov edi, ecx
// 0057292b  c1f802               sar eax, 2
// 0057292e  3bc8                 cmp ecx, eax
// 00572930  7202                 jb 0x572934
// 00572932  ffd3                 call ebx
// 00572934  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00572937  8b04b9               mov eax, dword ptr [ecx + edi*4]
// 0057293a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057293e  50                   push eax
// 0057293f  83ec08               sub esp, 8
// 00572942  8bc4                 mov eax, esp
// 00572944  8910                 mov dword ptr [eax], edx
// 00572946  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0057294a  894804               mov dword ptr [eax + 4], ecx
// 0057294d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00572951  89642418             mov dword ptr [esp + 0x18], esp
// 00572955  85c0                 test eax, eax
// 00572957  740c                 je 0x572965
// 00572959  83c004               add eax, 4
// 0057295c  ba01000000           mov edx, 1
// 00572961  f00fc110             lock xadd dword ptr [eax], edx
// 00572965  8bce                 mov ecx, esi
// 00572967  e864feffff           call 0x5727d0
// 0057296c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00572970  41                   inc ecx
// 00572971  894c2410             mov dword ptr [esp + 0x10], ecx
// 00572975  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 00572979  72a8                 jb 0x572923
// 0057297b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057297f  89461c               mov dword ptr [esi + 0x1c], eax
// 00572982  8b742424             mov esi, dword ptr [esp + 0x24]
// 00572986  85f6                 test esi, esi
// 00572988  742a                 je 0x5729b4
// 0057298a  8d4e04               lea ecx, [esi + 4]
// 0057298d  83caff               or edx, 0xffffffff
// 00572990  f00fc111             lock xadd dword ptr [ecx], edx
// 00572994  751e                 jne 0x5729b4
// 00572996  8b06                 mov eax, dword ptr [esi]
// 00572998  8b5004               mov edx, dword ptr [eax + 4]
// 0057299b  8bce                 mov ecx, esi
// 0057299d  ffd2                 call edx
// 0057299f  8d4608               lea eax, [esi + 8]
// 005729a2  83c9ff               or ecx, 0xffffffff
// 005729a5  f00fc108             lock xadd dword ptr [eax], ecx
// 005729a9  7509                 jne 0x5729b4
// 005729ab  8b16                 mov edx, dword ptr [esi]
// 005729ad  8b4208               mov eax, dword ptr [edx + 8]
// 005729b0  8bce                 mov ecx, esi
// 005729b2  ffd0                 call eax
// 005729b4  5f                   pop edi
// 005729b5  5e                   pop esi
// 005729b6  5b                   pop ebx
// 005729b7  83c410               add esp, 0x10
// 005729ba  c20800               ret 8
// library openrbx-client/App\v8tree\Service.cpp (function ?raise@?$Notifier@VServiceProvider@RBX@@UServiceAdded@2@@RBX@@IBEXUServiceAdded@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Service.cpp
