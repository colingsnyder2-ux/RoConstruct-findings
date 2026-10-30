// roc 2009-12 0080de70  unit: IIHH::?$CMap  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080de70
//
// 0080de70  6aff                 push -1
// 0080de72  68c89c9500           push 0x959cc8
// 0080de77  64a100000000         mov eax, dword ptr fs:[0]
// 0080de7d  50                   push eax
// 0080de7e  56                   push esi
// 0080de7f  a10052b600           mov eax, dword ptr [0xb65200]
// 0080de84  33c4                 xor eax, esp
// 0080de86  50                   push eax
// 0080de87  8d442408             lea eax, [esp + 8]
// 0080de8b  64a300000000         mov dword ptr fs:[0], eax
// 0080de91  8bf1                 mov esi, ecx
// 0080de93  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0080de9b  e840e8ffff           call 0x80c6e0
// 0080dea0  8d442418             lea eax, [esp + 0x18]
// 0080dea4  50                   push eax
// 0080dea5  8d8ee4000000         lea ecx, [esi + 0xe4]
// 0080deab  e810fdffff           call 0x80dbc0
// 0080deb0  8d4c2418             lea ecx, [esp + 0x18]
// 0080deb4  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0080debc  e81fefffff           call 0x80cde0
// 0080dec1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0080dec5  64890d00000000       mov dword ptr fs:[0], ecx
// 0080decc  59                   pop ecx
// 0080decd  5e                   pop esi
// 0080dece  83c40c               add esp, 0xc
// 0080ded1  c22400               ret 0x24
// copied from an identical function in another client (function ?SetPressedIcon@CXTPImageManagerIcon@@QAEXVCXTPImageManagerIconHandle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp