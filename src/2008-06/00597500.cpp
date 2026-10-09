// roc 2008-06 00597500  unit: RBX::VTextureId::?$holder  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597500
//
// 00597500  6aff                 push -1
// 00597502  68c8d37b00           push 0x7bd3c8
// 00597507  64a100000000         mov eax, dword ptr fs:[0]
// 0059750d  50                   push eax
// 0059750e  64892500000000       mov dword ptr fs:[0], esp
// 00597515  51                   push ecx
// 00597516  56                   push esi
// 00597517  8bf1                 mov esi, ecx
// 00597519  89742404             mov dword ptr [esp + 4], esi
// 0059751d  8d8e30010000         lea ecx, [esi + 0x130]
// 00597523  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059752b  e8e05eeeff           call 0x47d410
// 00597530  8bce                 mov ecx, esi
// 00597532  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0059753a  e80130fcff           call 0x55a540
// 0059753f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00597543  5e                   pop esi
// 00597544  64890d00000000       mov dword ptr fs:[0], ecx
// 0059754b  83c410               add esp, 0x10
// 0059754e  c3                   ret 
// library openrbx-client/App\v8datamodel\Camera.cpp (function ??1Camera@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Camera.cpp
