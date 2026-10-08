// roc 2008-06 0049a910  unit: RBX::VInstance::V?$shared_ptr::V?$vector::?$sp_counted_impl_p  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049a910
//
// 0049a910  64a100000000         mov eax, dword ptr fs:[0]
// 0049a916  6aff                 push -1
// 0049a918  6890b27d00           push 0x7db290
// 0049a91d  50                   push eax
// 0049a91e  64892500000000       mov dword ptr fs:[0], esp
// 0049a925  8b442424             mov eax, dword ptr [esp + 0x24]
// 0049a929  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0049a92d  56                   push esi
// 0049a92e  50                   push eax
// 0049a92f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0049a933  8bf1                 mov esi, ecx
// 0049a935  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0049a939  51                   push ecx
// 0049a93a  52                   push edx
// 0049a93b  50                   push eax
// 0049a93c  8d4c2438             lea ecx, [esp + 0x38]
// 0049a940  51                   push ecx
// 0049a941  e8dac9ffff           call 0x497320
// 0049a946  8b08                 mov ecx, dword ptr [eax]
// 0049a948  83c40c               add esp, 0xc
// 0049a94b  c70000000000         mov dword ptr [eax], 0
// 0049a951  8bc4                 mov eax, esp
// 0049a953  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0049a95b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0049a95f  8908                 mov dword ptr [eax], ecx
// 0049a961  8b542420             mov edx, dword ptr [esp + 0x20]
// 0049a965  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0049a969  52                   push edx
// 0049a96a  50                   push eax
// 0049a96b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0049a970  e82bffffff           call 0x49a8a0
// 0049a975  50                   push eax
// 0049a976  8bce                 mov ecx, esi
// 0049a978  c644242000           mov byte ptr [esp + 0x20], 0
// 0049a97d  e81e89faff           call 0x4432a0
// 0049a982  8b442428             mov eax, dword ptr [esp + 0x28]
// 0049a986  85c0                 test eax, eax
// 0049a988  7409                 je 0x49a993
// 0049a98a  50                   push eax
// 0049a98b  e8ea5c2000           call 0x6a067a
// 0049a990  83c404               add esp, 4
// 0049a993  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049a997  c70650288200         mov dword ptr [esi], 0x822850
// 0049a99d  8bc6                 mov eax, esi
// 0049a99f  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a9a6  5e                   pop esi
// 0049a9a7  83c40c               add esp, 0xc
// 0049a9aa  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
