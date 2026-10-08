// roc 2008-06 0043d050  unit: RBX::Soundscape::VSoundId::?$XItem  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043d050
//
// 0043d050  6aff                 push -1
// 0043d052  68496b7c00           push 0x7c6b49
// 0043d057  64a100000000         mov eax, dword ptr fs:[0]
// 0043d05d  50                   push eax
// 0043d05e  64892500000000       mov dword ptr fs:[0], esp
// 0043d065  51                   push ecx
// 0043d066  56                   push esi
// 0043d067  8bf1                 mov esi, ecx
// 0043d069  89742404             mov dword ptr [esp + 4], esi
// 0043d06d  ff1560248000         call dword ptr [0x802460]
// 0043d073  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0043d07b  e8f0711100           call 0x554270
// 0043d080  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043d084  89461c               mov dword ptr [esi + 0x1c], eax
// 0043d087  8bc6                 mov eax, esi
// 0043d089  5e                   pop esi
// 0043d08a  64890d00000000       mov dword ptr fs:[0], ecx
// 0043d091  83c410               add esp, 0x10
// 0043d094  c3                   ret 
// library rbxgs/v8datamodel\Sky.cpp (function ??0ContentId@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Sky.cpp
