// roc 2011-06 008f38b0  unit: CXTCaptionPopupWnd  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f38b0
//
// 008f38b0  56                   push esi
// 008f38b1  8bf1                 mov esi, ecx
// 008f38b3  8b4658               mov eax, dword ptr [esi + 0x58]
// 008f38b6  57                   push edi
// 008f38b7  85c0                 test eax, eax
// 008f38b9  7403                 je 0x8f38be
// 008f38bb  8b4020               mov eax, dword ptr [eax + 0x20]
// 008f38be  8b3dec1ba400         mov edi, dword ptr [0xa41bec]
// 008f38c4  50                   push eax
// 008f38c5  ffd7                 call edi
// 008f38c7  85c0                 test eax, eax
// 008f38c9  7505                 jne 0x8f38d0
// 008f38cb  5f                   pop edi
// 008f38cc  33c0                 xor eax, eax
// 008f38ce  5e                   pop esi
// 008f38cf  c3                   ret 
// 008f38d0  8b465c               mov eax, dword ptr [esi + 0x5c]
// 008f38d3  85c0                 test eax, eax
// 008f38d5  7403                 je 0x8f38da
// 008f38d7  8b4020               mov eax, dword ptr [eax + 0x20]
// 008f38da  50                   push eax
// 008f38db  ffd7                 call edi
// 008f38dd  85c0                 test eax, eax
// 008f38df  74ea                 je 0x8f38cb
// 008f38e1  8b465c               mov eax, dword ptr [esi + 0x5c]
// 008f38e4  8b7658               mov esi, dword ptr [esi + 0x58]
// 008f38e7  85c0                 test eax, eax
// 008f38e9  7403                 je 0x8f38ee
// 008f38eb  8b4020               mov eax, dword ptr [eax + 0x20]
// 008f38ee  50                   push eax
// 008f38ef  8b4620               mov eax, dword ptr [esi + 0x20]
// 008f38f2  50                   push eax
// 008f38f3  ff15a01aa400         call dword ptr [0xa41aa0]
// 008f38f9  50                   push eax
// 008f38fa  e8296af1ff           call 0x80a328
// 008f38ff  5f                   pop edi
// 008f3900  b801000000           mov eax, 1
// 008f3905  5e                   pop esi
// 008f3906  c3                   ret 
// library xtp-15.2.1/Source\Controls\Static\XTPCaptionPopupWnd.cpp (function ?ResetParent@CXTPCaptionPopupWnd@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Static/XTPCaptionPopupWnd.cpp
