// roc 2009-12 00475d30  unit: DxUserInput  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00475d30
//
// 00475d30  6aff                 push -1
// 00475d32  6835dd9200           push 0x92dd35
// 00475d37  64a100000000         mov eax, dword ptr fs:[0]
// 00475d3d  50                   push eax
// 00475d3e  64892500000000       mov dword ptr fs:[0], esp
// 00475d45  51                   push ecx
// 00475d46  56                   push esi
// 00475d47  8bf1                 mov esi, ecx
// 00475d49  89742404             mov dword ptr [esp + 4], esi
// 00475d4d  8d442418             lea eax, [esp + 0x18]
// 00475d51  50                   push eax
// 00475d52  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00475d5a  e8b1f6ffff           call 0x475410
// 00475d5f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00475d63  8b542460             mov edx, dword ptr [esp + 0x60]
// 00475d67  8b442464             mov eax, dword ptr [esp + 0x64]
// 00475d6b  894e44               mov dword ptr [esi + 0x44], ecx
// 00475d6e  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00475d72  894e50               mov dword ptr [esi + 0x50], ecx
// 00475d75  8d4e58               lea ecx, [esi + 0x58]
// 00475d78  c644241001           mov byte ptr [esp + 0x10], 1
// 00475d7d  895648               mov dword ptr [esi + 0x48], edx
// 00475d80  89464c               mov dword ptr [esi + 0x4c], eax
// 00475d83  c6465400             mov byte ptr [esi + 0x54], 0
// 00475d87  ff15e8b69800         call dword ptr [0x98b6e8]
// 00475d8d  8bce                 mov ecx, esi
// 00475d8f  c644241002           mov byte ptr [esp + 0x10], 2
// 00475d94  e847ffffff           call 0x475ce0
// 00475d99  8d4c2434             lea ecx, [esp + 0x34]
// 00475d9d  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00475da5  ff15e4b69800         call dword ptr [0x98b6e4]
// 00475dab  8d4c2418             lea ecx, [esp + 0x18]
// 00475daf  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00475db7  ff15e4b69800         call dword ptr [0x98b6e4]
// 00475dbd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00475dc1  8bc6                 mov eax, esi
// 00475dc3  5e                   pop esi
// 00475dc4  64890d00000000       mov dword ptr fs:[0], ecx
// 00475dcb  83c410               add esp, 0x10
// 00475dce  c25400               ret 0x54
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@V?$char_separator@DU?$char_traits@D@std@@@1@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
