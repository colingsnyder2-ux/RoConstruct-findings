// roc 2011-06 00848df0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848df0
//
// 00848df0  51                   push ecx
// 00848df1  56                   push esi
// 00848df2  8bf1                 mov esi, ecx
// 00848df4  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00848df7  e81c381800           call 0x9cc618
// 00848dfc  a900040000           test eax, 0x400
// 00848e01  740d                 je 0x848e10
// 00848e03  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00848e06  e82318fcff           call 0x80a62e
// 00848e0b  5e                   pop esi
// 00848e0c  59                   pop ecx
// 00848e0d  c20c00               ret 0xc
// 00848e10  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00848e14  8b542410             mov edx, dword ptr [esp + 0x10]
// 00848e18  57                   push edi
// 00848e19  8d442408             lea eax, [esp + 8]
// 00848e1d  50                   push eax
// 00848e1e  51                   push ecx
// 00848e1f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00848e22  52                   push edx
// 00848e23  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00848e2b  e8e21bfcff           call 0x80aa12
// 00848e30  8bf8                 mov edi, eax
// 00848e32  85ff                 test edi, edi
// 00848e34  7437                 je 0x848e6d
// 00848e36  f644240846           test byte ptr [esp + 8], 0x46
// 00848e3b  7430                 je 0x848e6d
// 00848e3d  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00848e40  6a02                 push 2
// 00848e42  57                   push edi
// 00848e43  e8103a1800           call 0x9cc858
// 00848e48  a802                 test al, 2
// 00848e4a  752c                 jne 0x848e78
// 00848e4c  6a00                 push 0
// 00848e4e  6a00                 push 0
// 00848e50  8bce                 mov ecx, esi
// 00848e52  e8c9f1ffff           call 0x848020
// 00848e57  57                   push edi
// 00848e58  8bce                 mov ecx, esi
// 00848e5a  e881f0ffff           call 0x847ee0
// 00848e5f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00848e62  e8c717fcff           call 0x80a62e
// 00848e67  5f                   pop edi
// 00848e68  5e                   pop esi
// 00848e69  59                   pop ecx
// 00848e6a  c20c00               ret 0xc
// 00848e6d  6a00                 push 0
// 00848e6f  6a00                 push 0
// 00848e71  8bce                 mov ecx, esi
// 00848e73  e8a8f1ffff           call 0x848020
// 00848e78  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00848e7b  e8ae17fcff           call 0x80a62e
// 00848e80  5f                   pop edi
// 00848e81  5e                   pop esi
// 00848e82  59                   pop ecx
// 00848e83  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnRButtonDown@CXTPTreeBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
