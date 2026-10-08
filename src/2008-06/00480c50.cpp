// from server: 100% by auto
// roc 2008-06 00480c50  unit: G3D::H_N::?$Table  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00480c50
//
// 00480c50  83ec0c               sub esp, 0xc
// 00480c53  56                   push esi
// 00480c54  8bf1                 mov esi, ecx
// 00480c56  8b4604               mov eax, dword ptr [esi + 4]
// 00480c59  3b4608               cmp eax, dword ptr [esi + 8]
// 00480c5c  8b0e                 mov ecx, dword ptr [esi]
// 00480c5e  7d28                 jge 0x480c88
// 00480c60  8d0440               lea eax, [eax + eax*2]
// 00480c63  8d0481               lea eax, [ecx + eax*4]
// 00480c66  85c0                 test eax, eax
// 00480c68  7414                 je 0x480c7e
// 00480c6a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00480c6e  8b11                 mov edx, dword ptr [ecx]
// 00480c70  8910                 mov dword ptr [eax], edx
// 00480c72  8b5104               mov edx, dword ptr [ecx + 4]
// 00480c75  895004               mov dword ptr [eax + 4], edx
// 00480c78  8b4908               mov ecx, dword ptr [ecx + 8]
// 00480c7b  894808               mov dword ptr [eax + 8], ecx
// 00480c7e  ff4604               inc dword ptr [esi + 4]
// 00480c81  5e                   pop esi
// 00480c82  83c40c               add esp, 0xc
// 00480c85  c20400               ret 4
// 00480c88  57                   push edi
// 00480c89  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00480c8d  3bf9                 cmp edi, ecx
// 00480c8f  7232                 jb 0x480cc3
// 00480c91  8d1440               lea edx, [eax + eax*2]
// 00480c94  8d0c91               lea ecx, [ecx + edx*4]
// 00480c97  3bf9                 cmp edi, ecx
// 00480c99  7328                 jae 0x480cc3
// 00480c9b  8b17                 mov edx, dword ptr [edi]
// 00480c9d  8b4f08               mov ecx, dword ptr [edi + 8]
// 00480ca0  8b4704               mov eax, dword ptr [edi + 4]
// 00480ca3  89542408             mov dword ptr [esp + 8], edx
// 00480ca7  8d542408             lea edx, [esp + 8]
// 00480cab  894c2410             mov dword ptr [esp + 0x10], ecx
// 00480caf  52                   push edx
// 00480cb0  8bce                 mov ecx, esi
// 00480cb2  89442410             mov dword ptr [esp + 0x10], eax
// 00480cb6  e895ffffff           call 0x480c50
// 00480cbb  5f                   pop edi
// 00480cbc  5e                   pop esi
// 00480cbd  83c40c               add esp, 0xc
// 00480cc0  c20400               ret 4
// 00480cc3  6a00                 push 0
// 00480cc5  40                   inc eax
// 00480cc6  50                   push eax
// 00480cc7  8bce                 mov ecx, esi
// 00480cc9  e8f2f9ffff           call 0x4806c0
// 00480cce  8b4604               mov eax, dword ptr [esi + 4]
// 00480cd1  8b0e                 mov ecx, dword ptr [esi]
// 00480cd3  8b17                 mov edx, dword ptr [edi]
// 00480cd5  8d0440               lea eax, [eax + eax*2]
// 00480cd8  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 00480cdc  8910                 mov dword ptr [eax], edx
// 00480cde  8b4f04               mov ecx, dword ptr [edi + 4]
// 00480ce1  894804               mov dword ptr [eax + 4], ecx
// 00480ce4  8b5708               mov edx, dword ptr [edi + 8]
// 00480ce7  5f                   pop edi
// 00480ce8  895008               mov dword ptr [eax + 8], edx
// 00480ceb  5e                   pop esi
// 00480cec  83c40c               add esp, 0xc
// 00480cef  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?append@?$Array@VLoopBody@GWindow@G3D@@@G3D@@QAEXABVLoopBody@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
