// roc 2010-06 0047b8d0  unit: DxUserInput  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047b8d0
//
// 0047b8d0  6aff                 push -1
// 0047b8d2  68254f9800           push 0x984f25
// 0047b8d7  64a100000000         mov eax, dword ptr fs:[0]
// 0047b8dd  50                   push eax
// 0047b8de  64892500000000       mov dword ptr fs:[0], esp
// 0047b8e5  51                   push ecx
// 0047b8e6  56                   push esi
// 0047b8e7  8bf1                 mov esi, ecx
// 0047b8e9  89742404             mov dword ptr [esp + 4], esi
// 0047b8ed  8d442418             lea eax, [esp + 0x18]
// 0047b8f1  50                   push eax
// 0047b8f2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0047b8fa  e8b1f6ffff           call 0x47afb0
// 0047b8ff  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0047b903  8b542460             mov edx, dword ptr [esp + 0x60]
// 0047b907  8b442464             mov eax, dword ptr [esp + 0x64]
// 0047b90b  894e44               mov dword ptr [esi + 0x44], ecx
// 0047b90e  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0047b912  894e50               mov dword ptr [esi + 0x50], ecx
// 0047b915  8d4e58               lea ecx, [esi + 0x58]
// 0047b918  c644241001           mov byte ptr [esp + 0x10], 1
// 0047b91d  895648               mov dword ptr [esi + 0x48], edx
// 0047b920  89464c               mov dword ptr [esi + 0x4c], eax
// 0047b923  c6465400             mov byte ptr [esi + 0x54], 0
// 0047b927  ff1504a49e00         call dword ptr [0x9ea404]
// 0047b92d  8bce                 mov ecx, esi
// 0047b92f  c644241002           mov byte ptr [esp + 0x10], 2
// 0047b934  e847ffffff           call 0x47b880
// 0047b939  8d4c2434             lea ecx, [esp + 0x34]
// 0047b93d  c744241003000000     mov dword ptr [esp + 0x10], 3
// 0047b945  ff1500a49e00         call dword ptr [0x9ea400]
// 0047b94b  8d4c2418             lea ecx, [esp + 0x18]
// 0047b94f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0047b957  ff1500a49e00         call dword ptr [0x9ea400]
// 0047b95d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047b961  8bc6                 mov eax, esi
// 0047b963  5e                   pop esi
// 0047b964  64890d00000000       mov dword ptr fs:[0], ecx
// 0047b96b  83c410               add esp, 0x10
// 0047b96e  c25400               ret 0x54
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@V?$char_separator@DU?$char_traits@D@std@@@1@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
