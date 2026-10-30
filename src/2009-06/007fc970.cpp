// roc 2009-06 007fc970  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 429 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007fc970
//
// 007fc970  83ec10               sub esp, 0x10
// 007fc973  53                   push ebx
// 007fc974  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007fc978  55                   push ebp
// 007fc979  56                   push esi
// 007fc97a  57                   push edi
// 007fc97b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007fc97f  8bf1                 mov esi, ecx
// 007fc981  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007fc985  8b16                 mov edx, dword ptr [esi]
// 007fc987  8b5208               mov edx, dword ptr [edx + 8]
// 007fc98a  57                   push edi
// 007fc98b  83ec10               sub esp, 0x10
// 007fc98e  8bc4                 mov eax, esp
// 007fc990  8908                 mov dword ptr [eax], ecx
// 007fc992  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007fc996  894804               mov dword ptr [eax + 4], ecx
// 007fc999  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007fc99d  894808               mov dword ptr [eax + 8], ecx
// 007fc9a0  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007fc9a4  89480c               mov dword ptr [eax + 0xc], ecx
// 007fc9a7  53                   push ebx
// 007fc9a8  8bce                 mov ecx, esi
// 007fc9aa  ffd2                 call edx
// 007fc9ac  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007fc9af  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 007fc9b5  8b2b                 mov ebp, dword ptr [ebx]
// 007fc9b7  8b11                 mov edx, dword ptr [ecx]
// 007fc9b9  8b520c               mov edx, dword ptr [edx + 0xc]
// 007fc9bc  57                   push edi
// 007fc9bd  83ec10               sub esp, 0x10
// 007fc9c0  8bc4                 mov eax, esp
// 007fc9c2  8928                 mov dword ptr [eax], ebp
// 007fc9c4  8b6b04               mov ebp, dword ptr [ebx + 4]
// 007fc9c7  896804               mov dword ptr [eax + 4], ebp
// 007fc9ca  8b6b08               mov ebp, dword ptr [ebx + 8]
// 007fc9cd  896808               mov dword ptr [eax + 8], ebp
// 007fc9d0  8b6b0c               mov ebp, dword ptr [ebx + 0xc]
// 007fc9d3  89680c               mov dword ptr [eax + 0xc], ebp
// 007fc9d6  8b442440             mov eax, dword ptr [esp + 0x40]
// 007fc9da  50                   push eax
// 007fc9db  ffd2                 call edx
// 007fc9dd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007fc9e1  8b16                 mov edx, dword ptr [esi]
// 007fc9e3  8b520c               mov edx, dword ptr [edx + 0xc]
// 007fc9e6  57                   push edi
// 007fc9e7  83ec10               sub esp, 0x10
// 007fc9ea  8bc4                 mov eax, esp
// 007fc9ec  8908                 mov dword ptr [eax], ecx
// 007fc9ee  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007fc9f2  894804               mov dword ptr [eax + 4], ecx
// 007fc9f5  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007fc9f9  894808               mov dword ptr [eax + 8], ecx
// 007fc9fc  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007fca00  89480c               mov dword ptr [eax + 0xc], ecx
// 007fca03  8d442424             lea eax, [esp + 0x24]
// 007fca07  50                   push eax
// 007fca08  8bce                 mov ecx, esi
// 007fca0a  ffd2                 call edx
// 007fca0c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007fca0f  83783800             cmp dword ptr [eax + 0x38], 0
// 007fca13  7564                 jne 0x7fca79
// 007fca15  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 007fca1b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007fca1f  8b11                 mov edx, dword ptr [ecx]
// 007fca21  57                   push edi
// 007fca22  83ec10               sub esp, 0x10
// 007fca25  8bc4                 mov eax, esp
// 007fca27  8928                 mov dword ptr [eax], ebp
// 007fca29  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007fca2d  896804               mov dword ptr [eax + 4], ebp
// 007fca30  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007fca34  896808               mov dword ptr [eax + 8], ebp
// 007fca37  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007fca3b  89680c               mov dword ptr [eax + 0xc], ebp
// 007fca3e  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 007fca42  8b4210               mov eax, dword ptr [edx + 0x10]
// 007fca45  55                   push ebp
// 007fca46  ffd0                 call eax
// 007fca48  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 007fca4b  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 007fca51  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 007fca54  83f9ff               cmp ecx, -1
// 007fca57  7503                 jne 0x7fca5c
// 007fca59  8b4848               mov ecx, dword ptr [eax + 0x48]
// 007fca5c  8b504c               mov edx, dword ptr [eax + 0x4c]
// 007fca5f  83faff               cmp edx, -1
// 007fca62  7505                 jne 0x7fca69
// 007fca64  8b4048               mov eax, dword ptr [eax + 0x48]
// 007fca67  eb02                 jmp 0x7fca6b
// 007fca69  8bc2                 mov eax, edx
// 007fca6b  51                   push ecx
// 007fca6c  50                   push eax
// 007fca6d  8d542418             lea edx, [esp + 0x18]
// 007fca71  52                   push edx
// 007fca72  8bcd                 mov ecx, ebp
// 007fca74  e851cdf1ff           call 0x7197ca
// 007fca79  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007fca7c  83783801             cmp dword ptr [eax + 0x38], 1
// 007fca80  0f858b000000         jne 0x7fcb11
// 007fca86  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 007fca8c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007fca90  8b11                 mov edx, dword ptr [ecx]
// 007fca92  57                   push edi
// 007fca93  83ec10               sub esp, 0x10
// 007fca96  8bc4                 mov eax, esp
// 007fca98  8928                 mov dword ptr [eax], ebp
// 007fca9a  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007fca9e  896804               mov dword ptr [eax + 4], ebp
// 007fcaa1  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007fcaa5  896808               mov dword ptr [eax + 8], ebp
// 007fcaa8  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007fcaac  89680c               mov dword ptr [eax + 0xc], ebp
// 007fcaaf  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 007fcab3  8b4210               mov eax, dword ptr [edx + 0x10]
// 007fcab6  55                   push ebp
// 007fcab7  ffd0                 call eax
// 007fcab9  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 007fcabc  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 007fcac2  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 007fcac5  83f9ff               cmp ecx, -1
// 007fcac8  7503                 jne 0x7fcacd
// 007fcaca  8b4848               mov ecx, dword ptr [eax + 0x48]
// 007fcacd  8b504c               mov edx, dword ptr [eax + 0x4c]
// 007fcad0  83faff               cmp edx, -1
// 007fcad3  7505                 jne 0x7fcada
// 007fcad5  8b4048               mov eax, dword ptr [eax + 0x48]
// 007fcad8  eb02                 jmp 0x7fcadc
// 007fcada  8bc2                 mov eax, edx
// 007fcadc  8b17                 mov edx, dword ptr [edi]
// 007fcade  51                   push ecx
// 007fcadf  50                   push eax
// 007fcae0  8b4248               mov eax, dword ptr [edx + 0x48]
// 007fcae3  8bcf                 mov ecx, edi
// 007fcae5  ffd0                 call eax
// 007fcae7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fcaeb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007fcaef  50                   push eax
// 007fcaf0  83ec10               sub esp, 0x10
// 007fcaf3  8bc4                 mov eax, esp
// 007fcaf5  8908                 mov dword ptr [eax], ecx
// 007fcaf7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007fcafb  895004               mov dword ptr [eax + 4], edx
// 007fcafe  8b542438             mov edx, dword ptr [esp + 0x38]
// 007fcb02  894808               mov dword ptr [eax + 8], ecx
// 007fcb05  55                   push ebp
// 007fcb06  89500c               mov dword ptr [eax + 0xc], edx
// 007fcb09  e812d1ffff           call 0x7f9c20
// 007fcb0e  83c420               add esp, 0x20
// 007fcb11  5f                   pop edi
// 007fcb12  5e                   pop esi
// 007fcb13  5d                   pop ebp
// 007fcb14  8bc3                 mov eax, ebx
// 007fcb16  5b                   pop ebx
// 007fcb17  83c410               add esp, 0x10
// 007fcb1a  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetFlat@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
