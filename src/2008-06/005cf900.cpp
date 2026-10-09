// roc 2008-06 005cf900  unit: ChatEnter  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf900
//
// 005cf900  56                   push esi
// 005cf901  8bf1                 mov esi, ecx
// 005cf903  e868feffff           call 0x5cf770
// 005cf908  c7060cac8300         mov dword ptr [esi], 0x83ac0c
// 005cf90e  c74610fcab8300       mov dword ptr [esi + 0x10], 0x83abfc
// 005cf915  c74614f4ab8300       mov dword ptr [esi + 0x14], 0x83abf4
// 005cf91c  c74620ecab8300       mov dword ptr [esi + 0x20], 0x83abec
// 005cf923  c74624dcab8300       mov dword ptr [esi + 0x24], 0x83abdc
// 005cf92a  c74644ccab8300       mov dword ptr [esi + 0x44], 0x83abcc
// 005cf931  c74664bcab8300       mov dword ptr [esi + 0x64], 0x83abbc
// 005cf938  c78684000000acab8300 mov dword ptr [esi + 0x84], 0x83abac
// 005cf942  c786a40000009cab8300 mov dword ptr [esi + 0xa4], 0x83ab9c
// 005cf94c  c786c40000008cab8300 mov dword ptr [esi + 0xc4], 0x83ab8c
// 005cf956  c7863001000084ab8300 mov dword ptr [esi + 0x130], 0x83ab84
// 005cf960  c7866001000001000000 mov dword ptr [esi + 0x160], 1
// 005cf96a  8bc6                 mov eax, esi
// 005cf96c  5e                   pop esi
// 005cf96d  c3                   ret 
// library openrbx-client/App\v8datamodel\Hopper.cpp (function ??0Hopper@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Hopper.cpp
