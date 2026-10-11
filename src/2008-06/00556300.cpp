// roc 2008-06 00556300  unit: RBX::VRunService::?$SignalDesc  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00556300
//
// 00556300  6aff                 push -1
// 00556302  68a8647c00           push 0x7c64a8
// 00556307  64a100000000         mov eax, dword ptr fs:[0]
// 0055630d  50                   push eax
// 0055630e  64892500000000       mov dword ptr fs:[0], esp
// 00556315  83ec18               sub esp, 0x18
// 00556318  53                   push ebx
// 00556319  57                   push edi
// 0055631a  8bd9                 mov ebx, ecx
// 0055631c  6a02                 push 2
// 0055631e  8d4c240c             lea ecx, [esp + 0xc]
// 00556322  e8494eecff           call 0x41b170
// 00556327  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055632b  2b442414             sub eax, dword ptr [esp + 0x14]
// 0055632f  8b3d90288000         mov edi, dword ptr [0x802890]
// 00556335  c1f802               sar eax, 2
// 00556338  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00556340  85c0                 test eax, eax
// 00556342  7702                 ja 0x556346
// 00556344  ffd7                 call edi
// 00556346  56                   push esi
// 00556347  8b742418             mov esi, dword ptr [esp + 0x18]
// 0055634b  6a08                 push 8
// 0055634d  e8cea51400           call 0x6a0920
// 00556352  83c404               add esp, 4
// 00556355  85c0                 test eax, eax
// 00556357  740f                 je 0x556368
// 00556359  d9442434             fld dword ptr [esp + 0x34]
// 0055635d  c700bc068100         mov dword ptr [eax], 0x8106bc
// 00556363  d95804               fstp dword ptr [eax + 4]
// 00556366  eb02                 jmp 0x55636a
// 00556368  33c0                 xor eax, eax
// 0055636a  8d542434             lea edx, [esp + 0x34]
// 0055636e  8bc8                 mov ecx, eax
// 00556370  3bd6                 cmp edx, esi
// 00556372  7404                 je 0x556378
// 00556374  8b0e                 mov ecx, dword ptr [esi]
// 00556376  8906                 mov dword ptr [esi], eax
// 00556378  85c9                 test ecx, ecx
// 0055637a  7408                 je 0x556384
// 0055637c  8b01                 mov eax, dword ptr [ecx]
// 0055637e  8b10                 mov edx, dword ptr [eax]
// 00556380  6a01                 push 1
// 00556382  ffd2                 call edx
// 00556384  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00556388  2b442418             sub eax, dword ptr [esp + 0x18]
// 0055638c  c1f802               sar eax, 2
// 0055638f  83f801               cmp eax, 1
// 00556392  7702                 ja 0x556396
// 00556394  ffd7                 call edi
// 00556396  8b742418             mov esi, dword ptr [esp + 0x18]
// 0055639a  6a08                 push 8
// 0055639c  83c604               add esi, 4
// 0055639f  e87ca51400           call 0x6a0920
// 005563a4  83c404               add esp, 4
// 005563a7  85c0                 test eax, eax
// 005563a9  740f                 je 0x5563ba
// 005563ab  d9442438             fld dword ptr [esp + 0x38]
// 005563af  c700bc068100         mov dword ptr [eax], 0x8106bc
// 005563b5  d95804               fstp dword ptr [eax + 4]
// 005563b8  eb02                 jmp 0x5563bc
// 005563ba  33c0                 xor eax, eax
// 005563bc  8d542434             lea edx, [esp + 0x34]
// 005563c0  8bc8                 mov ecx, eax
// 005563c2  3bd6                 cmp edx, esi
// 005563c4  7404                 je 0x5563ca
// 005563c6  8b0e                 mov ecx, dword ptr [esi]
// 005563c8  8906                 mov dword ptr [esi], eax
// 005563ca  5e                   pop esi
// 005563cb  85c9                 test ecx, ecx
// 005563cd  7408                 je 0x5563d7
// 005563cf  8b01                 mov eax, dword ptr [ecx]
// 005563d1  8b10                 mov edx, dword ptr [eax]
// 005563d3  6a01                 push 1
// 005563d5  ffd2                 call edx
// 005563d7  8b0b                 mov ecx, dword ptr [ebx]
// 005563d9  8b01                 mov eax, dword ptr [ecx]
// 005563db  8b4004               mov eax, dword ptr [eax + 4]
// 005563de  8d542408             lea edx, [esp + 8]
// 005563e2  52                   push edx
// 005563e3  ffd0                 call eax
// 005563e5  8d4c2408             lea ecx, [esp + 8]
// 005563e9  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005563f1  e82a4becff           call 0x41af20
// 005563f6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005563fa  5f                   pop edi
// 005563fb  5b                   pop ebx
// 005563fc  64890d00000000       mov dword ptr fs:[0], ecx
// 00556403  83c424               add esp, 0x24
// 00556406  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ??RGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@QBEXMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
