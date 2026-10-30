// roc 2009-06 007fde00  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007fde00
//
// 007fde00  53                   push ebx
// 007fde01  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007fde05  56                   push esi
// 007fde06  8b7304               mov esi, dword ptr [ebx + 4]
// 007fde09  57                   push edi
// 007fde0a  8bf9                 mov edi, ecx
// 007fde0c  85f6                 test esi, esi
// 007fde0e  7452                 je 0x7fde62
// 007fde10  8b07                 mov eax, dword ptr [edi]
// 007fde12  8b501c               mov edx, dword ptr [eax + 0x1c]
// 007fde15  55                   push ebp
// 007fde16  53                   push ebx
// 007fde17  ffd2                 call edx
// 007fde19  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 007fde1c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007fde20  8b5b5c               mov ebx, dword ptr [ebx + 0x5c]
// 007fde23  41                   inc ecx
// 007fde24  0fafc8               imul ecx, eax
// 007fde27  8d4c0a01             lea ecx, [edx + ecx + 1]
// 007fde2b  8b542424             mov edx, dword ptr [esp + 0x24]
// 007fde2f  8beb                 mov ebp, ebx
// 007fde31  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007fde35  2b6e2c               sub ebp, dword ptr [esi + 0x2c]
// 007fde38  4d                   dec ebp
// 007fde39  0fafe8               imul ebp, eax
// 007fde3c  2bd5                 sub edx, ebp
// 007fde3e  03c1                 add eax, ecx
// 007fde40  3bc2                 cmp eax, edx
// 007fde42  89542424             mov dword ptr [esp + 0x24], edx
// 007fde46  5d                   pop ebp
// 007fde47  7e04                 jle 0x7fde4d
// 007fde49  89442420             mov dword ptr [esp + 0x20], eax
// 007fde4d  4b                   dec ebx
// 007fde4e  395e2c               cmp dword ptr [esi + 0x2c], ebx
// 007fde51  7513                 jne 0x7fde66
// 007fde53  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007fde56  83783802             cmp dword ptr [eax + 0x38], 2
// 007fde5a  740a                 je 0x7fde66
// 007fde5c  ff4c2420             dec dword ptr [esp + 0x20]
// 007fde60  eb04                 jmp 0x7fde66
// 007fde62  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fde66  8b571c               mov edx, dword ptr [edi + 0x1c]
// 007fde69  837a3802             cmp dword ptr [edx + 0x38], 2
// 007fde6d  5f                   pop edi
// 007fde6e  5e                   pop esi
// 007fde6f  5b                   pop ebx
// 007fde70  740d                 je 0x7fde7f
// 007fde72  b801000000           mov eax, 1
// 007fde77  01442408             add dword ptr [esp + 8], eax
// 007fde7b  29442410             sub dword ptr [esp + 0x10], eax
// 007fde7f  8b442404             mov eax, dword ptr [esp + 4]
// 007fde83  8b542408             mov edx, dword ptr [esp + 8]
// 007fde87  8910                 mov dword ptr [eax], edx
// 007fde89  8b542414             mov edx, dword ptr [esp + 0x14]
// 007fde8d  894804               mov dword ptr [eax + 4], ecx
// 007fde90  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007fde94  894808               mov dword ptr [eax + 8], ecx
// 007fde97  89500c               mov dword ptr [eax + 0xc], edx
// 007fde9a  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientRect@CAppearanceSetVisio@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
