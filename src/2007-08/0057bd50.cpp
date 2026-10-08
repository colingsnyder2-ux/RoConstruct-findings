// roc 2007-08 0057bd50  unit: RBX::Workspace  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057bd50
//
// 0057bd50  64a100000000         mov eax, dword ptr fs:[0]
// 0057bd56  6aff                 push -1
// 0057bd58  6898657500           push 0x756598
// 0057bd5d  50                   push eax
// 0057bd5e  64892500000000       mov dword ptr fs:[0], esp
// 0057bd65  53                   push ebx
// 0057bd66  55                   push ebp
// 0057bd67  56                   push esi
// 0057bd68  57                   push edi
// 0057bd69  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057bd6d  8b7e08               mov edi, dword ptr [esi + 8]
// 0057bd70  397e04               cmp dword ptr [esi + 4], edi
// 0057bd73  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0057bd79  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057bd81  7602                 jbe 0x57bd85
// 0057bd83  ffd5                 call ebp
// 0057bd85  8b5e04               mov ebx, dword ptr [esi + 4]
// 0057bd88  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0057bd8b  7602                 jbe 0x57bd8f
// 0057bd8d  ffd5                 call ebp
// 0057bd8f  6850ba5700           push 0x57ba50
// 0057bd94  57                   push edi
// 0057bd95  56                   push esi
// 0057bd96  53                   push ebx
// 0057bd97  56                   push esi
// 0057bd98  e81336feff           call 0x55f3b0
// 0057bd9d  8b742438             mov esi, dword ptr [esp + 0x38]
// 0057bda1  83c414               add esp, 0x14
// 0057bda4  85f6                 test esi, esi
// 0057bda6  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0057bdae  742a                 je 0x57bdda
// 0057bdb0  8d4604               lea eax, [esi + 4]
// 0057bdb3  83c9ff               or ecx, 0xffffffff
// 0057bdb6  f00fc108             lock xadd dword ptr [eax], ecx
// 0057bdba  751e                 jne 0x57bdda
// 0057bdbc  8b16                 mov edx, dword ptr [esi]
// 0057bdbe  8b4204               mov eax, dword ptr [edx + 4]
// 0057bdc1  8bce                 mov ecx, esi
// 0057bdc3  ffd0                 call eax
// 0057bdc5  8d4e08               lea ecx, [esi + 8]
// 0057bdc8  83caff               or edx, 0xffffffff
// 0057bdcb  f00fc111             lock xadd dword ptr [ecx], edx
// 0057bdcf  7509                 jne 0x57bdda
// 0057bdd1  8b06                 mov eax, dword ptr [esi]
// 0057bdd3  8b5008               mov edx, dword ptr [eax + 8]
// 0057bdd6  8bce                 mov ecx, esi
// 0057bdd8  ffd2                 call edx
// 0057bdda  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057bdde  5f                   pop edi
// 0057bddf  5e                   pop esi
// 0057bde0  5d                   pop ebp
// 0057bde1  64890d00000000       mov dword ptr fs:[0], ecx
// 0057bde8  5b                   pop ebx
// 0057bde9  83c40c               add esp, 0xc
// 0057bdec  c20800               ret 8
// library rbxgs/v8datamodel\Workspace.cpp (function ?makeJoints@Workspace@RBX@@QAEXV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
