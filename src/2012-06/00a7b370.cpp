// from server: 100% by auto
// roc 2012-06 00a7b370  unit: CXTButtonThemeOffice2003  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a7b370
//
// 00a7b370  c701e49ac200         mov dword ptr [ecx], 0xc29ae4
// 00a7b376  8b4904               mov ecx, dword ptr [ecx + 4]
// 00a7b379  85c9                 test ecx, ecx
// 00a7b37b  7407                 je 0xa7b384
// 00a7b37d  51                   push ecx
// 00a7b37e  ff15983bb200         call dword ptr [0xb23b98]
// 00a7b384  c3                   ret 
// library xtp-15.2.1/Source\Controls\ListBox\XTPCheckListBox.cpp (function ??1CCheckListState@CXTPCheckListBox@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/ListBox/XTPCheckListBox.cpp
