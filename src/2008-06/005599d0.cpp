// roc 2008-06 005599d0  unit: RBX::VInstance::?$SignalDesc  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005599d0
//
// 005599d0  8b442404             mov eax, dword ptr [esp + 4]
// 005599d4  83ec0c               sub esp, 0xc
// 005599d7  6a00                 push 0
// 005599d9  687c909200           push 0x92907c
// 005599de  68fc919200           push 0x9291fc
// 005599e3  6a00                 push 0
// 005599e5  50                   push eax
// 005599e6  e8db7d1400           call 0x6a17c6
// 005599eb  83c414               add esp, 0x14
// 005599ee  85c0                 test eax, eax
// 005599f0  751e                 jne 0x559a10
// 005599f2  6834ba8000           push 0x80ba34
// 005599f7  8d4c2404             lea ecx, [esp + 4]
// 005599fb  ff1564288000         call dword ptr [0x802864]
// 00559a01  682c368d00           push 0x8d362c
// 00559a06  8d4c2404             lea ecx, [esp + 4]
// 00559a0a  51                   push ecx
// 00559a0b  e87c7b1400           call 0x6a158c
// 00559a10  83c40c               add esp, 0xc
// 00559a13  c3                   ret 
// library openrbx-client/App\v8tree\Instance.cpp (function ??$polymorphic_cast@PAVInstance@RBX@@VDescribedBase@Reflection@2@@boost@@YAPAVInstance@RBX@@PAVDescribedBase@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
