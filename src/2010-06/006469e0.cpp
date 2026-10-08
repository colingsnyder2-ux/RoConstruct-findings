// roc 2010-06 006469e0  unit: RBX::VArrowTool::?$TToolVerb  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006469e0
//
// 006469e0  6aff                 push -1
// 006469e2  6828ae9a00           push 0x9aae28
// 006469e7  64a100000000         mov eax, dword ptr fs:[0]
// 006469ed  50                   push eax
// 006469ee  64892500000000       mov dword ptr fs:[0], esp
// 006469f5  51                   push ecx
// 006469f6  56                   push esi
// 006469f7  8bf1                 mov esi, ecx
// 006469f9  89742404             mov dword ptr [esp + 4], esi
// 006469fd  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00646a00  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00646a08  85c9                 test ecx, ecx
// 00646a0a  7413                 je 0x646a1f
// 00646a0c  8d4108               lea eax, [ecx + 8]
// 00646a0f  83caff               or edx, 0xffffffff
// 00646a12  f00fc110             lock xadd dword ptr [eax], edx
// 00646a16  7507                 jne 0x646a1f
// 00646a18  8b01                 mov eax, dword ptr [ecx]
// 00646a1a  8b5008               mov edx, dword ptr [eax + 8]
// 00646a1d  ffd2                 call edx
// 00646a1f  8bce                 mov ecx, esi
// 00646a21  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00646a29  e872700d00           call 0x71daa0
// 00646a2e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00646a32  5e                   pop esi
// 00646a33  64890d00000000       mov dword ptr fs:[0], ecx
// 00646a3a  83c410               add esp, 0x10
// 00646a3d  c3                   ret 
// library rbxgs/v8datamodel\UserController.cpp (function ??1PlayerController@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
