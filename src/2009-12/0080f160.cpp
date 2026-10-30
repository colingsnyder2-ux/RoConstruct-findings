// roc 2009-12 0080f160  unit: CXTPImageManagerIcon  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080f160
//
// 0080f160  6aff                 push -1
// 0080f162  68c89c9500           push 0x959cc8
// 0080f167  64a100000000         mov eax, dword ptr fs:[0]
// 0080f16d  50                   push eax
// 0080f16e  56                   push esi
// 0080f16f  a10052b600           mov eax, dword ptr [0xb65200]
// 0080f174  33c4                 xor eax, esp
// 0080f176  50                   push eax
// 0080f177  8d442408             lea eax, [esp + 8]
// 0080f17b  64a300000000         mov dword ptr fs:[0], eax
// 0080f181  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0080f185  50                   push eax
// 0080f186  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0080f18e  e88dfdffff           call 0x80ef20
// 0080f193  83ec24               sub esp, 0x24
// 0080f196  8d54243c             lea edx, [esp + 0x3c]
// 0080f19a  8bcc                 mov ecx, esp
// 0080f19c  89642460             mov dword ptr [esp + 0x60], esp
// 0080f1a0  52                   push edx
// 0080f1a1  8bf0                 mov esi, eax
// 0080f1a3  e898b6ffff           call 0x80a840
// 0080f1a8  8bce                 mov ecx, esi
// 0080f1aa  e851ecffff           call 0x80de00
// 0080f1af  8d4c2418             lea ecx, [esp + 0x18]
// 0080f1b3  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0080f1bb  e820dcffff           call 0x80cde0
// 0080f1c0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0080f1c4  64890d00000000       mov dword ptr fs:[0], ecx
// 0080f1cb  59                   pop ecx
// 0080f1cc  5e                   pop esi
// 0080f1cd  83c40c               add esp, 0xc
// 0080f1d0  c22800               ret 0x28
// copied from an identical function in another client (function ?SetIcon@CXTPImageManagerIconSet@@AAEXVCXTPImageManagerIconHandle@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp