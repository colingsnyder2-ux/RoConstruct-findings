// roc 2007-08 00486830  unit: G3D::GWindow  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486830
//
// 00486830  56                   push esi
// 00486831  8b742408             mov esi, dword ptr [esp + 8]
// 00486835  85f6                 test esi, esi
// 00486837  742c                 je 0x486865
// 00486839  8da42400000000       lea esp, [esp]
// 00486840  6a00                 push 0
// 00486842  68044e8800           push 0x884e04
// 00486847  684c1f8800           push 0x881f4c
// 0048684c  6a00                 push 0
// 0048684e  56                   push esi
// 0048684f  e8e2a41a00           call 0x630d36
// 00486854  83c414               add esp, 0x14
// 00486857  85c0                 test eax, eax
// 00486859  750c                 jne 0x486867
// 0048685b  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 00486861  85f6                 test esi, esi
// 00486863  75db                 jne 0x486840
// 00486865  33c0                 xor eax, eax
// 00486867  5e                   pop esi
// 00486868  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?findServiceProvider@ServiceProvider@RBX@@SAPBV12@PBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
