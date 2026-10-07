// roc 2009-06 004aa940  unit: G3D::Win32Window  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004aa940
//
// 004aa940  83ec14               sub esp, 0x14
// 004aa943  57                   push edi
// 004aa944  8bf9                 mov edi, ecx
// 004aa946  8b4704               mov eax, dword ptr [edi + 4]
// 004aa949  3b4708               cmp eax, dword ptr [edi + 8]
// 004aa94c  8b0f                 mov ecx, dword ptr [edi]
// 004aa94e  7d34                 jge 0x4aa984
// 004aa950  8d0480               lea eax, [eax + eax*4]
// 004aa953  8d0481               lea eax, [ecx + eax*4]
// 004aa956  85c0                 test eax, eax
// 004aa958  7420                 je 0x4aa97a
// 004aa95a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004aa95e  8b11                 mov edx, dword ptr [ecx]
// 004aa960  8910                 mov dword ptr [eax], edx
// 004aa962  8b5104               mov edx, dword ptr [ecx + 4]
// 004aa965  895004               mov dword ptr [eax + 4], edx
// 004aa968  8b5108               mov edx, dword ptr [ecx + 8]
// 004aa96b  895008               mov dword ptr [eax + 8], edx
// 004aa96e  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004aa971  89500c               mov dword ptr [eax + 0xc], edx
// 004aa974  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 004aa977  894810               mov dword ptr [eax + 0x10], ecx
// 004aa97a  ff4704               inc dword ptr [edi + 4]
// 004aa97d  5f                   pop edi
// 004aa97e  83c414               add esp, 0x14
// 004aa981  c20400               ret 4
// 004aa984  56                   push esi
// 004aa985  8b742420             mov esi, dword ptr [esp + 0x20]
// 004aa989  3bf1                 cmp esi, ecx
// 004aa98b  7240                 jb 0x4aa9cd
// 004aa98d  8d1480               lea edx, [eax + eax*4]
// 004aa990  8d0c91               lea ecx, [ecx + edx*4]
// 004aa993  3bf1                 cmp esi, ecx
// 004aa995  7336                 jae 0x4aa9cd
// 004aa997  8b4e08               mov ecx, dword ptr [esi + 8]
// 004aa99a  8b16                 mov edx, dword ptr [esi]
// 004aa99c  8b4604               mov eax, dword ptr [esi + 4]
// 004aa99f  894c2410             mov dword ptr [esp + 0x10], ecx
// 004aa9a3  8d4c2408             lea ecx, [esp + 8]
// 004aa9a7  89542408             mov dword ptr [esp + 8], edx
// 004aa9ab  8b560c               mov edx, dword ptr [esi + 0xc]
// 004aa9ae  8944240c             mov dword ptr [esp + 0xc], eax
// 004aa9b2  8b4610               mov eax, dword ptr [esi + 0x10]
// 004aa9b5  51                   push ecx
// 004aa9b6  8bcf                 mov ecx, edi
// 004aa9b8  89542418             mov dword ptr [esp + 0x18], edx
// 004aa9bc  8944241c             mov dword ptr [esp + 0x1c], eax
// 004aa9c0  e87bffffff           call 0x4aa940
// 004aa9c5  5e                   pop esi
// 004aa9c6  5f                   pop edi
// 004aa9c7  83c414               add esp, 0x14
// 004aa9ca  c20400               ret 4
// 004aa9cd  6a00                 push 0
// 004aa9cf  40                   inc eax
// 004aa9d0  50                   push eax
// 004aa9d1  8bcf                 mov ecx, edi
// 004aa9d3  e8e8f9ffff           call 0x4aa3c0
// 004aa9d8  8b4704               mov eax, dword ptr [edi + 4]
// 004aa9db  8b0e                 mov ecx, dword ptr [esi]
// 004aa9dd  8d1480               lea edx, [eax + eax*4]
// 004aa9e0  8b07                 mov eax, dword ptr [edi]
// 004aa9e2  8d4490ec             lea eax, [eax + edx*4 - 0x14]
// 004aa9e6  8908                 mov dword ptr [eax], ecx
// 004aa9e8  8b5604               mov edx, dword ptr [esi + 4]
// 004aa9eb  895004               mov dword ptr [eax + 4], edx
// 004aa9ee  8b4e08               mov ecx, dword ptr [esi + 8]
// 004aa9f1  894808               mov dword ptr [eax + 8], ecx
// 004aa9f4  8b560c               mov edx, dword ptr [esi + 0xc]
// 004aa9f7  89500c               mov dword ptr [eax + 0xc], edx
// 004aa9fa  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004aa9fd  5e                   pop esi
// 004aa9fe  894810               mov dword ptr [eax + 0x10], ecx
// 004aaa01  5f                   pop edi
// 004aaa02  83c414               add esp, 0x14
// 004aaa05  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@TSDL_Event@@@G3D@@QAEXABTSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
