// roc 2009-12 0083e240  unit: CXTPCustomizeSheet::CCustomizeButton  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083e240
//
// 0083e240  83ec10               sub esp, 0x10
// 0083e243  56                   push esi
// 0083e244  8bf1                 mov esi, ecx
// 0083e246  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083e24c  57                   push edi
// 0083e24d  e89e8efcff           call 0x8070f0
// 0083e252  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083e258  8bf8                 mov edi, eax
// 0083e25a  e84162fcff           call 0x8044a0
// 0083e25f  8b10                 mov edx, dword ptr [eax]
// 0083e261  8bc8                 mov ecx, eax
// 0083e263  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 0083e269  ffd0                 call eax
// 0083e26b  8d4c2408             lea ecx, [esp + 8]
// 0083e26f  51                   push ecx
// 0083e270  6a64                 push 0x64
// 0083e272  57                   push edi
// 0083e273  8bce                 mov ecx, esi
// 0083e275  e8c685fbff           call 0x7f6840
// 0083e27a  85c0                 test eax, eax
// 0083e27c  7517                 jne 0x83e295
// 0083e27e  8b9684000000         mov edx, dword ptr [esi + 0x84]
// 0083e284  50                   push eax
// 0083e285  8b4720               mov eax, dword ptr [edi + 0x20]
// 0083e288  52                   push edx
// 0083e289  6811010000           push 0x111
// 0083e28e  50                   push eax
// 0083e28f  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0083e295  5f                   pop edi
// 0083e296  5e                   pop esi
// 0083e297  83c410               add esp, 0x10
// 0083e29a  c3                   ret 
// copied from an identical function in another client (function ?OnExecute@CCustomizeButton@CXTPCustomizeSheet@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp