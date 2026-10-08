// roc 2007-08 0046c570  unit: RBX::LDraw2Lua::LuaWriter  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046c570
//
// 0046c570  56                   push esi
// 0046c571  8bf1                 mov esi, ecx
// 0046c573  8b06                 mov eax, dword ptr [esi]
// 0046c575  83f8fe               cmp eax, -2
// 0046c578  57                   push edi
// 0046c579  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0046c57d  740e                 je 0x46c58d
// 0046c57f  85c0                 test eax, eax
// 0046c581  7404                 je 0x46c587
// 0046c583  3b07                 cmp eax, dword ptr [edi]
// 0046c585  7406                 je 0x46c58d
// 0046c587  ff15d8e67700         call dword ptr [0x77e6d8]
// 0046c58d  8b4604               mov eax, dword ptr [esi + 4]
// 0046c590  33c9                 xor ecx, ecx
// 0046c592  3b4704               cmp eax, dword ptr [edi + 4]
// 0046c595  5f                   pop edi
// 0046c596  0f94c1               sete cl
// 0046c599  8ac1                 mov al, cl
// 0046c59b  5e                   pop esi
// 0046c59c  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??8?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
