// roc 2007-03 0047b930  unit: seg_00470000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047b930
//
// 0047b930  83ec14               sub esp, 0x14
// 0047b933  57                   push edi
// 0047b934  8bf9                 mov edi, ecx
// 0047b936  8b4704               mov eax, dword ptr [edi + 4]
// 0047b939  3b4708               cmp eax, dword ptr [edi + 8]
// 0047b93c  8b0f                 mov ecx, dword ptr [edi]
// 0047b93e  7d35                 jge 0x47b975
// 0047b940  8d0480               lea eax, [eax + eax*4]
// 0047b943  8d0481               lea eax, [ecx + eax*4]
// 0047b946  85c0                 test eax, eax
// 0047b948  7420                 je 0x47b96a
// 0047b94a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047b94e  8b11                 mov edx, dword ptr [ecx]
// 0047b950  8910                 mov dword ptr [eax], edx
// 0047b952  8b5104               mov edx, dword ptr [ecx + 4]
// 0047b955  895004               mov dword ptr [eax + 4], edx
// 0047b958  8b5108               mov edx, dword ptr [ecx + 8]
// 0047b95b  895008               mov dword ptr [eax + 8], edx
// 0047b95e  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0047b961  89500c               mov dword ptr [eax + 0xc], edx
// 0047b964  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0047b967  894810               mov dword ptr [eax + 0x10], ecx
// 0047b96a  83470401             add dword ptr [edi + 4], 1
// 0047b96e  5f                   pop edi
// 0047b96f  83c414               add esp, 0x14
// 0047b972  c20400               ret 4
// 0047b975  56                   push esi
// 0047b976  8b742420             mov esi, dword ptr [esp + 0x20]
// 0047b97a  3bf1                 cmp esi, ecx
// 0047b97c  7240                 jb 0x47b9be
// 0047b97e  8d1480               lea edx, [eax + eax*4]
// 0047b981  8d0c91               lea ecx, [ecx + edx*4]
// 0047b984  3bf1                 cmp esi, ecx
// 0047b986  7336                 jae 0x47b9be
// 0047b988  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047b98b  8b16                 mov edx, dword ptr [esi]
// 0047b98d  8b4604               mov eax, dword ptr [esi + 4]
// 0047b990  894c2410             mov dword ptr [esp + 0x10], ecx
// 0047b994  8d4c2408             lea ecx, [esp + 8]
// 0047b998  89542408             mov dword ptr [esp + 8], edx
// 0047b99c  8b560c               mov edx, dword ptr [esi + 0xc]
// 0047b99f  8944240c             mov dword ptr [esp + 0xc], eax
// 0047b9a3  8b4610               mov eax, dword ptr [esi + 0x10]
// 0047b9a6  51                   push ecx
// 0047b9a7  8bcf                 mov ecx, edi
// 0047b9a9  89542418             mov dword ptr [esp + 0x18], edx
// 0047b9ad  8944241c             mov dword ptr [esp + 0x1c], eax
// 0047b9b1  e87affffff           call 0x47b930
// 0047b9b6  5e                   pop esi
// 0047b9b7  5f                   pop edi
// 0047b9b8  83c414               add esp, 0x14
// 0047b9bb  c20400               ret 4
// 0047b9be  6a00                 push 0
// 0047b9c0  83c001               add eax, 1
// 0047b9c3  50                   push eax
// 0047b9c4  8bcf                 mov ecx, edi
// 0047b9c6  e8c5faffff           call 0x47b490
// 0047b9cb  8b4704               mov eax, dword ptr [edi + 4]
// 0047b9ce  8b0e                 mov ecx, dword ptr [esi]
// 0047b9d0  8d1480               lea edx, [eax + eax*4]
// 0047b9d3  8b07                 mov eax, dword ptr [edi]
// 0047b9d5  8d4490ec             lea eax, [eax + edx*4 - 0x14]
// 0047b9d9  8908                 mov dword ptr [eax], ecx
// 0047b9db  8b5604               mov edx, dword ptr [esi + 4]
// 0047b9de  895004               mov dword ptr [eax + 4], edx
// 0047b9e1  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047b9e4  894808               mov dword ptr [eax + 8], ecx
// 0047b9e7  8b560c               mov edx, dword ptr [esi + 0xc]
// 0047b9ea  89500c               mov dword ptr [eax + 0xc], edx
// 0047b9ed  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0047b9f0  5e                   pop esi
// 0047b9f1  894810               mov dword ptr [eax + 0x10], ecx
// 0047b9f4  5f                   pop edi
// 0047b9f5  83c414               add esp, 0x14
// 0047b9f8  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@TSDL_Event@@@G3D@@QAEXABTSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
