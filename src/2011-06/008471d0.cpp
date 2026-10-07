// roc 2011-06 008471d0  unit: CXTTreeBase  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008471d0
//
// 008471d0  56                   push esi
// 008471d1  57                   push edi
// 008471d2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008471d6  817f08f7fdffff       cmp dword ptr [edi + 8], 0xfffffdf7
// 008471dd  8bf1                 mov esi, ecx
// 008471df  752d                 jne 0x84720e
// 008471e1  8b4634               mov eax, dword ptr [esi + 0x34]
// 008471e4  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008471e7  6a00                 push 0
// 008471e9  6a00                 push 0
// 008471eb  6819110000           push 0x1119
// 008471f0  51                   push ecx
// 008471f1  ff15c019a400         call dword ptr [0xa419c0]
// 008471f7  85c0                 test eax, eax
// 008471f9  7413                 je 0x84720e
// 008471fb  6a13                 push 0x13
// 008471fd  6a00                 push 0
// 008471ff  6a00                 push 0
// 00847201  6a00                 push 0
// 00847203  6a00                 push 0
// 00847205  6a00                 push 0
// 00847207  50                   push eax
// 00847208  ff15d819a400         call dword ptr [0xa419d8]
// 0084720e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00847212  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00847216  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847219  52                   push edx
// 0084721a  57                   push edi
// 0084721b  50                   push eax
// 0084721c  e8992ffcff           call 0x80a1ba
// 00847221  5f                   pop edi
// 00847222  5e                   pop esi
// 00847223  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnNotify@CXTPTreeBase@@MAEHIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
