// from server: 100% by auto
// roc 2011-06 008473f0  unit: CRobloxTreeCtrl  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008473f0
//
// 008473f0  53                   push ebx
// 008473f1  8b1dc019a400         mov ebx, dword ptr [0xa419c0]
// 008473f7  56                   push esi
// 008473f8  57                   push edi
// 008473f9  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008473fd  57                   push edi
// 008473fe  8bf1                 mov esi, ecx
// 00847400  8b4634               mov eax, dword ptr [esi + 0x34]
// 00847403  8b4020               mov eax, dword ptr [eax + 0x20]
// 00847406  6a02                 push 2
// 00847408  680a110000           push 0x110a
// 0084740d  50                   push eax
// 0084740e  ffd3                 call ebx
// 00847410  85c0                 test eax, eax
// 00847412  7517                 jne 0x84742b
// 00847414  8b7634               mov esi, dword ptr [esi + 0x34]
// 00847417  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0084741a  57                   push edi
// 0084741b  6a03                 push 3
// 0084741d  680a110000           push 0x110a
// 00847422  51                   push ecx
// 00847423  ffd3                 call ebx
// 00847425  5f                   pop edi
// 00847426  5e                   pop esi
// 00847427  5b                   pop ebx
// 00847428  c20400               ret 4
// 0084742b  8b16                 mov edx, dword ptr [esi]
// 0084742d  50                   push eax
// 0084742e  8b4210               mov eax, dword ptr [edx + 0x10]
// 00847431  8bce                 mov ecx, esi
// 00847433  ffd0                 call eax
// 00847435  5f                   pop edi
// 00847436  5e                   pop esi
// 00847437  5b                   pop ebx
// 00847438  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetPrevItem@CXTPTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
