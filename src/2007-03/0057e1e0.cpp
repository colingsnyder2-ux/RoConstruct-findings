// roc 2007-03 0057e1e0  unit: seg_00570000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057e1e0
//
// 0057e1e0  8b442404             mov eax, dword ptr [esp + 4]
// 0057e1e4  83ec0c               sub esp, 0xc
// 0057e1e7  56                   push esi
// 0057e1e8  6a00                 push 0
// 0057e1ea  6814058a00           push 0x8a0514
// 0057e1ef  68d4118800           push 0x8811d4
// 0057e1f4  6a00                 push 0
// 0057e1f6  50                   push eax
// 0057e1f7  8bf1                 mov esi, ecx
// 0057e1f9  e8c80f0a00           call 0x61f1c6
// 0057e1fe  83c414               add esp, 0x14
// 0057e201  85c0                 test eax, eax
// 0057e203  751e                 jne 0x57e223
// 0057e205  68ac5e7800           push 0x785eac
// 0057e20a  8d4c2408             lea ecx, [esp + 8]
// 0057e20e  ff1580e97700         call dword ptr [0x77e980]
// 0057e214  68c0218400           push 0x8421c0
// 0057e219  8d4c2408             lea ecx, [esp + 8]
// 0057e21d  51                   push ecx
// 0057e21e  e80b0e0a00           call 0x61f02e
// 0057e223  8b90f4000000         mov edx, dword ptr [eax + 0xf4]
// 0057e229  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0057e22c  8b140a               mov edx, dword ptr [edx + ecx]
// 0057e22f  03562c               add edx, dword ptr [esi + 0x2c]
// 0057e232  8d8c02f4000000       lea ecx, [edx + eax + 0xf4]
// 0057e239  8b4628               mov eax, dword ptr [esi + 0x28]
// 0057e23c  ffd0                 call eax
// 0057e23e  5e                   pop esi
// 0057e23f  83c40c               add esp, 0xc
// 0057e242  c20800               ret 8
// library rbxgs/v8datamodel\Workspace.cpp (function ?execute@?$BoundFuncDesc@VWorkspace@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
