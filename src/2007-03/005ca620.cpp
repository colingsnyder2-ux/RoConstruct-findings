// roc 2007-03 005ca620  unit: seg_005c0000  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ca620
//
// 005ca620  6aff                 push -1
// 005ca622  68d3a77500           push 0x75a7d3
// 005ca627  64a100000000         mov eax, dword ptr fs:[0]
// 005ca62d  50                   push eax
// 005ca62e  64892500000000       mov dword ptr fs:[0], esp
// 005ca635  51                   push ecx
// 005ca636  55                   push ebp
// 005ca637  56                   push esi
// 005ca638  57                   push edi
// 005ca639  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005ca63d  8bf1                 mov esi, ecx
// 005ca63f  57                   push edi
// 005ca640  89742410             mov dword ptr [esp + 0x10], esi
// 005ca644  e867e30000           call 0x5d89b0
// 005ca649  33ed                 xor ebp, ebp
// 005ca64b  c70654a97b00         mov dword ptr [esi], 0x7ba954
// 005ca651  c7460438a97b00       mov dword ptr [esi + 4], 0x7ba938
// 005ca658  897e20               mov dword ptr [esi + 0x20], edi
// 005ca65b  896e24               mov dword ptr [esi + 0x24], ebp
// 005ca65e  896c2418             mov dword ptr [esp + 0x18], ebp
// 005ca662  896e28               mov dword ptr [esi + 0x28], ebp
// 005ca665  66896e2e             mov word ptr [esi + 0x2e], bp
// 005ca669  66896e30             mov word ptr [esi + 0x30], bp
// 005ca66d  8d7e38               lea edi, [esi + 0x38]
// 005ca670  8bcf                 mov ecx, edi
// 005ca672  c644241801           mov byte ptr [esp + 0x18], 1
// 005ca677  66896e32             mov word ptr [esi + 0x32], bp
// 005ca67b  66896e34             mov word ptr [esi + 0x34], bp
// 005ca67f  e8ac2dfeff           call 0x5ad430
// 005ca684  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ca688  894704               mov dword ptr [edi + 4], eax
// 005ca68b  c6401101             mov byte ptr [eax + 0x11], 1
// 005ca68f  8b4704               mov eax, dword ptr [edi + 4]
// 005ca692  894004               mov dword ptr [eax + 4], eax
// 005ca695  8b4704               mov eax, dword ptr [edi + 4]
// 005ca698  8900                 mov dword ptr [eax], eax
// 005ca69a  8b4704               mov eax, dword ptr [edi + 4]
// 005ca69d  894008               mov dword ptr [eax + 8], eax
// 005ca6a0  896f08               mov dword ptr [edi + 8], ebp
// 005ca6a3  5f                   pop edi
// 005ca6a4  8bc6                 mov eax, esi
// 005ca6a6  5e                   pop esi
// 005ca6a7  5d                   pop ebp
// 005ca6a8  64890d00000000       mov dword ptr fs:[0], ecx
// 005ca6af  83c410               add esp, 0x10
// 005ca6b2  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ??0BoxSelectCommand@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
