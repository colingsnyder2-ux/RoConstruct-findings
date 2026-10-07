// roc 2012-06 004a71b0  unit: CSettingsDialog  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a71b0
//
// 004a71b0  83ec10               sub esp, 0x10
// 004a71b3  668b54241c           mov dx, word ptr [esp + 0x1c]
// 004a71b8  33c0                 xor eax, eax
// 004a71ba  890424               mov dword ptr [esp], eax
// 004a71bd  89442408             mov dword ptr [esp + 8], eax
// 004a71c1  89442404             mov dword ptr [esp + 4], eax
// 004a71c5  8944240c             mov dword ptr [esp + 0xc], eax
// 004a71c9  668b442414           mov ax, word ptr [esp + 0x14]
// 004a71ce  56                   push esi
// 004a71cf  8bf1                 mov esi, ecx
// 004a71d1  668b4c241c           mov cx, word ptr [esp + 0x1c]
// 004a71d6  6689442404           mov word ptr [esp + 4], ax
// 004a71db  668b442424           mov ax, word ptr [esp + 0x24]
// 004a71e0  668944240c           mov word ptr [esp + 0xc], ax
// 004a71e5  66894c2406           mov word ptr [esp + 6], cx
// 004a71ea  668b4c2428           mov cx, word ptr [esp + 0x28]
// 004a71ef  668954240a           mov word ptr [esp + 0xa], dx
// 004a71f4  668b54242c           mov dx, word ptr [esp + 0x2c]
// 004a71f9  8d442404             lea eax, [esp + 4]
// 004a71fd  56                   push esi
// 004a71fe  50                   push eax
// 004a71ff  66894c2416           mov word ptr [esp + 0x16], cx
// 004a7204  6689542418           mov word ptr [esp + 0x18], dx
// 004a7209  e88271ffff           call 0x49e390
// 004a720e  83c408               add esp, 8
// 004a7211  f7d8                 neg eax
// 004a7213  1bc0                 sbb eax, eax
// 004a7215  40                   inc eax
// 004a7216  894608               mov dword ptr [esi + 8], eax
// 004a7219  5e                   pop esi
// 004a721a  83c410               add esp, 0x10
// 004a721d  c21800               ret 0x18
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?SetDateTime@COleDateTime@ATL@@QAEHHHHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
