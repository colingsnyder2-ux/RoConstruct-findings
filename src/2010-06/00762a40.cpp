// from server: 100% by auto
// roc 2010-06 00762a40  unit: RBX::MovingAssemblyStage  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00762a40
//
// 00762a40  83ec0c               sub esp, 0xc
// 00762a43  56                   push esi
// 00762a44  8bf1                 mov esi, ecx
// 00762a46  8b4604               mov eax, dword ptr [esi + 4]
// 00762a49  3b4608               cmp eax, dword ptr [esi + 8]
// 00762a4c  8b0e                 mov ecx, dword ptr [esi]
// 00762a4e  7d28                 jge 0x762a78
// 00762a50  8d0440               lea eax, [eax + eax*2]
// 00762a53  8d0481               lea eax, [ecx + eax*4]
// 00762a56  85c0                 test eax, eax
// 00762a58  7414                 je 0x762a6e
// 00762a5a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00762a5e  8b11                 mov edx, dword ptr [ecx]
// 00762a60  8910                 mov dword ptr [eax], edx
// 00762a62  8b5104               mov edx, dword ptr [ecx + 4]
// 00762a65  895004               mov dword ptr [eax + 4], edx
// 00762a68  8b4908               mov ecx, dword ptr [ecx + 8]
// 00762a6b  894808               mov dword ptr [eax + 8], ecx
// 00762a6e  ff4604               inc dword ptr [esi + 4]
// 00762a71  5e                   pop esi
// 00762a72  83c40c               add esp, 0xc
// 00762a75  c20400               ret 4
// 00762a78  57                   push edi
// 00762a79  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00762a7d  3bf9                 cmp edi, ecx
// 00762a7f  7232                 jb 0x762ab3
// 00762a81  8d1440               lea edx, [eax + eax*2]
// 00762a84  8d0c91               lea ecx, [ecx + edx*4]
// 00762a87  3bf9                 cmp edi, ecx
// 00762a89  7328                 jae 0x762ab3
// 00762a8b  8b17                 mov edx, dword ptr [edi]
// 00762a8d  8b4f08               mov ecx, dword ptr [edi + 8]
// 00762a90  8b4704               mov eax, dword ptr [edi + 4]
// 00762a93  89542408             mov dword ptr [esp + 8], edx
// 00762a97  8d542408             lea edx, [esp + 8]
// 00762a9b  894c2410             mov dword ptr [esp + 0x10], ecx
// 00762a9f  52                   push edx
// 00762aa0  8bce                 mov ecx, esi
// 00762aa2  89442410             mov dword ptr [esp + 0x10], eax
// 00762aa6  e895ffffff           call 0x762a40
// 00762aab  5f                   pop edi
// 00762aac  5e                   pop esi
// 00762aad  83c40c               add esp, 0xc
// 00762ab0  c20400               ret 4
// 00762ab3  6a00                 push 0
// 00762ab5  40                   inc eax
// 00762ab6  50                   push eax
// 00762ab7  8bce                 mov ecx, esi
// 00762ab9  e872feffff           call 0x762930
// 00762abe  8b4604               mov eax, dword ptr [esi + 4]
// 00762ac1  8b0e                 mov ecx, dword ptr [esi]
// 00762ac3  8b17                 mov edx, dword ptr [edi]
// 00762ac5  8d0440               lea eax, [eax + eax*2]
// 00762ac8  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 00762acc  8910                 mov dword ptr [eax], edx
// 00762ace  8b4f04               mov ecx, dword ptr [edi + 4]
// 00762ad1  894804               mov dword ptr [eax + 4], ecx
// 00762ad4  8b5708               mov edx, dword ptr [edi + 8]
// 00762ad7  5f                   pop edi
// 00762ad8  895008               mov dword ptr [eax + 8], edx
// 00762adb  5e                   pop esi
// 00762adc  83c40c               add esp, 0xc
// 00762adf  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?append@?$Array@VLoopBody@GWindow@G3D@@@G3D@@QAEXABVLoopBody@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
