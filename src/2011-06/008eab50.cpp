// roc 2011-06 008eab50  unit: CXTColorWnd  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008eab50
//
// 008eab50  83ec14               sub esp, 0x14
// 008eab53  dd442418             fld qword ptr [esp + 0x18]
// 008eab57  56                   push esi
// 008eab58  8bf1                 mov esi, ecx
// 008eab5a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008eab5d  dd5e68               fstp qword ptr [esi + 0x68]
// 008eab60  8d442408             lea eax, [esp + 8]
// 008eab64  50                   push eax
// 008eab65  51                   push ecx
// 008eab66  ff157c1ca400         call dword ptr [0xa41c7c]
// 008eab6c  8b542410             mov edx, dword ptr [esp + 0x10]
// 008eab70  2b542408             sub edx, dword ptr [esp + 8]
// 008eab74  89542404             mov dword ptr [esp + 4], edx
// 008eab78  db442404             fild dword ptr [esp + 4]
// 008eab7c  dc4c241c             fmul qword ptr [esp + 0x1c]
// 008eab80  e8ab09f2ff           call 0x80b530
// 008eab85  6a00                 push 0
// 008eab87  894670               mov dword ptr [esi + 0x70], eax
// 008eab8a  8b4620               mov eax, dword ptr [esi + 0x20]
// 008eab8d  6a00                 push 0
// 008eab8f  50                   push eax
// 008eab90  ff15ec19a400         call dword ptr [0xa419ec]
// 008eab96  5e                   pop esi
// 008eab97  83c414               add esp, 0x14
// 008eab9a  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?SetHue@CXTPColorWnd@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
