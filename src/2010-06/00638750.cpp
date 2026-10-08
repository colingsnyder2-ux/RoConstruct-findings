// roc 2010-06 00638750  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00638750
//
// 00638750  51                   push ecx
// 00638751  6a28                 push 0x28
// 00638753  c744240400000000     mov dword ptr [esp + 4], 0
// 0063875b  e840f21600           call 0x7a79a0
// 00638760  83c404               add esp, 4
// 00638763  85c0                 test eax, eax
// 00638765  7432                 je 0x638799
// 00638767  c700e064a300         mov dword ptr [eax], 0xa364e0
// 0063876d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00638771  894808               mov dword ptr [eax + 8], ecx
// 00638774  8b542410             mov edx, dword ptr [esp + 0x10]
// 00638778  89500c               mov dword ptr [eax + 0xc], edx
// 0063877b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063877f  894810               mov dword ptr [eax + 0x10], ecx
// 00638782  8b542418             mov edx, dword ptr [esp + 0x18]
// 00638786  895018               mov dword ptr [eax + 0x18], edx
// 00638789  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0063878d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00638790  8b542420             mov edx, dword ptr [esp + 0x20]
// 00638794  895020               mov dword ptr [eax + 0x20], edx
// 00638797  eb02                 jmp 0x63879b
// 00638799  33c0                 xor eax, eax
// 0063879b  56                   push esi
// 0063879c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006387a0  6a00                 push 0
// 006387a2  8906                 mov dword ptr [esi], eax
// 006387a4  e8f1f11600           call 0x7a799a
// 006387a9  83c404               add esp, 4
// 006387ac  8bc6                 mov eax, esi
// 006387ae  5e                   pop esi
// 006387af  59                   pop ecx
// 006387b0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
