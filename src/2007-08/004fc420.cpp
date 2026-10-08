// roc 2007-08 004fc420  unit: RBX::Render::AggregateChunk  size: 220 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fc420
//
// 004fc420  83ec1c               sub esp, 0x1c
// 004fc423  d9ee                 fldz 
// 004fc425  55                   push ebp
// 004fc426  56                   push esi
// 004fc427  d954240c             fst dword ptr [esp + 0xc]
// 004fc42b  8be9                 mov ebp, ecx
// 004fc42d  d9542410             fst dword ptr [esp + 0x10]
// 004fc431  8d750c               lea esi, [ebp + 0xc]
// 004fc434  d95c2414             fstp dword ptr [esp + 0x14]
// 004fc438  57                   push edi
// 004fc439  8b7e04               mov edi, dword ptr [esi + 4]
// 004fc43c  3b7e08               cmp edi, dword ptr [esi + 8]
// 004fc43f  7606                 jbe 0x4fc447
// 004fc441  ff15d8e67700         call dword ptr [0x77e6d8]
// 004fc447  53                   push ebx
// 004fc448  8b5e08               mov ebx, dword ptr [esi + 8]
// 004fc44b  395e04               cmp dword ptr [esi + 4], ebx
// 004fc44e  7606                 jbe 0x4fc456
// 004fc450  ff15d8e67700         call dword ptr [0x77e6d8]
// 004fc456  3bf6                 cmp esi, esi
// 004fc458  7406                 je 0x4fc460
// 004fc45a  ff15d8e67700         call dword ptr [0x77e6d8]
// 004fc460  3bfb                 cmp edi, ebx
// 004fc462  7448                 je 0x4fc4ac
// 004fc464  3b7e08               cmp edi, dword ptr [esi + 8]
// 004fc467  7206                 jb 0x4fc46f
// 004fc469  ff15d8e67700         call dword ptr [0x77e6d8]
// 004fc46f  8b0f                 mov ecx, dword ptr [edi]
// 004fc471  8b01                 mov eax, dword ptr [ecx]
// 004fc473  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004fc476  ffd2                 call edx
// 004fc478  d9442414             fld dword ptr [esp + 0x14]
// 004fc47c  d84024               fadd dword ptr [eax + 0x24]
// 004fc47f  83c024               add eax, 0x24
// 004fc482  3b7e08               cmp edi, dword ptr [esi + 8]
// 004fc485  d95c2414             fstp dword ptr [esp + 0x14]
// 004fc489  d94004               fld dword ptr [eax + 4]
// 004fc48c  d8442418             fadd dword ptr [esp + 0x18]
// 004fc490  d95c2418             fstp dword ptr [esp + 0x18]
// 004fc494  d94008               fld dword ptr [eax + 8]
// 004fc497  d844241c             fadd dword ptr [esp + 0x1c]
// 004fc49b  d95c241c             fstp dword ptr [esp + 0x1c]
// 004fc49f  7206                 jb 0x4fc4a7
// 004fc4a1  ff15d8e67700         call dword ptr [0x77e6d8]
// 004fc4a7  83c704               add edi, 4
// 004fc4aa  ebaa                 jmp 0x4fc456
// 004fc4ac  8b4604               mov eax, dword ptr [esi + 4]
// 004fc4af  85c0                 test eax, eax
// 004fc4b1  5b                   pop ebx
// 004fc4b2  7504                 jne 0x4fc4b8
// 004fc4b4  33f6                 xor esi, esi
// 004fc4b6  eb08                 jmp 0x4fc4c0
// 004fc4b8  8b7608               mov esi, dword ptr [esi + 8]
// 004fc4bb  2bf0                 sub esi, eax
// 004fc4bd  c1fe02               sar esi, 2
// 004fc4c0  85f6                 test esi, esi
// 004fc4c2  8974240c             mov dword ptr [esp + 0xc], esi
// 004fc4c6  db44240c             fild dword ptr [esp + 0xc]
// 004fc4ca  7d06                 jge 0x4fc4d2
// 004fc4cc  d805706f7800         fadd dword ptr [0x786f70]
// 004fc4d2  51                   push ecx
// 004fc4d3  8d442420             lea eax, [esp + 0x20]
// 004fc4d7  d91c24               fstp dword ptr [esp]
// 004fc4da  50                   push eax
// 004fc4db  8d4c2418             lea ecx, [esp + 0x18]
// 004fc4df  e84c310100           call 0x50f630
// 004fc4e4  d900                 fld dword ptr [eax]
// 004fc4e6  d95d00               fstp dword ptr [ebp]
// 004fc4e9  5f                   pop edi
// 004fc4ea  d94004               fld dword ptr [eax + 4]
// 004fc4ed  5e                   pop esi
// 004fc4ee  d95d04               fstp dword ptr [ebp + 4]
// 004fc4f1  d94008               fld dword ptr [eax + 8]
// 004fc4f4  d95d08               fstp dword ptr [ebp + 8]
// 004fc4f7  5d                   pop ebp
// 004fc4f8  83c41c               add esp, 0x1c
// 004fc4fb  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Clusterer.cpp (function ?computeCentroid@Cluster@Clusterer@Render@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Clusterer.cpp
