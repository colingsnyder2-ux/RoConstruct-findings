// roc 2008-06 007957f0  unit: PAVCXTPRibbonGroup::?$CArray  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007957f0
//
// 007957f0  56                   push esi
// 007957f1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007957f5  57                   push edi
// 007957f6  8bf9                 mov edi, ecx
// 007957f8  897e30               mov dword ptr [esi + 0x30], edi
// 007957fb  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 007957fe  e85de4ffff           call 0x793c60
// 00795803  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00795807  89465c               mov dword ptr [esi + 0x5c], eax
// 0079580a  8b4734               mov eax, dword ptr [edi + 0x34]
// 0079580d  8b888c000000         mov ecx, dword ptr [eax + 0x8c]
// 00795813  6a01                 push 1
// 00795815  56                   push esi
// 00795816  894e58               mov dword ptr [esi + 0x58], ecx
// 00795819  52                   push edx
// 0079581a  8d4f20               lea ecx, [edi + 0x20]
// 0079581d  e8de63feff           call 0x77bc00
// 00795822  8bcf                 mov ecx, edi
// 00795824  e867f1ffff           call 0x794990
// 00795829  8b06                 mov eax, dword ptr [esi]
// 0079582b  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0079582e  8bce                 mov ecx, esi
// 00795830  ffd2                 call edx
// 00795832  5f                   pop edi
// 00795833  8bc6                 mov eax, esi
// 00795835  5e                   pop esi
// 00795836  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonGroups.cpp (function ?InsertAt@CXTPRibbonGroups@@QAEPAVCXTPRibbonGroup@@HPAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroups.cpp
