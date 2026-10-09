// roc 2009-12 00870580  unit: CXTPHookManagerHookAble  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00870580
//
// 00870580  83ec0c               sub esp, 0xc
// 00870583  56                   push esi
// 00870584  8bf1                 mov esi, ecx
// 00870586  8b460c               mov eax, dword ptr [esi + 0xc]
// 00870589  f7d8                 neg eax
// 0087058b  1bc0                 sbb eax, eax
// 0087058d  89442404             mov dword ptr [esp + 4], eax
// 00870591  742e                 je 0x8705c1
// 00870593  8d442408             lea eax, [esp + 8]
// 00870597  50                   push eax
// 00870598  8d4c2410             lea ecx, [esp + 0x10]
// 0087059c  51                   push ecx
// 0087059d  8d54240c             lea edx, [esp + 0xc]
// 008705a1  52                   push edx
// 008705a2  8bce                 mov ecx, esi
// 008705a4  e87792f9ff           call 0x809820
// 008705a9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008705ad  85c9                 test ecx, ecx
// 008705af  7409                 je 0x8705ba
// 008705b1  8b01                 mov eax, dword ptr [ecx]
// 008705b3  8b5004               mov edx, dword ptr [eax + 4]
// 008705b6  6a01                 push 1
// 008705b8  ffd2                 call edx
// 008705ba  837c240400           cmp dword ptr [esp + 4], 0
// 008705bf  75d2                 jne 0x870593
// 008705c1  8bce                 mov ecx, esi
// 008705c3  5e                   pop esi
// 008705c4  83c40c               add esp, 0xc
// 008705c7  e9545ff8ff           jmp 0x7f6520
// library xtp-11.2.2/Source\CommandBars\XTPHookManager.cpp (function ?RemoveAll@CXTPHookManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPHookManager.cpp
