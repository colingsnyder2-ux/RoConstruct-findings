// roc 2009-12 0080f1e0  unit: CXTPImageManagerIcon  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080f1e0
//
// 0080f1e0  6aff                 push -1
// 0080f1e2  68c89c9500           push 0x959cc8
// 0080f1e7  64a100000000         mov eax, dword ptr fs:[0]
// 0080f1ed  50                   push eax
// 0080f1ee  56                   push esi
// 0080f1ef  a10052b600           mov eax, dword ptr [0xb65200]
// 0080f1f4  33c4                 xor eax, esp
// 0080f1f6  50                   push eax
// 0080f1f7  8d442408             lea eax, [esp + 8]
// 0080f1fb  64a300000000         mov dword ptr fs:[0], eax
// 0080f201  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0080f205  50                   push eax
// 0080f206  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0080f20e  e80dfdffff           call 0x80ef20
// 0080f213  83ec24               sub esp, 0x24
// 0080f216  8d54243c             lea edx, [esp + 0x3c]
// 0080f21a  8bcc                 mov ecx, esp
// 0080f21c  89642460             mov dword ptr [esp + 0x60], esp
// 0080f220  52                   push edx
// 0080f221  8bf0                 mov esi, eax
// 0080f223  e818b6ffff           call 0x80a840
// 0080f228  8bce                 mov ecx, esi
// 0080f22a  e841ecffff           call 0x80de70
// 0080f22f  8d4c2418             lea ecx, [esp + 0x18]
// 0080f233  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0080f23b  e8a0dbffff           call 0x80cde0
// 0080f240  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0080f244  64890d00000000       mov dword ptr fs:[0], ecx
// 0080f24b  59                   pop ecx
// 0080f24c  5e                   pop esi
// 0080f24d  83c40c               add esp, 0xc
// 0080f250  c22800               ret 0x28
// copied from an identical function in another client (function ?SetIcon@CXTPImageManagerIconSet@@AAEXVCXTPImageManagerIconHandle@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp