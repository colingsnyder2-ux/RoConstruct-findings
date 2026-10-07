// roc 2008-06 00785740  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00785740
//
// 00785740  53                   push ebx
// 00785741  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00785745  56                   push esi
// 00785746  8b7304               mov esi, dword ptr [ebx + 4]
// 00785749  57                   push edi
// 0078574a  8bf9                 mov edi, ecx
// 0078574c  85f6                 test esi, esi
// 0078574e  7452                 je 0x7857a2
// 00785750  8b07                 mov eax, dword ptr [edi]
// 00785752  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00785755  55                   push ebp
// 00785756  53                   push ebx
// 00785757  ffd2                 call edx
// 00785759  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0078575c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00785760  8b5b5c               mov ebx, dword ptr [ebx + 0x5c]
// 00785763  41                   inc ecx
// 00785764  0fafc8               imul ecx, eax
// 00785767  8d4c0a01             lea ecx, [edx + ecx + 1]
// 0078576b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0078576f  8beb                 mov ebp, ebx
// 00785771  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00785775  2b6e2c               sub ebp, dword ptr [esi + 0x2c]
// 00785778  4d                   dec ebp
// 00785779  0fafe8               imul ebp, eax
// 0078577c  2bd5                 sub edx, ebp
// 0078577e  03c1                 add eax, ecx
// 00785780  3bc2                 cmp eax, edx
// 00785782  89542424             mov dword ptr [esp + 0x24], edx
// 00785786  5d                   pop ebp
// 00785787  7e04                 jle 0x78578d
// 00785789  89442420             mov dword ptr [esp + 0x20], eax
// 0078578d  4b                   dec ebx
// 0078578e  395e2c               cmp dword ptr [esi + 0x2c], ebx
// 00785791  7513                 jne 0x7857a6
// 00785793  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00785796  83783802             cmp dword ptr [eax + 0x38], 2
// 0078579a  740a                 je 0x7857a6
// 0078579c  ff4c2420             dec dword ptr [esp + 0x20]
// 007857a0  eb04                 jmp 0x7857a6
// 007857a2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007857a6  8b571c               mov edx, dword ptr [edi + 0x1c]
// 007857a9  837a3802             cmp dword ptr [edx + 0x38], 2
// 007857ad  5f                   pop edi
// 007857ae  5e                   pop esi
// 007857af  5b                   pop ebx
// 007857b0  740d                 je 0x7857bf
// 007857b2  b801000000           mov eax, 1
// 007857b7  01442408             add dword ptr [esp + 8], eax
// 007857bb  29442410             sub dword ptr [esp + 0x10], eax
// 007857bf  8b442404             mov eax, dword ptr [esp + 4]
// 007857c3  8b542408             mov edx, dword ptr [esp + 8]
// 007857c7  8910                 mov dword ptr [eax], edx
// 007857c9  8b542414             mov edx, dword ptr [esp + 0x14]
// 007857cd  894804               mov dword ptr [eax + 4], ecx
// 007857d0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007857d4  894808               mov dword ptr [eax + 8], ecx
// 007857d7  89500c               mov dword ptr [eax + 0xc], edx
// 007857da  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientRect@CAppearanceSetVisio@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
