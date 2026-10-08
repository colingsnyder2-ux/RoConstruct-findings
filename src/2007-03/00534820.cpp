// roc 2007-03 00534820  unit: seg_00530000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00534820
//
// 00534820  83ec18               sub esp, 0x18
// 00534823  8d0424               lea eax, [esp]
// 00534826  50                   push eax
// 00534827  81c1d0010000         add ecx, 0x1d0
// 0053482d  e8fef3ffff           call 0x533c30
// 00534832  d90424               fld dword ptr [esp]
// 00534835  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00534839  d918                 fstp dword ptr [eax]
// 0053483b  d9442404             fld dword ptr [esp + 4]
// 0053483f  d95804               fstp dword ptr [eax + 4]
// 00534842  d9442408             fld dword ptr [esp + 8]
// 00534846  d95808               fstp dword ptr [eax + 8]
// 00534849  d944240c             fld dword ptr [esp + 0xc]
// 0053484d  d9580c               fstp dword ptr [eax + 0xc]
// 00534850  d9442410             fld dword ptr [esp + 0x10]
// 00534854  d95810               fstp dword ptr [eax + 0x10]
// 00534857  d9442414             fld dword ptr [esp + 0x14]
// 0053485b  d95814               fstp dword ptr [eax + 0x14]
// 0053485e  83c418               add esp, 0x18
// 00534861  c20400               ret 4
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?getExtentsLocal@ModelInstance@RBX@@UBE?AVExtents@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
