// roc 2012-06 0081d6a0  unit: RBX::Reflection::UTuple::$$A6A?AV?$shared_ptr::V?$function::?$sp_counted_impl_p  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0081d6a0
//
// 0081d6a0  83ec0c               sub esp, 0xc
// 0081d6a3  56                   push esi
// 0081d6a4  8bf1                 mov esi, ecx
// 0081d6a6  8b4604               mov eax, dword ptr [esi + 4]
// 0081d6a9  3b4608               cmp eax, dword ptr [esi + 8]
// 0081d6ac  8b0e                 mov ecx, dword ptr [esi]
// 0081d6ae  7d28                 jge 0x81d6d8
// 0081d6b0  8d0440               lea eax, [eax + eax*2]
// 0081d6b3  8d0481               lea eax, [ecx + eax*4]
// 0081d6b6  85c0                 test eax, eax
// 0081d6b8  7414                 je 0x81d6ce
// 0081d6ba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081d6be  8b11                 mov edx, dword ptr [ecx]
// 0081d6c0  8910                 mov dword ptr [eax], edx
// 0081d6c2  8b5104               mov edx, dword ptr [ecx + 4]
// 0081d6c5  895004               mov dword ptr [eax + 4], edx
// 0081d6c8  8b4908               mov ecx, dword ptr [ecx + 8]
// 0081d6cb  894808               mov dword ptr [eax + 8], ecx
// 0081d6ce  ff4604               inc dword ptr [esi + 4]
// 0081d6d1  5e                   pop esi
// 0081d6d2  83c40c               add esp, 0xc
// 0081d6d5  c20400               ret 4
// 0081d6d8  57                   push edi
// 0081d6d9  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0081d6dd  3bf9                 cmp edi, ecx
// 0081d6df  7232                 jb 0x81d713
// 0081d6e1  8d1440               lea edx, [eax + eax*2]
// 0081d6e4  8d0c91               lea ecx, [ecx + edx*4]
// 0081d6e7  3bf9                 cmp edi, ecx
// 0081d6e9  7328                 jae 0x81d713
// 0081d6eb  8b17                 mov edx, dword ptr [edi]
// 0081d6ed  8b4f08               mov ecx, dword ptr [edi + 8]
// 0081d6f0  8b4704               mov eax, dword ptr [edi + 4]
// 0081d6f3  89542408             mov dword ptr [esp + 8], edx
// 0081d6f7  8d542408             lea edx, [esp + 8]
// 0081d6fb  894c2410             mov dword ptr [esp + 0x10], ecx
// 0081d6ff  52                   push edx
// 0081d700  8bce                 mov ecx, esi
// 0081d702  89442410             mov dword ptr [esp + 0x10], eax
// 0081d706  e895ffffff           call 0x81d6a0
// 0081d70b  5f                   pop edi
// 0081d70c  5e                   pop esi
// 0081d70d  83c40c               add esp, 0xc
// 0081d710  c20400               ret 4
// 0081d713  6a00                 push 0
// 0081d715  40                   inc eax
// 0081d716  50                   push eax
// 0081d717  8bce                 mov ecx, esi
// 0081d719  e8d2f9ffff           call 0x81d0f0
// 0081d71e  8b4604               mov eax, dword ptr [esi + 4]
// 0081d721  8b0e                 mov ecx, dword ptr [esi]
// 0081d723  8b17                 mov edx, dword ptr [edi]
// 0081d725  8d0440               lea eax, [eax + eax*2]
// 0081d728  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 0081d72c  8910                 mov dword ptr [eax], edx
// 0081d72e  8b4f04               mov ecx, dword ptr [edi + 4]
// 0081d731  894804               mov dword ptr [eax + 4], ecx
// 0081d734  8b5708               mov edx, dword ptr [edi + 8]
// 0081d737  5f                   pop edi
// 0081d738  895008               mov dword ptr [eax + 8], edx
// 0081d73b  5e                   pop esi
// 0081d73c  83c40c               add esp, 0xc
// 0081d73f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?append@?$Array@VLoopBody@GWindow@G3D@@@G3D@@QAEXABVLoopBody@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
