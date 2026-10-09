// roc 2007-03 005d33b0  unit: seg_005d0000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d33b0
//
// 005d33b0  6aff                 push -1
// 005d33b2  6809807500           push 0x758009
// 005d33b7  64a100000000         mov eax, dword ptr fs:[0]
// 005d33bd  50                   push eax
// 005d33be  64892500000000       mov dword ptr fs:[0], esp
// 005d33c5  83ec1c               sub esp, 0x1c
// 005d33c8  8d0424               lea eax, [esp]
// 005d33cb  50                   push eax
// 005d33cc  ff1544e77700         call dword ptr [0x77e744]
// 005d33d2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005d33d6  50                   push eax
// 005d33d7  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005d33df  ff154ce77700         call dword ptr [0x77e74c]
// 005d33e5  8d0c24               lea ecx, [esp]
// 005d33e8  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005d33f0  ff158ce77700         call dword ptr [0x77e78c]
// 005d33f6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d33fa  b001                 mov al, 1
// 005d33fc  64890d00000000       mov dword ptr fs:[0], ecx
// 005d3403  83c428               add esp, 0x28
// 005d3406  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\Profiler.cpp (function ??5?$lexical_stream@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@detail@boost@@QAE_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Profiler.cpp
