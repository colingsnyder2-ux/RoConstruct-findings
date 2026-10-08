// roc 2009-06 00674330  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00674330
//
// 00674330  6aff                 push -1
// 00674332  6800928500           push 0x859200
// 00674337  64a100000000         mov eax, dword ptr fs:[0]
// 0067433d  50                   push eax
// 0067433e  64892500000000       mov dword ptr fs:[0], esp
// 00674345  51                   push ecx
// 00674346  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0067434a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0067434e  56                   push esi
// 0067434f  50                   push eax
// 00674350  8b442428             mov eax, dword ptr [esp + 0x28]
// 00674354  8bf1                 mov esi, ecx
// 00674356  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0067435a  51                   push ecx
// 0067435b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0067435f  52                   push edx
// 00674360  50                   push eax
// 00674361  51                   push ecx
// 00674362  8d542444             lea edx, [esp + 0x44]
// 00674366  52                   push edx
// 00674367  e814f0ffff           call 0x673380
// 0067436c  8b08                 mov ecx, dword ptr [eax]
// 0067436e  83c410               add esp, 0x10
// 00674371  c70000000000         mov dword ptr [eax], 0
// 00674377  8bc4                 mov eax, esp
// 00674379  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00674381  8964240c             mov dword ptr [esp + 0xc], esp
// 00674385  8908                 mov dword ptr [eax], ecx
// 00674387  8b442424             mov eax, dword ptr [esp + 0x24]
// 0067438b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0067438f  50                   push eax
// 00674390  51                   push ecx
// 00674391  c644242001           mov byte ptr [esp + 0x20], 1
// 00674396  e8f58ae4ff           call 0x4bce90
// 0067439b  50                   push eax
// 0067439c  8bce                 mov ecx, esi
// 0067439e  c644242400           mov byte ptr [esp + 0x24], 0
// 006743a3  e82808fbff           call 0x624bd0
// 006743a8  8b542430             mov edx, dword ptr [esp + 0x30]
// 006743ac  52                   push edx
// 006743ad  e880460a00           call 0x718a32
// 006743b2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006743b6  83c404               add esp, 4
// 006743b9  c706b4408e00         mov dword ptr [esi], 0x8e40b4
// 006743bf  8bc6                 mov eax, esi
// 006743c1  64890d00000000       mov dword ptr fs:[0], ecx
// 006743c8  5e                   pop esi
// 006743c9  83c410               add esp, 0x10
// 006743cc  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
