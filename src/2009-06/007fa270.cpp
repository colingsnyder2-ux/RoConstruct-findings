// roc 2009-06 007fa270  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007fa270
//
// 007fa270  83ec10               sub esp, 0x10
// 007fa273  53                   push ebx
// 007fa274  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007fa278  55                   push ebp
// 007fa279  56                   push esi
// 007fa27a  57                   push edi
// 007fa27b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007fa27f  8bf1                 mov esi, ecx
// 007fa281  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007fa285  8b16                 mov edx, dword ptr [esi]
// 007fa287  8b5208               mov edx, dword ptr [edx + 8]
// 007fa28a  53                   push ebx
// 007fa28b  83ec10               sub esp, 0x10
// 007fa28e  8bc4                 mov eax, esp
// 007fa290  8908                 mov dword ptr [eax], ecx
// 007fa292  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007fa296  894804               mov dword ptr [eax + 4], ecx
// 007fa299  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007fa29d  894808               mov dword ptr [eax + 8], ecx
// 007fa2a0  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007fa2a4  89480c               mov dword ptr [eax + 0xc], ecx
// 007fa2a7  57                   push edi
// 007fa2a8  8bce                 mov ecx, esi
// 007fa2aa  ffd2                 call edx
// 007fa2ac  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007fa2af  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 007fa2b5  8b2f                 mov ebp, dword ptr [edi]
// 007fa2b7  8b11                 mov edx, dword ptr [ecx]
// 007fa2b9  53                   push ebx
// 007fa2ba  83ec10               sub esp, 0x10
// 007fa2bd  8bc4                 mov eax, esp
// 007fa2bf  8928                 mov dword ptr [eax], ebp
// 007fa2c1  8b6f04               mov ebp, dword ptr [edi + 4]
// 007fa2c4  896804               mov dword ptr [eax + 4], ebp
// 007fa2c7  8b6f08               mov ebp, dword ptr [edi + 8]
// 007fa2ca  896808               mov dword ptr [eax + 8], ebp
// 007fa2cd  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 007fa2d0  89680c               mov dword ptr [eax + 0xc], ebp
// 007fa2d3  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 007fa2d7  8b420c               mov eax, dword ptr [edx + 0xc]
// 007fa2da  55                   push ebp
// 007fa2db  ffd0                 call eax
// 007fa2dd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007fa2e1  8b16                 mov edx, dword ptr [esi]
// 007fa2e3  8b520c               mov edx, dword ptr [edx + 0xc]
// 007fa2e6  53                   push ebx
// 007fa2e7  83ec10               sub esp, 0x10
// 007fa2ea  8bc4                 mov eax, esp
// 007fa2ec  8908                 mov dword ptr [eax], ecx
// 007fa2ee  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007fa2f2  894804               mov dword ptr [eax + 4], ecx
// 007fa2f5  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007fa2f9  894808               mov dword ptr [eax + 8], ecx
// 007fa2fc  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007fa300  89480c               mov dword ptr [eax + 0xc], ecx
// 007fa303  8d442424             lea eax, [esp + 0x24]
// 007fa307  50                   push eax
// 007fa308  8bce                 mov ecx, esi
// 007fa30a  ffd2                 call edx
// 007fa30c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007fa30f  83783800             cmp dword ptr [eax + 0x38], 0
// 007fa313  756a                 jne 0x7fa37f
// 007fa315  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 007fa31b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007fa31f  8b11                 mov edx, dword ptr [ecx]
// 007fa321  53                   push ebx
// 007fa322  83ec10               sub esp, 0x10
// 007fa325  8bc4                 mov eax, esp
// 007fa327  8928                 mov dword ptr [eax], ebp
// 007fa329  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007fa32d  896804               mov dword ptr [eax + 4], ebp
// 007fa330  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007fa334  896808               mov dword ptr [eax + 8], ebp
// 007fa337  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007fa33b  89680c               mov dword ptr [eax + 0xc], ebp
// 007fa33e  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 007fa342  8b4210               mov eax, dword ptr [edx + 0x10]
// 007fa345  55                   push ebp
// 007fa346  ffd0                 call eax
// 007fa348  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 007fa34b  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 007fa351  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 007fa357  83f9ff               cmp ecx, -1
// 007fa35a  7506                 jne 0x7fa362
// 007fa35c  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 007fa362  8b5070               mov edx, dword ptr [eax + 0x70]
// 007fa365  83faff               cmp edx, -1
// 007fa368  7505                 jne 0x7fa36f
// 007fa36a  8b406c               mov eax, dword ptr [eax + 0x6c]
// 007fa36d  eb02                 jmp 0x7fa371
// 007fa36f  8bc2                 mov eax, edx
// 007fa371  51                   push ecx
// 007fa372  50                   push eax
// 007fa373  8d542418             lea edx, [esp + 0x18]
// 007fa377  52                   push edx
// 007fa378  8bcd                 mov ecx, ebp
// 007fa37a  e84bf4f1ff           call 0x7197ca
// 007fa37f  8b761c               mov esi, dword ptr [esi + 0x1c]
// 007fa382  837e3801             cmp dword ptr [esi + 0x38], 1
// 007fa386  755b                 jne 0x7fa3e3
// 007fa388  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 007fa38e  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 007fa394  83f9ff               cmp ecx, -1
// 007fa397  7506                 jne 0x7fa39f
// 007fa399  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 007fa39f  8b5070               mov edx, dword ptr [eax + 0x70]
// 007fa3a2  83faff               cmp edx, -1
// 007fa3a5  7505                 jne 0x7fa3ac
// 007fa3a7  8b406c               mov eax, dword ptr [eax + 0x6c]
// 007fa3aa  eb02                 jmp 0x7fa3ae
// 007fa3ac  8bc2                 mov eax, edx
// 007fa3ae  51                   push ecx
// 007fa3af  50                   push eax
// 007fa3b0  8b03                 mov eax, dword ptr [ebx]
// 007fa3b2  8b5048               mov edx, dword ptr [eax + 0x48]
// 007fa3b5  8bcb                 mov ecx, ebx
// 007fa3b7  ffd2                 call edx
// 007fa3b9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fa3bd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007fa3c1  50                   push eax
// 007fa3c2  83ec10               sub esp, 0x10
// 007fa3c5  8bc4                 mov eax, esp
// 007fa3c7  8908                 mov dword ptr [eax], ecx
// 007fa3c9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007fa3cd  895004               mov dword ptr [eax + 4], edx
// 007fa3d0  8b542438             mov edx, dword ptr [esp + 0x38]
// 007fa3d4  894808               mov dword ptr [eax + 8], ecx
// 007fa3d7  55                   push ebp
// 007fa3d8  89500c               mov dword ptr [eax + 0xc], edx
// 007fa3db  e840f8ffff           call 0x7f9c20
// 007fa3e0  83c420               add esp, 0x20
// 007fa3e3  8bc7                 mov eax, edi
// 007fa3e5  5f                   pop edi
// 007fa3e6  5e                   pop esi
// 007fa3e7  5d                   pop ebp
// 007fa3e8  5b                   pop ebx
// 007fa3e9  83c410               add esp, 0x10
// 007fa3ec  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetVisualStudio@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
