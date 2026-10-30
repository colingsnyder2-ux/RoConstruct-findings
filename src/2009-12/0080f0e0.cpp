// roc 2009-12 0080f0e0  unit: CXTPImageManagerIcon  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080f0e0
//
// 0080f0e0  6aff                 push -1
// 0080f0e2  68c89c9500           push 0x959cc8
// 0080f0e7  64a100000000         mov eax, dword ptr fs:[0]
// 0080f0ed  50                   push eax
// 0080f0ee  56                   push esi
// 0080f0ef  a10052b600           mov eax, dword ptr [0xb65200]
// 0080f0f4  33c4                 xor eax, esp
// 0080f0f6  50                   push eax
// 0080f0f7  8d442408             lea eax, [esp + 8]
// 0080f0fb  64a300000000         mov dword ptr fs:[0], eax
// 0080f101  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0080f105  50                   push eax
// 0080f106  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0080f10e  e80dfeffff           call 0x80ef20
// 0080f113  83ec24               sub esp, 0x24
// 0080f116  8d54243c             lea edx, [esp + 0x3c]
// 0080f11a  8bcc                 mov ecx, esp
// 0080f11c  89642460             mov dword ptr [esp + 0x60], esp
// 0080f120  52                   push edx
// 0080f121  8bf0                 mov esi, eax
// 0080f123  e818b7ffff           call 0x80a840
// 0080f128  8bce                 mov ecx, esi
// 0080f12a  e861ecffff           call 0x80dd90
// 0080f12f  8d4c2418             lea ecx, [esp + 0x18]
// 0080f133  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0080f13b  e8a0dcffff           call 0x80cde0
// 0080f140  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0080f144  64890d00000000       mov dword ptr fs:[0], ecx
// 0080f14b  59                   pop ecx
// 0080f14c  5e                   pop esi
// 0080f14d  83c40c               add esp, 0xc
// 0080f150  c22800               ret 0x28
// copied from an identical function in another client (function ?SetIcon@CXTPImageManagerIconSet@@AAEXVCXTPImageManagerIconHandle@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp