// roc 2007-08 005d4cf0  unit: RBX::VTool::?$FactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d4cf0
//
// 005d4cf0  6aff                 push -1
// 005d4cf2  6879be7500           push 0x75be79
// 005d4cf7  64a100000000         mov eax, dword ptr fs:[0]
// 005d4cfd  50                   push eax
// 005d4cfe  64892500000000       mov dword ptr fs:[0], esp
// 005d4d05  83ec1c               sub esp, 0x1c
// 005d4d08  8d0424               lea eax, [esp]
// 005d4d0b  50                   push eax
// 005d4d0c  ff1548e57700         call dword ptr [0x77e548]
// 005d4d12  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005d4d16  50                   push eax
// 005d4d17  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005d4d1f  ff1590e67700         call dword ptr [0x77e690]
// 005d4d25  8d0c24               lea ecx, [esp]
// 005d4d28  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005d4d30  ff15ace67700         call dword ptr [0x77e6ac]
// 005d4d36  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d4d3a  b001                 mov al, 1
// 005d4d3c  64890d00000000       mov dword ptr fs:[0], ecx
// 005d4d43  83c428               add esp, 0x28
// 005d4d46  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\Profiler.cpp (function ??5?$lexical_stream@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@detail@boost@@QAE_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Profiler.cpp
