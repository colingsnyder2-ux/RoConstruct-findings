// roc 2007-03 00544560  unit: seg_00540000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00544560
//
// 00544560  56                   push esi
// 00544561  8bf1                 mov esi, ecx
// 00544563  8d4e0c               lea ecx, [esi + 0xc]
// 00544566  c706383e7800         mov dword ptr [esi], 0x783e38
// 0054456c  ff158ce77700         call dword ptr [0x77e78c]
// 00544572  8bce                 mov ecx, esi
// 00544574  5e                   pop esi
// 00544575  ff255ce97700         jmp dword ptr [0x77e95c]
// library rbxgs/v8datamodel\FlagStand.cpp (function ??1logic_error@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
