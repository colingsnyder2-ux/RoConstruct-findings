// roc 2011-06 007b6560  unit: RBX::MovingAssemblyStage  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b6560
//
// 007b6560  83ec0c               sub esp, 0xc
// 007b6563  56                   push esi
// 007b6564  8bf1                 mov esi, ecx
// 007b6566  8b4604               mov eax, dword ptr [esi + 4]
// 007b6569  3b4608               cmp eax, dword ptr [esi + 8]
// 007b656c  8b0e                 mov ecx, dword ptr [esi]
// 007b656e  7d28                 jge 0x7b6598
// 007b6570  8d0440               lea eax, [eax + eax*2]
// 007b6573  8d0481               lea eax, [ecx + eax*4]
// 007b6576  85c0                 test eax, eax
// 007b6578  7414                 je 0x7b658e
// 007b657a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b657e  8b11                 mov edx, dword ptr [ecx]
// 007b6580  8910                 mov dword ptr [eax], edx
// 007b6582  8b5104               mov edx, dword ptr [ecx + 4]
// 007b6585  895004               mov dword ptr [eax + 4], edx
// 007b6588  8b4908               mov ecx, dword ptr [ecx + 8]
// 007b658b  894808               mov dword ptr [eax + 8], ecx
// 007b658e  ff4604               inc dword ptr [esi + 4]
// 007b6591  5e                   pop esi
// 007b6592  83c40c               add esp, 0xc
// 007b6595  c20400               ret 4
// 007b6598  57                   push edi
// 007b6599  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007b659d  3bf9                 cmp edi, ecx
// 007b659f  7232                 jb 0x7b65d3
// 007b65a1  8d1440               lea edx, [eax + eax*2]
// 007b65a4  8d0c91               lea ecx, [ecx + edx*4]
// 007b65a7  3bf9                 cmp edi, ecx
// 007b65a9  7328                 jae 0x7b65d3
// 007b65ab  8b17                 mov edx, dword ptr [edi]
// 007b65ad  8b4f08               mov ecx, dword ptr [edi + 8]
// 007b65b0  8b4704               mov eax, dword ptr [edi + 4]
// 007b65b3  89542408             mov dword ptr [esp + 8], edx
// 007b65b7  8d542408             lea edx, [esp + 8]
// 007b65bb  894c2410             mov dword ptr [esp + 0x10], ecx
// 007b65bf  52                   push edx
// 007b65c0  8bce                 mov ecx, esi
// 007b65c2  89442410             mov dword ptr [esp + 0x10], eax
// 007b65c6  e895ffffff           call 0x7b6560
// 007b65cb  5f                   pop edi
// 007b65cc  5e                   pop esi
// 007b65cd  83c40c               add esp, 0xc
// 007b65d0  c20400               ret 4
// 007b65d3  6a00                 push 0
// 007b65d5  40                   inc eax
// 007b65d6  50                   push eax
// 007b65d7  8bce                 mov ecx, esi
// 007b65d9  e882feffff           call 0x7b6460
// 007b65de  8b4604               mov eax, dword ptr [esi + 4]
// 007b65e1  8b0e                 mov ecx, dword ptr [esi]
// 007b65e3  8b17                 mov edx, dword ptr [edi]
// 007b65e5  8d0440               lea eax, [eax + eax*2]
// 007b65e8  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 007b65ec  8910                 mov dword ptr [eax], edx
// 007b65ee  8b4f04               mov ecx, dword ptr [edi + 4]
// 007b65f1  894804               mov dword ptr [eax + 4], ecx
// 007b65f4  8b5708               mov edx, dword ptr [edi + 8]
// 007b65f7  5f                   pop edi
// 007b65f8  895008               mov dword ptr [eax + 8], edx
// 007b65fb  5e                   pop esi
// 007b65fc  83c40c               add esp, 0xc
// 007b65ff  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?append@?$Array@VLoopBody@GWindow@G3D@@@G3D@@QAEXABVLoopBody@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
