// roc 2007-03 0055cfd0  unit: seg_00550000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055cfd0
//
// 0055cfd0  8b442404             mov eax, dword ptr [esp + 4]
// 0055cfd4  83ec0c               sub esp, 0xc
// 0055cfd7  56                   push esi
// 0055cfd8  6a00                 push 0
// 0055cfda  68f0578800           push 0x8857f0
// 0055cfdf  68d4118800           push 0x8811d4
// 0055cfe4  6a00                 push 0
// 0055cfe6  50                   push eax
// 0055cfe7  8bf1                 mov esi, ecx
// 0055cfe9  e8d8210c00           call 0x61f1c6
// 0055cfee  83c414               add esp, 0x14
// 0055cff1  85c0                 test eax, eax
// 0055cff3  751e                 jne 0x55d013
// 0055cff5  68ac5e7800           push 0x785eac
// 0055cffa  8d4c2408             lea ecx, [esp + 8]
// 0055cffe  ff1580e97700         call dword ptr [0x77e980]
// 0055d004  68c0218400           push 0x8421c0
// 0055d009  8d4c2408             lea ecx, [esp + 8]
// 0055d00d  51                   push ecx
// 0055d00e  e81b200c00           call 0x61f02e
// 0055d013  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0055d016  8b5628               mov edx, dword ptr [esi + 0x28]
// 0055d019  03c8                 add ecx, eax
// 0055d01b  ffd2                 call edx
// 0055d01d  5e                   pop esi
// 0055d01e  83c40c               add esp, 0xc
// 0055d021  c20800               ret 8
// library rbxgs/v8datamodel\DataModel.cpp (function ?execute@?$BoundFuncDesc@VDataModel@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
