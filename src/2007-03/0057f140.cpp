// roc 2007-03 0057f140  unit: seg_00570000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057f140
//
// 0057f140  81ec10010000         sub esp, 0x110
// 0057f146  57                   push edi
// 0057f147  8d442404             lea eax, [esp + 4]
// 0057f14b  50                   push eax
// 0057f14c  ff15c0d17700         call dword ptr [0x77d1c0]
// 0057f152  80bc241801000000     cmp byte ptr [esp + 0x118], 0
// 0057f15a  8b3dc8e97700         mov edi, dword ptr [0x77e9c8]
// 0057f160  742c                 je 0x57f18e
// 0057f162  0fb74c2404           movzx ecx, word ptr [esp + 4]
// 0057f167  0fb7542406           movzx edx, word ptr [esp + 6]
// 0057f16c  0fb744240a           movzx eax, word ptr [esp + 0xa]
// 0057f171  51                   push ecx
// 0057f172  52                   push edx
// 0057f173  50                   push eax
// 0057f174  8d4c2420             lea ecx, [esp + 0x20]
// 0057f178  6810d97a00           push 0x7ad910
// 0057f17d  51                   push ecx
// 0057f17e  ffd7                 call edi
// 0057f180  8d542428             lea edx, [esp + 0x28]
// 0057f184  52                   push edx
// 0057f185  56                   push esi
// 0057f186  e8b5c2eeff           call 0x46b440
// 0057f18b  83c41c               add esp, 0x1c
// 0057f18e  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 0057f193  0fb74c240e           movzx ecx, word ptr [esp + 0xe]
// 0057f198  0fb754240c           movzx edx, word ptr [esp + 0xc]
// 0057f19d  50                   push eax
// 0057f19e  51                   push ecx
// 0057f19f  52                   push edx
// 0057f1a0  8d442420             lea eax, [esp + 0x20]
// 0057f1a4  6800d97a00           push 0x7ad900
// 0057f1a9  50                   push eax
// 0057f1aa  ffd7                 call edi
// 0057f1ac  8d4c2428             lea ecx, [esp + 0x28]
// 0057f1b0  51                   push ecx
// 0057f1b1  56                   push esi
// 0057f1b2  e889c2eeff           call 0x46b440
// 0057f1b7  83c41c               add esp, 0x1c
// 0057f1ba  8bce                 mov ecx, esi
// 0057f1bc  ff158ce67700         call dword ptr [0x77e68c]
// 0057f1c2  5f                   pop edi
// 0057f1c3  81c410010000         add esp, 0x110
// 0057f1c9  c3                   ret 
// library openrbx-client/App\util\Log.cpp (function ?timeStamp@@YAXAAV?$basic_ofstream@DU?$char_traits@D@std@@@std@@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Log.cpp
