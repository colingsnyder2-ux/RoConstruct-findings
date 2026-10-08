// roc 2007-03 0057beb0  unit: seg_00570000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057beb0
//
// 0057beb0  64a100000000         mov eax, dword ptr fs:[0]
// 0057beb6  6aff                 push -1
// 0057beb8  68f8177500           push 0x7517f8
// 0057bebd  50                   push eax
// 0057bebe  64892500000000       mov dword ptr fs:[0], esp
// 0057bec5  53                   push ebx
// 0057bec6  55                   push ebp
// 0057bec7  56                   push esi
// 0057bec8  57                   push edi
// 0057bec9  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057becd  8b7e08               mov edi, dword ptr [esi + 8]
// 0057bed0  397e04               cmp dword ptr [esi + 4], edi
// 0057bed3  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 0057bed9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057bee1  7602                 jbe 0x57bee5
// 0057bee3  ffd5                 call ebp
// 0057bee5  8b5e04               mov ebx, dword ptr [esi + 4]
// 0057bee8  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0057beeb  7602                 jbe 0x57beef
// 0057beed  ffd5                 call ebp
// 0057beef  6820bb5700           push 0x57bb20
// 0057bef4  57                   push edi
// 0057bef5  56                   push esi
// 0057bef6  53                   push ebx
// 0057bef7  56                   push esi
// 0057bef8  e8234dfeff           call 0x560c20
// 0057befd  8b742438             mov esi, dword ptr [esp + 0x38]
// 0057bf01  83c414               add esp, 0x14
// 0057bf04  85f6                 test esi, esi
// 0057bf06  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0057bf0e  742a                 je 0x57bf3a
// 0057bf10  8d4604               lea eax, [esi + 4]
// 0057bf13  83c9ff               or ecx, 0xffffffff
// 0057bf16  f00fc108             lock xadd dword ptr [eax], ecx
// 0057bf1a  751e                 jne 0x57bf3a
// 0057bf1c  8b16                 mov edx, dword ptr [esi]
// 0057bf1e  8b4204               mov eax, dword ptr [edx + 4]
// 0057bf21  8bce                 mov ecx, esi
// 0057bf23  ffd0                 call eax
// 0057bf25  8d4e08               lea ecx, [esi + 8]
// 0057bf28  83caff               or edx, 0xffffffff
// 0057bf2b  f00fc111             lock xadd dword ptr [ecx], edx
// 0057bf2f  7509                 jne 0x57bf3a
// 0057bf31  8b06                 mov eax, dword ptr [esi]
// 0057bf33  8b5008               mov edx, dword ptr [eax + 8]
// 0057bf36  8bce                 mov ecx, esi
// 0057bf38  ffd2                 call edx
// 0057bf3a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057bf3e  5f                   pop edi
// 0057bf3f  5e                   pop esi
// 0057bf40  5d                   pop ebp
// 0057bf41  64890d00000000       mov dword ptr fs:[0], ecx
// 0057bf48  5b                   pop ebx
// 0057bf49  83c40c               add esp, 0xc
// 0057bf4c  c20800               ret 8
// library rbxgs/v8datamodel\Workspace.cpp (function ?makeJoints@Workspace@RBX@@QAEXV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
