// roc 2007-03 00532200  unit: seg_00530000  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00532200
//
// 00532200  6aff                 push -1
// 00532202  6820bd7500           push 0x75bd20
// 00532207  64a100000000         mov eax, dword ptr fs:[0]
// 0053220d  50                   push eax
// 0053220e  64892500000000       mov dword ptr fs:[0], esp
// 00532215  83ec14               sub esp, 0x14
// 00532218  55                   push ebp
// 00532219  56                   push esi
// 0053221a  57                   push edi
// 0053221b  8be9                 mov ebp, ecx
// 0053221d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00532225  8d44240c             lea eax, [esp + 0xc]
// 00532229  50                   push eax
// 0053222a  6a02                 push 2
// 0053222c  8d4c2418             lea ecx, [esp + 0x18]
// 00532230  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00532238  e8a371eeff           call 0x4193e0
// 0053223d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00532241  85c0                 test eax, eax
// 00532243  8b3d44e97700         mov edi, dword ptr [0x77e944]
// 00532249  c744242801000000     mov dword ptr [esp + 0x28], 1
// 00532251  740b                 je 0x53225e
// 00532253  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00532257  2bc8                 sub ecx, eax
// 00532259  c1f902               sar ecx, 2
// 0053225c  7506                 jne 0x532264
// 0053225e  ffd7                 call edi
// 00532260  8b442414             mov eax, dword ptr [esp + 0x14]
// 00532264  6a08                 push 8
// 00532266  8bf0                 mov esi, eax
// 00532268  e89bbe0e00           call 0x61e108
// 0053226d  83c404               add esp, 4
// 00532270  85c0                 test eax, eax
// 00532272  740f                 je 0x532283
// 00532274  d9442430             fld dword ptr [esp + 0x30]
// 00532278  c7002c987800         mov dword ptr [eax], 0x78982c
// 0053227e  d95804               fstp dword ptr [eax + 4]
// 00532281  eb02                 jmp 0x532285
// 00532283  33c0                 xor eax, eax
// 00532285  8b0e                 mov ecx, dword ptr [esi]
// 00532287  85c9                 test ecx, ecx
// 00532289  8906                 mov dword ptr [esi], eax
// 0053228b  7408                 je 0x532295
// 0053228d  8b11                 mov edx, dword ptr [ecx]
// 0053228f  8b02                 mov eax, dword ptr [edx]
// 00532291  6a01                 push 1
// 00532293  ffd0                 call eax
// 00532295  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00532299  85c9                 test ecx, ecx
// 0053229b  740e                 je 0x5322ab
// 0053229d  8b442418             mov eax, dword ptr [esp + 0x18]
// 005322a1  2bc1                 sub eax, ecx
// 005322a3  c1f802               sar eax, 2
// 005322a6  83f801               cmp eax, 1
// 005322a9  7706                 ja 0x5322b1
// 005322ab  ffd7                 call edi
// 005322ad  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005322b1  6a08                 push 8
// 005322b3  8d7104               lea esi, [ecx + 4]
// 005322b6  e84dbe0e00           call 0x61e108
// 005322bb  83c404               add esp, 4
// 005322be  85c0                 test eax, eax
// 005322c0  740f                 je 0x5322d1
// 005322c2  d9442434             fld dword ptr [esp + 0x34]
// 005322c6  c7002c987800         mov dword ptr [eax], 0x78982c
// 005322cc  d95804               fstp dword ptr [eax + 4]
// 005322cf  eb02                 jmp 0x5322d3
// 005322d1  33c0                 xor eax, eax
// 005322d3  8b0e                 mov ecx, dword ptr [esi]
// 005322d5  85c9                 test ecx, ecx
// 005322d7  8906                 mov dword ptr [esi], eax
// 005322d9  7408                 je 0x5322e3
// 005322db  8b11                 mov edx, dword ptr [ecx]
// 005322dd  8b02                 mov eax, dword ptr [edx]
// 005322df  6a01                 push 1
// 005322e1  ffd0                 call eax
// 005322e3  8b4d00               mov ecx, dword ptr [ebp]
// 005322e6  8b11                 mov edx, dword ptr [ecx]
// 005322e8  8b5204               mov edx, dword ptr [edx + 4]
// 005322eb  8d442410             lea eax, [esp + 0x10]
// 005322ef  50                   push eax
// 005322f0  ffd2                 call edx
// 005322f2  8b742414             mov esi, dword ptr [esp + 0x14]
// 005322f6  85f6                 test esi, esi
// 005322f8  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00532300  7430                 je 0x532332
// 00532302  8b442418             mov eax, dword ptr [esp + 0x18]
// 00532306  3bf0                 cmp esi, eax
// 00532308  8bf8                 mov edi, eax
// 0053230a  741d                 je 0x532329
// 0053230c  8d642400             lea esp, [esp]
// 00532310  8b0e                 mov ecx, dword ptr [esi]
// 00532312  85c9                 test ecx, ecx
// 00532314  7408                 je 0x53231e
// 00532316  8b01                 mov eax, dword ptr [ecx]
// 00532318  8b10                 mov edx, dword ptr [eax]
// 0053231a  6a01                 push 1
// 0053231c  ffd2                 call edx
// 0053231e  83c604               add esi, 4
// 00532321  3bf7                 cmp esi, edi
// 00532323  75eb                 jne 0x532310
// 00532325  8b742414             mov esi, dword ptr [esp + 0x14]
// 00532329  56                   push esi
// 0053232a  e8c1bd0e00           call 0x61e0f0
// 0053232f  83c404               add esp, 4
// 00532332  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00532336  5f                   pop edi
// 00532337  5e                   pop esi
// 00532338  5d                   pop ebp
// 00532339  64890d00000000       mov dword ptr fs:[0], ecx
// 00532340  83c420               add esp, 0x20
// 00532343  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ??RGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@QBEXMM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
