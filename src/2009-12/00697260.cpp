// roc 2009-12 00697260  unit: RBX::HeartbeatInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00697260
//
// 00697260  51                   push ecx
// 00697261  6a28                 push 0x28
// 00697263  c744240400000000     mov dword ptr [esp + 4], 0
// 0069726b  e8f0c51500           call 0x7f3860
// 00697270  83c404               add esp, 4
// 00697273  85c0                 test eax, eax
// 00697275  7432                 je 0x6972a9
// 00697277  c70058229d00         mov dword ptr [eax], 0x9d2258
// 0069727d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00697281  894808               mov dword ptr [eax + 8], ecx
// 00697284  8b542410             mov edx, dword ptr [esp + 0x10]
// 00697288  89500c               mov dword ptr [eax + 0xc], edx
// 0069728b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069728f  894810               mov dword ptr [eax + 0x10], ecx
// 00697292  8b542418             mov edx, dword ptr [esp + 0x18]
// 00697296  895018               mov dword ptr [eax + 0x18], edx
// 00697299  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0069729d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006972a0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006972a4  895020               mov dword ptr [eax + 0x20], edx
// 006972a7  eb02                 jmp 0x6972ab
// 006972a9  33c0                 xor eax, eax
// 006972ab  56                   push esi
// 006972ac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006972b0  6a00                 push 0
// 006972b2  8906                 mov dword ptr [esi], eax
// 006972b4  e8a1c51500           call 0x7f385a
// 006972b9  83c404               add esp, 4
// 006972bc  8bc6                 mov eax, esi
// 006972be  5e                   pop esi
// 006972bf  59                   pop ecx
// 006972c0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
