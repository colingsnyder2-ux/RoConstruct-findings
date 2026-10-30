// from server: 100% by tester
// roc 2008-06 006d9490  unit: CXTPReportRecordItemVariant  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d9490
//
// 006d9490  83ec10               sub esp, 0x10
// 006d9493  83790800             cmp dword ptr [ecx + 8], 0
// 006d9497  56                   push esi
// 006d9498  757e                 jne 0x6d9518
// 006d949a  8b742418             mov esi, dword ptr [esp + 0x18]
// 006d949e  837e0800             cmp dword ptr [esi + 8], 0
// 006d94a2  7574                 jne 0x6d9518
// 006d94a4  dd01                 fld qword ptr [ecx]
// 006d94a6  dd542404             fst qword ptr [esp + 4]
// 006d94aa  d9ee                 fldz 
// 006d94ac  d8d9                 fcomp st(1)
// 006d94ae  dfe0                 fnstsw ax
// 006d94b0  f6c441               test ah, 0x41
// 006d94b3  7b17                 jnp 0x6d94cc
// 006d94b5  83ec08               sub esp, 8
// 006d94b8  dd1c24               fstp qword ptr [esp]
// 006d94bb  ff15ec278000         call dword ptr [0x8027ec]
// 006d94c1  dd44240c             fld qword ptr [esp + 0xc]
// 006d94c5  83c408               add esp, 8
// 006d94c8  d8e1                 fsub st(1)
// 006d94ca  dee9                 fsubp st(1)
// 006d94cc  dd5c2404             fstp qword ptr [esp + 4]
// 006d94d0  dd06                 fld qword ptr [esi]
// 006d94d2  dd54240c             fst qword ptr [esp + 0xc]
// 006d94d6  d9ee                 fldz 
// 006d94d8  d8d9                 fcomp st(1)
// 006d94da  dfe0                 fnstsw ax
// 006d94dc  f6c441               test ah, 0x41
// 006d94df  7b17                 jnp 0x6d94f8
// 006d94e1  83ec08               sub esp, 8
// 006d94e4  dd1c24               fstp qword ptr [esp]
// 006d94e7  ff15ec278000         call dword ptr [0x8027ec]
// 006d94ed  dd442414             fld qword ptr [esp + 0x14]
// 006d94f1  83c408               add esp, 8
// 006d94f4  d8e1                 fsub st(1)
// 006d94f6  dee9                 fsubp st(1)
// 006d94f8  dc5c2404             fcomp qword ptr [esp + 4]
// 006d94fc  dfe0                 fnstsw ax
// 006d94fe  f6c405               test ah, 5
// 006d9501  7a0c                 jp 0x6d950f
// 006d9503  b801000000           mov eax, 1
// 006d9508  5e                   pop esi
// 006d9509  83c410               add esp, 0x10
// 006d950c  c20400               ret 4
// 006d950f  33c0                 xor eax, eax
// 006d9511  5e                   pop esi
// 006d9512  83c410               add esp, 0x10
// 006d9515  c20400               ret 4
// 006d9518  32c0                 xor al, al
// 006d951a  5e                   pop esi
// 006d951b  83c410               add esp, 0x10
// 006d951e  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Calendar\XTPCalendarEvent.cpp (function ??OCOleDateTime@ATL@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Calendar/XTPCalendarEvent.cpp
