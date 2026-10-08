// roc 2012-06 00a95560  unit: seg_00a90000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a95560
//
// 00a95560  83ec18               sub esp, 0x18
// 00a95563  8d0424               lea eax, [esp]
// 00a95566  50                   push eax
// 00a95567  ff154823b200         call dword ptr [0xb22348]
// 00a9556d  85c0                 test eax, eax
// 00a9556f  7459                 je 0xa955ca
// 00a95571  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a95575  8b1424               mov edx, dword ptr [esp]
// 00a95578  53                   push ebx
// 00a95579  56                   push esi
// 00a9557a  57                   push edi
// 00a9557b  6a00                 push 0
// 00a9557d  68e8030000           push 0x3e8
// 00a95582  51                   push ecx
// 00a95583  52                   push edx
// 00a95584  e8d7deeeff           call 0x983460
// 00a95589  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a9558d  6a00                 push 0
// 00a9558f  51                   push ecx
// 00a95590  52                   push edx
// 00a95591  50                   push eax
// 00a95592  e8a9ddeeff           call 0x983340
// 00a95597  8b3d4423b200         mov edi, dword ptr [0xb22344]
// 00a9559d  8bda                 mov ebx, edx
// 00a9559f  8d54241c             lea edx, [esp + 0x1c]
// 00a955a3  52                   push edx
// 00a955a4  8bf0                 mov esi, eax
// 00a955a6  ffd7                 call edi
// 00a955a8  8d442414             lea eax, [esp + 0x14]
// 00a955ac  50                   push eax
// 00a955ad  ffd7                 call edi
// 00a955af  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a955b3  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 00a955b7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a955bb  1b4c2420             sbb ecx, dword ptr [esp + 0x20]
// 00a955bf  3bc6                 cmp eax, esi
// 00a955c1  7504                 jne 0xa955c7
// 00a955c3  3bcb                 cmp ecx, ebx
// 00a955c5  74e1                 je 0xa955a8
// 00a955c7  5f                   pop edi
// 00a955c8  5e                   pop esi
// 00a955c9  5b                   pop ebx
// 00a955ca  83c418               add esp, 0x18
// 00a955cd  c3                   ret 
// library rbxgs-render/Profiler.cpp (function ?DelayOverhead@Render@RBX@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Profiler.cpp
