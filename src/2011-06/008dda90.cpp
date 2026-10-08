// roc 2011-06 008dda90  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008dda90
//
// 008dda90  53                   push ebx
// 008dda91  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008dda95  56                   push esi
// 008dda96  8b7304               mov esi, dword ptr [ebx + 4]
// 008dda99  57                   push edi
// 008dda9a  8bf9                 mov edi, ecx
// 008dda9c  85f6                 test esi, esi
// 008dda9e  7452                 je 0x8ddaf2
// 008ddaa0  8b07                 mov eax, dword ptr [edi]
// 008ddaa2  8b501c               mov edx, dword ptr [eax + 0x1c]
// 008ddaa5  55                   push ebp
// 008ddaa6  53                   push ebx
// 008ddaa7  ffd2                 call edx
// 008ddaa9  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 008ddaac  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008ddab0  8b5b5c               mov ebx, dword ptr [ebx + 0x5c]
// 008ddab3  41                   inc ecx
// 008ddab4  0fafc8               imul ecx, eax
// 008ddab7  8d4c0a01             lea ecx, [edx + ecx + 1]
// 008ddabb  8b542424             mov edx, dword ptr [esp + 0x24]
// 008ddabf  8beb                 mov ebp, ebx
// 008ddac1  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008ddac5  2b6e2c               sub ebp, dword ptr [esi + 0x2c]
// 008ddac8  4d                   dec ebp
// 008ddac9  0fafe8               imul ebp, eax
// 008ddacc  2bd5                 sub edx, ebp
// 008ddace  03c1                 add eax, ecx
// 008ddad0  3bc2                 cmp eax, edx
// 008ddad2  89542424             mov dword ptr [esp + 0x24], edx
// 008ddad6  5d                   pop ebp
// 008ddad7  7e04                 jle 0x8ddadd
// 008ddad9  89442420             mov dword ptr [esp + 0x20], eax
// 008ddadd  4b                   dec ebx
// 008ddade  395e2c               cmp dword ptr [esi + 0x2c], ebx
// 008ddae1  7513                 jne 0x8ddaf6
// 008ddae3  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008ddae6  83783802             cmp dword ptr [eax + 0x38], 2
// 008ddaea  740a                 je 0x8ddaf6
// 008ddaec  ff4c2420             dec dword ptr [esp + 0x20]
// 008ddaf0  eb04                 jmp 0x8ddaf6
// 008ddaf2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008ddaf6  8b571c               mov edx, dword ptr [edi + 0x1c]
// 008ddaf9  837a3802             cmp dword ptr [edx + 0x38], 2
// 008ddafd  5f                   pop edi
// 008ddafe  5e                   pop esi
// 008ddaff  5b                   pop ebx
// 008ddb00  740d                 je 0x8ddb0f
// 008ddb02  b801000000           mov eax, 1
// 008ddb07  01442408             add dword ptr [esp + 8], eax
// 008ddb0b  29442410             sub dword ptr [esp + 0x10], eax
// 008ddb0f  8b442404             mov eax, dword ptr [esp + 4]
// 008ddb13  8b542408             mov edx, dword ptr [esp + 8]
// 008ddb17  8910                 mov dword ptr [eax], edx
// 008ddb19  8b542414             mov edx, dword ptr [esp + 0x14]
// 008ddb1d  894804               mov dword ptr [eax + 4], ecx
// 008ddb20  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008ddb24  894808               mov dword ptr [eax + 8], ecx
// 008ddb27  89500c               mov dword ptr [eax + 0xc], edx
// 008ddb2a  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientRect@CAppearanceSetVisio@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
