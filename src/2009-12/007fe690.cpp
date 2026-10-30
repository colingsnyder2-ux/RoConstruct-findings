// roc 2009-12 007fe690  unit: CXTPPaintManager  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fe690
//
// 007fe690  6aff                 push -1
// 007fe692  68a8919500           push 0x9591a8
// 007fe697  64a100000000         mov eax, dword ptr fs:[0]
// 007fe69d  50                   push eax
// 007fe69e  83ec40               sub esp, 0x40
// 007fe6a1  56                   push esi
// 007fe6a2  57                   push edi
// 007fe6a3  a10052b600           mov eax, dword ptr [0xb65200]
// 007fe6a8  33c4                 xor eax, esp
// 007fe6aa  50                   push eax
// 007fe6ab  8d44244c             lea eax, [esp + 0x4c]
// 007fe6af  64a300000000         mov dword ptr fs:[0], eax
// 007fe6b5  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 007fe6b9  85f6                 test esi, esi
// 007fe6bb  7504                 jne 0x7fe6c1
// 007fe6bd  33c0                 xor eax, eax
// 007fe6bf  eb03                 jmp 0x7fe6c4
// 007fe6c1  8b4604               mov eax, dword ptr [esi + 4]
// 007fe6c4  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 007fe6c8  57                   push edi
// 007fe6c9  50                   push eax
// 007fe6ca  8d4c2428             lea ecx, [esp + 0x28]
// 007fe6ce  e82dd00400           call 0x84b700
// 007fe6d3  c744245400000000     mov dword ptr [esp + 0x54], 0
// 007fe6db  85f6                 test esi, esi
// 007fe6dd  7504                 jne 0x7fe6e3
// 007fe6df  33c0                 xor eax, eax
// 007fe6e1  eb03                 jmp 0x7fe6e6
// 007fe6e3  8b4604               mov eax, dword ptr [esi + 4]
// 007fe6e6  57                   push edi
// 007fe6e7  50                   push eax
// 007fe6e8  8d4c2414             lea ecx, [esp + 0x14]
// 007fe6ec  e8cfd00400           call 0x84b7c0
// 007fe6f1  8b442460             mov eax, dword ptr [esp + 0x60]
// 007fe6f5  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007fe6f9  8b542468             mov edx, dword ptr [esp + 0x68]
// 007fe6fd  89442434             mov dword ptr [esp + 0x34], eax
// 007fe701  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007fe705  894c2438             mov dword ptr [esp + 0x38], ecx
// 007fe709  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007fe70d  89442440             mov dword ptr [esp + 0x40], eax
// 007fe711  6a03                 push 3
// 007fe713  8d442438             lea eax, [esp + 0x38]
// 007fe717  894c2448             mov dword ptr [esp + 0x48], ecx
// 007fe71b  8b4e04               mov ecx, dword ptr [esi + 4]
// 007fe71e  89542440             mov dword ptr [esp + 0x40], edx
// 007fe722  8b542478             mov edx, dword ptr [esp + 0x78]
// 007fe726  50                   push eax
// 007fe727  51                   push ecx
// 007fe728  89542454             mov dword ptr [esp + 0x54], edx
// 007fe72c  ff1520b19800         call dword ptr [0x98b120]
// 007fe732  8d4c240c             lea ecx, [esp + 0xc]
// 007fe736  e815d10400           call 0x84b850
// 007fe73b  8d4c2420             lea ecx, [esp + 0x20]
// 007fe73f  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 007fe747  e844d00400           call 0x84b790
// 007fe74c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007fe750  64890d00000000       mov dword ptr fs:[0], ecx
// 007fe757  59                   pop ecx
// 007fe758  5f                   pop edi
// 007fe759  5e                   pop esi
// 007fe75a  83c44c               add esp, 0x4c
// 007fe75d  c3                   ret 
// copied from an identical function in another client (function ?Triangle@CXTPPaintManager@@SAXPAVCDC@@VCPoint@@11K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp