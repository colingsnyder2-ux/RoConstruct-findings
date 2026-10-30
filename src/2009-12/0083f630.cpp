// roc 2009-12 0083f630  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083f630
//
// 0083f630  83ec10               sub esp, 0x10
// 0083f633  56                   push esi
// 0083f634  8bf1                 mov esi, ecx
// 0083f636  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083f63c  57                   push edi
// 0083f63d  e8ae7afcff           call 0x8070f0
// 0083f642  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083f648  8bf8                 mov edi, eax
// 0083f64a  8b01                 mov eax, dword ptr [ecx]
// 0083f64c  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 0083f652  ffd2                 call edx
// 0083f654  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0083f65a  8d4c2408             lea ecx, [esp + 8]
// 0083f65e  51                   push ecx
// 0083f65f  50                   push eax
// 0083f660  c744241864000000     mov dword ptr [esp + 0x18], 0x64
// 0083f668  89442414             mov dword ptr [esp + 0x14], eax
// 0083f66c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0083f674  8974241c             mov dword ptr [esp + 0x1c], esi
// 0083f678  8b5720               mov edx, dword ptr [edi + 0x20]
// 0083f67b  6862280000           push 0x2862
// 0083f680  52                   push edx
// 0083f681  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0083f687  5f                   pop edi
// 0083f688  5e                   pop esi
// 0083f689  83c410               add esp, 0x10
// 0083f68c  c3                   ret 
// copied from an identical function in another client (function ?OnExecute@CCustomizeEdit@CXTPCustomizeSheet@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp