// roc 2007-08 00540a30  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00540a30
//
// 00540a30  8b442404             mov eax, dword ptr [esp + 4]
// 00540a34  83ec0c               sub esp, 0xc
// 00540a37  6a00                 push 0
// 00540a39  684c1f8800           push 0x881f4c
// 00540a3e  689c208800           push 0x88209c
// 00540a43  6a00                 push 0
// 00540a45  50                   push eax
// 00540a46  e8eb020f00           call 0x630d36
// 00540a4b  83c414               add esp, 0x14
// 00540a4e  85c0                 test eax, eax
// 00540a50  751e                 jne 0x540a70
// 00540a52  68046e7800           push 0x786e04
// 00540a57  8d4c2404             lea ecx, [esp + 4]
// 00540a5b  ff1510e77700         call dword ptr [0x77e710]
// 00540a61  680c1e8400           push 0x841e0c
// 00540a66  8d4c2404             lea ecx, [esp + 4]
// 00540a6a  51                   push ecx
// 00540a6b  e82e010f00           call 0x630b9e
// 00540a70  83c40c               add esp, 0xc
// 00540a73  c3                   ret 
// library openrbx-client/App\v8tree\Instance.cpp (function ??$polymorphic_cast@PAVInstance@RBX@@VDescribedBase@Reflection@2@@boost@@YAPAVInstance@RBX@@PAVDescribedBase@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
