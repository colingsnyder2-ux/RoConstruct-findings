// roc 2012-06 00a30700  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30700
//
// 00a30700  53                   push ebx
// 00a30701  56                   push esi
// 00a30702  8bf1                 mov esi, ecx
// 00a30704  8b06                 mov eax, dword ptr [esi]
// 00a30706  8b5058               mov edx, dword ptr [eax + 0x58]
// 00a30709  57                   push edi
// 00a3070a  33db                 xor ebx, ebx
// 00a3070c  ffd2                 call edx
// 00a3070e  8bf8                 mov edi, eax
// 00a30710  83ef01               sub edi, 1
// 00a30713  7833                 js 0xa30748
// 00a30715  55                   push ebp
// 00a30716  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00a3071a  8d9b00000000         lea ebx, [ebx]
// 00a30720  8b06                 mov eax, dword ptr [esi]
// 00a30722  8b5060               mov edx, dword ptr [eax + 0x60]
// 00a30725  57                   push edi
// 00a30726  8bce                 mov ecx, esi
// 00a30728  ffd2                 call edx
// 00a3072a  3bc5                 cmp eax, ebp
// 00a3072c  7514                 jne 0xa30742
// 00a3072e  8b06                 mov eax, dword ptr [esi]
// 00a30730  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 00a30736  6a01                 push 1
// 00a30738  57                   push edi
// 00a30739  8bce                 mov ecx, esi
// 00a3073b  ffd2                 call edx
// 00a3073d  bb01000000           mov ebx, 1
// 00a30742  83ef01               sub edi, 1
// 00a30745  79d9                 jns 0xa30720
// 00a30747  5d                   pop ebp
// 00a30748  5f                   pop edi
// 00a30749  5e                   pop esi
// 00a3074a  8bc3                 mov eax, ebx
// 00a3074c  5b                   pop ebx
// 00a3074d  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Calendar\XTPCalendarEventLabel.cpp (function ?RemoveElement@?$CXTPArrayT@IIJ@@UAEHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Calendar/XTPCalendarEventLabel.cpp
