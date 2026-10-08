// roc 2007-03 005af200  unit: seg_005a0000  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005af200
//
// 005af200  8b442404             mov eax, dword ptr [esp + 4]
// 005af204  83e801               sub eax, 1
// 005af207  7434                 je 0x5af23d
// 005af209  83e801               sub eax, 1
// 005af20c  7405                 je 0x5af213
// 005af20e  e9adfdffff           jmp 0x5aefc0
// 005af213  6a18                 push 0x18
// 005af215  e8eeee0600           call 0x61e108
// 005af21a  83c404               add esp, 4
// 005af21d  85c0                 test eax, eax
// 005af21f  743f                 je 0x5af260
// 005af221  d9ee                 fldz 
// 005af223  d95004               fst dword ptr [eax + 4]
// 005af226  d95008               fst dword ptr [eax + 8]
// 005af229  d9500c               fst dword ptr [eax + 0xc]
// 005af22c  d95814               fstp dword ptr [eax + 0x14]
// 005af22f  c7005c7b7b00         mov dword ptr [eax], 0x7b7b5c
// 005af235  c7401000000000       mov dword ptr [eax + 0x10], 0
// 005af23c  c3                   ret 
// 005af23d  6a14                 push 0x14
// 005af23f  e8c4ee0600           call 0x61e108
// 005af244  83c404               add esp, 4
// 005af247  85c0                 test eax, eax
// 005af249  7415                 je 0x5af260
// 005af24b  d9ee                 fldz 
// 005af24d  d95004               fst dword ptr [eax + 4]
// 005af250  d95008               fst dword ptr [eax + 8]
// 005af253  d9500c               fst dword ptr [eax + 0xc]
// 005af256  d95810               fstp dword ptr [eax + 0x10]
// 005af259  c700847b7b00         mov dword ptr [eax], 0x7b7b84
// 005af25f  c3                   ret 
// 005af260  33c0                 xor eax, eax
// 005af262  c3                   ret 
// library rbxgs/v8world\Primitive.cpp (function ?newGeometry@Primitive@RBX@@KAPAVGeometry@2@W4GeometryType@32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
