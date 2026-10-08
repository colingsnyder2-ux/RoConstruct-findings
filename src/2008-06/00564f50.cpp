// roc 2008-06 00564f50  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00564f50
//
// 00564f50  64a100000000         mov eax, dword ptr fs:[0]
// 00564f56  6aff                 push -1
// 00564f58  6890b27d00           push 0x7db290
// 00564f5d  50                   push eax
// 00564f5e  64892500000000       mov dword ptr fs:[0], esp
// 00564f65  8b442424             mov eax, dword ptr [esp + 0x24]
// 00564f69  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00564f6d  56                   push esi
// 00564f6e  50                   push eax
// 00564f6f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00564f73  8bf1                 mov esi, ecx
// 00564f75  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00564f79  51                   push ecx
// 00564f7a  52                   push edx
// 00564f7b  50                   push eax
// 00564f7c  8d4c2438             lea ecx, [esp + 0x38]
// 00564f80  51                   push ecx
// 00564f81  e88aedffff           call 0x563d10
// 00564f86  8b08                 mov ecx, dword ptr [eax]
// 00564f88  83c40c               add esp, 0xc
// 00564f8b  c70000000000         mov dword ptr [eax], 0
// 00564f91  8bc4                 mov eax, esp
// 00564f93  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00564f9b  8964242c             mov dword ptr [esp + 0x2c], esp
// 00564f9f  8908                 mov dword ptr [eax], ecx
// 00564fa1  8b542420             mov edx, dword ptr [esp + 0x20]
// 00564fa5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00564fa9  52                   push edx
// 00564faa  50                   push eax
// 00564fab  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00564fb0  e82bffffff           call 0x564ee0
// 00564fb5  50                   push eax
// 00564fb6  8bce                 mov ecx, esi
// 00564fb8  c644242000           mov byte ptr [esp + 0x20], 0
// 00564fbd  e84e06eeff           call 0x445610
// 00564fc2  8b442428             mov eax, dword ptr [esp + 0x28]
// 00564fc6  85c0                 test eax, eax
// 00564fc8  7409                 je 0x564fd3
// 00564fca  50                   push eax
// 00564fcb  e8aab61300           call 0x6a067a
// 00564fd0  83c404               add esp, 4
// 00564fd3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00564fd7  c706b4e38200         mov dword ptr [esi], 0x82e3b4
// 00564fdd  8bc6                 mov eax, esi
// 00564fdf  64890d00000000       mov dword ptr fs:[0], ecx
// 00564fe6  5e                   pop esi
// 00564fe7  83c40c               add esp, 0xc
// 00564fea  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
