// roc 2008-06 0046f9c0  unit: RBX::LDraw2Lua::LuaWriter  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046f9c0
//
// 0046f9c0  56                   push esi
// 0046f9c1  8bf1                 mov esi, ecx
// 0046f9c3  8b06                 mov eax, dword ptr [esi]
// 0046f9c5  57                   push edi
// 0046f9c6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0046f9ca  83f8fc               cmp eax, -4
// 0046f9cd  740e                 je 0x46f9dd
// 0046f9cf  85c0                 test eax, eax
// 0046f9d1  7404                 je 0x46f9d7
// 0046f9d3  3b07                 cmp eax, dword ptr [edi]
// 0046f9d5  7406                 je 0x46f9dd
// 0046f9d7  ff1590288000         call dword ptr [0x802890]
// 0046f9dd  8b4604               mov eax, dword ptr [esi + 4]
// 0046f9e0  33c9                 xor ecx, ecx
// 0046f9e2  3b4704               cmp eax, dword ptr [edi + 4]
// 0046f9e5  5f                   pop edi
// 0046f9e6  0f94c1               sete cl
// 0046f9e9  8ac1                 mov al, cl
// 0046f9eb  5e                   pop esi
// 0046f9ec  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??8?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
