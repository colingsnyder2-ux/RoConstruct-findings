// roc 2009-12 008d89a0  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d89a0
//
// 008d89a0  53                   push ebx
// 008d89a1  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008d89a5  56                   push esi
// 008d89a6  8b7304               mov esi, dword ptr [ebx + 4]
// 008d89a9  57                   push edi
// 008d89aa  8bf9                 mov edi, ecx
// 008d89ac  85f6                 test esi, esi
// 008d89ae  7452                 je 0x8d8a02
// 008d89b0  8b07                 mov eax, dword ptr [edi]
// 008d89b2  8b501c               mov edx, dword ptr [eax + 0x1c]
// 008d89b5  55                   push ebp
// 008d89b6  53                   push ebx
// 008d89b7  ffd2                 call edx
// 008d89b9  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 008d89bc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d89c0  8b5b5c               mov ebx, dword ptr [ebx + 0x5c]
// 008d89c3  41                   inc ecx
// 008d89c4  0fafc8               imul ecx, eax
// 008d89c7  8d4c0a01             lea ecx, [edx + ecx + 1]
// 008d89cb  8b542424             mov edx, dword ptr [esp + 0x24]
// 008d89cf  8beb                 mov ebp, ebx
// 008d89d1  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008d89d5  2b6e2c               sub ebp, dword ptr [esi + 0x2c]
// 008d89d8  4d                   dec ebp
// 008d89d9  0fafe8               imul ebp, eax
// 008d89dc  2bd5                 sub edx, ebp
// 008d89de  03c1                 add eax, ecx
// 008d89e0  3bc2                 cmp eax, edx
// 008d89e2  89542424             mov dword ptr [esp + 0x24], edx
// 008d89e6  5d                   pop ebp
// 008d89e7  7e04                 jle 0x8d89ed
// 008d89e9  89442420             mov dword ptr [esp + 0x20], eax
// 008d89ed  4b                   dec ebx
// 008d89ee  395e2c               cmp dword ptr [esi + 0x2c], ebx
// 008d89f1  7513                 jne 0x8d8a06
// 008d89f3  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008d89f6  83783802             cmp dword ptr [eax + 0x38], 2
// 008d89fa  740a                 je 0x8d8a06
// 008d89fc  ff4c2420             dec dword ptr [esp + 0x20]
// 008d8a00  eb04                 jmp 0x8d8a06
// 008d8a02  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d8a06  8b571c               mov edx, dword ptr [edi + 0x1c]
// 008d8a09  837a3802             cmp dword ptr [edx + 0x38], 2
// 008d8a0d  5f                   pop edi
// 008d8a0e  5e                   pop esi
// 008d8a0f  5b                   pop ebx
// 008d8a10  740d                 je 0x8d8a1f
// 008d8a12  b801000000           mov eax, 1
// 008d8a17  01442408             add dword ptr [esp + 8], eax
// 008d8a1b  29442410             sub dword ptr [esp + 0x10], eax
// 008d8a1f  8b442404             mov eax, dword ptr [esp + 4]
// 008d8a23  8b542408             mov edx, dword ptr [esp + 8]
// 008d8a27  8910                 mov dword ptr [eax], edx
// 008d8a29  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d8a2d  894804               mov dword ptr [eax + 4], ecx
// 008d8a30  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d8a34  894808               mov dword ptr [eax + 8], ecx
// 008d8a37  89500c               mov dword ptr [eax + 0xc], edx
// 008d8a3a  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientRect@CAppearanceSetVisio@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
