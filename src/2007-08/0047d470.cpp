// roc 2007-08 0047d470  unit: G3D::Win32Window  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047d470
//
// 0047d470  83ec14               sub esp, 0x14
// 0047d473  57                   push edi
// 0047d474  8bf9                 mov edi, ecx
// 0047d476  8b4704               mov eax, dword ptr [edi + 4]
// 0047d479  3b4708               cmp eax, dword ptr [edi + 8]
// 0047d47c  8b0f                 mov ecx, dword ptr [edi]
// 0047d47e  7d35                 jge 0x47d4b5
// 0047d480  8d0480               lea eax, [eax + eax*4]
// 0047d483  8d0481               lea eax, [ecx + eax*4]
// 0047d486  85c0                 test eax, eax
// 0047d488  7420                 je 0x47d4aa
// 0047d48a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047d48e  8b11                 mov edx, dword ptr [ecx]
// 0047d490  8910                 mov dword ptr [eax], edx
// 0047d492  8b5104               mov edx, dword ptr [ecx + 4]
// 0047d495  895004               mov dword ptr [eax + 4], edx
// 0047d498  8b5108               mov edx, dword ptr [ecx + 8]
// 0047d49b  895008               mov dword ptr [eax + 8], edx
// 0047d49e  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0047d4a1  89500c               mov dword ptr [eax + 0xc], edx
// 0047d4a4  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0047d4a7  894810               mov dword ptr [eax + 0x10], ecx
// 0047d4aa  83470401             add dword ptr [edi + 4], 1
// 0047d4ae  5f                   pop edi
// 0047d4af  83c414               add esp, 0x14
// 0047d4b2  c20400               ret 4
// 0047d4b5  56                   push esi
// 0047d4b6  8b742420             mov esi, dword ptr [esp + 0x20]
// 0047d4ba  3bf1                 cmp esi, ecx
// 0047d4bc  7240                 jb 0x47d4fe
// 0047d4be  8d1480               lea edx, [eax + eax*4]
// 0047d4c1  8d0c91               lea ecx, [ecx + edx*4]
// 0047d4c4  3bf1                 cmp esi, ecx
// 0047d4c6  7336                 jae 0x47d4fe
// 0047d4c8  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047d4cb  8b16                 mov edx, dword ptr [esi]
// 0047d4cd  8b4604               mov eax, dword ptr [esi + 4]
// 0047d4d0  894c2410             mov dword ptr [esp + 0x10], ecx
// 0047d4d4  8d4c2408             lea ecx, [esp + 8]
// 0047d4d8  89542408             mov dword ptr [esp + 8], edx
// 0047d4dc  8b560c               mov edx, dword ptr [esi + 0xc]
// 0047d4df  8944240c             mov dword ptr [esp + 0xc], eax
// 0047d4e3  8b4610               mov eax, dword ptr [esi + 0x10]
// 0047d4e6  51                   push ecx
// 0047d4e7  8bcf                 mov ecx, edi
// 0047d4e9  89542418             mov dword ptr [esp + 0x18], edx
// 0047d4ed  8944241c             mov dword ptr [esp + 0x1c], eax
// 0047d4f1  e87affffff           call 0x47d470
// 0047d4f6  5e                   pop esi
// 0047d4f7  5f                   pop edi
// 0047d4f8  83c414               add esp, 0x14
// 0047d4fb  c20400               ret 4
// 0047d4fe  6a00                 push 0
// 0047d500  83c001               add eax, 1
// 0047d503  50                   push eax
// 0047d504  8bcf                 mov ecx, edi
// 0047d506  e8a5f9ffff           call 0x47ceb0
// 0047d50b  8b4704               mov eax, dword ptr [edi + 4]
// 0047d50e  8b0e                 mov ecx, dword ptr [esi]
// 0047d510  8d1480               lea edx, [eax + eax*4]
// 0047d513  8b07                 mov eax, dword ptr [edi]
// 0047d515  8d4490ec             lea eax, [eax + edx*4 - 0x14]
// 0047d519  8908                 mov dword ptr [eax], ecx
// 0047d51b  8b5604               mov edx, dword ptr [esi + 4]
// 0047d51e  895004               mov dword ptr [eax + 4], edx
// 0047d521  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047d524  894808               mov dword ptr [eax + 8], ecx
// 0047d527  8b560c               mov edx, dword ptr [esi + 0xc]
// 0047d52a  89500c               mov dword ptr [eax + 0xc], edx
// 0047d52d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0047d530  5e                   pop esi
// 0047d531  894810               mov dword ptr [eax + 0x10], ecx
// 0047d534  5f                   pop edi
// 0047d535  83c414               add esp, 0x14
// 0047d538  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@TSDL_Event@@@G3D@@QAEXABTSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
