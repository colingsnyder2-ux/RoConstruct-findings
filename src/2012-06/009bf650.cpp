// from server: 100% by auto
// roc 2012-06 009bf650  unit: CXTTreeBase  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf650
//
// 009bf650  56                   push esi
// 009bf651  57                   push edi
// 009bf652  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009bf656  817f08f7fdffff       cmp dword ptr [edi + 8], 0xfffffdf7
// 009bf65d  8bf1                 mov esi, ecx
// 009bf65f  752d                 jne 0x9bf68e
// 009bf661  8b4634               mov eax, dword ptr [esi + 0x34]
// 009bf664  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009bf667  6a00                 push 0
// 009bf669  6a00                 push 0
// 009bf66b  6819110000           push 0x1119
// 009bf670  51                   push ecx
// 009bf671  ff15043cb200         call dword ptr [0xb23c04]
// 009bf677  85c0                 test eax, eax
// 009bf679  7413                 je 0x9bf68e
// 009bf67b  6a13                 push 0x13
// 009bf67d  6a00                 push 0
// 009bf67f  6a00                 push 0
// 009bf681  6a00                 push 0
// 009bf683  6a00                 push 0
// 009bf685  6a00                 push 0
// 009bf687  50                   push eax
// 009bf688  ff15443bb200         call dword ptr [0xb23b44]
// 009bf68e  8b542414             mov edx, dword ptr [esp + 0x14]
// 009bf692  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009bf696  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009bf699  52                   push edx
// 009bf69a  57                   push edi
// 009bf69b  50                   push eax
// 009bf69c  e8d52bfcff           call 0x982276
// 009bf6a1  5f                   pop edi
// 009bf6a2  5e                   pop esi
// 009bf6a3  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnNotify@CXTPTreeBase@@MAEHIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
