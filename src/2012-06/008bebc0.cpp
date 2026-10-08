// from server: 100% by auto
// roc 2012-06 008bebc0  unit: RBX::D6Link  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008bebc0
//
// 008bebc0  83ec0c               sub esp, 0xc
// 008bebc3  56                   push esi
// 008bebc4  8bf1                 mov esi, ecx
// 008bebc6  8b4604               mov eax, dword ptr [esi + 4]
// 008bebc9  3b4608               cmp eax, dword ptr [esi + 8]
// 008bebcc  8b0e                 mov ecx, dword ptr [esi]
// 008bebce  7d28                 jge 0x8bebf8
// 008bebd0  8d0440               lea eax, [eax + eax*2]
// 008bebd3  8d0481               lea eax, [ecx + eax*4]
// 008bebd6  85c0                 test eax, eax
// 008bebd8  7414                 je 0x8bebee
// 008bebda  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008bebde  8b11                 mov edx, dword ptr [ecx]
// 008bebe0  8910                 mov dword ptr [eax], edx
// 008bebe2  8b5104               mov edx, dword ptr [ecx + 4]
// 008bebe5  895004               mov dword ptr [eax + 4], edx
// 008bebe8  8b4908               mov ecx, dword ptr [ecx + 8]
// 008bebeb  894808               mov dword ptr [eax + 8], ecx
// 008bebee  ff4604               inc dword ptr [esi + 4]
// 008bebf1  5e                   pop esi
// 008bebf2  83c40c               add esp, 0xc
// 008bebf5  c20400               ret 4
// 008bebf8  57                   push edi
// 008bebf9  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008bebfd  3bf9                 cmp edi, ecx
// 008bebff  7232                 jb 0x8bec33
// 008bec01  8d1440               lea edx, [eax + eax*2]
// 008bec04  8d0c91               lea ecx, [ecx + edx*4]
// 008bec07  3bf9                 cmp edi, ecx
// 008bec09  7328                 jae 0x8bec33
// 008bec0b  8b17                 mov edx, dword ptr [edi]
// 008bec0d  8b4f08               mov ecx, dword ptr [edi + 8]
// 008bec10  8b4704               mov eax, dword ptr [edi + 4]
// 008bec13  89542408             mov dword ptr [esp + 8], edx
// 008bec17  8d542408             lea edx, [esp + 8]
// 008bec1b  894c2410             mov dword ptr [esp + 0x10], ecx
// 008bec1f  52                   push edx
// 008bec20  8bce                 mov ecx, esi
// 008bec22  89442410             mov dword ptr [esp + 0x10], eax
// 008bec26  e895ffffff           call 0x8bebc0
// 008bec2b  5f                   pop edi
// 008bec2c  5e                   pop esi
// 008bec2d  83c40c               add esp, 0xc
// 008bec30  c20400               ret 4
// 008bec33  6a00                 push 0
// 008bec35  40                   inc eax
// 008bec36  50                   push eax
// 008bec37  8bce                 mov ecx, esi
// 008bec39  e882feffff           call 0x8beac0
// 008bec3e  8b4604               mov eax, dword ptr [esi + 4]
// 008bec41  8b0e                 mov ecx, dword ptr [esi]
// 008bec43  8b17                 mov edx, dword ptr [edi]
// 008bec45  8d0440               lea eax, [eax + eax*2]
// 008bec48  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 008bec4c  8910                 mov dword ptr [eax], edx
// 008bec4e  8b4f04               mov ecx, dword ptr [edi + 4]
// 008bec51  894804               mov dword ptr [eax + 4], ecx
// 008bec54  8b5708               mov edx, dword ptr [edi + 8]
// 008bec57  5f                   pop edi
// 008bec58  895008               mov dword ptr [eax + 8], edx
// 008bec5b  5e                   pop esi
// 008bec5c  83c40c               add esp, 0xc
// 008bec5f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?append@?$Array@VLoopBody@GWindow@G3D@@@G3D@@QAEXABVLoopBody@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
