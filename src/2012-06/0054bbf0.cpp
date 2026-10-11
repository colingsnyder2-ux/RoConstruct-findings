// roc 2012-06 0054bbf0  unit: RBX::VInsertService::?$FactoryProduct::Creator  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0054bbf0
//
// 0054bbf0  8b442404             mov eax, dword ptr [esp + 4]
// 0054bbf4  83ec0c               sub esp, 0xc
// 0054bbf7  6a00                 push 0
// 0054bbf9  68e801d600           push 0xd601e8
// 0054bbfe  68ac03d600           push 0xd603ac
// 0054bc03  6a00                 push 0
// 0054bc05  50                   push eax
// 0054bc06  e83d784300           call 0x983448
// 0054bc0b  83c414               add esp, 0x14
// 0054bc0e  85c0                 test eax, eax
// 0054bc10  751e                 jne 0x54bc30
// 0054bc12  682841b400           push 0xb44128
// 0054bc17  8d4c2404             lea ecx, [esp + 4]
// 0054bc1b  ff15202ab200         call dword ptr [0xb22a20]
// 0054bc21  68c0d5cd00           push 0xcdd5c0
// 0054bc26  8d4c2404             lea ecx, [esp + 4]
// 0054bc2a  51                   push ecx
// 0054bc2b  e814754300           call 0x983144
// 0054bc30  83c40c               add esp, 0xc
// 0054bc33  c3                   ret 
// library openrbx-client/App\v8tree\Instance.cpp (function ??$polymorphic_cast@PAVInstance@RBX@@VDescribedBase@Reflection@2@@boost@@YAPAVInstance@RBX@@PAVDescribedBase@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
