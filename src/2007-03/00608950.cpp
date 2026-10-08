// roc 2007-03 00608950  unit: seg_00600000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00608950
//
// 00608950  83ec08               sub esp, 8
// 00608953  53                   push ebx
// 00608954  55                   push ebp
// 00608955  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 0060895b  56                   push esi
// 0060895c  8bf1                 mov esi, ecx
// 0060895e  57                   push edi
// 0060895f  8b7e08               mov edi, dword ptr [esi + 8]
// 00608962  397e04               cmp dword ptr [esi + 4], edi
// 00608965  7602                 jbe 0x608969
// 00608967  ffd5                 call ebp
// 00608969  8b5e04               mov ebx, dword ptr [esi + 4]
// 0060896c  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0060896f  7602                 jbe 0x608973
// 00608971  ffd5                 call ebp
// 00608973  57                   push edi
// 00608974  56                   push esi
// 00608975  53                   push ebx
// 00608976  56                   push esi
// 00608977  8d442420             lea eax, [esp + 0x20]
// 0060897b  50                   push eax
// 0060897c  8bce                 mov ecx, esi
// 0060897e  e8bdc6e3ff           call 0x445040
// 00608983  5f                   pop edi
// 00608984  5e                   pop esi
// 00608985  5d                   pop ebp
// 00608986  5b                   pop ebx
// 00608987  83c408               add esp, 8
// 0060898a  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ?clear@?$vector@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
