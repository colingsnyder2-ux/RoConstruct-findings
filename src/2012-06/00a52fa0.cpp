// roc 2012-06 00a52fa0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 395 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a52fa0
//
// 00a52fa0  83ec10               sub esp, 0x10
// 00a52fa3  53                   push ebx
// 00a52fa4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a52fa8  55                   push ebp
// 00a52fa9  56                   push esi
// 00a52faa  57                   push edi
// 00a52fab  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a52faf  8bf1                 mov esi, ecx
// 00a52fb1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a52fb5  8b16                 mov edx, dword ptr [esi]
// 00a52fb7  8b5208               mov edx, dword ptr [edx + 8]
// 00a52fba  53                   push ebx
// 00a52fbb  83ec10               sub esp, 0x10
// 00a52fbe  8bc4                 mov eax, esp
// 00a52fc0  8908                 mov dword ptr [eax], ecx
// 00a52fc2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a52fc6  894804               mov dword ptr [eax + 4], ecx
// 00a52fc9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a52fcd  894808               mov dword ptr [eax + 8], ecx
// 00a52fd0  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a52fd4  89480c               mov dword ptr [eax + 0xc], ecx
// 00a52fd7  57                   push edi
// 00a52fd8  8bce                 mov ecx, esi
// 00a52fda  ffd2                 call edx
// 00a52fdc  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a52fdf  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00a52fe5  8b2f                 mov ebp, dword ptr [edi]
// 00a52fe7  8b11                 mov edx, dword ptr [ecx]
// 00a52fe9  53                   push ebx
// 00a52fea  83ec10               sub esp, 0x10
// 00a52fed  8bc4                 mov eax, esp
// 00a52fef  8928                 mov dword ptr [eax], ebp
// 00a52ff1  8b6f04               mov ebp, dword ptr [edi + 4]
// 00a52ff4  896804               mov dword ptr [eax + 4], ebp
// 00a52ff7  8b6f08               mov ebp, dword ptr [edi + 8]
// 00a52ffa  896808               mov dword ptr [eax + 8], ebp
// 00a52ffd  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00a53000  89680c               mov dword ptr [eax + 0xc], ebp
// 00a53003  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00a53007  8b420c               mov eax, dword ptr [edx + 0xc]
// 00a5300a  55                   push ebp
// 00a5300b  ffd0                 call eax
// 00a5300d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a53011  8b16                 mov edx, dword ptr [esi]
// 00a53013  8b520c               mov edx, dword ptr [edx + 0xc]
// 00a53016  53                   push ebx
// 00a53017  83ec10               sub esp, 0x10
// 00a5301a  8bc4                 mov eax, esp
// 00a5301c  8908                 mov dword ptr [eax], ecx
// 00a5301e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a53022  894804               mov dword ptr [eax + 4], ecx
// 00a53025  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a53029  894808               mov dword ptr [eax + 8], ecx
// 00a5302c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a53030  89480c               mov dword ptr [eax + 0xc], ecx
// 00a53033  8d442424             lea eax, [esp + 0x24]
// 00a53037  50                   push eax
// 00a53038  8bce                 mov ecx, esi
// 00a5303a  ffd2                 call edx
// 00a5303c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a5303f  83783800             cmp dword ptr [eax + 0x38], 0
// 00a53043  7570                 jne 0xa530b5
// 00a53045  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00a5304b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00a5304f  8b11                 mov edx, dword ptr [ecx]
// 00a53051  53                   push ebx
// 00a53052  83ec10               sub esp, 0x10
// 00a53055  8bc4                 mov eax, esp
// 00a53057  8928                 mov dword ptr [eax], ebp
// 00a53059  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00a5305d  896804               mov dword ptr [eax + 4], ebp
// 00a53060  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00a53064  896808               mov dword ptr [eax + 8], ebp
// 00a53067  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00a5306b  89680c               mov dword ptr [eax + 0xc], ebp
// 00a5306e  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00a53072  8b4210               mov eax, dword ptr [edx + 0x10]
// 00a53075  55                   push ebp
// 00a53076  ffd0                 call eax
// 00a53078  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00a5307b  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00a53081  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 00a53087  83f9ff               cmp ecx, -1
// 00a5308a  7506                 jne 0xa53092
// 00a5308c  8b8854010000         mov ecx, dword ptr [eax + 0x154]
// 00a53092  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00a53098  83faff               cmp edx, -1
// 00a5309b  7508                 jne 0xa530a5
// 00a5309d  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00a530a3  eb02                 jmp 0xa530a7
// 00a530a5  8bc2                 mov eax, edx
// 00a530a7  51                   push ecx
// 00a530a8  50                   push eax
// 00a530a9  8d542418             lea edx, [esp + 0x18]
// 00a530ad  52                   push edx
// 00a530ae  8bcd                 mov ecx, ebp
// 00a530b0  e8f1fdf2ff           call 0x982ea6
// 00a530b5  8b761c               mov esi, dword ptr [esi + 0x1c]
// 00a530b8  837e3801             cmp dword ptr [esi + 0x38], 1
// 00a530bc  7561                 jne 0xa5311f
// 00a530be  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 00a530c4  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 00a530ca  83f9ff               cmp ecx, -1
// 00a530cd  7506                 jne 0xa530d5
// 00a530cf  8b8854010000         mov ecx, dword ptr [eax + 0x154]
// 00a530d5  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00a530db  83faff               cmp edx, -1
// 00a530de  7508                 jne 0xa530e8
// 00a530e0  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00a530e6  eb02                 jmp 0xa530ea
// 00a530e8  8bc2                 mov eax, edx
// 00a530ea  51                   push ecx
// 00a530eb  50                   push eax
// 00a530ec  8b03                 mov eax, dword ptr [ebx]
// 00a530ee  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a530f1  8bcb                 mov ecx, ebx
// 00a530f3  ffd2                 call edx
// 00a530f5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a530f9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a530fd  50                   push eax
// 00a530fe  83ec10               sub esp, 0x10
// 00a53101  8bc4                 mov eax, esp
// 00a53103  8908                 mov dword ptr [eax], ecx
// 00a53105  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a53109  895004               mov dword ptr [eax + 4], edx
// 00a5310c  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a53110  894808               mov dword ptr [eax + 8], ecx
// 00a53113  55                   push ebp
// 00a53114  89500c               mov dword ptr [eax + 0xc], edx
// 00a53117  e8a4eaffff           call 0xa51bc0
// 00a5311c  83c420               add esp, 0x20
// 00a5311f  8bc7                 mov eax, edi
// 00a53121  5f                   pop edi
// 00a53122  5e                   pop esi
// 00a53123  5d                   pop ebp
// 00a53124  5b                   pop ebx
// 00a53125  83c410               add esp, 0x10
// 00a53128  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
