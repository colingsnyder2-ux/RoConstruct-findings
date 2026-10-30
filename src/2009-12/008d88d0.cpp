// roc 2009-12 008d88d0  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d88d0
//
// 008d88d0  83ec10               sub esp, 0x10
// 008d88d3  53                   push ebx
// 008d88d4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008d88d8  8b03                 mov eax, dword ptr [ebx]
// 008d88da  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d88dd  56                   push esi
// 008d88de  57                   push edi
// 008d88df  8bf9                 mov edi, ecx
// 008d88e1  8bcb                 mov ecx, ebx
// 008d88e3  ffd2                 call edx
// 008d88e5  8b742424             mov esi, dword ptr [esp + 0x24]
// 008d88e9  50                   push eax
// 008d88ea  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008d88ed  8b5050               mov edx, dword ptr [eax + 0x50]
// 008d88f0  83c050               add eax, 0x50
// 008d88f3  83ec10               sub esp, 0x10
// 008d88f6  8bcc                 mov ecx, esp
// 008d88f8  8911                 mov dword ptr [ecx], edx
// 008d88fa  8b5004               mov edx, dword ptr [eax + 4]
// 008d88fd  895104               mov dword ptr [ecx + 4], edx
// 008d8900  8b5008               mov edx, dword ptr [eax + 8]
// 008d8903  8b400c               mov eax, dword ptr [eax + 0xc]
// 008d8906  895108               mov dword ptr [ecx + 8], edx
// 008d8909  56                   push esi
// 008d890a  89410c               mov dword ptr [ecx + 0xc], eax
// 008d890d  e86ebeffff           call 0x8d4780
// 008d8912  8b0e                 mov ecx, dword ptr [esi]
// 008d8914  8b17                 mov edx, dword ptr [edi]
// 008d8916  8b520c               mov edx, dword ptr [edx + 0xc]
// 008d8919  83c418               add esp, 0x18
// 008d891c  53                   push ebx
// 008d891d  83ec10               sub esp, 0x10
// 008d8920  8bc4                 mov eax, esp
// 008d8922  8908                 mov dword ptr [eax], ecx
// 008d8924  8b4e04               mov ecx, dword ptr [esi + 4]
// 008d8927  894804               mov dword ptr [eax + 4], ecx
// 008d892a  8b4e08               mov ecx, dword ptr [esi + 8]
// 008d892d  894808               mov dword ptr [eax + 8], ecx
// 008d8930  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008d8933  89480c               mov dword ptr [eax + 0xc], ecx
// 008d8936  8d442420             lea eax, [esp + 0x20]
// 008d893a  50                   push eax
// 008d893b  8bcf                 mov ecx, edi
// 008d893d  ffd2                 call edx
// 008d893f  8b08                 mov ecx, dword ptr [eax]
// 008d8941  890e                 mov dword ptr [esi], ecx
// 008d8943  8b5004               mov edx, dword ptr [eax + 4]
// 008d8946  895604               mov dword ptr [esi + 4], edx
// 008d8949  8b4808               mov ecx, dword ptr [eax + 8]
// 008d894c  894e08               mov dword ptr [esi + 8], ecx
// 008d894f  8b500c               mov edx, dword ptr [eax + 0xc]
// 008d8952  89560c               mov dword ptr [esi + 0xc], edx
// 008d8955  8b07                 mov eax, dword ptr [edi]
// 008d8957  8b5014               mov edx, dword ptr [eax + 0x14]
// 008d895a  8d4c240c             lea ecx, [esp + 0xc]
// 008d895e  51                   push ecx
// 008d895f  8bcf                 mov ecx, edi
// 008d8961  ffd2                 call edx
// 008d8963  8bf8                 mov edi, eax
// 008d8965  8b03                 mov eax, dword ptr [ebx]
// 008d8967  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d896a  8bcb                 mov ecx, ebx
// 008d896c  ffd2                 call edx
// 008d896e  8b0f                 mov ecx, dword ptr [edi]
// 008d8970  8b5704               mov edx, dword ptr [edi + 4]
// 008d8973  50                   push eax
// 008d8974  83ec10               sub esp, 0x10
// 008d8977  8bc4                 mov eax, esp
// 008d8979  8908                 mov dword ptr [eax], ecx
// 008d897b  8b4f08               mov ecx, dword ptr [edi + 8]
// 008d897e  895004               mov dword ptr [eax + 4], edx
// 008d8981  8b570c               mov edx, dword ptr [edi + 0xc]
// 008d8984  894808               mov dword ptr [eax + 8], ecx
// 008d8987  56                   push esi
// 008d8988  89500c               mov dword ptr [eax + 0xc], edx
// 008d898b  e8f0bdffff           call 0x8d4780
// 008d8990  83c418               add esp, 0x18
// 008d8993  5f                   pop edi
// 008d8994  5e                   pop esi
// 008d8995  5b                   pop ebx
// 008d8996  83c410               add esp, 0x10
// 008d8999  c20800               ret 8
// copied from an identical function in another client (function ?AdjustClientRect@CAppearanceSetVisio@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp