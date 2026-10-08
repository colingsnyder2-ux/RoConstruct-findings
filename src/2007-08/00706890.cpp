// from server: 100% by auto
// roc 2007-08 00706890  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 437 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00706890
//
// 00706890  83ec10               sub esp, 0x10
// 00706893  53                   push ebx
// 00706894  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00706898  55                   push ebp
// 00706899  56                   push esi
// 0070689a  57                   push edi
// 0070689b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0070689f  8bf1                 mov esi, ecx
// 007068a1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007068a5  8b16                 mov edx, dword ptr [esi]
// 007068a7  8b5208               mov edx, dword ptr [edx + 8]
// 007068aa  57                   push edi
// 007068ab  83ec10               sub esp, 0x10
// 007068ae  8bc4                 mov eax, esp
// 007068b0  8908                 mov dword ptr [eax], ecx
// 007068b2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007068b6  894804               mov dword ptr [eax + 4], ecx
// 007068b9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007068bd  894808               mov dword ptr [eax + 8], ecx
// 007068c0  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007068c4  89480c               mov dword ptr [eax + 0xc], ecx
// 007068c7  53                   push ebx
// 007068c8  8bce                 mov ecx, esi
// 007068ca  ffd2                 call edx
// 007068cc  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007068cf  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 007068d5  8b2b                 mov ebp, dword ptr [ebx]
// 007068d7  8b11                 mov edx, dword ptr [ecx]
// 007068d9  57                   push edi
// 007068da  83ec10               sub esp, 0x10
// 007068dd  8bc4                 mov eax, esp
// 007068df  8928                 mov dword ptr [eax], ebp
// 007068e1  8b6b04               mov ebp, dword ptr [ebx + 4]
// 007068e4  896804               mov dword ptr [eax + 4], ebp
// 007068e7  8b6b08               mov ebp, dword ptr [ebx + 8]
// 007068ea  896808               mov dword ptr [eax + 8], ebp
// 007068ed  8b6b0c               mov ebp, dword ptr [ebx + 0xc]
// 007068f0  89680c               mov dword ptr [eax + 0xc], ebp
// 007068f3  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 007068f7  8b420c               mov eax, dword ptr [edx + 0xc]
// 007068fa  55                   push ebp
// 007068fb  ffd0                 call eax
// 007068fd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00706901  8b16                 mov edx, dword ptr [esi]
// 00706903  8b520c               mov edx, dword ptr [edx + 0xc]
// 00706906  57                   push edi
// 00706907  83ec10               sub esp, 0x10
// 0070690a  8bc4                 mov eax, esp
// 0070690c  8908                 mov dword ptr [eax], ecx
// 0070690e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00706912  894804               mov dword ptr [eax + 4], ecx
// 00706915  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00706919  894808               mov dword ptr [eax + 8], ecx
// 0070691c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00706920  89480c               mov dword ptr [eax + 0xc], ecx
// 00706923  8d442424             lea eax, [esp + 0x24]
// 00706927  50                   push eax
// 00706928  8bce                 mov ecx, esi
// 0070692a  ffd2                 call edx
// 0070692c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0070692f  83783800             cmp dword ptr [eax + 0x38], 0
// 00706933  7568                 jne 0x70699d
// 00706935  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 0070693b  8b10                 mov edx, dword ptr [eax]
// 0070693d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00706941  8b5210               mov edx, dword ptr [edx + 0x10]
// 00706944  57                   push edi
// 00706945  83ec10               sub esp, 0x10
// 00706948  8944243c             mov dword ptr [esp + 0x3c], eax
// 0070694c  8bc4                 mov eax, esp
// 0070694e  8908                 mov dword ptr [eax], ecx
// 00706950  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00706954  894804               mov dword ptr [eax + 4], ecx
// 00706957  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0070695b  894808               mov dword ptr [eax + 8], ecx
// 0070695e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00706962  89480c               mov dword ptr [eax + 0xc], ecx
// 00706965  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00706969  55                   push ebp
// 0070696a  ffd2                 call edx
// 0070696c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0070696f  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00706975  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00706978  83f9ff               cmp ecx, -1
// 0070697b  7503                 jne 0x706980
// 0070697d  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00706980  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00706983  83faff               cmp edx, -1
// 00706986  7505                 jne 0x70698d
// 00706988  8b4048               mov eax, dword ptr [eax + 0x48]
// 0070698b  eb02                 jmp 0x70698f
// 0070698d  8bc2                 mov eax, edx
// 0070698f  51                   push ecx
// 00706990  50                   push eax
// 00706991  8d4c2418             lea ecx, [esp + 0x18]
// 00706995  51                   push ecx
// 00706996  8bcd                 mov ecx, ebp
// 00706998  e80d9ff2ff           call 0x6308aa
// 0070699d  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007069a0  83783801             cmp dword ptr [eax + 0x38], 1
// 007069a4  0f858f000000         jne 0x706a39
// 007069aa  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007069b0  8b10                 mov edx, dword ptr [eax]
// 007069b2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007069b6  8b5210               mov edx, dword ptr [edx + 0x10]
// 007069b9  57                   push edi
// 007069ba  83ec10               sub esp, 0x10
// 007069bd  8944243c             mov dword ptr [esp + 0x3c], eax
// 007069c1  8bc4                 mov eax, esp
// 007069c3  8908                 mov dword ptr [eax], ecx
// 007069c5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007069c9  894804               mov dword ptr [eax + 4], ecx
// 007069cc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007069d0  894808               mov dword ptr [eax + 8], ecx
// 007069d3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007069d7  89480c               mov dword ptr [eax + 0xc], ecx
// 007069da  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007069de  55                   push ebp
// 007069df  ffd2                 call edx
// 007069e1  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007069e4  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007069ea  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 007069ed  83f9ff               cmp ecx, -1
// 007069f0  7503                 jne 0x7069f5
// 007069f2  8b4848               mov ecx, dword ptr [eax + 0x48]
// 007069f5  8b504c               mov edx, dword ptr [eax + 0x4c]
// 007069f8  83faff               cmp edx, -1
// 007069fb  7505                 jne 0x706a02
// 007069fd  8b4048               mov eax, dword ptr [eax + 0x48]
// 00706a00  eb02                 jmp 0x706a04
// 00706a02  8bc2                 mov eax, edx
// 00706a04  8b17                 mov edx, dword ptr [edi]
// 00706a06  51                   push ecx
// 00706a07  50                   push eax
// 00706a08  8b4248               mov eax, dword ptr [edx + 0x48]
// 00706a0b  8bcf                 mov ecx, edi
// 00706a0d  ffd0                 call eax
// 00706a0f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00706a13  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00706a17  50                   push eax
// 00706a18  83ec10               sub esp, 0x10
// 00706a1b  8bc4                 mov eax, esp
// 00706a1d  8908                 mov dword ptr [eax], ecx
// 00706a1f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00706a23  895004               mov dword ptr [eax + 4], edx
// 00706a26  8b542438             mov edx, dword ptr [esp + 0x38]
// 00706a2a  894808               mov dword ptr [eax + 8], ecx
// 00706a2d  55                   push ebp
// 00706a2e  89500c               mov dword ptr [eax + 0xc], edx
// 00706a31  e88ad1ffff           call 0x703bc0
// 00706a36  83c420               add esp, 0x20
// 00706a39  5f                   pop edi
// 00706a3a  5e                   pop esi
// 00706a3b  5d                   pop ebp
// 00706a3c  8bc3                 mov eax, ebx
// 00706a3e  5b                   pop ebx
// 00706a3f  83c410               add esp, 0x10
// 00706a42  c21c00               ret 0x1c
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetFlat@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
