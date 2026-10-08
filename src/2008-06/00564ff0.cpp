// roc 2008-06 00564ff0  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00564ff0
//
// 00564ff0  64a100000000         mov eax, dword ptr fs:[0]
// 00564ff6  6aff                 push -1
// 00564ff8  6890b27d00           push 0x7db290
// 00564ffd  50                   push eax
// 00564ffe  64892500000000       mov dword ptr fs:[0], esp
// 00565005  8b442424             mov eax, dword ptr [esp + 0x24]
// 00565009  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0056500d  56                   push esi
// 0056500e  50                   push eax
// 0056500f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00565013  8bf1                 mov esi, ecx
// 00565015  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00565019  51                   push ecx
// 0056501a  52                   push edx
// 0056501b  50                   push eax
// 0056501c  8d4c2438             lea ecx, [esp + 0x38]
// 00565020  51                   push ecx
// 00565021  e82aedffff           call 0x563d50
// 00565026  8b08                 mov ecx, dword ptr [eax]
// 00565028  83c40c               add esp, 0xc
// 0056502b  c70000000000         mov dword ptr [eax], 0
// 00565031  8bc4                 mov eax, esp
// 00565033  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0056503b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0056503f  8908                 mov dword ptr [eax], ecx
// 00565041  8b542420             mov edx, dword ptr [esp + 0x20]
// 00565045  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00565049  52                   push edx
// 0056504a  50                   push eax
// 0056504b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00565050  e88bfeffff           call 0x564ee0
// 00565055  50                   push eax
// 00565056  8bce                 mov ecx, esi
// 00565058  c644242000           mov byte ptr [esp + 0x20], 0
// 0056505d  e83ee2edff           call 0x4432a0
// 00565062  8b442428             mov eax, dword ptr [esp + 0x28]
// 00565066  85c0                 test eax, eax
// 00565068  7409                 je 0x565073
// 0056506a  50                   push eax
// 0056506b  e80ab61300           call 0x6a067a
// 00565070  83c404               add esp, 4
// 00565073  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00565077  c706e8e38200         mov dword ptr [esi], 0x82e3e8
// 0056507d  8bc6                 mov eax, esi
// 0056507f  64890d00000000       mov dword ptr fs:[0], ecx
// 00565086  5e                   pop esi
// 00565087  83c40c               add esp, 0xc
// 0056508a  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
