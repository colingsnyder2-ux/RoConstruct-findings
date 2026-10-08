// from server: 100% by auto
// roc 2008-06 006dc290  unit: CRobloxTreeCtrl  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dc290
//
// 006dc290  53                   push ebx
// 006dc291  8b1d142e8000         mov ebx, dword ptr [0x802e14]
// 006dc297  56                   push esi
// 006dc298  57                   push edi
// 006dc299  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006dc29d  57                   push edi
// 006dc29e  8bf1                 mov esi, ecx
// 006dc2a0  8b4634               mov eax, dword ptr [esi + 0x34]
// 006dc2a3  8b4020               mov eax, dword ptr [eax + 0x20]
// 006dc2a6  6a02                 push 2
// 006dc2a8  680a110000           push 0x110a
// 006dc2ad  50                   push eax
// 006dc2ae  ffd3                 call ebx
// 006dc2b0  85c0                 test eax, eax
// 006dc2b2  7517                 jne 0x6dc2cb
// 006dc2b4  8b7634               mov esi, dword ptr [esi + 0x34]
// 006dc2b7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006dc2ba  57                   push edi
// 006dc2bb  6a03                 push 3
// 006dc2bd  680a110000           push 0x110a
// 006dc2c2  51                   push ecx
// 006dc2c3  ffd3                 call ebx
// 006dc2c5  5f                   pop edi
// 006dc2c6  5e                   pop esi
// 006dc2c7  5b                   pop ebx
// 006dc2c8  c20400               ret 4
// 006dc2cb  8b16                 mov edx, dword ptr [esi]
// 006dc2cd  50                   push eax
// 006dc2ce  8b4210               mov eax, dword ptr [edx + 0x10]
// 006dc2d1  8bce                 mov ecx, esi
// 006dc2d3  ffd0                 call eax
// 006dc2d5  5f                   pop edi
// 006dc2d6  5e                   pop esi
// 006dc2d7  5b                   pop ebx
// 006dc2d8  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetPrevItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
