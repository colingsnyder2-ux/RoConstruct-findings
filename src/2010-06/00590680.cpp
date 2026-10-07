// roc 2010-06 00590680  unit: RBX::Time::W4SampleMethod::?$EnumDesc  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00590680
//
// 00590680  6aff                 push -1
// 00590682  6840199900           push 0x991940
// 00590687  64a100000000         mov eax, dword ptr fs:[0]
// 0059068d  50                   push eax
// 0059068e  64892500000000       mov dword ptr fs:[0], esp
// 00590695  83ec0c               sub esp, 0xc
// 00590698  56                   push esi
// 00590699  8bf1                 mov esi, ecx
// 0059069b  6a04                 push 4
// 0059069d  89742408             mov dword ptr [esp + 8], esi
// 005906a1  e8fa722100           call 0x7a79a0
// 005906a6  83c404               add esp, 4
// 005906a9  85c0                 test eax, eax
// 005906ab  7404                 je 0x5906b1
// 005906ad  8930                 mov dword ptr [eax], esi
// 005906af  eb02                 jmp 0x5906b3
// 005906b1  33c0                 xor eax, eax
// 005906b3  8906                 mov dword ptr [esi], eax
// 005906b5  8d4c2408             lea ecx, [esp + 8]
// 005906b9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005906c1  e8ba800800           call 0x618780
// 005906c6  50                   push eax
// 005906c7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005906cb  50                   push eax
// 005906cc  8bce                 mov ecx, esi
// 005906ce  c644242001           mov byte ptr [esp + 0x20], 1
// 005906d3  e888fbffff           call 0x590260
// 005906d8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005906dc  c644241800           mov byte ptr [esp + 0x18], 0
// 005906e1  85c9                 test ecx, ecx
// 005906e3  7408                 je 0x5906ed
// 005906e5  8b11                 mov edx, dword ptr [ecx]
// 005906e7  8b02                 mov eax, dword ptr [edx]
// 005906e9  6a01                 push 1
// 005906eb  ffd0                 call eax
// 005906ed  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005906f1  8bc6                 mov eax, esi
// 005906f3  5e                   pop esi
// 005906f4  64890d00000000       mov dword ptr fs:[0], ecx
// 005906fb  83c418               add esp, 0x18
// 005906fe  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
