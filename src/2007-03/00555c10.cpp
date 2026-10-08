// roc 2007-03 00555c10  unit: seg_00550000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00555c10
//
// 00555c10  6aff                 push -1
// 00555c12  68c83f7500           push 0x753fc8
// 00555c17  64a100000000         mov eax, dword ptr fs:[0]
// 00555c1d  50                   push eax
// 00555c1e  64892500000000       mov dword ptr fs:[0], esp
// 00555c25  51                   push ecx
// 00555c26  56                   push esi
// 00555c27  57                   push edi
// 00555c28  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00555c2c  8bf1                 mov esi, ecx
// 00555c2e  57                   push edi
// 00555c2f  8974240c             mov dword ptr [esp + 0xc], esi
// 00555c33  ff157ce77700         call dword ptr [0x77e77c]
// 00555c39  83c71c               add edi, 0x1c
// 00555c3c  57                   push edi
// 00555c3d  8d4e1c               lea ecx, [esi + 0x1c]
// 00555c40  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00555c48  ff157ce77700         call dword ptr [0x77e77c]
// 00555c4e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00555c52  5f                   pop edi
// 00555c53  8bc6                 mov eax, esi
// 00555c55  5e                   pop esi
// 00555c56  64890d00000000       mov dword ptr fs:[0], ecx
// 00555c5d  83c410               add esp, 0x10
// 00555c60  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$storage2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE@ABU012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
