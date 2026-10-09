// roc 2008-06 0040db00  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040db00
//
// 0040db00  83ec08               sub esp, 8
// 0040db03  56                   push esi
// 0040db04  8bf1                 mov esi, ecx
// 0040db06  57                   push edi
// 0040db07  85f6                 test esi, esi
// 0040db09  7405                 je 0x40db10
// 0040db0b  8d4e14               lea ecx, [esi + 0x14]
// 0040db0e  eb02                 jmp 0x40db12
// 0040db10  33c9                 xor ecx, ecx
// 0040db12  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0040db16  83ec08               sub esp, 8
// 0040db19  894c2414             mov dword ptr [esp + 0x14], ecx
// 0040db1d  8bc4                 mov eax, esp
// 0040db1f  897c2410             mov dword ptr [esp + 0x10], edi
// 0040db23  894804               mov dword ptr [eax + 4], ecx
// 0040db26  8d8ec4000000         lea ecx, [esi + 0xc4]
// 0040db2c  8938                 mov dword ptr [eax], edi
// 0040db2e  e8fdc9ffff           call 0x40a530
// 0040db33  85f6                 test esi, esi
// 0040db35  7405                 je 0x40db3c
// 0040db37  8d4614               lea eax, [esi + 0x14]
// 0040db3a  eb02                 jmp 0x40db3e
// 0040db3c  33c0                 xor eax, eax
// 0040db3e  50                   push eax
// 0040db3f  b9483f9700           mov ecx, 0x973f48
// 0040db44  e8d7da1500           call 0x56b620
// 0040db49  85c0                 test eax, eax
// 0040db4b  7434                 je 0x40db81
// 0040db4d  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0040db50  e83bd01500           call 0x56ab90
// 0040db55  84c0                 test al, al
// 0040db57  7528                 jne 0x40db81
// 0040db59  85f6                 test esi, esi
// 0040db5b  7405                 je 0x40db62
// 0040db5d  8d4614               lea eax, [esi + 0x14]
// 0040db60  eb02                 jmp 0x40db64
// 0040db62  33c0                 xor eax, eax
// 0040db64  50                   push eax
// 0040db65  b9483f9700           mov ecx, 0x973f48
// 0040db6a  e8b1da1500           call 0x56b620
// 0040db6f  85c0                 test eax, eax
// 0040db71  740e                 je 0x40db81
// 0040db73  57                   push edi
// 0040db74  8d4c2418             lea ecx, [esp + 0x18]
// 0040db78  51                   push ecx
// 0040db79  8d4810               lea ecx, [eax + 0x10]
// 0040db7c  e81fb52200           call 0x6390a0
// 0040db81  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0040db87  85c9                 test ecx, ecx
// 0040db89  740d                 je 0x40db98
// 0040db8b  8b11                 mov edx, dword ptr [ecx]
// 0040db8d  8b523c               mov edx, dword ptr [edx + 0x3c]
// 0040db90  8d442408             lea eax, [esp + 8]
// 0040db94  50                   push eax
// 0040db95  56                   push esi
// 0040db96  ffd2                 call edx
// 0040db98  5f                   pop edi
// 0040db99  5e                   pop esi
// 0040db9a  83c408               add esp, 8
// 0040db9d  c20400               ret 4
// library openrbx-client/App\v8datamodel\Accoutrement.cpp (function ?raisePropertyChanged@Instance@RBX@@QAEXABVPropertyDescriptor@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Accoutrement.cpp
