// roc 2009-12 0080dd90  unit: IIHH::?$CMap  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080dd90
//
// 0080dd90  6aff                 push -1
// 0080dd92  68c89c9500           push 0x959cc8
// 0080dd97  64a100000000         mov eax, dword ptr fs:[0]
// 0080dd9d  50                   push eax
// 0080dd9e  56                   push esi
// 0080dd9f  a10052b600           mov eax, dword ptr [0xb65200]
// 0080dda4  33c4                 xor eax, esp
// 0080dda6  50                   push eax
// 0080dda7  8d442408             lea eax, [esp + 8]
// 0080ddab  64a300000000         mov dword ptr fs:[0], eax
// 0080ddb1  8bf1                 mov esi, ecx
// 0080ddb3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0080ddbb  e820e9ffff           call 0x80c6e0
// 0080ddc0  8d442418             lea eax, [esp + 0x18]
// 0080ddc4  50                   push eax
// 0080ddc5  8d8e9c000000         lea ecx, [esi + 0x9c]
// 0080ddcb  e8f0fdffff           call 0x80dbc0
// 0080ddd0  8d4c2418             lea ecx, [esp + 0x18]
// 0080ddd4  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0080dddc  e8ffefffff           call 0x80cde0
// 0080dde1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0080dde5  64890d00000000       mov dword ptr fs:[0], ecx
// 0080ddec  59                   pop ecx
// 0080dded  5e                   pop esi
// 0080ddee  83c40c               add esp, 0xc
// 0080ddf1  c22400               ret 0x24
// copied from an identical function in another client (function ?SetHotIcon@CXTPImageManagerIcon@@QAEXVCXTPImageManagerIconHandle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp