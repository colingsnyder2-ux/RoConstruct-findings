// roc 2011-06 00860d40  unit: CXTPPropExchange  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00860d40
//
// 00860d40  6a00                 push 0
// 00860d42  8d442408             lea eax, [esp + 8]
// 00860d46  50                   push eax
// 00860d47  689048a700           push 0xa74890
// 00860d4c  51                   push ecx
// 00860d4d  e8fef1ffff           call 0x85ff50
// 00860d52  83c410               add esp, 0x10
// 00860d55  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?WriteCount@CXTPPropExchange@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
