// roc 2010-06 0089d180  unit: CXTPTabPaintManager::CColorSetOffice2003  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089d180
//
// 0089d180  53                   push ebx
// 0089d181  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0089d185  55                   push ebp
// 0089d186  56                   push esi
// 0089d187  57                   push edi
// 0089d188  8bf9                 mov edi, ecx
// 0089d18a  8b07                 mov eax, dword ptr [edi]
// 0089d18c  8b5024               mov edx, dword ptr [eax + 0x24]
// 0089d18f  53                   push ebx
// 0089d190  ffd2                 call edx
// 0089d192  8b6b60               mov ebp, dword ptr [ebx + 0x60]
// 0089d195  8bf0                 mov esi, eax
// 0089d197  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 0089d19a  7513                 jne 0x89d1af
// 0089d19c  8bb794000000         mov esi, dword ptr [edi + 0x94]
// 0089d1a2  83feff               cmp esi, -1
// 0089d1a5  751e                 jne 0x89d1c5
// 0089d1a7  8bb790000000         mov esi, dword ptr [edi + 0x90]
// 0089d1ad  eb16                 jmp 0x89d1c5
// 0089d1af  395d08               cmp dword ptr [ebp + 8], ebx
// 0089d1b2  7511                 jne 0x89d1c5
// 0089d1b4  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 0089d1ba  83feff               cmp esi, -1
// 0089d1bd  7506                 jne 0x89d1c5
// 0089d1bf  8bb784000000         mov esi, dword ptr [edi + 0x84]
// 0089d1c5  e85669f4ff           call 0x7e3b20
// 0089d1ca  8bd8                 mov ebx, eax
// 0089d1cc  8b4500               mov eax, dword ptr [ebp]
// 0089d1cf  8b5048               mov edx, dword ptr [eax + 0x48]
// 0089d1d2  8bcd                 mov ecx, ebp
// 0089d1d4  ffd2                 call edx
// 0089d1d6  50                   push eax
// 0089d1d7  56                   push esi
// 0089d1d8  682c010000           push 0x12c
// 0089d1dd  68ffffff00           push 0xffffff
// 0089d1e2  56                   push esi
// 0089d1e3  8bcb                 mov ecx, ebx
// 0089d1e5  e81660f4ff           call 0x7e3200
// 0089d1ea  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089d1ee  8b542424             mov edx, dword ptr [esp + 0x24]
// 0089d1f2  50                   push eax
// 0089d1f3  83ec10               sub esp, 0x10
// 0089d1f6  8bc4                 mov eax, esp
// 0089d1f8  8908                 mov dword ptr [eax], ecx
// 0089d1fa  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089d1fe  895004               mov dword ptr [eax + 4], edx
// 0089d201  8b542440             mov edx, dword ptr [esp + 0x40]
// 0089d205  894808               mov dword ptr [eax + 8], ecx
// 0089d208  89500c               mov dword ptr [eax + 0xc], edx
// 0089d20b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0089d20f  50                   push eax
// 0089d210  8bcf                 mov ecx, edi
// 0089d212  e879f0ffff           call 0x89c290
// 0089d217  5f                   pop edi
// 0089d218  8bc6                 mov eax, esi
// 0089d21a  5e                   pop esi
// 0089d21b  5d                   pop ebp
// 0089d21c  5b                   pop ebx
// 0089d21d  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CColorSetOffice2003@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
