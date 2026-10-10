// roc 2008-06 007992d0  unit: CXTPRibbonControlTab  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007992d0
//
// 007992d0  56                   push esi
// 007992d1  8bf1                 mov esi, ecx
// 007992d3  57                   push edi
// 007992d4  8bbe00010000         mov edi, dword ptr [esi + 0x100]
// 007992da  8b87d0000000         mov eax, dword ptr [edi + 0xd0]
// 007992e0  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 007992e6  7529                 jne 0x799311
// 007992e8  c787d0000000ffffffff mov dword ptr [edi + 0xd0], 0xffffffff
// 007992f2  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 007992f9  7416                 je 0x799311
// 007992fb  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00799301  8b11                 mov edx, dword ptr [ecx]
// 00799303  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00799309  6a00                 push 0
// 0079930b  6a01                 push 1
// 0079930d  6a00                 push 0
// 0079930f  ffd0                 call eax
// 00799311  8b17                 mov edx, dword ptr [edi]
// 00799313  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00799319  6a00                 push 0
// 0079931b  6a00                 push 0
// 0079931d  6a01                 push 1
// 0079931f  8bcf                 mov ecx, edi
// 00799321  ffd0                 call eax
// 00799323  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00799327  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 0079932d  51                   push ecx
// 0079932e  52                   push edx
// 0079932f  8bcf                 mov ecx, edi
// 00799331  e89adbf1ff           call 0x6b6ed0
// 00799336  5f                   pop edi
// 00799337  5e                   pop esi
// 00799338  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonControlTab.cpp (function ?ShowPopupBar@CXTPRibbonControlTab@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp
