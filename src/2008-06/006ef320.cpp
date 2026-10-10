// roc 2008-06 006ef320  unit: CXTPPopupBar  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ef320
//
// 006ef320  8b542404             mov edx, dword ptr [esp + 4]
// 006ef324  83ec10               sub esp, 0x10
// 006ef327  56                   push esi
// 006ef328  8bf1                 mov esi, ecx
// 006ef32a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ef32e  8b06                 mov eax, dword ptr [esi]
// 006ef330  51                   push ecx
// 006ef331  52                   push edx
// 006ef332  8b9004020000         mov edx, dword ptr [eax + 0x204]
// 006ef338  8d4c240c             lea ecx, [esp + 0xc]
// 006ef33c  51                   push ecx
// 006ef33d  8bce                 mov ecx, esi
// 006ef33f  ffd2                 call edx
// 006ef341  8b4620               mov eax, dword ptr [esi + 0x20]
// 006ef344  50                   push eax
// 006ef345  ff153c2d8000         call dword ptr [0x802d3c]
// 006ef34b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006ef34f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006ef353  f7d8                 neg eax
// 006ef355  1bc0                 sbb eax, eax
// 006ef357  83e004               and eax, 4
// 006ef35a  0d50020000           or eax, 0x250
// 006ef35f  50                   push eax
// 006ef360  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ef364  2bc8                 sub ecx, eax
// 006ef366  51                   push ecx
// 006ef367  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ef36b  2bd1                 sub edx, ecx
// 006ef36d  52                   push edx
// 006ef36e  50                   push eax
// 006ef36f  a14c388000           mov eax, dword ptr [0x80384c]
// 006ef374  51                   push ecx
// 006ef375  50                   push eax
// 006ef376  8bce                 mov ecx, esi
// 006ef378  e8c916fbff           call 0x6a0a46
// 006ef37d  5e                   pop esi
// 006ef37e  83c410               add esp, 0x10
// 006ef381  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?UpdateLocation@CXTPPopupBar@@IAEXVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
