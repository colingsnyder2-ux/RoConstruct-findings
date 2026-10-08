// roc 2009-06 0046ceb0  unit: DxUserInput  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046ceb0
//
// 0046ceb0  6aff                 push -1
// 0046ceb2  6845348500           push 0x853445
// 0046ceb7  64a100000000         mov eax, dword ptr fs:[0]
// 0046cebd  50                   push eax
// 0046cebe  64892500000000       mov dword ptr fs:[0], esp
// 0046cec5  51                   push ecx
// 0046cec6  56                   push esi
// 0046cec7  8bf1                 mov esi, ecx
// 0046cec9  89742404             mov dword ptr [esp + 4], esi
// 0046cecd  8d442418             lea eax, [esp + 0x18]
// 0046ced1  50                   push eax
// 0046ced2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0046ceda  e8b1f6ffff           call 0x46c590
// 0046cedf  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0046cee3  8b542460             mov edx, dword ptr [esp + 0x60]
// 0046cee7  8b442464             mov eax, dword ptr [esp + 0x64]
// 0046ceeb  894e44               mov dword ptr [esi + 0x44], ecx
// 0046ceee  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0046cef2  894e50               mov dword ptr [esi + 0x50], ecx
// 0046cef5  8d4e58               lea ecx, [esi + 0x58]
// 0046cef8  c644241001           mov byte ptr [esp + 0x10], 1
// 0046cefd  895648               mov dword ptr [esi + 0x48], edx
// 0046cf00  89464c               mov dword ptr [esi + 0x4c], eax
// 0046cf03  c6465400             mov byte ptr [esi + 0x54], 0
// 0046cf07  ff15c0e48900         call dword ptr [0x89e4c0]
// 0046cf0d  8bce                 mov ecx, esi
// 0046cf0f  c644241002           mov byte ptr [esp + 0x10], 2
// 0046cf14  e847ffffff           call 0x46ce60
// 0046cf19  8d4c2434             lea ecx, [esp + 0x34]
// 0046cf1d  c744241003000000     mov dword ptr [esp + 0x10], 3
// 0046cf25  ff15c4e48900         call dword ptr [0x89e4c4]
// 0046cf2b  8d4c2418             lea ecx, [esp + 0x18]
// 0046cf2f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0046cf37  ff15c4e48900         call dword ptr [0x89e4c4]
// 0046cf3d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046cf41  8bc6                 mov eax, esi
// 0046cf43  5e                   pop esi
// 0046cf44  64890d00000000       mov dword ptr fs:[0], ecx
// 0046cf4b  83c410               add esp, 0x10
// 0046cf4e  c25400               ret 0x54
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@V?$char_separator@DU?$char_traits@D@std@@@1@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
