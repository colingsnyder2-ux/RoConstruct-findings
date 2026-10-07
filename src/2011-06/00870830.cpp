// roc 2011-06 00870830  unit: CXTColorDialog  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00870830
//
// 00870830  53                   push ebx
// 00870831  56                   push esi
// 00870832  57                   push edi
// 00870833  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00870837  57                   push edi
// 00870838  e8dbc31500           call 0x9ccc18
// 0087083d  e8fef60000           call 0x87ff40
// 00870842  8bd8                 mov ebx, eax
// 00870844  8b33                 mov esi, dword ptr [ebx]
// 00870846  8bcf                 mov ecx, edi
// 00870848  83c61c               add esi, 0x1c
// 0087084b  e8c2c31500           call 0x9ccc12
// 00870850  8b400c               mov eax, dword ptr [eax + 0xc]
// 00870853  8b16                 mov edx, dword ptr [esi]
// 00870855  50                   push eax
// 00870856  8bcb                 mov ecx, ebx
// 00870858  ffd2                 call edx
// 0087085a  8bf0                 mov esi, eax
// 0087085c  85f6                 test esi, esi
// 0087085e  7417                 je 0x870877
// 00870860  8bcf                 mov ecx, edi
// 00870862  e8abc31500           call 0x9ccc12
// 00870867  8bcf                 mov ecx, edi
// 00870869  89700c               mov dword ptr [eax + 0xc], esi
// 0087086c  e8a1c31500           call 0x9ccc12
// 00870871  83c004               add eax, 4
// 00870874  830801               or dword ptr [eax], 1
// 00870877  5f                   pop edi
// 00870878  5e                   pop esi
// 00870879  5b                   pop ebx
// 0087087a  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorDialog.cpp (function ?AddPage@CXTPColorDialog@@IAEXPAVCPropertyPage@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorDialog.cpp
