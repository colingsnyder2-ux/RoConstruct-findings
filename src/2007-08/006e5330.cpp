// from server: 100% by auto
// roc 2007-08 006e5330  unit: CXTPDockingPaneSplitterContainer  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e5330
//
// 006e5330  53                   push ebx
// 006e5331  55                   push ebp
// 006e5332  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006e5336  56                   push esi
// 006e5337  8b742418             mov esi, dword ptr [esp + 0x18]
// 006e533b  83ee01               sub esi, 1
// 006e533e  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 006e5343  57                   push edi
// 006e5344  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006e5348  747e                 je 0x6e53c8
// 006e534a  56                   push esi
// 006e534b  8d45fc               lea eax, [ebp - 4]
// 006e534e  50                   push eax
// 006e534f  8d4c2420             lea ecx, [esp + 0x20]
// 006e5353  51                   push ecx
// 006e5354  8bcf                 mov ecx, edi
// 006e5356  e821b6f4ff           call 0x63097c
// 006e535b  56                   push esi
// 006e535c  8d5dff               lea ebx, [ebp - 1]
// 006e535f  53                   push ebx
// 006e5360  8bcf                 mov ecx, edi
// 006e5362  e80fb6f4ff           call 0x630976
// 006e5367  8d56fd               lea edx, [esi - 3]
// 006e536a  52                   push edx
// 006e536b  53                   push ebx
// 006e536c  8d442420             lea eax, [esp + 0x20]
// 006e5370  50                   push eax
// 006e5371  8bcf                 mov ecx, edi
// 006e5373  e804b6f4ff           call 0x63097c
// 006e5378  8d4e04               lea ecx, [esi + 4]
// 006e537b  51                   push ecx
// 006e537c  53                   push ebx
// 006e537d  8bcf                 mov ecx, edi
// 006e537f  e8f2b5f4ff           call 0x630976
// 006e5384  8d4602               lea eax, [esi + 2]
// 006e5387  50                   push eax
// 006e5388  53                   push ebx
// 006e5389  8d542420             lea edx, [esp + 0x20]
// 006e538d  52                   push edx
// 006e538e  8bcf                 mov ecx, edi
// 006e5390  e8e7b5f4ff           call 0x63097c
// 006e5395  8d4602               lea eax, [esi + 2]
// 006e5398  50                   push eax
// 006e5399  83c503               add ebp, 3
// 006e539c  55                   push ebp
// 006e539d  8bcf                 mov ecx, edi
// 006e539f  e8d2b5f4ff           call 0x630976
// 006e53a4  8d46fe               lea eax, [esi - 2]
// 006e53a7  50                   push eax
// 006e53a8  55                   push ebp
// 006e53a9  8bcf                 mov ecx, edi
// 006e53ab  e8c6b5f4ff           call 0x630976
// 006e53b0  8d46fe               lea eax, [esi - 2]
// 006e53b3  50                   push eax
// 006e53b4  53                   push ebx
// 006e53b5  8bcf                 mov ecx, edi
// 006e53b7  e8bab5f4ff           call 0x630976
// 006e53bc  83c601               add esi, 1
// 006e53bf  56                   push esi
// 006e53c0  53                   push ebx
// 006e53c1  8d442420             lea eax, [esp + 0x20]
// 006e53c5  50                   push eax
// 006e53c6  eb7f                 jmp 0x6e5447
// 006e53c8  83c602               add esi, 2
// 006e53cb  8d5eff               lea ebx, [esi - 1]
// 006e53ce  53                   push ebx
// 006e53cf  8d4dfd               lea ecx, [ebp - 3]
// 006e53d2  51                   push ecx
// 006e53d3  8d542420             lea edx, [esp + 0x20]
// 006e53d7  52                   push edx
// 006e53d8  8bcf                 mov ecx, edi
// 006e53da  e89db5f4ff           call 0x63097c
// 006e53df  53                   push ebx
// 006e53e0  8d4504               lea eax, [ebp + 4]
// 006e53e3  50                   push eax
// 006e53e4  8bcf                 mov ecx, edi
// 006e53e6  e88bb5f4ff           call 0x630976
// 006e53eb  53                   push ebx
// 006e53ec  55                   push ebp
// 006e53ed  8d4c2420             lea ecx, [esp + 0x20]
// 006e53f1  51                   push ecx
// 006e53f2  8bcf                 mov ecx, edi
// 006e53f4  e883b5f4ff           call 0x63097c
// 006e53f9  8d5603               lea edx, [esi + 3]
// 006e53fc  52                   push edx
// 006e53fd  55                   push ebp
// 006e53fe  8bcf                 mov ecx, edi
// 006e5400  e871b5f4ff           call 0x630976
// 006e5405  53                   push ebx
// 006e5406  8d45fe               lea eax, [ebp - 2]
// 006e5409  50                   push eax
// 006e540a  8d442420             lea eax, [esp + 0x20]
// 006e540e  50                   push eax
// 006e540f  8bcf                 mov ecx, edi
// 006e5411  e866b5f4ff           call 0x63097c
// 006e5416  83c6fa               add esi, -6
// 006e5419  56                   push esi
// 006e541a  8d45fe               lea eax, [ebp - 2]
// 006e541d  50                   push eax
// 006e541e  8bcf                 mov ecx, edi
// 006e5420  e851b5f4ff           call 0x630976
// 006e5425  8d4502               lea eax, [ebp + 2]
// 006e5428  56                   push esi
// 006e5429  50                   push eax
// 006e542a  8bcf                 mov ecx, edi
// 006e542c  e845b5f4ff           call 0x630976
// 006e5431  53                   push ebx
// 006e5432  8d4502               lea eax, [ebp + 2]
// 006e5435  50                   push eax
// 006e5436  8bcf                 mov ecx, edi
// 006e5438  e839b5f4ff           call 0x630976
// 006e543d  53                   push ebx
// 006e543e  83c501               add ebp, 1
// 006e5441  55                   push ebp
// 006e5442  8d4c2420             lea ecx, [esp + 0x20]
// 006e5446  51                   push ecx
// 006e5447  8bcf                 mov ecx, edi
// 006e5449  e82eb5f4ff           call 0x63097c
// 006e544e  56                   push esi
// 006e544f  55                   push ebp
// 006e5450  8bcf                 mov ecx, edi
// 006e5452  e81fb5f4ff           call 0x630976
// 006e5457  5f                   pop edi
// 006e5458  5e                   pop esi
// 006e5459  5d                   pop ebp
// 006e545a  5b                   pop ebx
// 006e545b  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?DrawPinnButton@CXTPDockingPaneCaptionButton@@SAXPAVCDC@@VCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
