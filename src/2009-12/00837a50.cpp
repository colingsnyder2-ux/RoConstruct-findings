// roc 2009-12 00837a50  unit: CXTPControls  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00837a50
//
// 00837a50  6aff                 push -1
// 00837a52  685bc39500           push 0x95c35b
// 00837a57  64a100000000         mov eax, dword ptr fs:[0]
// 00837a5d  50                   push eax
// 00837a5e  51                   push ecx
// 00837a5f  56                   push esi
// 00837a60  a10052b600           mov eax, dword ptr [0xb65200]
// 00837a65  33c4                 xor eax, esp
// 00837a67  50                   push eax
// 00837a68  8d44240c             lea eax, [esp + 0xc]
// 00837a6c  64a300000000         mov dword ptr fs:[0], eax
// 00837a72  8bf1                 mov esi, ecx
// 00837a74  89742408             mov dword ptr [esp + 8], esi
// 00837a78  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00837a80  e85bf1ffff           call 0x836be0
// 00837a85  8d4e04               lea ecx, [esi + 4]
// 00837a88  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00837a90  e8cbf0ffff           call 0x836b60
// 00837a95  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00837a99  64890d00000000       mov dword ptr fs:[0], ecx
// 00837aa0  59                   pop ecx
// 00837aa1  5e                   pop esi
// 00837aa2  83c410               add esp, 0x10
// 00837aa5  c3                   ret 
// copied from an identical function in another client (function ??1CXTPDockState@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPDockState.cpp