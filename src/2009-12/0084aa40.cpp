// roc 2009-12 0084aa40  unit: CXTPControlSelector  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084aa40
//
// 0084aa40  a1746fb600           mov eax, dword ptr [0xb66f74]
// 0084aa45  83f8ff               cmp eax, -1
// 0084aa48  7520                 jne 0x84aa6a
// 0084aa4a  68f0b99f00           push 0x9fb9f0
// 0084aa4f  ff151cb29800         call dword ptr [0x98b21c]
// 0084aa55  85c0                 test eax, eax
// 0084aa57  7422                 je 0x84aa7b
// 0084aa59  68fcb99f00           push 0x9fb9fc
// 0084aa5e  50                   push eax
// 0084aa5f  ff1520b29800         call dword ptr [0x98b220]
// 0084aa65  a3746fb600           mov dword ptr [0xb66f74], eax
// 0084aa6a  85c0                 test eax, eax
// 0084aa6c  740c                 je 0x84aa7a
// 0084aa6e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084aa72  8b542404             mov edx, dword ptr [esp + 4]
// 0084aa76  51                   push ecx
// 0084aa77  52                   push edx
// 0084aa78  ffd0                 call eax
// 0084aa7a  c3                   ret 
// 0084aa7b  c705746fb60000000000 mov dword ptr [0xb66f74], 0
// 0084aa85  c3                   ret 
// copied from an identical function in another client (function ?SetContextRTL@CXTPDrawHelpers@@SAXPAUHDC__@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\Common\XTPDrawHelpers.cpp