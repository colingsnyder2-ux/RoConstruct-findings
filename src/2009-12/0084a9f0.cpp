// roc 2009-12 0084a9f0  unit: CXTPControlSelector  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084a9f0
//
// 0084a9f0  a1706fb600           mov eax, dword ptr [0xb66f70]
// 0084a9f5  83f8ff               cmp eax, -1
// 0084a9f8  7520                 jne 0x84aa1a
// 0084a9fa  68f0b99f00           push 0x9fb9f0
// 0084a9ff  ff151cb29800         call dword ptr [0x98b21c]
// 0084aa05  85c0                 test eax, eax
// 0084aa07  741d                 je 0x84aa26
// 0084aa09  68e4b99f00           push 0x9fb9e4
// 0084aa0e  50                   push eax
// 0084aa0f  ff1520b29800         call dword ptr [0x98b220]
// 0084aa15  a3706fb600           mov dword ptr [0xb66f70], eax
// 0084aa1a  85c0                 test eax, eax
// 0084aa1c  7412                 je 0x84aa30
// 0084aa1e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084aa22  51                   push ecx
// 0084aa23  ffd0                 call eax
// 0084aa25  c3                   ret 
// 0084aa26  c705706fb60000000000 mov dword ptr [0xb66f70], 0
// 0084aa30  33c0                 xor eax, eax
// 0084aa32  c3                   ret 
// copied from an identical function in another client (function ?IsContextRTL@CXTPDrawHelpers@@SAHPAUHDC__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\Common\XTPDrawHelpers.cpp