// roc 2008-06 005cb4b0  unit: RBX::PlayerController  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cb4b0
//
// 005cb4b0  6aff                 push -1
// 005cb4b2  6848537d00           push 0x7d5348
// 005cb4b7  64a100000000         mov eax, dword ptr fs:[0]
// 005cb4bd  50                   push eax
// 005cb4be  64892500000000       mov dword ptr fs:[0], esp
// 005cb4c5  51                   push ecx
// 005cb4c6  56                   push esi
// 005cb4c7  8bf1                 mov esi, ecx
// 005cb4c9  89742404             mov dword ptr [esp + 4], esi
// 005cb4cd  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005cb4d0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005cb4d8  85c9                 test ecx, ecx
// 005cb4da  7413                 je 0x5cb4ef
// 005cb4dc  8d4108               lea eax, [ecx + 8]
// 005cb4df  83caff               or edx, 0xffffffff
// 005cb4e2  f00fc110             lock xadd dword ptr [eax], edx
// 005cb4e6  7507                 jne 0x5cb4ef
// 005cb4e8  8b01                 mov eax, dword ptr [ecx]
// 005cb4ea  8b5008               mov edx, dword ptr [eax + 8]
// 005cb4ed  ffd2                 call edx
// 005cb4ef  8bce                 mov ecx, esi
// 005cb4f1  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005cb4f9  e842fcffff           call 0x5cb140
// 005cb4fe  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cb502  5e                   pop esi
// 005cb503  64890d00000000       mov dword ptr fs:[0], ecx
// 005cb50a  83c410               add esp, 0x10
// 005cb50d  c3                   ret 
// library rbxgs/v8datamodel\UserController.cpp (function ??1PlayerController@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
