// roc 2012-06 009ba310  unit: CXTPReportRecordItemVariant  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ba310
//
// 009ba310  83ec10               sub esp, 0x10
// 009ba313  83790800             cmp dword ptr [ecx + 8], 0
// 009ba317  56                   push esi
// 009ba318  757e                 jne 0x9ba398
// 009ba31a  8b742418             mov esi, dword ptr [esp + 0x18]
// 009ba31e  837e0800             cmp dword ptr [esi + 8], 0
// 009ba322  7574                 jne 0x9ba398
// 009ba324  dd01                 fld qword ptr [ecx]
// 009ba326  dd542404             fst qword ptr [esp + 4]
// 009ba32a  d9ee                 fldz 
// 009ba32c  d8d9                 fcomp st(1)
// 009ba32e  dfe0                 fnstsw ax
// 009ba330  f6c441               test ah, 0x41
// 009ba333  7b17                 jnp 0x9ba34c
// 009ba335  83ec08               sub esp, 8
// 009ba338  dd1c24               fstp qword ptr [esp]
// 009ba33b  ff15ac29b200         call dword ptr [0xb229ac]
// 009ba341  dd44240c             fld qword ptr [esp + 0xc]
// 009ba345  83c408               add esp, 8
// 009ba348  d8e1                 fsub st(1)
// 009ba34a  dee9                 fsubp st(1)
// 009ba34c  dd5c2404             fstp qword ptr [esp + 4]
// 009ba350  dd06                 fld qword ptr [esi]
// 009ba352  dd54240c             fst qword ptr [esp + 0xc]
// 009ba356  d9ee                 fldz 
// 009ba358  d8d9                 fcomp st(1)
// 009ba35a  dfe0                 fnstsw ax
// 009ba35c  f6c441               test ah, 0x41
// 009ba35f  7b17                 jnp 0x9ba378
// 009ba361  83ec08               sub esp, 8
// 009ba364  dd1c24               fstp qword ptr [esp]
// 009ba367  ff15ac29b200         call dword ptr [0xb229ac]
// 009ba36d  dd442414             fld qword ptr [esp + 0x14]
// 009ba371  83c408               add esp, 8
// 009ba374  d8e1                 fsub st(1)
// 009ba376  dee9                 fsubp st(1)
// 009ba378  dc5c2404             fcomp qword ptr [esp + 4]
// 009ba37c  dfe0                 fnstsw ax
// 009ba37e  f6c405               test ah, 5
// 009ba381  7a0c                 jp 0x9ba38f
// 009ba383  b801000000           mov eax, 1
// 009ba388  5e                   pop esi
// 009ba389  83c410               add esp, 0x10
// 009ba38c  c20400               ret 4
// 009ba38f  33c0                 xor eax, eax
// 009ba391  5e                   pop esi
// 009ba392  83c410               add esp, 0x10
// 009ba395  c20400               ret 4
// 009ba398  32c0                 xor al, al
// 009ba39a  5e                   pop esi
// 009ba39b  83c410               add esp, 0x10
// 009ba39e  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Calendar\XTPCalendarControl.cpp (function ??OCOleDateTime@ATL@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Calendar/XTPCalendarControl.cpp
