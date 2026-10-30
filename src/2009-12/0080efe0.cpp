// roc 2009-12 0080efe0  unit: CXTPImageManagerIcon  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080efe0
//
// 0080efe0  6aff                 push -1
// 0080efe2  68c89c9500           push 0x959cc8
// 0080efe7  64a100000000         mov eax, dword ptr fs:[0]
// 0080efed  50                   push eax
// 0080efee  56                   push esi
// 0080efef  a10052b600           mov eax, dword ptr [0xb65200]
// 0080eff4  33c4                 xor eax, esp
// 0080eff6  50                   push eax
// 0080eff7  8d442408             lea eax, [esp + 8]
// 0080effb  64a300000000         mov dword ptr fs:[0], eax
// 0080f001  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0080f005  50                   push eax
// 0080f006  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0080f00e  e80dffffff           call 0x80ef20
// 0080f013  83ec24               sub esp, 0x24
// 0080f016  8d54243c             lea edx, [esp + 0x3c]
// 0080f01a  8bcc                 mov ecx, esp
// 0080f01c  89642460             mov dword ptr [esp + 0x60], esp
// 0080f020  52                   push edx
// 0080f021  8bf0                 mov esi, eax
// 0080f023  e818b8ffff           call 0x80a840
// 0080f028  8bce                 mov ecx, esi
// 0080f02a  e8c1ecffff           call 0x80dcf0
// 0080f02f  8d4c2418             lea ecx, [esp + 0x18]
// 0080f033  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0080f03b  e8a0ddffff           call 0x80cde0
// 0080f040  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0080f044  64890d00000000       mov dword ptr fs:[0], ecx
// 0080f04b  59                   pop ecx
// 0080f04c  5e                   pop esi
// 0080f04d  83c40c               add esp, 0xc
// 0080f050  c22800               ret 0x28
// copied from an identical function in another client (function ?SetIcon@CXTPImageManagerIconSet@@AAEXVCXTPImageManagerIconHandle@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp