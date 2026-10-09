// roc 2008-06 00569590  unit: RBX::ServiceProvider  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00569590
//
// 00569590  6aff                 push -1
// 00569592  68a3f87c00           push 0x7cf8a3
// 00569597  64a100000000         mov eax, dword ptr fs:[0]
// 0056959d  50                   push eax
// 0056959e  64892500000000       mov dword ptr fs:[0], esp
// 005695a5  51                   push ecx
// 005695a6  56                   push esi
// 005695a7  8bf1                 mov esi, ecx
// 005695a9  89742404             mov dword ptr [esp + 4], esi
// 005695ad  8d4e28               lea ecx, [esi + 0x28]
// 005695b0  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005695b8  e8f3b60200           call 0x594cb0
// 005695bd  8b4610               mov eax, dword ptr [esi + 0x10]
// 005695c0  85c0                 test eax, eax
// 005695c2  7409                 je 0x5695cd
// 005695c4  50                   push eax
// 005695c5  e8b0701300           call 0x6a067a
// 005695ca  83c404               add esp, 4
// 005695cd  8b4604               mov eax, dword ptr [esi + 4]
// 005695d0  50                   push eax
// 005695d1  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005695d8  c7461400000000       mov dword ptr [esi + 0x14], 0
// 005695df  c7461800000000       mov dword ptr [esi + 0x18], 0
// 005695e6  e88f701300           call 0x6a067a
// 005695eb  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005695ee  83c404               add esp, 4
// 005695f1  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005695f9  5e                   pop esi
// 005695fa  85c9                 test ecx, ecx
// 005695fc  7413                 je 0x569611
// 005695fe  8d4108               lea eax, [ecx + 8]
// 00569601  83caff               or edx, 0xffffffff
// 00569604  f00fc110             lock xadd dword ptr [eax], edx
// 00569608  7507                 jne 0x569611
// 0056960a  8b01                 mov eax, dword ptr [ecx]
// 0056960c  8b5008               mov edx, dword ptr [eax + 8]
// 0056960f  ffd2                 call edx
// 00569611  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00569615  64890d00000000       mov dword ptr fs:[0], ecx
// 0056961c  83c410               add esp, 0x10
// 0056961f  c3                   ret 
// library openrbx-client/App\util\standardout.cpp (function ??1StandardOut@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/standardout.cpp
