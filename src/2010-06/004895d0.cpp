// roc 2010-06 004895d0  unit: G3D::Win32Window  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004895d0
//
// 004895d0  83ec14               sub esp, 0x14
// 004895d3  57                   push edi
// 004895d4  8bf9                 mov edi, ecx
// 004895d6  8b4704               mov eax, dword ptr [edi + 4]
// 004895d9  3b4708               cmp eax, dword ptr [edi + 8]
// 004895dc  8b0f                 mov ecx, dword ptr [edi]
// 004895de  7d34                 jge 0x489614
// 004895e0  8d0480               lea eax, [eax + eax*4]
// 004895e3  8d0481               lea eax, [ecx + eax*4]
// 004895e6  85c0                 test eax, eax
// 004895e8  7420                 je 0x48960a
// 004895ea  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004895ee  8b11                 mov edx, dword ptr [ecx]
// 004895f0  8910                 mov dword ptr [eax], edx
// 004895f2  8b5104               mov edx, dword ptr [ecx + 4]
// 004895f5  895004               mov dword ptr [eax + 4], edx
// 004895f8  8b5108               mov edx, dword ptr [ecx + 8]
// 004895fb  895008               mov dword ptr [eax + 8], edx
// 004895fe  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00489601  89500c               mov dword ptr [eax + 0xc], edx
// 00489604  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00489607  894810               mov dword ptr [eax + 0x10], ecx
// 0048960a  ff4704               inc dword ptr [edi + 4]
// 0048960d  5f                   pop edi
// 0048960e  83c414               add esp, 0x14
// 00489611  c20400               ret 4
// 00489614  56                   push esi
// 00489615  8b742420             mov esi, dword ptr [esp + 0x20]
// 00489619  3bf1                 cmp esi, ecx
// 0048961b  7240                 jb 0x48965d
// 0048961d  8d1480               lea edx, [eax + eax*4]
// 00489620  8d0c91               lea ecx, [ecx + edx*4]
// 00489623  3bf1                 cmp esi, ecx
// 00489625  7336                 jae 0x48965d
// 00489627  8b4e08               mov ecx, dword ptr [esi + 8]
// 0048962a  8b16                 mov edx, dword ptr [esi]
// 0048962c  8b4604               mov eax, dword ptr [esi + 4]
// 0048962f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00489633  8d4c2408             lea ecx, [esp + 8]
// 00489637  89542408             mov dword ptr [esp + 8], edx
// 0048963b  8b560c               mov edx, dword ptr [esi + 0xc]
// 0048963e  8944240c             mov dword ptr [esp + 0xc], eax
// 00489642  8b4610               mov eax, dword ptr [esi + 0x10]
// 00489645  51                   push ecx
// 00489646  8bcf                 mov ecx, edi
// 00489648  89542418             mov dword ptr [esp + 0x18], edx
// 0048964c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00489650  e87bffffff           call 0x4895d0
// 00489655  5e                   pop esi
// 00489656  5f                   pop edi
// 00489657  83c414               add esp, 0x14
// 0048965a  c20400               ret 4
// 0048965d  6a00                 push 0
// 0048965f  40                   inc eax
// 00489660  50                   push eax
// 00489661  8bcf                 mov ecx, edi
// 00489663  e838faffff           call 0x4890a0
// 00489668  8b4704               mov eax, dword ptr [edi + 4]
// 0048966b  8b0e                 mov ecx, dword ptr [esi]
// 0048966d  8d1480               lea edx, [eax + eax*4]
// 00489670  8b07                 mov eax, dword ptr [edi]
// 00489672  8d4490ec             lea eax, [eax + edx*4 - 0x14]
// 00489676  8908                 mov dword ptr [eax], ecx
// 00489678  8b5604               mov edx, dword ptr [esi + 4]
// 0048967b  895004               mov dword ptr [eax + 4], edx
// 0048967e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00489681  894808               mov dword ptr [eax + 8], ecx
// 00489684  8b560c               mov edx, dword ptr [esi + 0xc]
// 00489687  89500c               mov dword ptr [eax + 0xc], edx
// 0048968a  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0048968d  5e                   pop esi
// 0048968e  894810               mov dword ptr [eax + 0x10], ecx
// 00489691  5f                   pop edi
// 00489692  83c414               add esp, 0x14
// 00489695  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@TSDL_Event@@@G3D@@QAEXABTSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
