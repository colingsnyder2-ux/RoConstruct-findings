// roc 2007-03 00536010  unit: seg_00530000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536010
//
// 00536010  8b442404             mov eax, dword ptr [esp + 4]
// 00536014  83ec0c               sub esp, 0xc
// 00536017  56                   push esi
// 00536018  6a00                 push 0
// 0053601a  6848b68800           push 0x88b648
// 0053601f  68d4118800           push 0x8811d4
// 00536024  6a00                 push 0
// 00536026  50                   push eax
// 00536027  8bf1                 mov esi, ecx
// 00536029  e898910e00           call 0x61f1c6
// 0053602e  83c414               add esp, 0x14
// 00536031  85c0                 test eax, eax
// 00536033  751e                 jne 0x536053
// 00536035  68ac5e7800           push 0x785eac
// 0053603a  8d4c2408             lea ecx, [esp + 8]
// 0053603e  ff1580e97700         call dword ptr [0x77e980]
// 00536044  68c0218400           push 0x8421c0
// 00536049  8d4c2408             lea ecx, [esp + 8]
// 0053604d  51                   push ecx
// 0053604e  e8db8f0e00           call 0x61f02e
// 00536053  8b90f4000000         mov edx, dword ptr [eax + 0xf4]
// 00536059  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0053605c  8b140a               mov edx, dword ptr [edx + ecx]
// 0053605f  03562c               add edx, dword ptr [esi + 0x2c]
// 00536062  8d8c02f4000000       lea ecx, [edx + eax + 0xf4]
// 00536069  8b4628               mov eax, dword ptr [esi + 0x28]
// 0053606c  ffd0                 call eax
// 0053606e  5e                   pop esi
// 0053606f  83c40c               add esp, 0xc
// 00536072  c20800               ret 8
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?execute@?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
