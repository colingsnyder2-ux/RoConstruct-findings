// roc 2009-06 0046c7a0  unit: DxUserInput  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046c7a0
//
// 0046c7a0  6aff                 push -1
// 0046c7a2  68e8338500           push 0x8533e8
// 0046c7a7  64a100000000         mov eax, dword ptr fs:[0]
// 0046c7ad  50                   push eax
// 0046c7ae  64892500000000       mov dword ptr fs:[0], esp
// 0046c7b5  51                   push ecx
// 0046c7b6  56                   push esi
// 0046c7b7  57                   push edi
// 0046c7b8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0046c7bc  8bf1                 mov esi, ecx
// 0046c7be  57                   push edi
// 0046c7bf  8974240c             mov dword ptr [esp + 0xc], esi
// 0046c7c3  e8c8fdffff           call 0x46c590
// 0046c7c8  8b4744               mov eax, dword ptr [edi + 0x44]
// 0046c7cb  894644               mov dword ptr [esi + 0x44], eax
// 0046c7ce  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0046c7d1  894e48               mov dword ptr [esi + 0x48], ecx
// 0046c7d4  8b574c               mov edx, dword ptr [edi + 0x4c]
// 0046c7d7  89564c               mov dword ptr [esi + 0x4c], edx
// 0046c7da  8b4750               mov eax, dword ptr [edi + 0x50]
// 0046c7dd  894650               mov dword ptr [esi + 0x50], eax
// 0046c7e0  8a4f54               mov cl, byte ptr [edi + 0x54]
// 0046c7e3  83c758               add edi, 0x58
// 0046c7e6  884e54               mov byte ptr [esi + 0x54], cl
// 0046c7e9  57                   push edi
// 0046c7ea  8d4e58               lea ecx, [esi + 0x58]
// 0046c7ed  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0046c7f5  ff15b8e48900         call dword ptr [0x89e4b8]
// 0046c7fb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046c7ff  5f                   pop edi
// 0046c800  8bc6                 mov eax, esi
// 0046c802  5e                   pop esi
// 0046c803  64890d00000000       mov dword ptr fs:[0], ecx
// 0046c80a  83c410               add esp, 0x10
// 0046c80d  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
