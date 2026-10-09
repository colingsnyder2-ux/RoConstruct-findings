// roc 2009-12 006d4b90  unit: RBX::VArrowTool::?$TToolVerb  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d4b90
//
// 006d4b90  6aff                 push -1
// 006d4b92  6898569500           push 0x955698
// 006d4b97  64a100000000         mov eax, dword ptr fs:[0]
// 006d4b9d  50                   push eax
// 006d4b9e  64892500000000       mov dword ptr fs:[0], esp
// 006d4ba5  51                   push ecx
// 006d4ba6  56                   push esi
// 006d4ba7  8bf1                 mov esi, ecx
// 006d4ba9  89742404             mov dword ptr [esp + 4], esi
// 006d4bad  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006d4bb0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006d4bb8  85c9                 test ecx, ecx
// 006d4bba  7413                 je 0x6d4bcf
// 006d4bbc  8d4108               lea eax, [ecx + 8]
// 006d4bbf  83caff               or edx, 0xffffffff
// 006d4bc2  f00fc110             lock xadd dword ptr [eax], edx
// 006d4bc6  7507                 jne 0x6d4bcf
// 006d4bc8  8b01                 mov eax, dword ptr [ecx]
// 006d4bca  8b5008               mov edx, dword ptr [eax + 8]
// 006d4bcd  ffd2                 call edx
// 006d4bcf  8bce                 mov ecx, esi
// 006d4bd1  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006d4bd9  e8a20a0b00           call 0x785680
// 006d4bde  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d4be2  5e                   pop esi
// 006d4be3  64890d00000000       mov dword ptr fs:[0], ecx
// 006d4bea  83c410               add esp, 0x10
// 006d4bed  c3                   ret 
// library rbxgs/v8datamodel\UserController.cpp (function ??1PlayerController@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
