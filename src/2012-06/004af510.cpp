// roc 2012-06 004af510  unit: VerbBinderJob  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004af510
//
// 004af510  6aff                 push -1
// 004af512  68e9f3a900           push 0xa9f3e9
// 004af517  64a100000000         mov eax, dword ptr fs:[0]
// 004af51d  50                   push eax
// 004af51e  64892500000000       mov dword ptr fs:[0], esp
// 004af525  51                   push ecx
// 004af526  56                   push esi
// 004af527  57                   push edi
// 004af528  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004af52c  8bf1                 mov esi, ecx
// 004af52e  57                   push edi
// 004af52f  8974240c             mov dword ptr [esp + 0xc], esi
// 004af533  ff154426b200         call dword ptr [0xb22644]
// 004af539  8d471c               lea eax, [edi + 0x1c]
// 004af53c  50                   push eax
// 004af53d  8d4e1c               lea ecx, [esi + 0x1c]
// 004af540  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004af548  ff154426b200         call dword ptr [0xb22644]
// 004af54e  0fb64f38             movzx ecx, byte ptr [edi + 0x38]
// 004af552  884e38               mov byte ptr [esi + 0x38], cl
// 004af555  8a5739               mov dl, byte ptr [edi + 0x39]
// 004af558  885639               mov byte ptr [esi + 0x39], dl
// 004af55b  8b473c               mov eax, dword ptr [edi + 0x3c]
// 004af55e  89463c               mov dword ptr [esi + 0x3c], eax
// 004af561  0fb64f40             movzx ecx, byte ptr [edi + 0x40]
// 004af565  884e40               mov byte ptr [esi + 0x40], cl
// 004af568  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004af56c  5f                   pop edi
// 004af56d  8bc6                 mov eax, esi
// 004af56f  5e                   pop esi
// 004af570  64890d00000000       mov dword ptr fs:[0], ecx
// 004af577  83c410               add esp, 0x10
// 004af57a  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$char_separator@DU?$char_traits@D@std@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
