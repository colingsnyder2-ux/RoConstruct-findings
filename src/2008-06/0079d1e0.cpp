// from server: 100% by auto
// roc 2008-06 0079d1e0  unit: CXTPTabPaintManager::CColorSetOffice2003  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079d1e0
//
// 0079d1e0  53                   push ebx
// 0079d1e1  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0079d1e5  55                   push ebp
// 0079d1e6  56                   push esi
// 0079d1e7  57                   push edi
// 0079d1e8  8bf9                 mov edi, ecx
// 0079d1ea  8b07                 mov eax, dword ptr [edi]
// 0079d1ec  8b5024               mov edx, dword ptr [eax + 0x24]
// 0079d1ef  53                   push ebx
// 0079d1f0  ffd2                 call edx
// 0079d1f2  8b6b60               mov ebp, dword ptr [ebx + 0x60]
// 0079d1f5  8bf0                 mov esi, eax
// 0079d1f7  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 0079d1fa  7513                 jne 0x79d20f
// 0079d1fc  8bb794000000         mov esi, dword ptr [edi + 0x94]
// 0079d202  83feff               cmp esi, -1
// 0079d205  751e                 jne 0x79d225
// 0079d207  8bb790000000         mov esi, dword ptr [edi + 0x90]
// 0079d20d  eb16                 jmp 0x79d225
// 0079d20f  395d08               cmp dword ptr [ebp + 8], ebx
// 0079d212  7511                 jne 0x79d225
// 0079d214  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 0079d21a  83feff               cmp esi, -1
// 0079d21d  7506                 jne 0x79d225
// 0079d21f  8bb784000000         mov esi, dword ptr [edi + 0x84]
// 0079d225  e8162bf4ff           call 0x6dfd40
// 0079d22a  8bd8                 mov ebx, eax
// 0079d22c  8b4500               mov eax, dword ptr [ebp]
// 0079d22f  8b5048               mov edx, dword ptr [eax + 0x48]
// 0079d232  8bcd                 mov ecx, ebp
// 0079d234  ffd2                 call edx
// 0079d236  50                   push eax
// 0079d237  56                   push esi
// 0079d238  682c010000           push 0x12c
// 0079d23d  68ffffff00           push 0xffffff
// 0079d242  56                   push esi
// 0079d243  8bcb                 mov ecx, ebx
// 0079d245  e82622f4ff           call 0x6df470
// 0079d24a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079d24e  8b542424             mov edx, dword ptr [esp + 0x24]
// 0079d252  50                   push eax
// 0079d253  83ec10               sub esp, 0x10
// 0079d256  8bc4                 mov eax, esp
// 0079d258  8908                 mov dword ptr [eax], ecx
// 0079d25a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0079d25e  895004               mov dword ptr [eax + 4], edx
// 0079d261  8b542440             mov edx, dword ptr [esp + 0x40]
// 0079d265  894808               mov dword ptr [eax + 8], ecx
// 0079d268  89500c               mov dword ptr [eax + 0xc], edx
// 0079d26b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0079d26f  50                   push eax
// 0079d270  8bcf                 mov ecx, edi
// 0079d272  e879f0ffff           call 0x79c2f0
// 0079d277  5f                   pop edi
// 0079d278  8bc6                 mov eax, esi
// 0079d27a  5e                   pop esi
// 0079d27b  5d                   pop ebp
// 0079d27c  5b                   pop ebx
// 0079d27d  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CColorSetOffice2003@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
