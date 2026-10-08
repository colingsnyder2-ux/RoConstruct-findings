// roc 2011-06 006a2630  unit: RBX::Assembly  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a2630
//
// 006a2630  56                   push esi
// 006a2631  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a2635  57                   push edi
// 006a2636  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a263a  2bf7                 sub esi, edi
// 006a263c  8bc6                 mov eax, esi
// 006a263e  c1f802               sar eax, 2
// 006a2641  83f801               cmp eax, 1
// 006a2644  7e31                 jle 0x6a2677
// 006a2646  53                   push ebx
// 006a2647  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006a264b  8b4437fc             mov eax, dword ptr [edi + esi - 4]
// 006a264f  8b0f                 mov ecx, dword ptr [edi]
// 006a2651  53                   push ebx
// 006a2652  50                   push eax
// 006a2653  8d56fc               lea edx, [esi - 4]
// 006a2656  c1fa02               sar edx, 2
// 006a2659  52                   push edx
// 006a265a  6a00                 push 0
// 006a265c  57                   push edi
// 006a265d  894c37fc             mov dword ptr [edi + esi - 4], ecx
// 006a2661  e8daf6ffff           call 0x6a1d40
// 006a2666  83ee04               sub esi, 4
// 006a2669  8bc6                 mov eax, esi
// 006a266b  c1f802               sar eax, 2
// 006a266e  83c414               add esp, 0x14
// 006a2671  83f801               cmp eax, 1
// 006a2674  7fd5                 jg 0x6a264b
// 006a2676  5b                   pop ebx
// 006a2677  5f                   pop edi
// 006a2678  5e                   pop esi
// 006a2679  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Sort_heap@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
