// roc 2007-03 005d25e0  unit: seg_005d0000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d25e0
//
// 005d25e0  6aff                 push -1
// 005d25e2  6820937500           push 0x759320
// 005d25e7  64a100000000         mov eax, dword ptr fs:[0]
// 005d25ed  50                   push eax
// 005d25ee  64892500000000       mov dword ptr fs:[0], esp
// 005d25f5  83ec14               sub esp, 0x14
// 005d25f8  53                   push ebx
// 005d25f9  55                   push ebp
// 005d25fa  56                   push esi
// 005d25fb  8bf1                 mov esi, ecx
// 005d25fd  57                   push edi
// 005d25fe  89742410             mov dword ptr [esp + 0x10], esi
// 005d2602  e899f5ffff           call 0x5d1ba0
// 005d2607  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005d260b  51                   push ecx
// 005d260c  50                   push eax
// 005d260d  8bce                 mov ecx, esi
// 005d260f  e81cddf9ff           call 0x570330
// 005d2614  8b542438             mov edx, dword ptr [esp + 0x38]
// 005d2618  6aff                 push -1
// 005d261a  52                   push edx
// 005d261b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005d2623  c70630ba7b00         mov dword ptr [esi], 0x7bba30
// 005d2629  e8b2b2f5ff           call 0x52d8e0
// 005d262e  83c408               add esp, 8
// 005d2631  89442414             mov dword ptr [esp + 0x14], eax
// 005d2635  e8b6aaf9ff           call 0x56d0f0
// 005d263a  8d4c241c             lea ecx, [esp + 0x1c]
// 005d263e  89442418             mov dword ptr [esp + 0x18], eax
// 005d2642  e809a8f9ff           call 0x56ce50
// 005d2647  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005d264a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005d264d  8d7e18               lea edi, [esi + 0x18]
// 005d2650  8d442414             lea eax, [esp + 0x14]
// 005d2654  50                   push eax
// 005d2655  51                   push ecx
// 005d2656  55                   push ebp
// 005d2657  8bcf                 mov ecx, edi
// 005d2659  c644243801           mov byte ptr [esp + 0x38], 1
// 005d265e  e83d3ce4ff           call 0x4162a0
// 005d2663  6a01                 push 1
// 005d2665  8bcf                 mov ecx, edi
// 005d2667  8bd8                 mov ebx, eax
// 005d2669  e81230e4ff           call 0x415680
// 005d266e  895d04               mov dword ptr [ebp + 4], ebx
// 005d2671  8b4304               mov eax, dword ptr [ebx + 4]
// 005d2674  8918                 mov dword ptr [eax], ebx
// 005d2676  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d267a  85c9                 test ecx, ecx
// 005d267c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005d2681  7408                 je 0x5d268b
// 005d2683  8b11                 mov edx, dword ptr [ecx]
// 005d2685  8b02                 mov eax, dword ptr [edx]
// 005d2687  6a01                 push 1
// 005d2689  ffd0                 call eax
// 005d268b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005d268f  5f                   pop edi
// 005d2690  8bc6                 mov eax, esi
// 005d2692  5e                   pop esi
// 005d2693  5d                   pop ebp
// 005d2694  5b                   pop ebx
// 005d2695  64890d00000000       mov dword ptr fs:[0], ecx
// 005d269c  83c420               add esp, 0x20
// 005d269f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
