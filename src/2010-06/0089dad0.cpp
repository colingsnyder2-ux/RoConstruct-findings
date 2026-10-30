// roc 2010-06 0089dad0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 488 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089dad0
//
// 0089dad0  53                   push ebx
// 0089dad1  55                   push ebp
// 0089dad2  56                   push esi
// 0089dad3  57                   push edi
// 0089dad4  8bf9                 mov edi, ecx
// 0089dad6  8daf08020000         lea ebp, [edi + 0x208]
// 0089dadc  8bcd                 mov ecx, ebp
// 0089dade  e8dd20f8ff           call 0x81fbc0
// 0089dae3  85c0                 test eax, eax
// 0089dae5  7538                 jne 0x89db1f
// 0089dae7  8b442428             mov eax, dword ptr [esp + 0x28]
// 0089daeb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089daef  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0089daf3  50                   push eax
// 0089daf4  83ec10               sub esp, 0x10
// 0089daf7  8bc4                 mov eax, esp
// 0089daf9  8908                 mov dword ptr [eax], ecx
// 0089dafb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089daff  895004               mov dword ptr [eax + 4], edx
// 0089db02  8b542438             mov edx, dword ptr [esp + 0x38]
// 0089db06  894808               mov dword ptr [eax + 8], ecx
// 0089db09  89500c               mov dword ptr [eax + 0xc], edx
// 0089db0c  8b442428             mov eax, dword ptr [esp + 0x28]
// 0089db10  50                   push eax
// 0089db11  8bcf                 mov ecx, edi
// 0089db13  e878eaffff           call 0x89c590
// 0089db18  5f                   pop edi
// 0089db19  5e                   pop esi
// 0089db1a  5d                   pop ebp
// 0089db1b  5b                   pop ebx
// 0089db1c  c21800               ret 0x18
// 0089db1f  8b742428             mov esi, dword ptr [esp + 0x28]
// 0089db23  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0089db26  397104               cmp dword ptr [ecx + 4], esi
// 0089db29  7522                 jne 0x89db4d
// 0089db2b  8b11                 mov edx, dword ptr [ecx]
// 0089db2d  8b4248               mov eax, dword ptr [edx + 0x48]
// 0089db30  ffd0                 call eax
// 0089db32  83e800               sub eax, 0
// 0089db35  bb01000000           mov ebx, 1
// 0089db3a  740a                 je 0x89db46
// 0089db3c  2bc3                 sub eax, ebx
// 0089db3e  7512                 jne 0x89db52
// 0089db40  015c2420             add dword ptr [esp + 0x20], ebx
// 0089db44  eb0c                 jmp 0x89db52
// 0089db46  8344242402           add dword ptr [esp + 0x24], 2
// 0089db4b  eb05                 jmp 0x89db52
// 0089db4d  bb01000000           mov ebx, 1
// 0089db52  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0089db55  8b11                 mov edx, dword ptr [ecx]
// 0089db57  8b4248               mov eax, dword ptr [edx + 0x48]
// 0089db5a  ffd0                 call eax
// 0089db5c  83f803               cmp eax, 3
// 0089db5f  0f8738010000         ja 0x89dc9d
// 0089db65  ff2485a8dc8900       jmp dword ptr [eax*4 + 0x89dca8]
// 0089db6c  295c2418             sub dword ptr [esp + 0x18], ebx
// 0089db70  295c241c             sub dword ptr [esp + 0x1c], ebx
// 0089db74  015c2420             add dword ptr [esp + 0x20], ebx
// 0089db78  8b4660               mov eax, dword ptr [esi + 0x60]
// 0089db7b  8b4804               mov ecx, dword ptr [eax + 4]
// 0089db7e  3bce                 cmp ecx, esi
// 0089db80  7507                 jne 0x89db89
// 0089db82  bf03000000           mov edi, 3
// 0089db87  eb0b                 jmp 0x89db94
// 0089db89  33d2                 xor edx, edx
// 0089db8b  397008               cmp dword ptr [eax + 8], esi
// 0089db8e  0f94c2               sete dl
// 0089db91  42                   inc edx
// 0089db92  8bfa                 mov edi, edx
// 0089db94  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0089db97  85d2                 test edx, edx
// 0089db99  7505                 jne 0x89dba0
// 0089db9b  8d4a06               lea ecx, [edx + 6]
// 0089db9e  eb17                 jmp 0x89dbb7
// 0089dba0  8b405c               mov eax, dword ptr [eax + 0x5c]
// 0089dba3  2bc3                 sub eax, ebx
// 0089dba5  3bd0                 cmp edx, eax
// 0089dba7  7509                 jne 0x89dbb2
// 0089dba9  3bce                 cmp ecx, esi
// 0089dbab  b907000000           mov ecx, 7
// 0089dbb0  7505                 jne 0x89dbb7
// 0089dbb2  b905000000           mov ecx, 5
// 0089dbb7  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089dbbb  85c0                 test eax, eax
// 0089dbbd  7403                 je 0x89dbc2
// 0089dbbf  8b4004               mov eax, dword ptr [eax + 4]
// 0089dbc2  6a00                 push 0
// 0089dbc4  8d54241c             lea edx, [esp + 0x1c]
// 0089dbc8  52                   push edx
// 0089dbc9  57                   push edi
// 0089dbca  51                   push ecx
// 0089dbcb  50                   push eax
// 0089dbcc  8bcd                 mov ecx, ebp
// 0089dbce  e86d1cf8ff           call 0x81f840
// 0089dbd3  83c8ff               or eax, 0xffffffff
// 0089dbd6  5f                   pop edi
// 0089dbd7  5e                   pop esi
// 0089dbd8  5d                   pop ebp
// 0089dbd9  5b                   pop ebx
// 0089dbda  c21800               ret 0x18
// 0089dbdd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089dbe1  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089dbe5  2bcb                 sub ecx, ebx
// 0089dbe7  03d3                 add edx, ebx
// 0089dbe9  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0089dbed  68f0bb8900           push 0x89bbf0
// 0089dbf2  6a00                 push 0
// 0089dbf4  56                   push esi
// 0089dbf5  83c302               add ebx, 2
// 0089dbf8  83ec10               sub esp, 0x10
// 0089dbfb  8bc4                 mov eax, esp
// 0089dbfd  8908                 mov dword ptr [eax], ecx
// 0089dbff  894c2434             mov dword ptr [esp + 0x34], ecx
// 0089dc03  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0089dc07  894804               mov dword ptr [eax + 4], ecx
// 0089dc0a  895008               mov dword ptr [eax + 8], edx
// 0089dc0d  8954243c             mov dword ptr [esp + 0x3c], edx
// 0089dc11  8b542430             mov edx, dword ptr [esp + 0x30]
// 0089dc15  89580c               mov dword ptr [eax + 0xc], ebx
// 0089dc18  52                   push edx
// 0089dc19  eb77                 jmp 0x89dc92
// 0089dc1b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089dc1f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0089dc23  2bcb                 sub ecx, ebx
// 0089dc25  2bd3                 sub edx, ebx
// 0089dc27  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0089dc2b  68b0bc8900           push 0x89bcb0
// 0089dc30  6a01                 push 1
// 0089dc32  56                   push esi
// 0089dc33  43                   inc ebx
// 0089dc34  83ec10               sub esp, 0x10
// 0089dc37  8bc4                 mov eax, esp
// 0089dc39  8908                 mov dword ptr [eax], ecx
// 0089dc3b  895004               mov dword ptr [eax + 4], edx
// 0089dc3e  894c2434             mov dword ptr [esp + 0x34], ecx
// 0089dc42  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089dc46  89542438             mov dword ptr [esp + 0x38], edx
// 0089dc4a  8b542430             mov edx, dword ptr [esp + 0x30]
// 0089dc4e  894808               mov dword ptr [eax + 8], ecx
// 0089dc51  89580c               mov dword ptr [eax + 0xc], ebx
// 0089dc54  52                   push edx
// 0089dc55  eb3b                 jmp 0x89dc92
// 0089dc57  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089dc5b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089dc5f  6850bc8900           push 0x89bc50
// 0089dc64  2bcb                 sub ecx, ebx
// 0089dc66  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0089dc6a  6a01                 push 1
// 0089dc6c  56                   push esi
// 0089dc6d  8b742424             mov esi, dword ptr [esp + 0x24]
// 0089dc71  83c202               add edx, 2
// 0089dc74  43                   inc ebx
// 0089dc75  83ec10               sub esp, 0x10
// 0089dc78  8bc4                 mov eax, esp
// 0089dc7a  8930                 mov dword ptr [eax], esi
// 0089dc7c  894804               mov dword ptr [eax + 4], ecx
// 0089dc7f  895008               mov dword ptr [eax + 8], edx
// 0089dc82  89580c               mov dword ptr [eax + 0xc], ebx
// 0089dc85  8b442430             mov eax, dword ptr [esp + 0x30]
// 0089dc89  894c2438             mov dword ptr [esp + 0x38], ecx
// 0089dc8d  8954243c             mov dword ptr [esp + 0x3c], edx
// 0089dc91  50                   push eax
// 0089dc92  8bcf                 mov ecx, edi
// 0089dc94  895c2444             mov dword ptr [esp + 0x44], ebx
// 0089dc98  e8d3fbffff           call 0x89d870
// 0089dc9d  5f                   pop edi
// 0089dc9e  5e                   pop esi
// 0089dc9f  5d                   pop ebp
// 0089dca0  83c8ff               or eax, 0xffffffff
// 0089dca3  5b                   pop ebx
// 0089dca4  c21800               ret 0x18
// 0089dca7  90                   nop 
// 0089dca8  6c                   insb byte ptr es:[edi], dx
// 0089dca9  db89001bdc89         fisttp dword ptr [ecx - 0x7623e500]
// 0089dcaf  00dd                 add ch, bl
// 0089dcb1  db890057dc89         fisttp dword ptr [ecx - 0x7623a900]
// copied from an identical function in another client (function ?FillPropertyButton@CColorSetWinXP@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManagerColors.cpp