// roc 2009-12 008d5bb0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 395 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d5bb0
//
// 008d5bb0  83ec10               sub esp, 0x10
// 008d5bb3  53                   push ebx
// 008d5bb4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008d5bb8  55                   push ebp
// 008d5bb9  56                   push esi
// 008d5bba  57                   push edi
// 008d5bbb  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008d5bbf  8bf1                 mov esi, ecx
// 008d5bc1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d5bc5  8b16                 mov edx, dword ptr [esi]
// 008d5bc7  8b5208               mov edx, dword ptr [edx + 8]
// 008d5bca  53                   push ebx
// 008d5bcb  83ec10               sub esp, 0x10
// 008d5bce  8bc4                 mov eax, esp
// 008d5bd0  8908                 mov dword ptr [eax], ecx
// 008d5bd2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008d5bd6  894804               mov dword ptr [eax + 4], ecx
// 008d5bd9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008d5bdd  894808               mov dword ptr [eax + 8], ecx
// 008d5be0  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008d5be4  89480c               mov dword ptr [eax + 0xc], ecx
// 008d5be7  57                   push edi
// 008d5be8  8bce                 mov ecx, esi
// 008d5bea  ffd2                 call edx
// 008d5bec  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d5bef  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d5bf5  8b2f                 mov ebp, dword ptr [edi]
// 008d5bf7  8b11                 mov edx, dword ptr [ecx]
// 008d5bf9  53                   push ebx
// 008d5bfa  83ec10               sub esp, 0x10
// 008d5bfd  8bc4                 mov eax, esp
// 008d5bff  8928                 mov dword ptr [eax], ebp
// 008d5c01  8b6f04               mov ebp, dword ptr [edi + 4]
// 008d5c04  896804               mov dword ptr [eax + 4], ebp
// 008d5c07  8b6f08               mov ebp, dword ptr [edi + 8]
// 008d5c0a  896808               mov dword ptr [eax + 8], ebp
// 008d5c0d  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 008d5c10  89680c               mov dword ptr [eax + 0xc], ebp
// 008d5c13  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008d5c17  8b420c               mov eax, dword ptr [edx + 0xc]
// 008d5c1a  55                   push ebp
// 008d5c1b  ffd0                 call eax
// 008d5c1d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d5c21  8b16                 mov edx, dword ptr [esi]
// 008d5c23  8b520c               mov edx, dword ptr [edx + 0xc]
// 008d5c26  53                   push ebx
// 008d5c27  83ec10               sub esp, 0x10
// 008d5c2a  8bc4                 mov eax, esp
// 008d5c2c  8908                 mov dword ptr [eax], ecx
// 008d5c2e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008d5c32  894804               mov dword ptr [eax + 4], ecx
// 008d5c35  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008d5c39  894808               mov dword ptr [eax + 8], ecx
// 008d5c3c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008d5c40  89480c               mov dword ptr [eax + 0xc], ecx
// 008d5c43  8d442424             lea eax, [esp + 0x24]
// 008d5c47  50                   push eax
// 008d5c48  8bce                 mov ecx, esi
// 008d5c4a  ffd2                 call edx
// 008d5c4c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d5c4f  83783800             cmp dword ptr [eax + 0x38], 0
// 008d5c53  7570                 jne 0x8d5cc5
// 008d5c55  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d5c5b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008d5c5f  8b11                 mov edx, dword ptr [ecx]
// 008d5c61  53                   push ebx
// 008d5c62  83ec10               sub esp, 0x10
// 008d5c65  8bc4                 mov eax, esp
// 008d5c67  8928                 mov dword ptr [eax], ebp
// 008d5c69  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008d5c6d  896804               mov dword ptr [eax + 4], ebp
// 008d5c70  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008d5c74  896808               mov dword ptr [eax + 8], ebp
// 008d5c77  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008d5c7b  89680c               mov dword ptr [eax + 0xc], ebp
// 008d5c7e  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008d5c82  8b4210               mov eax, dword ptr [edx + 0x10]
// 008d5c85  55                   push ebp
// 008d5c86  ffd0                 call eax
// 008d5c88  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008d5c8b  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008d5c91  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 008d5c97  83f9ff               cmp ecx, -1
// 008d5c9a  7506                 jne 0x8d5ca2
// 008d5c9c  8b8854010000         mov ecx, dword ptr [eax + 0x154]
// 008d5ca2  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008d5ca8  83faff               cmp edx, -1
// 008d5cab  7508                 jne 0x8d5cb5
// 008d5cad  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 008d5cb3  eb02                 jmp 0x8d5cb7
// 008d5cb5  8bc2                 mov eax, edx
// 008d5cb7  51                   push ecx
// 008d5cb8  50                   push eax
// 008d5cb9  8d542418             lea edx, [esp + 0x18]
// 008d5cbd  52                   push edx
// 008d5cbe  8bcd                 mov ecx, ebp
// 008d5cc0  e833e9f1ff           call 0x7f45f8
// 008d5cc5  8b761c               mov esi, dword ptr [esi + 0x1c]
// 008d5cc8  837e3801             cmp dword ptr [esi + 0x38], 1
// 008d5ccc  7561                 jne 0x8d5d2f
// 008d5cce  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 008d5cd4  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 008d5cda  83f9ff               cmp ecx, -1
// 008d5cdd  7506                 jne 0x8d5ce5
// 008d5cdf  8b8854010000         mov ecx, dword ptr [eax + 0x154]
// 008d5ce5  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008d5ceb  83faff               cmp edx, -1
// 008d5cee  7508                 jne 0x8d5cf8
// 008d5cf0  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 008d5cf6  eb02                 jmp 0x8d5cfa
// 008d5cf8  8bc2                 mov eax, edx
// 008d5cfa  51                   push ecx
// 008d5cfb  50                   push eax
// 008d5cfc  8b03                 mov eax, dword ptr [ebx]
// 008d5cfe  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d5d01  8bcb                 mov ecx, ebx
// 008d5d03  ffd2                 call edx
// 008d5d05  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d5d09  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d5d0d  50                   push eax
// 008d5d0e  83ec10               sub esp, 0x10
// 008d5d11  8bc4                 mov eax, esp
// 008d5d13  8908                 mov dword ptr [eax], ecx
// 008d5d15  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008d5d19  895004               mov dword ptr [eax + 4], edx
// 008d5d1c  8b542438             mov edx, dword ptr [esp + 0x38]
// 008d5d20  894808               mov dword ptr [eax + 8], ecx
// 008d5d23  55                   push ebp
// 008d5d24  89500c               mov dword ptr [eax + 0xc], edx
// 008d5d27  e894eaffff           call 0x8d47c0
// 008d5d2c  83c420               add esp, 0x20
// 008d5d2f  8bc7                 mov eax, edi
// 008d5d31  5f                   pop edi
// 008d5d32  5e                   pop esi
// 008d5d33  5d                   pop ebp
// 008d5d34  5b                   pop ebx
// 008d5d35  83c410               add esp, 0x10
// 008d5d38  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
