// roc 2007-08 005a8fc0  unit: RBX::VHumanoid::?$SignalDesc  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a8fc0
//
// 005a8fc0  56                   push esi
// 005a8fc1  8bf1                 mov esi, ecx
// 005a8fc3  8b06                 mov eax, dword ptr [esi]
// 005a8fc5  8b5004               mov edx, dword ptr [eax + 4]
// 005a8fc8  57                   push edi
// 005a8fc9  ffd2                 call edx
// 005a8fcb  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a8fcf  3bc7                 cmp eax, edi
// 005a8fd1  7410                 je 0x5a8fe3
// 005a8fd3  8b7608               mov esi, dword ptr [esi + 8]
// 005a8fd6  8b06                 mov eax, dword ptr [esi]
// 005a8fd8  8b5004               mov edx, dword ptr [eax + 4]
// 005a8fdb  8bce                 mov ecx, esi
// 005a8fdd  ffd2                 call edx
// 005a8fdf  3bc7                 cmp eax, edi
// 005a8fe1  75f0                 jne 0x5a8fd3
// 005a8fe3  5f                   pop edi
// 005a8fe4  8bc6                 mov eax, esi
// 005a8fe6  5e                   pop esi
// 005a8fe7  c20400               ret 4
// library rbxgs/v8kernel\Kernel.cpp (function ?findStage@IStage@RBX@@QAEPAV12@W4StageType@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Kernel.cpp
