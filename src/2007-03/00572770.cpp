// roc 2007-03 00572770  unit: seg_00570000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00572770
//
// 00572770  56                   push esi
// 00572771  8bf1                 mov esi, ecx
// 00572773  56                   push esi
// 00572774  e887a30000           call 0x57cb00
// 00572779  83c404               add esp, 4
// 0057277c  85c0                 test eax, eax
// 0057277e  740e                 je 0x57278e
// 00572780  8b8ee0010000         mov ecx, dword ptr [esi + 0x1e0]
// 00572786  51                   push ecx
// 00572787  8bc8                 mov ecx, eax
// 00572789  e882b00300           call 0x5ad810
// 0057278e  5e                   pop esi
// 0057278f  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ?destroyJoints@PartInstance@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
