// roc 2007-03 0057be10  unit: seg_00570000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057be10
//
// 0057be10  64a100000000         mov eax, dword ptr fs:[0]
// 0057be16  6aff                 push -1
// 0057be18  68f8177500           push 0x7517f8
// 0057be1d  50                   push eax
// 0057be1e  64892500000000       mov dword ptr fs:[0], esp
// 0057be25  53                   push ebx
// 0057be26  55                   push ebp
// 0057be27  56                   push esi
// 0057be28  57                   push edi
// 0057be29  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057be2d  8b7e08               mov edi, dword ptr [esi + 8]
// 0057be30  397e04               cmp dword ptr [esi + 4], edi
// 0057be33  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 0057be39  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057be41  7602                 jbe 0x57be45
// 0057be43  ffd5                 call ebp
// 0057be45  8b5e04               mov ebx, dword ptr [esi + 4]
// 0057be48  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0057be4b  7602                 jbe 0x57be4f
// 0057be4d  ffd5                 call ebp
// 0057be4f  6880ba5700           push 0x57ba80
// 0057be54  57                   push edi
// 0057be55  56                   push esi
// 0057be56  53                   push ebx
// 0057be57  56                   push esi
// 0057be58  e8c34dfeff           call 0x560c20
// 0057be5d  8b742438             mov esi, dword ptr [esp + 0x38]
// 0057be61  83c414               add esp, 0x14
// 0057be64  85f6                 test esi, esi
// 0057be66  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0057be6e  742a                 je 0x57be9a
// 0057be70  8d4604               lea eax, [esi + 4]
// 0057be73  83c9ff               or ecx, 0xffffffff
// 0057be76  f00fc108             lock xadd dword ptr [eax], ecx
// 0057be7a  751e                 jne 0x57be9a
// 0057be7c  8b16                 mov edx, dword ptr [esi]
// 0057be7e  8b4204               mov eax, dword ptr [edx + 4]
// 0057be81  8bce                 mov ecx, esi
// 0057be83  ffd0                 call eax
// 0057be85  8d4e08               lea ecx, [esi + 8]
// 0057be88  83caff               or edx, 0xffffffff
// 0057be8b  f00fc111             lock xadd dword ptr [ecx], edx
// 0057be8f  7509                 jne 0x57be9a
// 0057be91  8b06                 mov eax, dword ptr [esi]
// 0057be93  8b5008               mov edx, dword ptr [eax + 8]
// 0057be96  8bce                 mov ecx, esi
// 0057be98  ffd2                 call edx
// 0057be9a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057be9e  5f                   pop edi
// 0057be9f  5e                   pop esi
// 0057bea0  5d                   pop ebp
// 0057bea1  64890d00000000       mov dword ptr fs:[0], ecx
// 0057bea8  5b                   pop ebx
// 0057bea9  83c40c               add esp, 0xc
// 0057beac  c20800               ret 8
// library rbxgs/v8datamodel\Workspace.cpp (function ?makeJoints@Workspace@RBX@@QAEXV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
