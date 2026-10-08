// roc 2007-03 005dfef0  unit: seg_005d0000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dfef0
//
// 005dfef0  6aff                 push -1
// 005dfef2  68a8417500           push 0x7541a8
// 005dfef7  64a100000000         mov eax, dword ptr fs:[0]
// 005dfefd  50                   push eax
// 005dfefe  64892500000000       mov dword ptr fs:[0], esp
// 005dff05  51                   push ecx
// 005dff06  56                   push esi
// 005dff07  8bf1                 mov esi, ecx
// 005dff09  89742404             mov dword ptr [esp + 4], esi
// 005dff0d  33c9                 xor ecx, ecx
// 005dff0f  3bf1                 cmp esi, ecx
// 005dff11  894c2410             mov dword ptr [esp + 0x10], ecx
// 005dff15  7403                 je 0x5dff1a
// 005dff17  8d4e08               lea ecx, [esi + 8]
// 005dff1a  e821891400           call 0x728840
// 005dff1f  8bce                 mov ecx, esi
// 005dff21  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005dff29  e84236ffff           call 0x5d3570
// 005dff2e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005dff32  5e                   pop esi
// 005dff33  64890d00000000       mov dword ptr fs:[0], ecx
// 005dff3a  83c410               add esp, 0x10
// 005dff3d  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??1?$signal1@XMU?$last_value@X@boost@@HU?$less@H@std@@V?$function@$$A6AXM@ZV?$allocator@X@std@@@2@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
