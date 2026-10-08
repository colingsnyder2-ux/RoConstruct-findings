// roc 2011-06 0066d9f0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066d9f0
//
// 0066d9f0  51                   push ecx
// 0066d9f1  6a28                 push 0x28
// 0066d9f3  c744240400000000     mov dword ptr [esp + 4], 0
// 0066d9fb  e85ec61900           call 0x80a05e
// 0066da00  83c404               add esp, 4
// 0066da03  85c0                 test eax, eax
// 0066da05  743a                 je 0x66da41
// 0066da07  c700b0c8a900         mov dword ptr [eax], 0xa9c8b0
// 0066da0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066da11  894808               mov dword ptr [eax + 8], ecx
// 0066da14  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066da18  89500c               mov dword ptr [eax + 0xc], edx
// 0066da1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066da1f  894810               mov dword ptr [eax + 0x10], ecx
// 0066da22  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066da26  895018               mov dword ptr [eax + 0x18], edx
// 0066da29  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066da2d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066da30  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066da34  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066da38  895020               mov dword ptr [eax + 0x20], edx
// 0066da3b  8901                 mov dword ptr [ecx], eax
// 0066da3d  8bc1                 mov eax, ecx
// 0066da3f  59                   pop ecx
// 0066da40  c3                   ret 
// 0066da41  8b442408             mov eax, dword ptr [esp + 8]
// 0066da45  33c9                 xor ecx, ecx
// 0066da47  8908                 mov dword ptr [eax], ecx
// 0066da49  59                   pop ecx
// 0066da4a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
