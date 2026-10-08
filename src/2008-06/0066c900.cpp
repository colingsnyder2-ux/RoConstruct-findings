// roc 2008-06 0066c900  unit: RBX::GroupDragTool  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066c900
//
// 0066c900  d9ee                 fldz 
// 0066c902  33c0                 xor eax, eax
// 0066c904  56                   push esi
// 0066c905  8bf1                 mov esi, ecx
// 0066c907  8906                 mov dword ptr [esi], eax
// 0066c909  d95618               fst dword ptr [esi + 0x18]
// 0066c90c  894604               mov dword ptr [esi + 4], eax
// 0066c90f  d9561c               fst dword ptr [esi + 0x1c]
// 0066c912  894608               mov dword ptr [esi + 8], eax
// 0066c915  d95e20               fstp dword ptr [esi + 0x20]
// 0066c918  89460c               mov dword ptr [esi + 0xc], eax
// 0066c91b  894610               mov dword ptr [esi + 0x10], eax
// 0066c91e  894614               mov dword ptr [esi + 0x14], eax
// 0066c921  894624               mov dword ptr [esi + 0x24], eax
// 0066c924  c7462806000000       mov dword ptr [esi + 0x28], 6
// 0066c92b  e83040eaff           call 0x510960
// 0066c930  d900                 fld dword ptr [eax]
// 0066c932  d95e2c               fstp dword ptr [esi + 0x2c]
// 0066c935  d94004               fld dword ptr [eax + 4]
// 0066c938  d95e30               fstp dword ptr [esi + 0x30]
// 0066c93b  d94008               fld dword ptr [eax + 8]
// 0066c93e  d95e34               fstp dword ptr [esi + 0x34]
// 0066c941  e81a40eaff           call 0x510960
// 0066c946  d900                 fld dword ptr [eax]
// 0066c948  8d4e44               lea ecx, [esi + 0x44]
// 0066c94b  d95e38               fstp dword ptr [esi + 0x38]
// 0066c94e  d94004               fld dword ptr [eax + 4]
// 0066c951  d95e3c               fstp dword ptr [esi + 0x3c]
// 0066c954  d94008               fld dword ptr [eax + 8]
// 0066c957  d95e40               fstp dword ptr [esi + 0x40]
// 0066c95a  e8d140eaff           call 0x510a30
// 0066c95f  d9ee                 fldz 
// 0066c961  8bc6                 mov eax, esi
// 0066c963  d95664               fst dword ptr [esi + 0x64]
// 0066c966  d95668               fst dword ptr [esi + 0x68]
// 0066c969  d95e6c               fstp dword ptr [esi + 0x6c]
// 0066c96c  5e                   pop esi
// 0066c96d  c3                   ret 
// library rbxgs/tool\RunDragger.cpp (function ??0RunDragger@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
