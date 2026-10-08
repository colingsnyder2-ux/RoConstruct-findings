// roc 2007-03 005acb30  unit: seg_005a0000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005acb30
//
// 005acb30  56                   push esi
// 005acb31  8bf1                 mov esi, ecx
// 005acb33  8b06                 mov eax, dword ptr [esi]
// 005acb35  8b5004               mov edx, dword ptr [eax + 4]
// 005acb38  57                   push edi
// 005acb39  ffd2                 call edx
// 005acb3b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005acb3f  3bc7                 cmp eax, edi
// 005acb41  7410                 je 0x5acb53
// 005acb43  8b7608               mov esi, dword ptr [esi + 8]
// 005acb46  8b06                 mov eax, dword ptr [esi]
// 005acb48  8b5004               mov edx, dword ptr [eax + 4]
// 005acb4b  8bce                 mov ecx, esi
// 005acb4d  ffd2                 call edx
// 005acb4f  3bc7                 cmp eax, edi
// 005acb51  75f0                 jne 0x5acb43
// 005acb53  5f                   pop edi
// 005acb54  8bc6                 mov eax, esi
// 005acb56  5e                   pop esi
// 005acb57  c20400               ret 4
// library rbxgs/v8kernel\Kernel.cpp (function ?findStage@IStage@RBX@@QAEPAV12@W4StageType@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Kernel.cpp
