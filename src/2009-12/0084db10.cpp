// roc 2009-12 0084db10  unit: CXTPPropertyGrid  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084db10
//
// 0084db10  6aff                 push -1
// 0084db12  6803e49500           push 0x95e403
// 0084db17  64a100000000         mov eax, dword ptr fs:[0]
// 0084db1d  50                   push eax
// 0084db1e  81ec88000000         sub esp, 0x88
// 0084db24  a10052b600           mov eax, dword ptr [0xb65200]
// 0084db29  33c4                 xor eax, esp
// 0084db2b  89842484000000       mov dword ptr [esp + 0x84], eax
// 0084db32  56                   push esi
// 0084db33  a10052b600           mov eax, dword ptr [0xb65200]
// 0084db38  33c4                 xor eax, esp
// 0084db3a  50                   push eax
// 0084db3b  8d842490000000       lea eax, [esp + 0x90]
// 0084db42  64a300000000         mov dword ptr fs:[0], eax
// 0084db48  8bf1                 mov esi, ecx
// 0084db4a  56                   push esi
// 0084db4b  8d4c243c             lea ecx, [esp + 0x3c]
// 0084db4f  e89c66faff           call 0x7f41f0
// 0084db54  8d442438             lea eax, [esp + 0x38]
// 0084db58  50                   push eax
// 0084db59  8d4c240c             lea ecx, [esp + 0xc]
// 0084db5d  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 0084db68  e893d8ffff           call 0x84b400
// 0084db6d  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 0084db73  8b11                 mov edx, dword ptr [ecx]
// 0084db75  8b5210               mov edx, dword ptr [edx + 0x10]
// 0084db78  8d442408             lea eax, [esp + 8]
// 0084db7c  50                   push eax
// 0084db7d  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 0084db85  ffd2                 call edx
// 0084db87  8d4c2408             lea ecx, [esp + 8]
// 0084db8b  c684249800000000     mov byte ptr [esp + 0x98], 0
// 0084db93  e8a8d9ffff           call 0x84b540
// 0084db98  8d4c2438             lea ecx, [esp + 0x38]
// 0084db9c  c7842498000000ffffffff mov dword ptr [esp + 0x98], 0xffffffff
// 0084dba7  e83e66faff           call 0x7f41ea
// 0084dbac  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0084dbb3  64890d00000000       mov dword ptr fs:[0], ecx
// 0084dbba  59                   pop ecx
// 0084dbbb  5e                   pop esi
// 0084dbbc  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0084dbc3  33cc                 xor ecx, esp
// 0084dbc5  e8d077faff           call 0x7f539a
// 0084dbca  81c494000000         add esp, 0x94
// 0084dbd0  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPPropertyGrid@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp