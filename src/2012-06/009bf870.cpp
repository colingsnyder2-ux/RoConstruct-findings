// roc 2012-06 009bf870  unit: CRobloxTreeCtrl  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf870
//
// 009bf870  53                   push ebx
// 009bf871  8b1d043cb200         mov ebx, dword ptr [0xb23c04]
// 009bf877  56                   push esi
// 009bf878  57                   push edi
// 009bf879  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009bf87d  57                   push edi
// 009bf87e  8bf1                 mov esi, ecx
// 009bf880  8b4634               mov eax, dword ptr [esi + 0x34]
// 009bf883  8b4020               mov eax, dword ptr [eax + 0x20]
// 009bf886  6a02                 push 2
// 009bf888  680a110000           push 0x110a
// 009bf88d  50                   push eax
// 009bf88e  ffd3                 call ebx
// 009bf890  85c0                 test eax, eax
// 009bf892  7517                 jne 0x9bf8ab
// 009bf894  8b7634               mov esi, dword ptr [esi + 0x34]
// 009bf897  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009bf89a  57                   push edi
// 009bf89b  6a03                 push 3
// 009bf89d  680a110000           push 0x110a
// 009bf8a2  51                   push ecx
// 009bf8a3  ffd3                 call ebx
// 009bf8a5  5f                   pop edi
// 009bf8a6  5e                   pop esi
// 009bf8a7  5b                   pop ebx
// 009bf8a8  c20400               ret 4
// 009bf8ab  8b16                 mov edx, dword ptr [esi]
// 009bf8ad  50                   push eax
// 009bf8ae  8b4210               mov eax, dword ptr [edx + 0x10]
// 009bf8b1  8bce                 mov ecx, esi
// 009bf8b3  ffd0                 call eax
// 009bf8b5  5f                   pop edi
// 009bf8b6  5e                   pop esi
// 009bf8b7  5b                   pop ebx
// 009bf8b8  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetPrevItem@CXTPTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
