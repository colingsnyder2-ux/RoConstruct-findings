// roc 2008-06 007a1a20  unit: CXTCaptionButtonTheme  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1a20
//
// 007a1a20  8b01                 mov eax, dword ptr [ecx]
// 007a1a22  8b5014               mov edx, dword ptr [eax + 0x14]
// 007a1a25  56                   push esi
// 007a1a26  8b742408             mov esi, dword ptr [esp + 8]
// 007a1a2a  56                   push esi
// 007a1a2b  ffd2                 call edx
// 007a1a2d  85c0                 test eax, eax
// 007a1a2f  7409                 je 0x7a1a3a
// 007a1a31  b801000000           mov eax, 1
// 007a1a36  5e                   pop esi
// 007a1a37  c20400               ret 4
// 007a1a3a  8b06                 mov eax, dword ptr [esi]
// 007a1a3c  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 007a1a42  8bce                 mov ecx, esi
// 007a1a44  ffd2                 call edx
// 007a1a46  a803                 test al, 3
// 007a1a48  b800000000           mov eax, 0
// 007a1a4d  0f95c0               setne al
// 007a1a50  5e                   pop esi
// 007a1a51  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Controls\XTButtonTheme.cpp (function ?CanHilite@CXTButtonTheme@@UAEHPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTButtonTheme.cpp
