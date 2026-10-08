// roc 2009-12 004d7640  unit: G3D::H_N::?$Table  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d7640
//
// 004d7640  83ec0c               sub esp, 0xc
// 004d7643  56                   push esi
// 004d7644  8bf1                 mov esi, ecx
// 004d7646  8b4604               mov eax, dword ptr [esi + 4]
// 004d7649  3b4608               cmp eax, dword ptr [esi + 8]
// 004d764c  8b0e                 mov ecx, dword ptr [esi]
// 004d764e  7d28                 jge 0x4d7678
// 004d7650  8d0440               lea eax, [eax + eax*2]
// 004d7653  8d0481               lea eax, [ecx + eax*4]
// 004d7656  85c0                 test eax, eax
// 004d7658  7414                 je 0x4d766e
// 004d765a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d765e  8b11                 mov edx, dword ptr [ecx]
// 004d7660  8910                 mov dword ptr [eax], edx
// 004d7662  8b5104               mov edx, dword ptr [ecx + 4]
// 004d7665  895004               mov dword ptr [eax + 4], edx
// 004d7668  8b4908               mov ecx, dword ptr [ecx + 8]
// 004d766b  894808               mov dword ptr [eax + 8], ecx
// 004d766e  ff4604               inc dword ptr [esi + 4]
// 004d7671  5e                   pop esi
// 004d7672  83c40c               add esp, 0xc
// 004d7675  c20400               ret 4
// 004d7678  57                   push edi
// 004d7679  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004d767d  3bf9                 cmp edi, ecx
// 004d767f  7232                 jb 0x4d76b3
// 004d7681  8d1440               lea edx, [eax + eax*2]
// 004d7684  8d0c91               lea ecx, [ecx + edx*4]
// 004d7687  3bf9                 cmp edi, ecx
// 004d7689  7328                 jae 0x4d76b3
// 004d768b  8b17                 mov edx, dword ptr [edi]
// 004d768d  8b4f08               mov ecx, dword ptr [edi + 8]
// 004d7690  8b4704               mov eax, dword ptr [edi + 4]
// 004d7693  89542408             mov dword ptr [esp + 8], edx
// 004d7697  8d542408             lea edx, [esp + 8]
// 004d769b  894c2410             mov dword ptr [esp + 0x10], ecx
// 004d769f  52                   push edx
// 004d76a0  8bce                 mov ecx, esi
// 004d76a2  89442410             mov dword ptr [esp + 0x10], eax
// 004d76a6  e895ffffff           call 0x4d7640
// 004d76ab  5f                   pop edi
// 004d76ac  5e                   pop esi
// 004d76ad  83c40c               add esp, 0xc
// 004d76b0  c20400               ret 4
// 004d76b3  6a00                 push 0
// 004d76b5  40                   inc eax
// 004d76b6  50                   push eax
// 004d76b7  8bce                 mov ecx, esi
// 004d76b9  e822faffff           call 0x4d70e0
// 004d76be  8b4604               mov eax, dword ptr [esi + 4]
// 004d76c1  8b0e                 mov ecx, dword ptr [esi]
// 004d76c3  8b17                 mov edx, dword ptr [edi]
// 004d76c5  8d0440               lea eax, [eax + eax*2]
// 004d76c8  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 004d76cc  8910                 mov dword ptr [eax], edx
// 004d76ce  8b4f04               mov ecx, dword ptr [edi + 4]
// 004d76d1  894804               mov dword ptr [eax + 4], ecx
// 004d76d4  8b5708               mov edx, dword ptr [edi + 8]
// 004d76d7  5f                   pop edi
// 004d76d8  895008               mov dword ptr [eax + 8], edx
// 004d76db  5e                   pop esi
// 004d76dc  83c40c               add esp, 0xc
// 004d76df  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?append@?$Array@VLoopBody@GWindow@G3D@@@G3D@@QAEXABVLoopBody@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
