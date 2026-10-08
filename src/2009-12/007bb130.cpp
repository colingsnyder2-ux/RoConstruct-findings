// roc 2009-12 007bb130  unit: RBX::MovingAssemblyStage  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007bb130
//
// 007bb130  83ec0c               sub esp, 0xc
// 007bb133  56                   push esi
// 007bb134  8bf1                 mov esi, ecx
// 007bb136  8b4604               mov eax, dword ptr [esi + 4]
// 007bb139  3b4608               cmp eax, dword ptr [esi + 8]
// 007bb13c  8b0e                 mov ecx, dword ptr [esi]
// 007bb13e  7d28                 jge 0x7bb168
// 007bb140  8d0440               lea eax, [eax + eax*2]
// 007bb143  8d0481               lea eax, [ecx + eax*4]
// 007bb146  85c0                 test eax, eax
// 007bb148  7414                 je 0x7bb15e
// 007bb14a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007bb14e  8b11                 mov edx, dword ptr [ecx]
// 007bb150  8910                 mov dword ptr [eax], edx
// 007bb152  8b5104               mov edx, dword ptr [ecx + 4]
// 007bb155  895004               mov dword ptr [eax + 4], edx
// 007bb158  8b4908               mov ecx, dword ptr [ecx + 8]
// 007bb15b  894808               mov dword ptr [eax + 8], ecx
// 007bb15e  ff4604               inc dword ptr [esi + 4]
// 007bb161  5e                   pop esi
// 007bb162  83c40c               add esp, 0xc
// 007bb165  c20400               ret 4
// 007bb168  57                   push edi
// 007bb169  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007bb16d  3bf9                 cmp edi, ecx
// 007bb16f  7232                 jb 0x7bb1a3
// 007bb171  8d1440               lea edx, [eax + eax*2]
// 007bb174  8d0c91               lea ecx, [ecx + edx*4]
// 007bb177  3bf9                 cmp edi, ecx
// 007bb179  7328                 jae 0x7bb1a3
// 007bb17b  8b17                 mov edx, dword ptr [edi]
// 007bb17d  8b4f08               mov ecx, dword ptr [edi + 8]
// 007bb180  8b4704               mov eax, dword ptr [edi + 4]
// 007bb183  89542408             mov dword ptr [esp + 8], edx
// 007bb187  8d542408             lea edx, [esp + 8]
// 007bb18b  894c2410             mov dword ptr [esp + 0x10], ecx
// 007bb18f  52                   push edx
// 007bb190  8bce                 mov ecx, esi
// 007bb192  89442410             mov dword ptr [esp + 0x10], eax
// 007bb196  e895ffffff           call 0x7bb130
// 007bb19b  5f                   pop edi
// 007bb19c  5e                   pop esi
// 007bb19d  83c40c               add esp, 0xc
// 007bb1a0  c20400               ret 4
// 007bb1a3  6a00                 push 0
// 007bb1a5  40                   inc eax
// 007bb1a6  50                   push eax
// 007bb1a7  8bce                 mov ecx, esi
// 007bb1a9  e872feffff           call 0x7bb020
// 007bb1ae  8b4604               mov eax, dword ptr [esi + 4]
// 007bb1b1  8b0e                 mov ecx, dword ptr [esi]
// 007bb1b3  8b17                 mov edx, dword ptr [edi]
// 007bb1b5  8d0440               lea eax, [eax + eax*2]
// 007bb1b8  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 007bb1bc  8910                 mov dword ptr [eax], edx
// 007bb1be  8b4f04               mov ecx, dword ptr [edi + 4]
// 007bb1c1  894804               mov dword ptr [eax + 4], ecx
// 007bb1c4  8b5708               mov edx, dword ptr [edi + 8]
// 007bb1c7  5f                   pop edi
// 007bb1c8  895008               mov dword ptr [eax + 8], edx
// 007bb1cb  5e                   pop esi
// 007bb1cc  83c40c               add esp, 0xc
// 007bb1cf  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?append@?$Array@VLoopBody@GWindow@G3D@@@G3D@@QAEXABVLoopBody@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
