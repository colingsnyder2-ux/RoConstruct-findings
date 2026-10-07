// roc 2008-06 00480a20  unit: G3D::Win32Window  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00480a20
//
// 00480a20  83ec14               sub esp, 0x14
// 00480a23  57                   push edi
// 00480a24  8bf9                 mov edi, ecx
// 00480a26  8b4704               mov eax, dword ptr [edi + 4]
// 00480a29  3b4708               cmp eax, dword ptr [edi + 8]
// 00480a2c  8b0f                 mov ecx, dword ptr [edi]
// 00480a2e  7d34                 jge 0x480a64
// 00480a30  8d0480               lea eax, [eax + eax*4]
// 00480a33  8d0481               lea eax, [ecx + eax*4]
// 00480a36  85c0                 test eax, eax
// 00480a38  7420                 je 0x480a5a
// 00480a3a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00480a3e  8b11                 mov edx, dword ptr [ecx]
// 00480a40  8910                 mov dword ptr [eax], edx
// 00480a42  8b5104               mov edx, dword ptr [ecx + 4]
// 00480a45  895004               mov dword ptr [eax + 4], edx
// 00480a48  8b5108               mov edx, dword ptr [ecx + 8]
// 00480a4b  895008               mov dword ptr [eax + 8], edx
// 00480a4e  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00480a51  89500c               mov dword ptr [eax + 0xc], edx
// 00480a54  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00480a57  894810               mov dword ptr [eax + 0x10], ecx
// 00480a5a  ff4704               inc dword ptr [edi + 4]
// 00480a5d  5f                   pop edi
// 00480a5e  83c414               add esp, 0x14
// 00480a61  c20400               ret 4
// 00480a64  56                   push esi
// 00480a65  8b742420             mov esi, dword ptr [esp + 0x20]
// 00480a69  3bf1                 cmp esi, ecx
// 00480a6b  7240                 jb 0x480aad
// 00480a6d  8d1480               lea edx, [eax + eax*4]
// 00480a70  8d0c91               lea ecx, [ecx + edx*4]
// 00480a73  3bf1                 cmp esi, ecx
// 00480a75  7336                 jae 0x480aad
// 00480a77  8b4e08               mov ecx, dword ptr [esi + 8]
// 00480a7a  8b16                 mov edx, dword ptr [esi]
// 00480a7c  8b4604               mov eax, dword ptr [esi + 4]
// 00480a7f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00480a83  8d4c2408             lea ecx, [esp + 8]
// 00480a87  89542408             mov dword ptr [esp + 8], edx
// 00480a8b  8b560c               mov edx, dword ptr [esi + 0xc]
// 00480a8e  8944240c             mov dword ptr [esp + 0xc], eax
// 00480a92  8b4610               mov eax, dword ptr [esi + 0x10]
// 00480a95  51                   push ecx
// 00480a96  8bcf                 mov ecx, edi
// 00480a98  89542418             mov dword ptr [esp + 0x18], edx
// 00480a9c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00480aa0  e87bffffff           call 0x480a20
// 00480aa5  5e                   pop esi
// 00480aa6  5f                   pop edi
// 00480aa7  83c414               add esp, 0x14
// 00480aaa  c20400               ret 4
// 00480aad  6a00                 push 0
// 00480aaf  40                   inc eax
// 00480ab0  50                   push eax
// 00480ab1  8bcf                 mov ecx, edi
// 00480ab3  e8e8f9ffff           call 0x4804a0
// 00480ab8  8b4704               mov eax, dword ptr [edi + 4]
// 00480abb  8b0e                 mov ecx, dword ptr [esi]
// 00480abd  8d1480               lea edx, [eax + eax*4]
// 00480ac0  8b07                 mov eax, dword ptr [edi]
// 00480ac2  8d4490ec             lea eax, [eax + edx*4 - 0x14]
// 00480ac6  8908                 mov dword ptr [eax], ecx
// 00480ac8  8b5604               mov edx, dword ptr [esi + 4]
// 00480acb  895004               mov dword ptr [eax + 4], edx
// 00480ace  8b4e08               mov ecx, dword ptr [esi + 8]
// 00480ad1  894808               mov dword ptr [eax + 8], ecx
// 00480ad4  8b560c               mov edx, dword ptr [esi + 0xc]
// 00480ad7  89500c               mov dword ptr [eax + 0xc], edx
// 00480ada  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00480add  5e                   pop esi
// 00480ade  894810               mov dword ptr [eax + 0x10], ecx
// 00480ae1  5f                   pop edi
// 00480ae2  83c414               add esp, 0x14
// 00480ae5  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@TSDL_Event@@@G3D@@QAEXABTSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
