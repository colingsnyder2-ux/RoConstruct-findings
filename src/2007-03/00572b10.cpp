// roc 2007-03 00572b10  unit: seg_00570000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00572b10
//
// 00572b10  8b89e0010000         mov ecx, dword ptr [ecx + 0x1e0]
// 00572b16  56                   push esi
// 00572b17  8b742408             mov esi, dword ptr [esp + 8]
// 00572b1b  56                   push esi
// 00572b1c  e89ff5ffff           call 0x5720c0
// 00572b21  8bc6                 mov eax, esi
// 00572b23  5e                   pop esi
// 00572b24  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ?getExtentsLocal@PartInstance@RBX@@UBE?AVExtents@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
