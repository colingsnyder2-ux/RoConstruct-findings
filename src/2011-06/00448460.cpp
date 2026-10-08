// roc 2011-06 00448460  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00448460
//
// 00448460  6aff                 push -1
// 00448462  6829e09e00           push 0x9ee029
// 00448467  64a100000000         mov eax, dword ptr fs:[0]
// 0044846d  50                   push eax
// 0044846e  64892500000000       mov dword ptr fs:[0], esp
// 00448475  51                   push ecx
// 00448476  56                   push esi
// 00448477  8bf1                 mov esi, ecx
// 00448479  89742404             mov dword ptr [esp + 4], esi
// 0044847d  ff15bc04a400         call dword ptr [0xa404bc]
// 00448483  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044848b  e850a81400           call 0x592ce0
// 00448490  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00448494  89461c               mov dword ptr [esi + 0x1c], eax
// 00448497  8bc6                 mov eax, esi
// 00448499  5e                   pop esi
// 0044849a  64890d00000000       mov dword ptr fs:[0], ecx
// 004484a1  83c410               add esp, 0x10
// 004484a4  c3                   ret 
// library rbxgs/v8datamodel\Sky.cpp (function ??0ContentId@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Sky.cpp
