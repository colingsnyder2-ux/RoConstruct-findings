// from server: 100% by auto
// roc 2007-08 0047d680  unit: G3D::H_N::?$Table  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047d680
//
// 0047d680  83ec0c               sub esp, 0xc
// 0047d683  56                   push esi
// 0047d684  8bf1                 mov esi, ecx
// 0047d686  8b4604               mov eax, dword ptr [esi + 4]
// 0047d689  3b4608               cmp eax, dword ptr [esi + 8]
// 0047d68c  8b0e                 mov ecx, dword ptr [esi]
// 0047d68e  7d29                 jge 0x47d6b9
// 0047d690  8d0440               lea eax, [eax + eax*2]
// 0047d693  8d0481               lea eax, [ecx + eax*4]
// 0047d696  85c0                 test eax, eax
// 0047d698  7414                 je 0x47d6ae
// 0047d69a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047d69e  8b11                 mov edx, dword ptr [ecx]
// 0047d6a0  8910                 mov dword ptr [eax], edx
// 0047d6a2  8b5104               mov edx, dword ptr [ecx + 4]
// 0047d6a5  895004               mov dword ptr [eax + 4], edx
// 0047d6a8  8b4908               mov ecx, dword ptr [ecx + 8]
// 0047d6ab  894808               mov dword ptr [eax + 8], ecx
// 0047d6ae  83460401             add dword ptr [esi + 4], 1
// 0047d6b2  5e                   pop esi
// 0047d6b3  83c40c               add esp, 0xc
// 0047d6b6  c20400               ret 4
// 0047d6b9  57                   push edi
// 0047d6ba  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0047d6be  3bf9                 cmp edi, ecx
// 0047d6c0  7232                 jb 0x47d6f4
// 0047d6c2  8d1440               lea edx, [eax + eax*2]
// 0047d6c5  8d0c91               lea ecx, [ecx + edx*4]
// 0047d6c8  3bf9                 cmp edi, ecx
// 0047d6ca  7328                 jae 0x47d6f4
// 0047d6cc  8b17                 mov edx, dword ptr [edi]
// 0047d6ce  8b4f08               mov ecx, dword ptr [edi + 8]
// 0047d6d1  8b4704               mov eax, dword ptr [edi + 4]
// 0047d6d4  89542408             mov dword ptr [esp + 8], edx
// 0047d6d8  8d542408             lea edx, [esp + 8]
// 0047d6dc  894c2410             mov dword ptr [esp + 0x10], ecx
// 0047d6e0  52                   push edx
// 0047d6e1  8bce                 mov ecx, esi
// 0047d6e3  89442410             mov dword ptr [esp + 0x10], eax
// 0047d6e7  e894ffffff           call 0x47d680
// 0047d6ec  5f                   pop edi
// 0047d6ed  5e                   pop esi
// 0047d6ee  83c40c               add esp, 0xc
// 0047d6f1  c20400               ret 4
// 0047d6f4  6a00                 push 0
// 0047d6f6  83c001               add eax, 1
// 0047d6f9  50                   push eax
// 0047d6fa  8bce                 mov ecx, esi
// 0047d6fc  e8cff9ffff           call 0x47d0d0
// 0047d701  8b4604               mov eax, dword ptr [esi + 4]
// 0047d704  8b0e                 mov ecx, dword ptr [esi]
// 0047d706  8b17                 mov edx, dword ptr [edi]
// 0047d708  8d0440               lea eax, [eax + eax*2]
// 0047d70b  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 0047d70f  8910                 mov dword ptr [eax], edx
// 0047d711  8b4f04               mov ecx, dword ptr [edi + 4]
// 0047d714  894804               mov dword ptr [eax + 4], ecx
// 0047d717  8b5708               mov edx, dword ptr [edi + 8]
// 0047d71a  5f                   pop edi
// 0047d71b  895008               mov dword ptr [eax + 8], edx
// 0047d71e  5e                   pop esi
// 0047d71f  83c40c               add esp, 0xc
// 0047d722  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?append@?$Array@VLoopBody@GWindow@G3D@@@G3D@@QAEXABVLoopBody@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
