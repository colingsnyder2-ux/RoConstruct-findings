// roc 2007-03 00593970  unit: seg_00590000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00593970
//
// 00593970  6aff                 push -1
// 00593972  68a57e7500           push 0x757ea5
// 00593977  64a100000000         mov eax, dword ptr fs:[0]
// 0059397d  50                   push eax
// 0059397e  64892500000000       mov dword ptr fs:[0], esp
// 00593985  51                   push ecx
// 00593986  56                   push esi
// 00593987  8bf1                 mov esi, ecx
// 00593989  89742404             mov dword ptr [esp + 4], esi
// 0059398d  8d442418             lea eax, [esp + 0x18]
// 00593991  50                   push eax
// 00593992  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0059399a  e831deffff           call 0x5917d0
// 0059399f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 005939a3  8b542460             mov edx, dword ptr [esp + 0x60]
// 005939a7  8b442464             mov eax, dword ptr [esp + 0x64]
// 005939ab  894e44               mov dword ptr [esi + 0x44], ecx
// 005939ae  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 005939b2  894e50               mov dword ptr [esi + 0x50], ecx
// 005939b5  8d4e58               lea ecx, [esi + 0x58]
// 005939b8  c644241001           mov byte ptr [esp + 0x10], 1
// 005939bd  895648               mov dword ptr [esi + 0x48], edx
// 005939c0  89464c               mov dword ptr [esi + 0x4c], eax
// 005939c3  c6465400             mov byte ptr [esi + 0x54], 0
// 005939c7  ff1584e77700         call dword ptr [0x77e784]
// 005939cd  8bce                 mov ecx, esi
// 005939cf  c644241002           mov byte ptr [esp + 0x10], 2
// 005939d4  e8c7f5ffff           call 0x592fa0
// 005939d9  8d4c2434             lea ecx, [esp + 0x34]
// 005939dd  c744241003000000     mov dword ptr [esp + 0x10], 3
// 005939e5  ff158ce77700         call dword ptr [0x77e78c]
// 005939eb  8d4c2418             lea ecx, [esp + 0x18]
// 005939ef  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005939f7  ff158ce77700         call dword ptr [0x77e78c]
// 005939fd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00593a01  8bc6                 mov eax, esi
// 00593a03  5e                   pop esi
// 00593a04  64890d00000000       mov dword ptr fs:[0], ecx
// 00593a0b  83c410               add esp, 0x10
// 00593a0e  c25400               ret 0x54
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@V?$char_separator@DU?$char_traits@D@std@@@1@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
