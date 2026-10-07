// roc 2010-06 004897d0  unit: G3D::H_N::?$Table  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004897d0
//
// 004897d0  83ec0c               sub esp, 0xc
// 004897d3  56                   push esi
// 004897d4  8bf1                 mov esi, ecx
// 004897d6  8b4604               mov eax, dword ptr [esi + 4]
// 004897d9  3b4608               cmp eax, dword ptr [esi + 8]
// 004897dc  8b0e                 mov ecx, dword ptr [esi]
// 004897de  7d28                 jge 0x489808
// 004897e0  8d0440               lea eax, [eax + eax*2]
// 004897e3  8d0481               lea eax, [ecx + eax*4]
// 004897e6  85c0                 test eax, eax
// 004897e8  7414                 je 0x4897fe
// 004897ea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004897ee  8b11                 mov edx, dword ptr [ecx]
// 004897f0  8910                 mov dword ptr [eax], edx
// 004897f2  8b5104               mov edx, dword ptr [ecx + 4]
// 004897f5  895004               mov dword ptr [eax + 4], edx
// 004897f8  8b4908               mov ecx, dword ptr [ecx + 8]
// 004897fb  894808               mov dword ptr [eax + 8], ecx
// 004897fe  ff4604               inc dword ptr [esi + 4]
// 00489801  5e                   pop esi
// 00489802  83c40c               add esp, 0xc
// 00489805  c20400               ret 4
// 00489808  57                   push edi
// 00489809  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0048980d  3bf9                 cmp edi, ecx
// 0048980f  7232                 jb 0x489843
// 00489811  8d1440               lea edx, [eax + eax*2]
// 00489814  8d0c91               lea ecx, [ecx + edx*4]
// 00489817  3bf9                 cmp edi, ecx
// 00489819  7328                 jae 0x489843
// 0048981b  8b17                 mov edx, dword ptr [edi]
// 0048981d  8b4f08               mov ecx, dword ptr [edi + 8]
// 00489820  8b4704               mov eax, dword ptr [edi + 4]
// 00489823  89542408             mov dword ptr [esp + 8], edx
// 00489827  8d542408             lea edx, [esp + 8]
// 0048982b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0048982f  52                   push edx
// 00489830  8bce                 mov ecx, esi
// 00489832  89442410             mov dword ptr [esp + 0x10], eax
// 00489836  e895ffffff           call 0x4897d0
// 0048983b  5f                   pop edi
// 0048983c  5e                   pop esi
// 0048983d  83c40c               add esp, 0xc
// 00489840  c20400               ret 4
// 00489843  6a00                 push 0
// 00489845  40                   inc eax
// 00489846  50                   push eax
// 00489847  8bce                 mov ecx, esi
// 00489849  e852faffff           call 0x4892a0
// 0048984e  8b4604               mov eax, dword ptr [esi + 4]
// 00489851  8b0e                 mov ecx, dword ptr [esi]
// 00489853  8b17                 mov edx, dword ptr [edi]
// 00489855  8d0440               lea eax, [eax + eax*2]
// 00489858  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 0048985c  8910                 mov dword ptr [eax], edx
// 0048985e  8b4f04               mov ecx, dword ptr [edi + 4]
// 00489861  894804               mov dword ptr [eax + 4], ecx
// 00489864  8b5708               mov edx, dword ptr [edi + 8]
// 00489867  5f                   pop edi
// 00489868  895008               mov dword ptr [eax + 8], edx
// 0048986b  5e                   pop esi
// 0048986c  83c40c               add esp, 0xc
// 0048986f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?append@?$Array@VLoopBody@GWindow@G3D@@@G3D@@QAEXABVLoopBody@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
