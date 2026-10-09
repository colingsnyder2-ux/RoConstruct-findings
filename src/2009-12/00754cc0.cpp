// roc 2009-12 00754cc0  unit: RBX::VPartInstance::?$SeatImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00754cc0
//
// 00754cc0  51                   push ecx
// 00754cc1  6a28                 push 0x28
// 00754cc3  c744240400000000     mov dword ptr [esp + 4], 0
// 00754ccb  e890eb0900           call 0x7f3860
// 00754cd0  83c404               add esp, 4
// 00754cd3  85c0                 test eax, eax
// 00754cd5  7432                 je 0x754d09
// 00754cd7  c700fc499e00         mov dword ptr [eax], 0x9e49fc
// 00754cdd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00754ce1  894808               mov dword ptr [eax + 8], ecx
// 00754ce4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00754ce8  89500c               mov dword ptr [eax + 0xc], edx
// 00754ceb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00754cef  894810               mov dword ptr [eax + 0x10], ecx
// 00754cf2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00754cf6  895018               mov dword ptr [eax + 0x18], edx
// 00754cf9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00754cfd  89481c               mov dword ptr [eax + 0x1c], ecx
// 00754d00  8b542420             mov edx, dword ptr [esp + 0x20]
// 00754d04  895020               mov dword ptr [eax + 0x20], edx
// 00754d07  eb02                 jmp 0x754d0b
// 00754d09  33c0                 xor eax, eax
// 00754d0b  56                   push esi
// 00754d0c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00754d10  6a00                 push 0
// 00754d12  8906                 mov dword ptr [esi], eax
// 00754d14  e841eb0900           call 0x7f385a
// 00754d19  83c404               add esp, 4
// 00754d1c  8bc6                 mov eax, esi
// 00754d1e  5e                   pop esi
// 00754d1f  59                   pop ecx
// 00754d20  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
