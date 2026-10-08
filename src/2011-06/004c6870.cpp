// roc 2011-06 004c6870  unit: RBX::Network::VPlayer::?$EventDesc  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c6870
//
// 004c6870  56                   push esi
// 004c6871  6a01                 push 1
// 004c6873  683824c200           push 0xc22438
// 004c6878  8bf1                 mov esi, ecx
// 004c687a  ff156809a400         call dword ptr [0xa40968]
// 004c6880  c706b4b5a500         mov dword ptr [esi], 0xa5b5b4
// 004c6886  8bc6                 mov eax, esi
// 004c6888  5e                   pop esi
// 004c6889  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0bad_alloc@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
