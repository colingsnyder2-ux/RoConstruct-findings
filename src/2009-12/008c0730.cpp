// roc 2009-12 008c0730  unit: CXTPShadowsManager::CShadowWnd  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c0730
//
// 008c0730  6aff                 push -1
// 008c0732  68c8399600           push 0x9639c8
// 008c0737  64a100000000         mov eax, dword ptr fs:[0]
// 008c073d  50                   push eax
// 008c073e  83ec68               sub esp, 0x68
// 008c0741  a10052b600           mov eax, dword ptr [0xb65200]
// 008c0746  33c4                 xor eax, esp
// 008c0748  89442464             mov dword ptr [esp + 0x64], eax
// 008c074c  56                   push esi
// 008c074d  a10052b600           mov eax, dword ptr [0xb65200]
// 008c0752  33c4                 xor eax, esp
// 008c0754  50                   push eax
// 008c0755  8d442470             lea eax, [esp + 0x70]
// 008c0759  64a300000000         mov dword ptr fs:[0], eax
// 008c075f  8bf1                 mov esi, ecx
// 008c0761  56                   push esi
// 008c0762  8d4c241c             lea ecx, [esp + 0x1c]
// 008c0766  e8853af3ff           call 0x7f41f0
// 008c076b  56                   push esi
// 008c076c  8d4c240c             lea ecx, [esp + 0xc]
// 008c0770  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 008c0778  e853abf8ff           call 0x84b2d0
// 008c077d  e82efdffff           call 0x8c04b0
// 008c0782  83782000             cmp dword ptr [eax + 0x20], 0
// 008c0786  7404                 je 0x8c078c
// 008c0788  33c0                 xor eax, eax
// 008c078a  eb0e                 jmp 0x8c079a
// 008c078c  e83ff2f6ff           call 0x82f9d0
// 008c0791  6a10                 push 0x10
// 008c0793  8bc8                 mov ecx, eax
// 008c0795  e866e9f6ff           call 0x82f100
// 008c079a  50                   push eax
// 008c079b  8d44240c             lea eax, [esp + 0xc]
// 008c079f  50                   push eax
// 008c07a0  8d4c2420             lea ecx, [esp + 0x20]
// 008c07a4  e8553ef3ff           call 0x7f45fe
// 008c07a9  8d4c2418             lea ecx, [esp + 0x18]
// 008c07ad  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 008c07b5  e8303af3ff           call 0x7f41ea
// 008c07ba  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008c07be  64890d00000000       mov dword ptr fs:[0], ecx
// 008c07c5  59                   pop ecx
// 008c07c6  5e                   pop esi
// 008c07c7  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008c07cb  33cc                 xor ecx, esp
// 008c07cd  e8c84bf3ff           call 0x7f539a
// 008c07d2  83c474               add esp, 0x74
// 008c07d5  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CShadowWnd@CXTPShadowsManager@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPShadowsManager.cpp