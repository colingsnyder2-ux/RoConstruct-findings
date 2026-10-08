// from server: 100% by auto
// roc 2009-06 006de470  unit: RBX::MovingAssemblyStage  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006de470
//
// 006de470  83ec0c               sub esp, 0xc
// 006de473  56                   push esi
// 006de474  8bf1                 mov esi, ecx
// 006de476  8b4604               mov eax, dword ptr [esi + 4]
// 006de479  3b4608               cmp eax, dword ptr [esi + 8]
// 006de47c  8b0e                 mov ecx, dword ptr [esi]
// 006de47e  7d28                 jge 0x6de4a8
// 006de480  8d0440               lea eax, [eax + eax*2]
// 006de483  8d0481               lea eax, [ecx + eax*4]
// 006de486  85c0                 test eax, eax
// 006de488  7414                 je 0x6de49e
// 006de48a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006de48e  8b11                 mov edx, dword ptr [ecx]
// 006de490  8910                 mov dword ptr [eax], edx
// 006de492  8b5104               mov edx, dword ptr [ecx + 4]
// 006de495  895004               mov dword ptr [eax + 4], edx
// 006de498  8b4908               mov ecx, dword ptr [ecx + 8]
// 006de49b  894808               mov dword ptr [eax + 8], ecx
// 006de49e  ff4604               inc dword ptr [esi + 4]
// 006de4a1  5e                   pop esi
// 006de4a2  83c40c               add esp, 0xc
// 006de4a5  c20400               ret 4
// 006de4a8  57                   push edi
// 006de4a9  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006de4ad  3bf9                 cmp edi, ecx
// 006de4af  7232                 jb 0x6de4e3
// 006de4b1  8d1440               lea edx, [eax + eax*2]
// 006de4b4  8d0c91               lea ecx, [ecx + edx*4]
// 006de4b7  3bf9                 cmp edi, ecx
// 006de4b9  7328                 jae 0x6de4e3
// 006de4bb  8b17                 mov edx, dword ptr [edi]
// 006de4bd  8b4f08               mov ecx, dword ptr [edi + 8]
// 006de4c0  8b4704               mov eax, dword ptr [edi + 4]
// 006de4c3  89542408             mov dword ptr [esp + 8], edx
// 006de4c7  8d542408             lea edx, [esp + 8]
// 006de4cb  894c2410             mov dword ptr [esp + 0x10], ecx
// 006de4cf  52                   push edx
// 006de4d0  8bce                 mov ecx, esi
// 006de4d2  89442410             mov dword ptr [esp + 0x10], eax
// 006de4d6  e895ffffff           call 0x6de470
// 006de4db  5f                   pop edi
// 006de4dc  5e                   pop esi
// 006de4dd  83c40c               add esp, 0xc
// 006de4e0  c20400               ret 4
// 006de4e3  6a00                 push 0
// 006de4e5  40                   inc eax
// 006de4e6  50                   push eax
// 006de4e7  8bce                 mov ecx, esi
// 006de4e9  e872feffff           call 0x6de360
// 006de4ee  8b4604               mov eax, dword ptr [esi + 4]
// 006de4f1  8b0e                 mov ecx, dword ptr [esi]
// 006de4f3  8b17                 mov edx, dword ptr [edi]
// 006de4f5  8d0440               lea eax, [eax + eax*2]
// 006de4f8  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 006de4fc  8910                 mov dword ptr [eax], edx
// 006de4fe  8b4f04               mov ecx, dword ptr [edi + 4]
// 006de501  894804               mov dword ptr [eax + 4], ecx
// 006de504  8b5708               mov edx, dword ptr [edi + 8]
// 006de507  5f                   pop edi
// 006de508  895008               mov dword ptr [eax + 8], edx
// 006de50b  5e                   pop esi
// 006de50c  83c40c               add esp, 0xc
// 006de50f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?append@?$Array@VLoopBody@GWindow@G3D@@@G3D@@QAEXABVLoopBody@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
