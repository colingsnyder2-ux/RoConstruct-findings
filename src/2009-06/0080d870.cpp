// roc 2009-06 0080d870  unit: CXTPTabPaintManager::CColorSetOffice2003  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080d870
//
// 0080d870  53                   push ebx
// 0080d871  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0080d875  55                   push ebp
// 0080d876  56                   push esi
// 0080d877  57                   push edi
// 0080d878  8bf9                 mov edi, ecx
// 0080d87a  8b07                 mov eax, dword ptr [edi]
// 0080d87c  8b5024               mov edx, dword ptr [eax + 0x24]
// 0080d87f  53                   push ebx
// 0080d880  ffd2                 call edx
// 0080d882  8b6b60               mov ebp, dword ptr [ebx + 0x60]
// 0080d885  8bf0                 mov esi, eax
// 0080d887  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 0080d88a  7513                 jne 0x80d89f
// 0080d88c  8bb794000000         mov esi, dword ptr [edi + 0x94]
// 0080d892  83feff               cmp esi, -1
// 0080d895  751e                 jne 0x80d8b5
// 0080d897  8bb790000000         mov esi, dword ptr [edi + 0x90]
// 0080d89d  eb16                 jmp 0x80d8b5
// 0080d89f  395d08               cmp dword ptr [ebp + 8], ebx
// 0080d8a2  7511                 jne 0x80d8b5
// 0080d8a4  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 0080d8aa  83feff               cmp esi, -1
// 0080d8ad  7506                 jne 0x80d8b5
// 0080d8af  8bb784000000         mov esi, dword ptr [edi + 0x84]
// 0080d8b5  e86672f4ff           call 0x754b20
// 0080d8ba  8bd8                 mov ebx, eax
// 0080d8bc  8b4500               mov eax, dword ptr [ebp]
// 0080d8bf  8b5048               mov edx, dword ptr [eax + 0x48]
// 0080d8c2  8bcd                 mov ecx, ebp
// 0080d8c4  ffd2                 call edx
// 0080d8c6  50                   push eax
// 0080d8c7  56                   push esi
// 0080d8c8  682c010000           push 0x12c
// 0080d8cd  68ffffff00           push 0xffffff
// 0080d8d2  56                   push esi
// 0080d8d3  8bcb                 mov ecx, ebx
// 0080d8d5  e81669f4ff           call 0x7541f0
// 0080d8da  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080d8de  8b542424             mov edx, dword ptr [esp + 0x24]
// 0080d8e2  50                   push eax
// 0080d8e3  83ec10               sub esp, 0x10
// 0080d8e6  8bc4                 mov eax, esp
// 0080d8e8  8908                 mov dword ptr [eax], ecx
// 0080d8ea  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0080d8ee  895004               mov dword ptr [eax + 4], edx
// 0080d8f1  8b542440             mov edx, dword ptr [esp + 0x40]
// 0080d8f5  894808               mov dword ptr [eax + 8], ecx
// 0080d8f8  89500c               mov dword ptr [eax + 0xc], edx
// 0080d8fb  8b442430             mov eax, dword ptr [esp + 0x30]
// 0080d8ff  50                   push eax
// 0080d900  8bcf                 mov ecx, edi
// 0080d902  e879f0ffff           call 0x80c980
// 0080d907  5f                   pop edi
// 0080d908  8bc6                 mov eax, esi
// 0080d90a  5e                   pop esi
// 0080d90b  5d                   pop ebp
// 0080d90c  5b                   pop ebx
// 0080d90d  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CColorSetOffice2003@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
