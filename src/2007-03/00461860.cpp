// roc 2007-03 00461860  unit: seg_00460000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00461860
//
// 00461860  83ec0c               sub esp, 0xc
// 00461863  56                   push esi
// 00461864  8bf1                 mov esi, ecx
// 00461866  8b4604               mov eax, dword ptr [esi + 4]
// 00461869  3b4608               cmp eax, dword ptr [esi + 8]
// 0046186c  8b0e                 mov ecx, dword ptr [esi]
// 0046186e  7d29                 jge 0x461899
// 00461870  8d0440               lea eax, [eax + eax*2]
// 00461873  8d0481               lea eax, [ecx + eax*4]
// 00461876  85c0                 test eax, eax
// 00461878  7414                 je 0x46188e
// 0046187a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0046187e  8b11                 mov edx, dword ptr [ecx]
// 00461880  8910                 mov dword ptr [eax], edx
// 00461882  8b5104               mov edx, dword ptr [ecx + 4]
// 00461885  895004               mov dword ptr [eax + 4], edx
// 00461888  8b4908               mov ecx, dword ptr [ecx + 8]
// 0046188b  894808               mov dword ptr [eax + 8], ecx
// 0046188e  83460401             add dword ptr [esi + 4], 1
// 00461892  5e                   pop esi
// 00461893  83c40c               add esp, 0xc
// 00461896  c20400               ret 4
// 00461899  57                   push edi
// 0046189a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0046189e  3bf9                 cmp edi, ecx
// 004618a0  7232                 jb 0x4618d4
// 004618a2  8d1440               lea edx, [eax + eax*2]
// 004618a5  8d0c91               lea ecx, [ecx + edx*4]
// 004618a8  3bf9                 cmp edi, ecx
// 004618aa  7328                 jae 0x4618d4
// 004618ac  8b17                 mov edx, dword ptr [edi]
// 004618ae  8b4f08               mov ecx, dword ptr [edi + 8]
// 004618b1  8b4704               mov eax, dword ptr [edi + 4]
// 004618b4  89542408             mov dword ptr [esp + 8], edx
// 004618b8  8d542408             lea edx, [esp + 8]
// 004618bc  894c2410             mov dword ptr [esp + 0x10], ecx
// 004618c0  52                   push edx
// 004618c1  8bce                 mov ecx, esi
// 004618c3  89442410             mov dword ptr [esp + 0x10], eax
// 004618c7  e894ffffff           call 0x461860
// 004618cc  5f                   pop edi
// 004618cd  5e                   pop esi
// 004618ce  83c40c               add esp, 0xc
// 004618d1  c20400               ret 4
// 004618d4  6a00                 push 0
// 004618d6  83c001               add eax, 1
// 004618d9  50                   push eax
// 004618da  8bce                 mov ecx, esi
// 004618dc  e8bffcffff           call 0x4615a0
// 004618e1  8b4604               mov eax, dword ptr [esi + 4]
// 004618e4  8b0e                 mov ecx, dword ptr [esi]
// 004618e6  8b17                 mov edx, dword ptr [edi]
// 004618e8  8d0440               lea eax, [eax + eax*2]
// 004618eb  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 004618ef  8910                 mov dword ptr [eax], edx
// 004618f1  8b4f04               mov ecx, dword ptr [edi + 4]
// 004618f4  894804               mov dword ptr [eax + 4], ecx
// 004618f7  8b5708               mov edx, dword ptr [edi + 8]
// 004618fa  5f                   pop edi
// 004618fb  895008               mov dword ptr [eax + 8], edx
// 004618fe  5e                   pop esi
// 004618ff  83c40c               add esp, 0xc
// 00461902  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\GWindow.cpp (function ?append@?$Array@VLoopBody@GWindow@G3D@@@G3D@@QAEXABVLoopBody@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/GWindow.cpp
