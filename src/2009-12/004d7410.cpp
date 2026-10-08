// roc 2009-12 004d7410  unit: G3D::Win32Window  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d7410
//
// 004d7410  83ec14               sub esp, 0x14
// 004d7413  57                   push edi
// 004d7414  8bf9                 mov edi, ecx
// 004d7416  8b4704               mov eax, dword ptr [edi + 4]
// 004d7419  3b4708               cmp eax, dword ptr [edi + 8]
// 004d741c  8b0f                 mov ecx, dword ptr [edi]
// 004d741e  7d34                 jge 0x4d7454
// 004d7420  8d0480               lea eax, [eax + eax*4]
// 004d7423  8d0481               lea eax, [ecx + eax*4]
// 004d7426  85c0                 test eax, eax
// 004d7428  7420                 je 0x4d744a
// 004d742a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004d742e  8b11                 mov edx, dword ptr [ecx]
// 004d7430  8910                 mov dword ptr [eax], edx
// 004d7432  8b5104               mov edx, dword ptr [ecx + 4]
// 004d7435  895004               mov dword ptr [eax + 4], edx
// 004d7438  8b5108               mov edx, dword ptr [ecx + 8]
// 004d743b  895008               mov dword ptr [eax + 8], edx
// 004d743e  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004d7441  89500c               mov dword ptr [eax + 0xc], edx
// 004d7444  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 004d7447  894810               mov dword ptr [eax + 0x10], ecx
// 004d744a  ff4704               inc dword ptr [edi + 4]
// 004d744d  5f                   pop edi
// 004d744e  83c414               add esp, 0x14
// 004d7451  c20400               ret 4
// 004d7454  56                   push esi
// 004d7455  8b742420             mov esi, dword ptr [esp + 0x20]
// 004d7459  3bf1                 cmp esi, ecx
// 004d745b  7240                 jb 0x4d749d
// 004d745d  8d1480               lea edx, [eax + eax*4]
// 004d7460  8d0c91               lea ecx, [ecx + edx*4]
// 004d7463  3bf1                 cmp esi, ecx
// 004d7465  7336                 jae 0x4d749d
// 004d7467  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d746a  8b16                 mov edx, dword ptr [esi]
// 004d746c  8b4604               mov eax, dword ptr [esi + 4]
// 004d746f  894c2410             mov dword ptr [esp + 0x10], ecx
// 004d7473  8d4c2408             lea ecx, [esp + 8]
// 004d7477  89542408             mov dword ptr [esp + 8], edx
// 004d747b  8b560c               mov edx, dword ptr [esi + 0xc]
// 004d747e  8944240c             mov dword ptr [esp + 0xc], eax
// 004d7482  8b4610               mov eax, dword ptr [esi + 0x10]
// 004d7485  51                   push ecx
// 004d7486  8bcf                 mov ecx, edi
// 004d7488  89542418             mov dword ptr [esp + 0x18], edx
// 004d748c  8944241c             mov dword ptr [esp + 0x1c], eax
// 004d7490  e87bffffff           call 0x4d7410
// 004d7495  5e                   pop esi
// 004d7496  5f                   pop edi
// 004d7497  83c414               add esp, 0x14
// 004d749a  c20400               ret 4
// 004d749d  6a00                 push 0
// 004d749f  40                   inc eax
// 004d74a0  50                   push eax
// 004d74a1  8bcf                 mov ecx, edi
// 004d74a3  e838faffff           call 0x4d6ee0
// 004d74a8  8b4704               mov eax, dword ptr [edi + 4]
// 004d74ab  8b0e                 mov ecx, dword ptr [esi]
// 004d74ad  8d1480               lea edx, [eax + eax*4]
// 004d74b0  8b07                 mov eax, dword ptr [edi]
// 004d74b2  8d4490ec             lea eax, [eax + edx*4 - 0x14]
// 004d74b6  8908                 mov dword ptr [eax], ecx
// 004d74b8  8b5604               mov edx, dword ptr [esi + 4]
// 004d74bb  895004               mov dword ptr [eax + 4], edx
// 004d74be  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d74c1  894808               mov dword ptr [eax + 8], ecx
// 004d74c4  8b560c               mov edx, dword ptr [esi + 0xc]
// 004d74c7  89500c               mov dword ptr [eax + 0xc], edx
// 004d74ca  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004d74cd  5e                   pop esi
// 004d74ce  894810               mov dword ptr [eax + 0x10], ecx
// 004d74d1  5f                   pop edi
// 004d74d2  83c414               add esp, 0x14
// 004d74d5  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@TSDL_Event@@@G3D@@QAEXABTSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
