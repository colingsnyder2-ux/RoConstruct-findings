// roc 2008-06 0074ed10  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074ed10
//
// 0074ed10  53                   push ebx
// 0074ed11  56                   push esi
// 0074ed12  8bf1                 mov esi, ecx
// 0074ed14  8b06                 mov eax, dword ptr [esi]
// 0074ed16  8b5058               mov edx, dword ptr [eax + 0x58]
// 0074ed19  57                   push edi
// 0074ed1a  33db                 xor ebx, ebx
// 0074ed1c  ffd2                 call edx
// 0074ed1e  8bf8                 mov edi, eax
// 0074ed20  83ef01               sub edi, 1
// 0074ed23  7833                 js 0x74ed58
// 0074ed25  55                   push ebp
// 0074ed26  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0074ed2a  8d9b00000000         lea ebx, [ebx]
// 0074ed30  8b06                 mov eax, dword ptr [esi]
// 0074ed32  8b5060               mov edx, dword ptr [eax + 0x60]
// 0074ed35  57                   push edi
// 0074ed36  8bce                 mov ecx, esi
// 0074ed38  ffd2                 call edx
// 0074ed3a  3bc5                 cmp eax, ebp
// 0074ed3c  7514                 jne 0x74ed52
// 0074ed3e  8b06                 mov eax, dword ptr [esi]
// 0074ed40  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0074ed46  6a01                 push 1
// 0074ed48  57                   push edi
// 0074ed49  8bce                 mov ecx, esi
// 0074ed4b  ffd2                 call edx
// 0074ed4d  bb01000000           mov ebx, 1
// 0074ed52  83ef01               sub edi, 1
// 0074ed55  79d9                 jns 0x74ed30
// 0074ed57  5d                   pop ebp
// 0074ed58  5f                   pop edi
// 0074ed59  5e                   pop esi
// 0074ed5a  8bc3                 mov eax, ebx
// 0074ed5c  5b                   pop ebx
// 0074ed5d  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Calendar\XTPCalendarEventLabel.cpp (function ?RemoveElement@?$CXTPArrayT@IIJ@@UAEHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Calendar/XTPCalendarEventLabel.cpp
