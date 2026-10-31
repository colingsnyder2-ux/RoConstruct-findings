// roc 2011-06 00a16e90  unit: seg_00a10000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a16e90
//
// 00a16e90  b9e837cb00           mov ecx, 0xcb37e8
// 00a16e95  c705b415cb00d837cb00 mov dword ptr [0xcb15b4], 0xcb37d8
// 00a16e9f  e86cc79eff           call 0x403610
// 00a16ea4  85c0                 test eax, eax
// 00a16ea6  7d09                 jge 0xa16eb1
// 00a16ea8  c6054039cb0001       mov byte ptr [0xcb3940], 1
// 00a16eaf  eb0a                 jmp 0xa16ebb
// 00a16eb1  c705dc37cb0024000000 mov dword ptr [0xcb37dc], 0x24
// 00a16ebb  687017a300           push 0xa31770
// 00a16ec0  c705d837cb0068e7a600 mov dword ptr [0xcb37d8], 0xa6e768
// 00a16eca  e88e42dfff           call 0x80b15d
// 00a16ecf  59                   pop ecx
// 00a16ed0  c3                   ret 
// copied from an identical function in another client (function ??__Eroc_atl_module@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp