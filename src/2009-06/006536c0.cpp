// roc 2009-06 006536c0  unit: RBX::VArrowTool::?$TToolVerb  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006536c0
//
// 006536c0  6aff                 push -1
// 006536c2  68780e8700           push 0x870e78
// 006536c7  64a100000000         mov eax, dword ptr fs:[0]
// 006536cd  50                   push eax
// 006536ce  64892500000000       mov dword ptr fs:[0], esp
// 006536d5  51                   push ecx
// 006536d6  56                   push esi
// 006536d7  8bf1                 mov esi, ecx
// 006536d9  89742404             mov dword ptr [esp + 4], esi
// 006536dd  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006536e0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006536e8  85c9                 test ecx, ecx
// 006536ea  7413                 je 0x6536ff
// 006536ec  8d4108               lea eax, [ecx + 8]
// 006536ef  83caff               or edx, 0xffffffff
// 006536f2  f00fc110             lock xadd dword ptr [eax], edx
// 006536f6  7507                 jne 0x6536ff
// 006536f8  8b01                 mov eax, dword ptr [ecx]
// 006536fa  8b5008               mov edx, dword ptr [eax + 8]
// 006536fd  ffd2                 call edx
// 006536ff  8bce                 mov ecx, esi
// 00653701  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00653709  e872240600           call 0x6b5b80
// 0065370e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00653712  5e                   pop esi
// 00653713  64890d00000000       mov dword ptr fs:[0], ecx
// 0065371a  83c410               add esp, 0x10
// 0065371d  c3                   ret 
// library rbxgs/v8datamodel\UserController.cpp (function ??1PlayerController@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
