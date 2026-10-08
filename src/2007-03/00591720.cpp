// roc 2007-03 00591720  unit: seg_00590000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00591720
//
// 00591720  6aff                 push -1
// 00591722  68f98a7500           push 0x758af9
// 00591727  64a100000000         mov eax, dword ptr fs:[0]
// 0059172d  50                   push eax
// 0059172e  64892500000000       mov dword ptr fs:[0], esp
// 00591735  51                   push ecx
// 00591736  56                   push esi
// 00591737  8bf1                 mov esi, ecx
// 00591739  89742404             mov dword ptr [esp + 4], esi
// 0059173d  8d4e1c               lea ecx, [esi + 0x1c]
// 00591740  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00591748  ff158ce77700         call dword ptr [0x77e78c]
// 0059174e  8bce                 mov ecx, esi
// 00591750  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00591758  ff158ce77700         call dword ptr [0x77e78c]
// 0059175e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00591762  5e                   pop esi
// 00591763  64890d00000000       mov dword ptr fs:[0], ecx
// 0059176a  83c410               add esp, 0x10
// 0059176d  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??1?$char_separator@DU?$char_traits@D@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
