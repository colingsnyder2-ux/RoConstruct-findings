// roc 2012-06 00a79bb0  unit: CXTCaptionButtonTheme  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a79bb0
//
// 00a79bb0  8b01                 mov eax, dword ptr [ecx]
// 00a79bb2  8b5014               mov edx, dword ptr [eax + 0x14]
// 00a79bb5  56                   push esi
// 00a79bb6  8b742408             mov esi, dword ptr [esp + 8]
// 00a79bba  56                   push esi
// 00a79bbb  ffd2                 call edx
// 00a79bbd  85c0                 test eax, eax
// 00a79bbf  7409                 je 0xa79bca
// 00a79bc1  b801000000           mov eax, 1
// 00a79bc6  5e                   pop esi
// 00a79bc7  c20400               ret 4
// 00a79bca  8b06                 mov eax, dword ptr [esi]
// 00a79bcc  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00a79bd2  8bce                 mov ecx, esi
// 00a79bd4  ffd2                 call edx
// 00a79bd6  a803                 test al, 3
// 00a79bd8  b800000000           mov eax, 0
// 00a79bdd  0f95c0               setne al
// 00a79be0  5e                   pop esi
// 00a79be1  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Controls\Deprecated\XTButtonTheme.cpp (function ?CanHilite@CXTButtonTheme@@UAEHPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButtonTheme.cpp
