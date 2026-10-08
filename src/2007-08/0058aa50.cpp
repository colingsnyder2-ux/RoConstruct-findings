// roc 2007-08 0058aa50  unit: RBX::VSoundChannel::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058aa50
//
// 0058aa50  64a100000000         mov eax, dword ptr fs:[0]
// 0058aa56  6aff                 push -1
// 0058aa58  6890117500           push 0x751190
// 0058aa5d  50                   push eax
// 0058aa5e  64892500000000       mov dword ptr fs:[0], esp
// 0058aa65  8b442428             mov eax, dword ptr [esp + 0x28]
// 0058aa69  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058aa6d  56                   push esi
// 0058aa6e  50                   push eax
// 0058aa6f  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058aa73  8bf1                 mov esi, ecx
// 0058aa75  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0058aa79  51                   push ecx
// 0058aa7a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0058aa7e  52                   push edx
// 0058aa7f  50                   push eax
// 0058aa80  51                   push ecx
// 0058aa81  8d542440             lea edx, [esp + 0x40]
// 0058aa85  52                   push edx
// 0058aa86  e835dfffff           call 0x5889c0
// 0058aa8b  8b10                 mov edx, dword ptr [eax]
// 0058aa8d  83c410               add esp, 0x10
// 0058aa90  8bcc                 mov ecx, esp
// 0058aa92  c70000000000         mov dword ptr [eax], 0
// 0058aa98  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0058aaa0  8964242c             mov dword ptr [esp + 0x2c], esp
// 0058aaa4  8911                 mov dword ptr [ecx], edx
// 0058aaa6  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058aaaa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058aaae  52                   push edx
// 0058aaaf  50                   push eax
// 0058aab0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0058aab5  e896fcffff           call 0x58a750
// 0058aaba  50                   push eax
// 0058aabb  8bce                 mov ecx, esi
// 0058aabd  c644242000           mov byte ptr [esp + 0x20], 0
// 0058aac2  e889dcffff           call 0x588750
// 0058aac7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0058aacb  51                   push ecx
// 0058aacc  e891510a00           call 0x62fc62
// 0058aad1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058aad5  83c404               add esp, 4
// 0058aad8  c7067cee7a00         mov dword ptr [esi], 0x7aee7c
// 0058aade  8bc6                 mov eax, esi
// 0058aae0  64890d00000000       mov dword ptr fs:[0], ecx
// 0058aae7  5e                   pop esi
// 0058aae8  83c40c               add esp, 0xc
// 0058aaeb  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
