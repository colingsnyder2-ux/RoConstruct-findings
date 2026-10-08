// from server: 100% by auto
// roc 2008-06 00781bf0  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00781bf0
//
// 00781bf0  83ec10               sub esp, 0x10
// 00781bf3  53                   push ebx
// 00781bf4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00781bf8  55                   push ebp
// 00781bf9  56                   push esi
// 00781bfa  57                   push edi
// 00781bfb  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00781bff  8bf1                 mov esi, ecx
// 00781c01  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00781c05  8b16                 mov edx, dword ptr [esi]
// 00781c07  8b5208               mov edx, dword ptr [edx + 8]
// 00781c0a  53                   push ebx
// 00781c0b  83ec10               sub esp, 0x10
// 00781c0e  8bc4                 mov eax, esp
// 00781c10  8908                 mov dword ptr [eax], ecx
// 00781c12  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00781c16  894804               mov dword ptr [eax + 4], ecx
// 00781c19  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00781c1d  894808               mov dword ptr [eax + 8], ecx
// 00781c20  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00781c24  89480c               mov dword ptr [eax + 0xc], ecx
// 00781c27  57                   push edi
// 00781c28  8bce                 mov ecx, esi
// 00781c2a  ffd2                 call edx
// 00781c2c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00781c2f  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00781c35  8b2f                 mov ebp, dword ptr [edi]
// 00781c37  8b11                 mov edx, dword ptr [ecx]
// 00781c39  53                   push ebx
// 00781c3a  83ec10               sub esp, 0x10
// 00781c3d  8bc4                 mov eax, esp
// 00781c3f  8928                 mov dword ptr [eax], ebp
// 00781c41  8b6f04               mov ebp, dword ptr [edi + 4]
// 00781c44  896804               mov dword ptr [eax + 4], ebp
// 00781c47  8b6f08               mov ebp, dword ptr [edi + 8]
// 00781c4a  896808               mov dword ptr [eax + 8], ebp
// 00781c4d  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00781c50  89680c               mov dword ptr [eax + 0xc], ebp
// 00781c53  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00781c57  8b420c               mov eax, dword ptr [edx + 0xc]
// 00781c5a  55                   push ebp
// 00781c5b  ffd0                 call eax
// 00781c5d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00781c61  8b16                 mov edx, dword ptr [esi]
// 00781c63  8b520c               mov edx, dword ptr [edx + 0xc]
// 00781c66  53                   push ebx
// 00781c67  83ec10               sub esp, 0x10
// 00781c6a  8bc4                 mov eax, esp
// 00781c6c  8908                 mov dword ptr [eax], ecx
// 00781c6e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00781c72  894804               mov dword ptr [eax + 4], ecx
// 00781c75  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00781c79  894808               mov dword ptr [eax + 8], ecx
// 00781c7c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00781c80  89480c               mov dword ptr [eax + 0xc], ecx
// 00781c83  8d442424             lea eax, [esp + 0x24]
// 00781c87  50                   push eax
// 00781c88  8bce                 mov ecx, esi
// 00781c8a  ffd2                 call edx
// 00781c8c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00781c8f  83783800             cmp dword ptr [eax + 0x38], 0
// 00781c93  756a                 jne 0x781cff
// 00781c95  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00781c9b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00781c9f  8b11                 mov edx, dword ptr [ecx]
// 00781ca1  53                   push ebx
// 00781ca2  83ec10               sub esp, 0x10
// 00781ca5  8bc4                 mov eax, esp
// 00781ca7  8928                 mov dword ptr [eax], ebp
// 00781ca9  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00781cad  896804               mov dword ptr [eax + 4], ebp
// 00781cb0  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00781cb4  896808               mov dword ptr [eax + 8], ebp
// 00781cb7  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00781cbb  89680c               mov dword ptr [eax + 0xc], ebp
// 00781cbe  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00781cc2  8b4210               mov eax, dword ptr [edx + 0x10]
// 00781cc5  55                   push ebp
// 00781cc6  ffd0                 call eax
// 00781cc8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00781ccb  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00781cd1  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 00781cd7  83f9ff               cmp ecx, -1
// 00781cda  7506                 jne 0x781ce2
// 00781cdc  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 00781ce2  8b5070               mov edx, dword ptr [eax + 0x70]
// 00781ce5  83faff               cmp edx, -1
// 00781ce8  7505                 jne 0x781cef
// 00781cea  8b406c               mov eax, dword ptr [eax + 0x6c]
// 00781ced  eb02                 jmp 0x781cf1
// 00781cef  8bc2                 mov eax, edx
// 00781cf1  51                   push ecx
// 00781cf2  50                   push eax
// 00781cf3  8d542418             lea edx, [esp + 0x18]
// 00781cf7  52                   push edx
// 00781cf8  8bcd                 mov ecx, ebp
// 00781cfa  e859f6f1ff           call 0x6a1358
// 00781cff  8b761c               mov esi, dword ptr [esi + 0x1c]
// 00781d02  837e3801             cmp dword ptr [esi + 0x38], 1
// 00781d06  755b                 jne 0x781d63
// 00781d08  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 00781d0e  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 00781d14  83f9ff               cmp ecx, -1
// 00781d17  7506                 jne 0x781d1f
// 00781d19  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 00781d1f  8b5070               mov edx, dword ptr [eax + 0x70]
// 00781d22  83faff               cmp edx, -1
// 00781d25  7505                 jne 0x781d2c
// 00781d27  8b406c               mov eax, dword ptr [eax + 0x6c]
// 00781d2a  eb02                 jmp 0x781d2e
// 00781d2c  8bc2                 mov eax, edx
// 00781d2e  51                   push ecx
// 00781d2f  50                   push eax
// 00781d30  8b03                 mov eax, dword ptr [ebx]
// 00781d32  8b5048               mov edx, dword ptr [eax + 0x48]
// 00781d35  8bcb                 mov ecx, ebx
// 00781d37  ffd2                 call edx
// 00781d39  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00781d3d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00781d41  50                   push eax
// 00781d42  83ec10               sub esp, 0x10
// 00781d45  8bc4                 mov eax, esp
// 00781d47  8908                 mov dword ptr [eax], ecx
// 00781d49  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00781d4d  895004               mov dword ptr [eax + 4], edx
// 00781d50  8b542438             mov edx, dword ptr [esp + 0x38]
// 00781d54  894808               mov dword ptr [eax + 8], ecx
// 00781d57  55                   push ebp
// 00781d58  89500c               mov dword ptr [eax + 0xc], edx
// 00781d5b  e840f8ffff           call 0x7815a0
// 00781d60  83c420               add esp, 0x20
// 00781d63  8bc7                 mov eax, edi
// 00781d65  5f                   pop edi
// 00781d66  5e                   pop esi
// 00781d67  5d                   pop ebp
// 00781d68  5b                   pop ebx
// 00781d69  83c410               add esp, 0x10
// 00781d6c  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetVisualStudio@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
