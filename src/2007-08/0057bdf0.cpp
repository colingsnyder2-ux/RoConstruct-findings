// roc 2007-08 0057bdf0  unit: RBX::Workspace  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057bdf0
//
// 0057bdf0  64a100000000         mov eax, dword ptr fs:[0]
// 0057bdf6  6aff                 push -1
// 0057bdf8  6898657500           push 0x756598
// 0057bdfd  50                   push eax
// 0057bdfe  64892500000000       mov dword ptr fs:[0], esp
// 0057be05  53                   push ebx
// 0057be06  55                   push ebp
// 0057be07  56                   push esi
// 0057be08  57                   push edi
// 0057be09  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057be0d  8b7e08               mov edi, dword ptr [esi + 8]
// 0057be10  397e04               cmp dword ptr [esi + 4], edi
// 0057be13  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0057be19  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057be21  7602                 jbe 0x57be25
// 0057be23  ffd5                 call ebp
// 0057be25  8b5e04               mov ebx, dword ptr [esi + 4]
// 0057be28  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0057be2b  7602                 jbe 0x57be2f
// 0057be2d  ffd5                 call ebp
// 0057be2f  68f0ba5700           push 0x57baf0
// 0057be34  57                   push edi
// 0057be35  56                   push esi
// 0057be36  53                   push ebx
// 0057be37  56                   push esi
// 0057be38  e87335feff           call 0x55f3b0
// 0057be3d  8b742438             mov esi, dword ptr [esp + 0x38]
// 0057be41  83c414               add esp, 0x14
// 0057be44  85f6                 test esi, esi
// 0057be46  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0057be4e  742a                 je 0x57be7a
// 0057be50  8d4604               lea eax, [esi + 4]
// 0057be53  83c9ff               or ecx, 0xffffffff
// 0057be56  f00fc108             lock xadd dword ptr [eax], ecx
// 0057be5a  751e                 jne 0x57be7a
// 0057be5c  8b16                 mov edx, dword ptr [esi]
// 0057be5e  8b4204               mov eax, dword ptr [edx + 4]
// 0057be61  8bce                 mov ecx, esi
// 0057be63  ffd0                 call eax
// 0057be65  8d4e08               lea ecx, [esi + 8]
// 0057be68  83caff               or edx, 0xffffffff
// 0057be6b  f00fc111             lock xadd dword ptr [ecx], edx
// 0057be6f  7509                 jne 0x57be7a
// 0057be71  8b06                 mov eax, dword ptr [esi]
// 0057be73  8b5008               mov edx, dword ptr [eax + 8]
// 0057be76  8bce                 mov ecx, esi
// 0057be78  ffd2                 call edx
// 0057be7a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057be7e  5f                   pop edi
// 0057be7f  5e                   pop esi
// 0057be80  5d                   pop ebp
// 0057be81  64890d00000000       mov dword ptr fs:[0], ecx
// 0057be88  5b                   pop ebx
// 0057be89  83c40c               add esp, 0xc
// 0057be8c  c20800               ret 8
// library rbxgs/v8datamodel\Workspace.cpp (function ?makeJoints@Workspace@RBX@@QAEXV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
