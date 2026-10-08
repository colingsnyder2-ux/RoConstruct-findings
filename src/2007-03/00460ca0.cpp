// roc 2007-03 00460ca0  unit: seg_00460000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00460ca0
//
// 00460ca0  56                   push esi
// 00460ca1  8bf1                 mov esi, ecx
// 00460ca3  8b06                 mov eax, dword ptr [esi]
// 00460ca5  83f8fe               cmp eax, -2
// 00460ca8  57                   push edi
// 00460ca9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00460cad  740e                 je 0x460cbd
// 00460caf  85c0                 test eax, eax
// 00460cb1  7404                 je 0x460cb7
// 00460cb3  3b07                 cmp eax, dword ptr [edi]
// 00460cb5  7406                 je 0x460cbd
// 00460cb7  ff1544e97700         call dword ptr [0x77e944]
// 00460cbd  8b4604               mov eax, dword ptr [esi + 4]
// 00460cc0  33c9                 xor ecx, ecx
// 00460cc2  3b4704               cmp eax, dword ptr [edi + 4]
// 00460cc5  5f                   pop edi
// 00460cc6  0f94c1               sete cl
// 00460cc9  8ac1                 mov al, cl
// 00460ccb  5e                   pop esi
// 00460ccc  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??8?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
