// roc 2009-12 008d46b0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d46b0
//
// 008d46b0  6aff                 push -1
// 008d46b2  68d80c9600           push 0x960cd8
// 008d46b7  64a100000000         mov eax, dword ptr fs:[0]
// 008d46bd  50                   push eax
// 008d46be  83ec1c               sub esp, 0x1c
// 008d46c1  53                   push ebx
// 008d46c2  55                   push ebp
// 008d46c3  56                   push esi
// 008d46c4  57                   push edi
// 008d46c5  a10052b600           mov eax, dword ptr [0xb65200]
// 008d46ca  33c4                 xor eax, esp
// 008d46cc  50                   push eax
// 008d46cd  8d442430             lea eax, [esp + 0x30]
// 008d46d1  64a300000000         mov dword ptr fs:[0], eax
// 008d46d7  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008d46db  85ed                 test ebp, ebp
// 008d46dd  7504                 jne 0x8d46e3
// 008d46df  33c0                 xor eax, eax
// 008d46e1  eb03                 jmp 0x8d46e6
// 008d46e3  8b4504               mov eax, dword ptr [ebp + 4]
// 008d46e6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d46ea  51                   push ecx
// 008d46eb  50                   push eax
// 008d46ec  8d4c2424             lea ecx, [esp + 0x24]
// 008d46f0  e80b70f7ff           call 0x84b700
// 008d46f5  8b742448             mov esi, dword ptr [esp + 0x48]
// 008d46f9  8b5604               mov edx, dword ptr [esi + 4]
// 008d46fc  8b06                 mov eax, dword ptr [esi]
// 008d46fe  52                   push edx
// 008d46ff  50                   push eax
// 008d4700  8d4c241c             lea ecx, [esp + 0x1c]
// 008d4704  51                   push ecx
// 008d4705  8bcd                 mov ecx, ebp
// 008d4707  c744244400000000     mov dword ptr [esp + 0x44], 0
// 008d470f  e82e00f2ff           call 0x7f4742
// 008d4714  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008d4718  83f801               cmp eax, 1
// 008d471b  8b3e                 mov edi, dword ptr [esi]
// 008d471d  8b5e04               mov ebx, dword ptr [esi + 4]
// 008d4720  7e2a                 jle 0x8d474c
// 008d4722  83c608               add esi, 8
// 008d4725  48                   dec eax
// 008d4726  89442440             mov dword ptr [esp + 0x40], eax
// 008d472a  8d9b00000000         lea ebx, [ebx]
// 008d4730  8b4e04               mov ecx, dword ptr [esi + 4]
// 008d4733  8b06                 mov eax, dword ptr [esi]
// 008d4735  03d9                 add ebx, ecx
// 008d4737  03f8                 add edi, eax
// 008d4739  53                   push ebx
// 008d473a  57                   push edi
// 008d473b  8bcd                 mov ecx, ebp
// 008d473d  e8fafff1ff           call 0x7f473c
// 008d4742  83c608               add esi, 8
// 008d4745  836c244001           sub dword ptr [esp + 0x40], 1
// 008d474a  75e4                 jne 0x8d4730
// 008d474c  8d4c241c             lea ecx, [esp + 0x1c]
// 008d4750  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008d4758  e83370f7ff           call 0x84b790
// 008d475d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d4761  64890d00000000       mov dword ptr fs:[0], ecx
// 008d4768  59                   pop ecx
// 008d4769  5f                   pop edi
// 008d476a  5e                   pop esi
// 008d476b  5d                   pop ebp
// 008d476c  5b                   pop ebx
// 008d476d  83c428               add esp, 0x28
// 008d4770  c3                   ret 
// copied from an identical function in another client (function ?DrawPolyLine@CAppearanceSet@CXTPTabPaintManager@@SAXPAVCDC@@KPAUtagPOINT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp