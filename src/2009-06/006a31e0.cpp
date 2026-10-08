// roc 2009-06 006a31e0  unit: RBX::VehicleSeat  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a31e0
//
// 006a31e0  6aff                 push -1
// 006a31e2  6820c58600           push 0x86c520
// 006a31e7  64a100000000         mov eax, dword ptr fs:[0]
// 006a31ed  50                   push eax
// 006a31ee  64892500000000       mov dword ptr fs:[0], esp
// 006a31f5  51                   push ecx
// 006a31f6  8b442434             mov eax, dword ptr [esp + 0x34]
// 006a31fa  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006a31fe  56                   push esi
// 006a31ff  50                   push eax
// 006a3200  8bf1                 mov esi, ecx
// 006a3202  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006a3206  83ec0c               sub esp, 0xc
// 006a3209  8bc4                 mov eax, esp
// 006a320b  8908                 mov dword ptr [eax], ecx
// 006a320d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006a3211  895004               mov dword ptr [eax + 4], edx
// 006a3214  8b542430             mov edx, dword ptr [esp + 0x30]
// 006a3218  894808               mov dword ptr [eax + 8], ecx
// 006a321b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006a321f  83ec0c               sub esp, 0xc
// 006a3222  8bc4                 mov eax, esp
// 006a3224  8910                 mov dword ptr [eax], edx
// 006a3226  8b542444             mov edx, dword ptr [esp + 0x44]
// 006a322a  894804               mov dword ptr [eax + 4], ecx
// 006a322d  895008               mov dword ptr [eax + 8], edx
// 006a3230  8d442454             lea eax, [esp + 0x54]
// 006a3234  50                   push eax
// 006a3235  e866f3ffff           call 0x6a25a0
// 006a323a  8b08                 mov ecx, dword ptr [eax]
// 006a323c  83c418               add esp, 0x18
// 006a323f  c70000000000         mov dword ptr [eax], 0
// 006a3245  8bc4                 mov eax, esp
// 006a3247  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006a324f  8964240c             mov dword ptr [esp + 0xc], esp
// 006a3253  8908                 mov dword ptr [eax], ecx
// 006a3255  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006a3259  8b542420             mov edx, dword ptr [esp + 0x20]
// 006a325d  51                   push ecx
// 006a325e  52                   push edx
// 006a325f  c644242001           mov byte ptr [esp + 0x20], 1
// 006a3264  e87792f4ff           call 0x5ec4e0
// 006a3269  50                   push eax
// 006a326a  8bce                 mov ecx, esi
// 006a326c  c644242400           mov byte ptr [esp + 0x24], 0
// 006a3271  e87aaad9ff           call 0x43dcf0
// 006a3276  8b442438             mov eax, dword ptr [esp + 0x38]
// 006a327a  50                   push eax
// 006a327b  e8b2570700           call 0x718a32
// 006a3280  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a3284  83c404               add esp, 4
// 006a3287  c706249a8e00         mov dword ptr [esi], 0x8e9a24
// 006a328d  8bc6                 mov eax, esi
// 006a328f  64890d00000000       mov dword ptr fs:[0], ecx
// 006a3296  5e                   pop esi
// 006a3297  83c410               add esp, 0x10
// 006a329a  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
