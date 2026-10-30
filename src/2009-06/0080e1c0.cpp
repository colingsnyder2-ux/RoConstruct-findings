// roc 2009-06 0080e1c0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 488 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080e1c0
//
// 0080e1c0  53                   push ebx
// 0080e1c1  55                   push ebp
// 0080e1c2  56                   push esi
// 0080e1c3  57                   push edi
// 0080e1c4  8bf9                 mov edi, ecx
// 0080e1c6  8daf08020000         lea ebp, [edi + 0x208]
// 0080e1cc  8bcd                 mov ecx, ebp
// 0080e1ce  e8cd29f8ff           call 0x790ba0
// 0080e1d3  85c0                 test eax, eax
// 0080e1d5  7538                 jne 0x80e20f
// 0080e1d7  8b442428             mov eax, dword ptr [esp + 0x28]
// 0080e1db  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080e1df  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0080e1e3  50                   push eax
// 0080e1e4  83ec10               sub esp, 0x10
// 0080e1e7  8bc4                 mov eax, esp
// 0080e1e9  8908                 mov dword ptr [eax], ecx
// 0080e1eb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0080e1ef  895004               mov dword ptr [eax + 4], edx
// 0080e1f2  8b542438             mov edx, dword ptr [esp + 0x38]
// 0080e1f6  894808               mov dword ptr [eax + 8], ecx
// 0080e1f9  89500c               mov dword ptr [eax + 0xc], edx
// 0080e1fc  8b442428             mov eax, dword ptr [esp + 0x28]
// 0080e200  50                   push eax
// 0080e201  8bcf                 mov ecx, edi
// 0080e203  e878eaffff           call 0x80cc80
// 0080e208  5f                   pop edi
// 0080e209  5e                   pop esi
// 0080e20a  5d                   pop ebp
// 0080e20b  5b                   pop ebx
// 0080e20c  c21800               ret 0x18
// 0080e20f  8b742428             mov esi, dword ptr [esp + 0x28]
// 0080e213  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0080e216  397104               cmp dword ptr [ecx + 4], esi
// 0080e219  7522                 jne 0x80e23d
// 0080e21b  8b11                 mov edx, dword ptr [ecx]
// 0080e21d  8b4248               mov eax, dword ptr [edx + 0x48]
// 0080e220  ffd0                 call eax
// 0080e222  83e800               sub eax, 0
// 0080e225  bb01000000           mov ebx, 1
// 0080e22a  740a                 je 0x80e236
// 0080e22c  2bc3                 sub eax, ebx
// 0080e22e  7512                 jne 0x80e242
// 0080e230  015c2420             add dword ptr [esp + 0x20], ebx
// 0080e234  eb0c                 jmp 0x80e242
// 0080e236  8344242402           add dword ptr [esp + 0x24], 2
// 0080e23b  eb05                 jmp 0x80e242
// 0080e23d  bb01000000           mov ebx, 1
// 0080e242  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0080e245  8b11                 mov edx, dword ptr [ecx]
// 0080e247  8b4248               mov eax, dword ptr [edx + 0x48]
// 0080e24a  ffd0                 call eax
// 0080e24c  83f803               cmp eax, 3
// 0080e24f  0f8738010000         ja 0x80e38d
// 0080e255  ff248598e38000       jmp dword ptr [eax*4 + 0x80e398]
// 0080e25c  295c2418             sub dword ptr [esp + 0x18], ebx
// 0080e260  295c241c             sub dword ptr [esp + 0x1c], ebx
// 0080e264  015c2420             add dword ptr [esp + 0x20], ebx
// 0080e268  8b4660               mov eax, dword ptr [esi + 0x60]
// 0080e26b  8b4804               mov ecx, dword ptr [eax + 4]
// 0080e26e  3bce                 cmp ecx, esi
// 0080e270  7507                 jne 0x80e279
// 0080e272  bf03000000           mov edi, 3
// 0080e277  eb0b                 jmp 0x80e284
// 0080e279  33d2                 xor edx, edx
// 0080e27b  397008               cmp dword ptr [eax + 8], esi
// 0080e27e  0f94c2               sete dl
// 0080e281  42                   inc edx
// 0080e282  8bfa                 mov edi, edx
// 0080e284  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0080e287  85d2                 test edx, edx
// 0080e289  7505                 jne 0x80e290
// 0080e28b  8d4a06               lea ecx, [edx + 6]
// 0080e28e  eb17                 jmp 0x80e2a7
// 0080e290  8b405c               mov eax, dword ptr [eax + 0x5c]
// 0080e293  2bc3                 sub eax, ebx
// 0080e295  3bd0                 cmp edx, eax
// 0080e297  7509                 jne 0x80e2a2
// 0080e299  3bce                 cmp ecx, esi
// 0080e29b  b907000000           mov ecx, 7
// 0080e2a0  7505                 jne 0x80e2a7
// 0080e2a2  b905000000           mov ecx, 5
// 0080e2a7  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080e2ab  85c0                 test eax, eax
// 0080e2ad  7403                 je 0x80e2b2
// 0080e2af  8b4004               mov eax, dword ptr [eax + 4]
// 0080e2b2  6a00                 push 0
// 0080e2b4  8d54241c             lea edx, [esp + 0x1c]
// 0080e2b8  52                   push edx
// 0080e2b9  57                   push edi
// 0080e2ba  51                   push ecx
// 0080e2bb  50                   push eax
// 0080e2bc  8bcd                 mov ecx, ebp
// 0080e2be  e85d25f8ff           call 0x790820
// 0080e2c3  83c8ff               or eax, 0xffffffff
// 0080e2c6  5f                   pop edi
// 0080e2c7  5e                   pop esi
// 0080e2c8  5d                   pop ebp
// 0080e2c9  5b                   pop ebx
// 0080e2ca  c21800               ret 0x18
// 0080e2cd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080e2d1  8b542420             mov edx, dword ptr [esp + 0x20]
// 0080e2d5  2bcb                 sub ecx, ebx
// 0080e2d7  03d3                 add edx, ebx
// 0080e2d9  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0080e2dd  68e0c28000           push 0x80c2e0
// 0080e2e2  6a00                 push 0
// 0080e2e4  56                   push esi
// 0080e2e5  83c302               add ebx, 2
// 0080e2e8  83ec10               sub esp, 0x10
// 0080e2eb  8bc4                 mov eax, esp
// 0080e2ed  8908                 mov dword ptr [eax], ecx
// 0080e2ef  894c2434             mov dword ptr [esp + 0x34], ecx
// 0080e2f3  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0080e2f7  894804               mov dword ptr [eax + 4], ecx
// 0080e2fa  895008               mov dword ptr [eax + 8], edx
// 0080e2fd  8954243c             mov dword ptr [esp + 0x3c], edx
// 0080e301  8b542430             mov edx, dword ptr [esp + 0x30]
// 0080e305  89580c               mov dword ptr [eax + 0xc], ebx
// 0080e308  52                   push edx
// 0080e309  eb77                 jmp 0x80e382
// 0080e30b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080e30f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0080e313  2bcb                 sub ecx, ebx
// 0080e315  2bd3                 sub edx, ebx
// 0080e317  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0080e31b  68a0c38000           push 0x80c3a0
// 0080e320  6a01                 push 1
// 0080e322  56                   push esi
// 0080e323  43                   inc ebx
// 0080e324  83ec10               sub esp, 0x10
// 0080e327  8bc4                 mov eax, esp
// 0080e329  8908                 mov dword ptr [eax], ecx
// 0080e32b  895004               mov dword ptr [eax + 4], edx
// 0080e32e  894c2434             mov dword ptr [esp + 0x34], ecx
// 0080e332  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0080e336  89542438             mov dword ptr [esp + 0x38], edx
// 0080e33a  8b542430             mov edx, dword ptr [esp + 0x30]
// 0080e33e  894808               mov dword ptr [eax + 8], ecx
// 0080e341  89580c               mov dword ptr [eax + 0xc], ebx
// 0080e344  52                   push edx
// 0080e345  eb3b                 jmp 0x80e382
// 0080e347  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0080e34b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0080e34f  6840c38000           push 0x80c340
// 0080e354  2bcb                 sub ecx, ebx
// 0080e356  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0080e35a  6a01                 push 1
// 0080e35c  56                   push esi
// 0080e35d  8b742424             mov esi, dword ptr [esp + 0x24]
// 0080e361  83c202               add edx, 2
// 0080e364  43                   inc ebx
// 0080e365  83ec10               sub esp, 0x10
// 0080e368  8bc4                 mov eax, esp
// 0080e36a  8930                 mov dword ptr [eax], esi
// 0080e36c  894804               mov dword ptr [eax + 4], ecx
// 0080e36f  895008               mov dword ptr [eax + 8], edx
// 0080e372  89580c               mov dword ptr [eax + 0xc], ebx
// 0080e375  8b442430             mov eax, dword ptr [esp + 0x30]
// 0080e379  894c2438             mov dword ptr [esp + 0x38], ecx
// 0080e37d  8954243c             mov dword ptr [esp + 0x3c], edx
// 0080e381  50                   push eax
// 0080e382  8bcf                 mov ecx, edi
// 0080e384  895c2444             mov dword ptr [esp + 0x44], ebx
// 0080e388  e8d3fbffff           call 0x80df60
// 0080e38d  5f                   pop edi
// 0080e38e  5e                   pop esi
// 0080e38f  5d                   pop ebp
// 0080e390  83c8ff               or eax, 0xffffffff
// 0080e393  5b                   pop ebx
// 0080e394  c21800               ret 0x18
// 0080e397  90                   nop 
// 0080e398  5c                   pop esp
// 0080e399  e280                 loop 0x80e31b
// 0080e39b  000b                 add byte ptr [ebx], cl
// 0080e39d  e380                 jecxz 0x80e31f
// 0080e39f  00cd                 add ch, cl
// 0080e3a1  e280                 loop 0x80e323
// 0080e3a3  0047e3               add byte ptr [edi - 0x1d], al
// copied from an identical function in another client (function ?FillPropertyButton@CColorSetWinXP@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManagerColors.cpp