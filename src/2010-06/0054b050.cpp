// roc 2010-06 0054b050  unit: RBX::AggregateChunk  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054b050
//
// 0054b050  53                   push ebx
// 0054b051  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0054b055  55                   push ebp
// 0054b056  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0054b05a  56                   push esi
// 0054b05b  57                   push edi
// 0054b05c  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0054b060  8d743f02             lea esi, [edi + edi + 2]
// 0054b064  3bf5                 cmp esi, ebp
// 0054b066  897c2418             mov dword ptr [esp + 0x18], edi
// 0054b06a  7d28                 jge 0x54b094
// 0054b06c  8d642400             lea esp, [esp]
// 0054b070  8d04b3               lea eax, [ebx + esi*4]
// 0054b073  8d48fc               lea ecx, [eax - 4]
// 0054b076  51                   push ecx
// 0054b077  50                   push eax
// 0054b078  ff54242c             call dword ptr [esp + 0x2c]
// 0054b07c  83c408               add esp, 8
// 0054b07f  84c0                 test al, al
// 0054b081  7401                 je 0x54b084
// 0054b083  4e                   dec esi
// 0054b084  8b14b3               mov edx, dword ptr [ebx + esi*4]
// 0054b087  8914bb               mov dword ptr [ebx + edi*4], edx
// 0054b08a  8bfe                 mov edi, esi
// 0054b08c  8d743602             lea esi, [esi + esi + 2]
// 0054b090  3bf5                 cmp esi, ebp
// 0054b092  7cdc                 jl 0x54b070
// 0054b094  750a                 jne 0x54b0a0
// 0054b096  8b44abfc             mov eax, dword ptr [ebx + ebp*4 - 4]
// 0054b09a  8904bb               mov dword ptr [ebx + edi*4], eax
// 0054b09d  8d7dff               lea edi, [ebp - 1]
// 0054b0a0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054b0a4  8b542420             mov edx, dword ptr [esp + 0x20]
// 0054b0a8  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054b0ac  51                   push ecx
// 0054b0ad  52                   push edx
// 0054b0ae  50                   push eax
// 0054b0af  57                   push edi
// 0054b0b0  53                   push ebx
// 0054b0b1  e8cafeffff           call 0x54af80
// 0054b0b6  83c414               add esp, 0x14
// 0054b0b9  5f                   pop edi
// 0054b0ba  5e                   pop esi
// 0054b0bb  5d                   pop ebp
// 0054b0bc  5b                   pop ebx
// 0054b0bd  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Adjust_heap@PAPAVRenderSurface@Render@RBX@@HPAV123@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@HHPAV123@P6A_NABQAV123@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
