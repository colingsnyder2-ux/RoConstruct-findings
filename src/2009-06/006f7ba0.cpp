// roc 2009-06 006f7ba0  unit: RBX::GroupDragTool  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f7ba0
//
// 006f7ba0  d9ee                 fldz 
// 006f7ba2  33c0                 xor eax, eax
// 006f7ba4  56                   push esi
// 006f7ba5  8bf1                 mov esi, ecx
// 006f7ba7  8906                 mov dword ptr [esi], eax
// 006f7ba9  d95618               fst dword ptr [esi + 0x18]
// 006f7bac  894604               mov dword ptr [esi + 4], eax
// 006f7baf  d9561c               fst dword ptr [esi + 0x1c]
// 006f7bb2  894608               mov dword ptr [esi + 8], eax
// 006f7bb5  d95e20               fstp dword ptr [esi + 0x20]
// 006f7bb8  89460c               mov dword ptr [esi + 0xc], eax
// 006f7bbb  894610               mov dword ptr [esi + 0x10], eax
// 006f7bbe  894614               mov dword ptr [esi + 0x14], eax
// 006f7bc1  894624               mov dword ptr [esi + 0x24], eax
// 006f7bc4  c7462806000000       mov dword ptr [esi + 0x28], 6
// 006f7bcb  e890b4e7ff           call 0x573060
// 006f7bd0  d900                 fld dword ptr [eax]
// 006f7bd2  d95e2c               fstp dword ptr [esi + 0x2c]
// 006f7bd5  d94004               fld dword ptr [eax + 4]
// 006f7bd8  d95e30               fstp dword ptr [esi + 0x30]
// 006f7bdb  d94008               fld dword ptr [eax + 8]
// 006f7bde  d95e34               fstp dword ptr [esi + 0x34]
// 006f7be1  e87ab4e7ff           call 0x573060
// 006f7be6  d900                 fld dword ptr [eax]
// 006f7be8  8d4e44               lea ecx, [esi + 0x44]
// 006f7beb  d95e38               fstp dword ptr [esi + 0x38]
// 006f7bee  d94004               fld dword ptr [eax + 4]
// 006f7bf1  d95e3c               fstp dword ptr [esi + 0x3c]
// 006f7bf4  d94008               fld dword ptr [eax + 8]
// 006f7bf7  d95e40               fstp dword ptr [esi + 0x40]
// 006f7bfa  e8e1b5e7ff           call 0x5731e0
// 006f7bff  d9ee                 fldz 
// 006f7c01  8bc6                 mov eax, esi
// 006f7c03  d95664               fst dword ptr [esi + 0x64]
// 006f7c06  d95668               fst dword ptr [esi + 0x68]
// 006f7c09  d95e6c               fstp dword ptr [esi + 0x6c]
// 006f7c0c  5e                   pop esi
// 006f7c0d  c3                   ret 
// library rbxgs/tool\RunDragger.cpp (function ??0RunDragger@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
