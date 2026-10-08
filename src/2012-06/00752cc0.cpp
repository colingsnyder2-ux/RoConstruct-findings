// roc 2012-06 00752cc0  unit: RBX::PartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00752cc0
//
// 00752cc0  51                   push ecx
// 00752cc1  6a28                 push 0x28
// 00752cc3  c744240400000000     mov dword ptr [esp + 4], 0
// 00752ccb  e84af42200           call 0x98211a
// 00752cd0  83c404               add esp, 4
// 00752cd3  85c0                 test eax, eax
// 00752cd5  7432                 je 0x752d09
// 00752cd7  c700b4c5ba00         mov dword ptr [eax], 0xbac5b4
// 00752cdd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00752ce1  894808               mov dword ptr [eax + 8], ecx
// 00752ce4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00752ce8  89500c               mov dword ptr [eax + 0xc], edx
// 00752ceb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00752cef  894810               mov dword ptr [eax + 0x10], ecx
// 00752cf2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00752cf6  895018               mov dword ptr [eax + 0x18], edx
// 00752cf9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00752cfd  89481c               mov dword ptr [eax + 0x1c], ecx
// 00752d00  8b542420             mov edx, dword ptr [esp + 0x20]
// 00752d04  895020               mov dword ptr [eax + 0x20], edx
// 00752d07  eb02                 jmp 0x752d0b
// 00752d09  33c0                 xor eax, eax
// 00752d0b  56                   push esi
// 00752d0c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00752d10  6a00                 push 0
// 00752d12  8906                 mov dword ptr [esi], eax
// 00752d14  e8fbf32200           call 0x982114
// 00752d19  83c404               add esp, 4
// 00752d1c  8bc6                 mov eax, esi
// 00752d1e  5e                   pop esi
// 00752d1f  59                   pop ecx
// 00752d20  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
