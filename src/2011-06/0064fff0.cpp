// roc 2011-06 0064fff0  unit: RBX::DropperTool  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064fff0
//
// 0064fff0  51                   push ecx
// 0064fff1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0064fff5  803800               cmp byte ptr [eax], 0
// 0064fff8  c7042400000000       mov dword ptr [esp], 0
// 0064ffff  b878f2a600           mov eax, 0xa6f278
// 00650004  7505                 jne 0x65000b
// 00650006  b85cf9a700           mov eax, 0xa7f95c
// 0065000b  56                   push esi
// 0065000c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00650010  50                   push eax
// 00650011  8bce                 mov ecx, esi
// 00650013  ff15c404a400         call dword ptr [0xa404c4]
// 00650019  8bc6                 mov eax, esi
// 0065001b  5e                   pop esi
// 0065001c  59                   pop ecx
// 0065001d  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@_N@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Utilities.cpp
