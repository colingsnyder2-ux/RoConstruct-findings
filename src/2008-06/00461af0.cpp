// roc 2008-06 00461af0  unit: Scintilla::CScintillaView  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461af0
//
// 00461af0  83ec24               sub esp, 0x24
// 00461af3  51                   push ecx
// 00461af4  8d442404             lea eax, [esp + 4]
// 00461af8  50                   push eax
// 00461af9  ff1510288000         call dword ptr [0x802810]
// 00461aff  83c408               add esp, 8
// 00461b02  85c0                 test eax, eax
// 00461b04  7408                 je 0x461b0e
// 00461b06  32c0                 xor al, al
// 00461b08  83c424               add esp, 0x24
// 00461b0b  c20400               ret 4
// 00461b0e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00461b12  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00461b16  8b542410             mov edx, dword ptr [esp + 0x10]
// 00461b1a  81c16c070000         add ecx, 0x76c
// 00461b20  668908               mov word ptr [eax], cx
// 00461b23  0fb74c2418           movzx ecx, word ptr [esp + 0x18]
// 00461b28  42                   inc edx
// 00461b29  66895002             mov word ptr [eax + 2], dx
// 00461b2d  0fb754240c           movzx edx, word ptr [esp + 0xc]
// 00461b32  66894804             mov word ptr [eax + 4], cx
// 00461b36  0fb74c2408           movzx ecx, word ptr [esp + 8]
// 00461b3b  66895006             mov word ptr [eax + 6], dx
// 00461b3f  0fb7542404           movzx edx, word ptr [esp + 4]
// 00461b44  66894808             mov word ptr [eax + 8], cx
// 00461b48  0fb70c24             movzx ecx, word ptr [esp]
// 00461b4c  6689500a             mov word ptr [eax + 0xa], dx
// 00461b50  33d2                 xor edx, edx
// 00461b52  6689480c             mov word ptr [eax + 0xc], cx
// 00461b56  6689500e             mov word ptr [eax + 0xe], dx
// 00461b5a  b001                 mov al, 1
// 00461b5c  83c424               add esp, 0x24
// 00461b5f  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Calendar\XTPCalendarDayView.cpp (function ?GetAsSystemTime@CTime@ATL@@QBE_NAAU_SYSTEMTIME@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Calendar/XTPCalendarDayView.cpp
