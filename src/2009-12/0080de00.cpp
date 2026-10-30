// roc 2009-12 0080de00  unit: IIHH::?$CMap  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080de00
//
// 0080de00  6aff                 push -1
// 0080de02  68c89c9500           push 0x959cc8
// 0080de07  64a100000000         mov eax, dword ptr fs:[0]
// 0080de0d  50                   push eax
// 0080de0e  56                   push esi
// 0080de0f  a10052b600           mov eax, dword ptr [0xb65200]
// 0080de14  33c4                 xor eax, esp
// 0080de16  50                   push eax
// 0080de17  8d442408             lea eax, [esp + 8]
// 0080de1b  64a300000000         mov dword ptr fs:[0], eax
// 0080de21  8bf1                 mov esi, ecx
// 0080de23  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0080de2b  e8b0e8ffff           call 0x80c6e0
// 0080de30  8d442418             lea eax, [esp + 0x18]
// 0080de34  50                   push eax
// 0080de35  8d8ec0000000         lea ecx, [esi + 0xc0]
// 0080de3b  e880fdffff           call 0x80dbc0
// 0080de40  8d4c2418             lea ecx, [esp + 0x18]
// 0080de44  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0080de4c  e88fefffff           call 0x80cde0
// 0080de51  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0080de55  64890d00000000       mov dword ptr fs:[0], ecx
// 0080de5c  59                   pop ecx
// 0080de5d  5e                   pop esi
// 0080de5e  83c40c               add esp, 0xc
// 0080de61  c22400               ret 0x24
// copied from an identical function in another client (function ?SetCheckedIcon@CXTPImageManagerIcon@@QAEXVCXTPImageManagerIconHandle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp