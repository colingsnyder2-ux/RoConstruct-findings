// roc 2012-06 00a55da0  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a55da0
//
// 00a55da0  53                   push ebx
// 00a55da1  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a55da5  56                   push esi
// 00a55da6  8b7304               mov esi, dword ptr [ebx + 4]
// 00a55da9  57                   push edi
// 00a55daa  8bf9                 mov edi, ecx
// 00a55dac  85f6                 test esi, esi
// 00a55dae  7452                 je 0xa55e02
// 00a55db0  8b07                 mov eax, dword ptr [edi]
// 00a55db2  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00a55db5  55                   push ebp
// 00a55db6  53                   push ebx
// 00a55db7  ffd2                 call edx
// 00a55db9  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00a55dbc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a55dc0  8b5b5c               mov ebx, dword ptr [ebx + 0x5c]
// 00a55dc3  41                   inc ecx
// 00a55dc4  0fafc8               imul ecx, eax
// 00a55dc7  8d4c0a01             lea ecx, [edx + ecx + 1]
// 00a55dcb  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a55dcf  8beb                 mov ebp, ebx
// 00a55dd1  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00a55dd5  2b6e2c               sub ebp, dword ptr [esi + 0x2c]
// 00a55dd8  4d                   dec ebp
// 00a55dd9  0fafe8               imul ebp, eax
// 00a55ddc  2bd5                 sub edx, ebp
// 00a55dde  03c1                 add eax, ecx
// 00a55de0  3bc2                 cmp eax, edx
// 00a55de2  89542424             mov dword ptr [esp + 0x24], edx
// 00a55de6  5d                   pop ebp
// 00a55de7  7e04                 jle 0xa55ded
// 00a55de9  89442420             mov dword ptr [esp + 0x20], eax
// 00a55ded  4b                   dec ebx
// 00a55dee  395e2c               cmp dword ptr [esi + 0x2c], ebx
// 00a55df1  7513                 jne 0xa55e06
// 00a55df3  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00a55df6  83783802             cmp dword ptr [eax + 0x38], 2
// 00a55dfa  740a                 je 0xa55e06
// 00a55dfc  ff4c2420             dec dword ptr [esp + 0x20]
// 00a55e00  eb04                 jmp 0xa55e06
// 00a55e02  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a55e06  8b571c               mov edx, dword ptr [edi + 0x1c]
// 00a55e09  837a3802             cmp dword ptr [edx + 0x38], 2
// 00a55e0d  5f                   pop edi
// 00a55e0e  5e                   pop esi
// 00a55e0f  5b                   pop ebx
// 00a55e10  740d                 je 0xa55e1f
// 00a55e12  b801000000           mov eax, 1
// 00a55e17  01442408             add dword ptr [esp + 8], eax
// 00a55e1b  29442410             sub dword ptr [esp + 0x10], eax
// 00a55e1f  8b442404             mov eax, dword ptr [esp + 4]
// 00a55e23  8b542408             mov edx, dword ptr [esp + 8]
// 00a55e27  8910                 mov dword ptr [eax], edx
// 00a55e29  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a55e2d  894804               mov dword ptr [eax + 4], ecx
// 00a55e30  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a55e34  894808               mov dword ptr [eax + 8], ecx
// 00a55e37  89500c               mov dword ptr [eax + 0xc], edx
// 00a55e3a  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientRect@CAppearanceSetVisio@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
