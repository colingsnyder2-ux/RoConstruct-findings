// from server: 100% by auto
// roc 2009-06 006f06c0  unit: seg_006f0000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f06c0
//
// 006f06c0  51                   push ecx
// 006f06c1  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f06c4  6a04                 push 4
// 006f06c6  8d442404             lea eax, [esp + 4]
// 006f06ca  50                   push eax
// 006f06cb  51                   push ecx
// 006f06cc  e87fcaffff           call 0x6ed150
// 006f06d1  83c40c               add esp, 0xc
// 006f06d4  85c0                 test eax, eax
// 006f06d6  7423                 je 0x6f06fb
// 006f06d8  8b560c               mov edx, dword ptr [esi + 0xc]
// 006f06db  8b06                 mov eax, dword ptr [esi]
// 006f06dd  6840e08e00           push 0x8ee040
// 006f06e2  52                   push edx
// 006f06e3  6824e08e00           push 0x8ee024
// 006f06e8  50                   push eax
// 006f06e9  e8b289fdff           call 0x6c90a0
// 006f06ee  8b0e                 mov ecx, dword ptr [esi]
// 006f06f0  6a03                 push 3
// 006f06f2  51                   push ecx
// 006f06f3  e8e82bfdff           call 0x6c32e0
// 006f06f8  83c418               add esp, 0x18
// 006f06fb  8b0424               mov eax, dword ptr [esp]
// 006f06fe  85c0                 test eax, eax
// 006f0700  7d27                 jge 0x6f0729
// 006f0702  8b560c               mov edx, dword ptr [esi + 0xc]
// 006f0705  8b06                 mov eax, dword ptr [esi]
// 006f0707  6850e08e00           push 0x8ee050
// 006f070c  52                   push edx
// 006f070d  6824e08e00           push 0x8ee024
// 006f0712  50                   push eax
// 006f0713  e88889fdff           call 0x6c90a0
// 006f0718  8b0e                 mov ecx, dword ptr [esi]
// 006f071a  6a03                 push 3
// 006f071c  51                   push ecx
// 006f071d  e8be2bfdff           call 0x6c32e0
// 006f0722  8b442418             mov eax, dword ptr [esp + 0x18]
// 006f0726  83c418               add esp, 0x18
// 006f0729  59                   pop ecx
// 006f072a  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadInt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
