// roc 2007-03 00577360  unit: seg_00570000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00577360
//
// 00577360  8b442404             mov eax, dword ptr [esp + 4]
// 00577364  83ec0c               sub esp, 0xc
// 00577367  56                   push esi
// 00577368  6a00                 push 0
// 0057736a  68e03b8800           push 0x883be0
// 0057736f  68d4118800           push 0x8811d4
// 00577374  6a00                 push 0
// 00577376  50                   push eax
// 00577377  8bf1                 mov esi, ecx
// 00577379  e8487e0a00           call 0x61f1c6
// 0057737e  83c414               add esp, 0x14
// 00577381  85c0                 test eax, eax
// 00577383  751e                 jne 0x5773a3
// 00577385  68ac5e7800           push 0x785eac
// 0057738a  8d4c2408             lea ecx, [esp + 8]
// 0057738e  ff1580e97700         call dword ptr [0x77e980]
// 00577394  68c0218400           push 0x8421c0
// 00577399  8d4c2408             lea ecx, [esp + 8]
// 0057739d  51                   push ecx
// 0057739e  e88b7c0a00           call 0x61f02e
// 005773a3  8b542418             mov edx, dword ptr [esp + 0x18]
// 005773a7  83c204               add edx, 4
// 005773aa  52                   push edx
// 005773ab  50                   push eax
// 005773ac  8bce                 mov ecx, esi
// 005773ae  e83dffffff           call 0x5772f0
// 005773b3  5e                   pop esi
// 005773b4  83c40c               add esp, 0xc
// 005773b7  c20800               ret 8
// library rbxgs/v8datamodel\PartInstance.cpp (function ?execute@?$BoundFuncDesc@VPartInstance@RBX@@$$A6AMXZ$0A@@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
