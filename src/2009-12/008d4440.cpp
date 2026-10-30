// roc 2009-12 008d4440  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d4440
//
// 008d4440  6aff                 push -1
// 008d4442  6858539600           push 0x965358
// 008d4447  64a100000000         mov eax, dword ptr fs:[0]
// 008d444d  50                   push eax
// 008d444e  83ec1c               sub esp, 0x1c
// 008d4451  56                   push esi
// 008d4452  a10052b600           mov eax, dword ptr [0xb65200]
// 008d4457  33c4                 xor eax, esp
// 008d4459  50                   push eax
// 008d445a  8d442424             lea eax, [esp + 0x24]
// 008d445e  64a300000000         mov dword ptr fs:[0], eax
// 008d4464  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008d4468  83f9ff               cmp ecx, -1
// 008d446b  745a                 je 0x8d44c7
// 008d446d  8b742434             mov esi, dword ptr [esp + 0x34]
// 008d4471  85f6                 test esi, esi
// 008d4473  7504                 jne 0x8d4479
// 008d4475  33c0                 xor eax, eax
// 008d4477  eb03                 jmp 0x8d447c
// 008d4479  8b4604               mov eax, dword ptr [esi + 4]
// 008d447c  51                   push ecx
// 008d447d  50                   push eax
// 008d447e  8d4c2418             lea ecx, [esp + 0x18]
// 008d4482  e87972f7ff           call 0x84b700
// 008d4487  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d448b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d448f  50                   push eax
// 008d4490  51                   push ecx
// 008d4491  8d542410             lea edx, [esp + 0x10]
// 008d4495  52                   push edx
// 008d4496  8bce                 mov ecx, esi
// 008d4498  c744243800000000     mov dword ptr [esp + 0x38], 0
// 008d44a0  e89d02f2ff           call 0x7f4742
// 008d44a5  8b442448             mov eax, dword ptr [esp + 0x48]
// 008d44a9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d44ad  50                   push eax
// 008d44ae  51                   push ecx
// 008d44af  8bce                 mov ecx, esi
// 008d44b1  e88602f2ff           call 0x7f473c
// 008d44b6  8d4c2410             lea ecx, [esp + 0x10]
// 008d44ba  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008d44c2  e8c972f7ff           call 0x84b790
// 008d44c7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d44cb  64890d00000000       mov dword ptr fs:[0], ecx
// 008d44d2  59                   pop ecx
// 008d44d3  5e                   pop esi
// 008d44d4  83c428               add esp, 0x28
// 008d44d7  c3                   ret 
// copied from an identical function in another client (function ?LineEx@@YAXPAVCDC@@KHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp