// roc 2008-06 00501800  unit: boost::bad_lexical_cast  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501800
//
// 00501800  6aff                 push -1
// 00501802  6809e77c00           push 0x7ce709
// 00501807  64a100000000         mov eax, dword ptr fs:[0]
// 0050180d  50                   push eax
// 0050180e  64892500000000       mov dword ptr fs:[0], esp
// 00501815  83ec1c               sub esp, 0x1c
// 00501818  8d0424               lea eax, [esp]
// 0050181b  50                   push eax
// 0050181c  ff15c8248000         call dword ptr [0x8024c8]
// 00501822  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00501826  50                   push eax
// 00501827  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0050182f  ff150c248000         call dword ptr [0x80240c]
// 00501835  8d0c24               lea ecx, [esp]
// 00501838  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00501840  ff1568248000         call dword ptr [0x802468]
// 00501846  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050184a  b001                 mov al, 1
// 0050184c  64890d00000000       mov dword ptr fs:[0], ecx
// 00501853  83c428               add esp, 0x28
// 00501856  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\Profiler.cpp (function ??5?$lexical_stream@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@detail@boost@@QAE_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Profiler.cpp
