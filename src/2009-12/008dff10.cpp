// roc 2009-12 008dff10  unit: CXTPRichRender::XTextHost  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dff10
//
// 008dff10  51                   push ecx
// 008dff11  56                   push esi
// 008dff12  8bf1                 mov esi, ecx
// 008dff14  8d4c2404             lea ecx, [esp + 4]
// 008dff18  ff1574de9800         call dword ptr [0x98de74]
// 008dff1e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008dff22  8d442404             lea eax, [esp + 4]
// 008dff26  50                   push eax
// 008dff27  68f0fe8d00           push 0x8dfef0
// 008dff2c  681cbea000           push 0xa0be1c
// 008dff31  51                   push ecx
// 008dff32  ff1538b39800         call dword ptr [0x98b338]
// 008dff38  8d4c2404             lea ecx, [esp + 4]
// 008dff3c  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008dff42  8d4c2404             lea ecx, [esp + 4]
// 008dff46  84c0                 test al, al
// 008dff48  740d                 je 0x8dff57
// 008dff4a  ff15c0de9800         call dword ptr [0x98dec0]
// 008dff50  33c0                 xor eax, eax
// 008dff52  5e                   pop esi
// 008dff53  59                   pop ecx
// 008dff54  c20400               ret 4
// 008dff57  681cbea000           push 0xa0be1c
// 008dff5c  ff1580de9800         call dword ptr [0x98de80]
// 008dff62  8b5604               mov edx, dword ptr [esi + 4]
// 008dff65  50                   push eax
// 008dff66  52                   push edx
// 008dff67  ff15ecb19800         call dword ptr [0x98b1ec]
// 008dff6d  8d4c2404             lea ecx, [esp + 4]
// 008dff71  8bf0                 mov esi, eax
// 008dff73  ff15c0de9800         call dword ptr [0x98dec0]
// 008dff79  8bc6                 mov eax, esi
// 008dff7b  5e                   pop esi
// 008dff7c  59                   pop ecx
// 008dff7d  c20400               ret 4
// copied from an identical function in another client (function ?FindResourceIniFile@CXTPOffice2007Images@@AAEPAUHRSRC__@@PAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPOffice2007Image.cpp