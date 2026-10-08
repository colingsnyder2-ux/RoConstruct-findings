// roc 2007-03 005347d0  unit: seg_00530000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005347d0
//
// 005347d0  83ec18               sub esp, 0x18
// 005347d3  8d0424               lea eax, [esp]
// 005347d6  50                   push eax
// 005347d7  81c100020000         add ecx, 0x200
// 005347dd  e84ef4ffff           call 0x533c30
// 005347e2  d90424               fld dword ptr [esp]
// 005347e5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005347e9  d918                 fstp dword ptr [eax]
// 005347eb  d9442404             fld dword ptr [esp + 4]
// 005347ef  d95804               fstp dword ptr [eax + 4]
// 005347f2  d9442408             fld dword ptr [esp + 8]
// 005347f6  d95808               fstp dword ptr [eax + 8]
// 005347f9  d944240c             fld dword ptr [esp + 0xc]
// 005347fd  d9580c               fstp dword ptr [eax + 0xc]
// 00534800  d9442410             fld dword ptr [esp + 0x10]
// 00534804  d95810               fstp dword ptr [eax + 0x10]
// 00534807  d9442414             fld dword ptr [esp + 0x14]
// 0053480b  d95814               fstp dword ptr [eax + 0x14]
// 0053480e  83c418               add esp, 0x18
// 00534811  c20400               ret 4
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?getExtentsWorld@ModelInstance@RBX@@UBE?AVExtents@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
