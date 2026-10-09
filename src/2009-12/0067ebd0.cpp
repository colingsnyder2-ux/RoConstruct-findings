// roc 2009-12 0067ebd0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0067ebd0
//
// 0067ebd0  51                   push ecx
// 0067ebd1  6a28                 push 0x28
// 0067ebd3  c744240400000000     mov dword ptr [esp + 4], 0
// 0067ebdb  e8804c1700           call 0x7f3860
// 0067ebe0  83c404               add esp, 4
// 0067ebe3  85c0                 test eax, eax
// 0067ebe5  7432                 je 0x67ec19
// 0067ebe7  c70018009d00         mov dword ptr [eax], 0x9d0018
// 0067ebed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067ebf1  894808               mov dword ptr [eax + 8], ecx
// 0067ebf4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0067ebf8  89500c               mov dword ptr [eax + 0xc], edx
// 0067ebfb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067ebff  894810               mov dword ptr [eax + 0x10], ecx
// 0067ec02  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067ec06  895018               mov dword ptr [eax + 0x18], edx
// 0067ec09  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0067ec0d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0067ec10  8b542420             mov edx, dword ptr [esp + 0x20]
// 0067ec14  895020               mov dword ptr [eax + 0x20], edx
// 0067ec17  eb02                 jmp 0x67ec1b
// 0067ec19  33c0                 xor eax, eax
// 0067ec1b  56                   push esi
// 0067ec1c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067ec20  6a00                 push 0
// 0067ec22  8906                 mov dword ptr [esi], eax
// 0067ec24  e8314c1700           call 0x7f385a
// 0067ec29  83c404               add esp, 4
// 0067ec2c  8bc6                 mov eax, esi
// 0067ec2e  5e                   pop esi
// 0067ec2f  59                   pop ecx
// 0067ec30  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
