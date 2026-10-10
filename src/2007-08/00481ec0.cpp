// from server: 100% by tester
// roc 2007-03 00480370  unit: seg_00480000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480370
//
// 00480370  6aff                 push -1
// 00480372  68447f7400           push 0x747f44
// 00480377  64a100000000         mov eax, dword ptr fs:[0]
// 0048037d  50                   push eax
// 0048037e  51                   push ecx
// 0048037f  53                   push ebx
// 00480380  56                   push esi
// 00480381  57                   push edi
// 00480382  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00480387  33c4                 xor eax, esp
// 00480389  50                   push eax
// 0048038a  8d442414             lea eax, [esp + 0x14]
// 0048038e  64a300000000         mov dword ptr fs:[0], eax
// 00480394  8bf1                 mov esi, ecx
// 00480396  89742410             mov dword ptr [esp + 0x10], esi
// 0048039a  33db                 xor ebx, ebx
// 0048039c  c706946d7900         mov dword ptr [esi], 0x796d94
// 004803a2  895e04               mov dword ptr [esi + 4], ebx
// 004803a5  895e08               mov dword ptr [esi + 8], ebx
// 004803a8  8b442424             mov eax, dword ptr [esp + 0x24]
// 004803ac  50                   push eax
// 004803ad  8d4e10               lea ecx, [esi + 0x10]
// 004803b0  895c2420             mov dword ptr [esp + 0x20], ebx
// 004803b4  c70694977900         mov dword ptr [esi], 0x799794
// 004803ba  ff157ce77700         call dword ptr [0x77e77c]
// 004803c0  885e2c               mov byte ptr [esi + 0x2c], bl
// 004803c3  391dd87f8b00         cmp dword ptr [0x8b7fd8], ebx
// 004803c9  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004803ce  7446                 je 0x480416
// 004803d0  a17c828b00           mov eax, dword ptr [0x8b827c]
// 004803d5  3bc3                 cmp eax, ebx
// 004803d7  7521                 jne 0x4803fa
// 004803d9  53                   push ebx
// 004803da  6a0a                 push 0xa
// 004803dc  b978828b00           mov ecx, 0x8b8278
// 004803e1  e8bab1ffff           call 0x47b5a0
// 004803e6  8b0d78828b00         mov ecx, dword ptr [0x8b8278]
// 004803ec  51                   push ecx
// 004803ed  6a0a                 push 0xa
// 004803ef  ff15d87f8b00         call dword ptr [0x8b7fd8]
// 004803f5  a17c828b00           mov eax, dword ptr [0x8b827c]
// 004803fa  8b1578828b00         mov edx, dword ptr [0x8b8278]
// 00480400  8b7c82fc             mov edi, dword ptr [edx + eax*4 - 4]
// 00480404  53                   push ebx
// 00480405  83c0ff               add eax, -1
// 00480408  50                   push eax
// 00480409  b978828b00           mov ecx, 0x8b8278
// 0048040e  e88db1ffff           call 0x47b5a0
// 00480413  897e0c               mov dword ptr [esi + 0xc], edi
// 00480416  8bc6                 mov eax, esi
// 00480418  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048041c  64890d00000000       mov dword ptr fs:[0], ecx
// 00480423  59                   pop ecx
// 00480424  5f                   pop edi
// 00480425  5e                   pop esi
// 00480426  5b                   pop ebx
// 00480427  83c410               add esp, 0x10
// 0048042a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ??0Milestone@G3D@@AAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
