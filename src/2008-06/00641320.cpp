// roc 2008-06 00641320  unit: RBX::AxisMoveTool  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00641320
//
// 00641320  837c240400           cmp dword ptr [esp + 4], 0
// 00641325  56                   push esi
// 00641326  8bf1                 mov esi, ecx
// 00641328  7407                 je 0x641331
// 0064132a  c74604fca58400       mov dword ptr [esi + 4], 0x84a5fc
// 00641331  d9e8                 fld1 
// 00641333  8d4e08               lea ecx, [esi + 8]
// 00641336  d919                 fstp dword ptr [ecx]
// 00641338  e8434f0200           call 0x666280
// 0064133d  d9e8                 fld1 
// 0064133f  8d4e18               lea ecx, [esi + 0x18]
// 00641342  d919                 fstp dword ptr [ecx]
// 00641344  e8374f0200           call 0x666280
// 00641349  d90510389700         fld dword ptr [0x973810]
// 0064134f  d95e28               fstp dword ptr [esi + 0x28]
// 00641352  8d4e34               lea ecx, [esi + 0x34]
// 00641355  d90514389700         fld dword ptr [0x973814]
// 0064135b  d95e2c               fstp dword ptr [esi + 0x2c]
// 0064135e  d90518389700         fld dword ptr [0x973818]
// 00641364  d95e30               fstp dword ptr [esi + 0x30]
// 00641367  d9e8                 fld1 
// 00641369  d919                 fstp dword ptr [ecx]
// 0064136b  e8d04e0200           call 0x666240
// 00641370  d9ee                 fldz 
// 00641372  c6463c00             mov byte ptr [esi + 0x3c], 0
// 00641376  c6463d00             mov byte ptr [esi + 0x3d], 0
// 0064137a  c6464400             mov byte ptr [esi + 0x44], 0
// 0064137e  d95648               fst dword ptr [esi + 0x48]
// 00641381  d9564c               fst dword ptr [esi + 0x4c]
// 00641384  8bc6                 mov eax, esi
// 00641386  d95e50               fstp dword ptr [esi + 0x50]
// 00641389  5e                   pop esi
// 0064138a  c20400               ret 4
// library rbxgs/v8datamodel\ICharacterSubject.cpp (function ??0ICharacterSubject@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ICharacterSubject.cpp
