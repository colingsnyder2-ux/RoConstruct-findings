// roc 2007-03 005414e0  unit: seg_00540000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005414e0
//
// 005414e0  8b442404             mov eax, dword ptr [esp + 4]
// 005414e4  83ec0c               sub esp, 0xc
// 005414e7  6a00                 push 0
// 005414e9  6864108800           push 0x881064
// 005414ee  68d4118800           push 0x8811d4
// 005414f3  6a00                 push 0
// 005414f5  50                   push eax
// 005414f6  e8cbdc0d00           call 0x61f1c6
// 005414fb  83c414               add esp, 0x14
// 005414fe  85c0                 test eax, eax
// 00541500  751e                 jne 0x541520
// 00541502  68ac5e7800           push 0x785eac
// 00541507  8d4c2404             lea ecx, [esp + 4]
// 0054150b  ff1580e97700         call dword ptr [0x77e980]
// 00541511  68c0218400           push 0x8421c0
// 00541516  8d4c2404             lea ecx, [esp + 4]
// 0054151a  51                   push ecx
// 0054151b  e80edb0d00           call 0x61f02e
// 00541520  83c40c               add esp, 0xc
// 00541523  c3                   ret 
// library openrbx-client/App\v8tree\Instance.cpp (function ??$polymorphic_cast@PAVInstance@RBX@@VDescribedBase@Reflection@2@@boost@@YAPAVInstance@RBX@@PAVDescribedBase@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
