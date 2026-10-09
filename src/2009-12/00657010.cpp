// roc 2009-12 00657010  unit: RBX::VHandles::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00657010
//
// 00657010  6aff                 push -1
// 00657012  684bad9300           push 0x93ad4b
// 00657017  64a100000000         mov eax, dword ptr fs:[0]
// 0065701d  50                   push eax
// 0065701e  64892500000000       mov dword ptr fs:[0], esp
// 00657025  83ec08               sub esp, 8
// 00657028  c7042400000000       mov dword ptr [esp], 0
// 0065702f  68c0010000           push 0x1c0
// 00657034  c644240400           mov byte ptr [esp + 4], 0
// 00657039  e822c81900           call 0x7f3860
// 0065703e  83c404               add esp, 4
// 00657041  89442404             mov dword ptr [esp + 4], eax
// 00657045  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0065704d  85c0                 test eax, eax
// 0065704f  7409                 je 0x65705a
// 00657051  8bc8                 mov ecx, eax
// 00657053  e8687c0f00           call 0x74ecc0
// 00657058  eb02                 jmp 0x65705c
// 0065705a  33c0                 xor eax, eax
// 0065705c  8b0c24               mov ecx, dword ptr [esp]
// 0065705f  56                   push esi
// 00657060  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00657064  51                   push ecx
// 00657065  50                   push eax
// 00657066  8bce                 mov ecx, esi
// 00657068  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00657070  e8ebfeffff           call 0x656f60
// 00657075  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00657079  8bc6                 mov eax, esi
// 0065707b  5e                   pop esi
// 0065707c  64890d00000000       mov dword ptr fs:[0], ecx
// 00657083  83c414               add esp, 0x14
// 00657086  c3                   ret 
// library rbxgs/v8datamodel\GlobalSettings.cpp (function ??$create@VGlobalSettings@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlobalSettings@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/GlobalSettings.cpp
