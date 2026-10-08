// roc 2009-06 00623340  unit: ArchiveBinder  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00623340
//
// 00623340  6aff                 push -1
// 00623342  68c38a8600           push 0x868ac3
// 00623347  64a100000000         mov eax, dword ptr fs:[0]
// 0062334d  50                   push eax
// 0062334e  64892500000000       mov dword ptr fs:[0], esp
// 00623355  83ec08               sub esp, 8
// 00623358  56                   push esi
// 00623359  8bf1                 mov esi, ecx
// 0062335b  89742408             mov dword ptr [esp + 8], esi
// 0062335f  e8ecb6e1ff           call 0x43ea50
// 00623364  8d442407             lea eax, [esp + 7]
// 00623368  50                   push eax
// 00623369  8d54240b             lea edx, [esp + 0xb]
// 0062336d  8d4e1c               lea ecx, [esi + 0x1c]
// 00623370  52                   push edx
// 00623371  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00623379  c70604978d00         mov dword ptr [esi], 0x8d9704
// 0062337f  e8ecf30b00           call 0x6e2770
// 00623384  8d4e3c               lea ecx, [esi + 0x3c]
// 00623387  c644241401           mov byte ptr [esp + 0x14], 1
// 0062338c  e8eff1ffff           call 0x622580
// 00623391  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00623395  8bc6                 mov eax, esi
// 00623397  5e                   pop esi
// 00623398  64890d00000000       mov dword ptr fs:[0], ecx
// 0062339f  83c414               add esp, 0x14
// 006233a2  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??0ArchiveBinder@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
