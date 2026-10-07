// roc 2007-08 00685130  unit: CXTPPropExchange  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685130
//
// 00685130  68f8f47c00           push 0x7cf4f8
// 00685135  8d442408             lea eax, [esp + 8]
// 00685139  68f0f47c00           push 0x7cf4f0
// 0068513e  50                   push eax
// 0068513f  e87cfeffff           call 0x684fc0
// 00685144  68ecf47c00           push 0x7cf4ec
// 00685149  8d4c2414             lea ecx, [esp + 0x14]
// 0068514d  68e4f47c00           push 0x7cf4e4
// 00685152  51                   push ecx
// 00685153  e868feffff           call 0x684fc0
// 00685158  68e0f47c00           push 0x7cf4e0
// 0068515d  8d542420             lea edx, [esp + 0x20]
// 00685161  68d8f47c00           push 0x7cf4d8
// 00685166  52                   push edx
// 00685167  e854feffff           call 0x684fc0
// 0068516c  68d4f47c00           push 0x7cf4d4
// 00685171  8d44242c             lea eax, [esp + 0x2c]
// 00685175  68ccf47c00           push 0x7cf4cc
// 0068517a  50                   push eax
// 0068517b  e840feffff           call 0x684fc0
// 00685180  68c8f47c00           push 0x7cf4c8
// 00685185  8d4c2438             lea ecx, [esp + 0x38]
// 00685189  68f8f47c00           push 0x7cf4f8
// 0068518e  51                   push ecx
// 0068518f  e82cfeffff           call 0x684fc0
// 00685194  83c43c               add esp, 0x3c
// 00685197  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPPropExchange.cpp (function ?PreformatString@CXTPPropExchange@@IAEXPA_W@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPPropExchange.cpp
