// roc 2008-06 006dcd30  unit: CRobloxTreeCtrl  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dcd30
//
// 006dcd30  53                   push ebx
// 006dcd31  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006dcd35  55                   push ebp
// 006dcd36  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006dcd3a  56                   push esi
// 006dcd3b  57                   push edi
// 006dcd3c  8bc3                 mov eax, ebx
// 006dcd3e  83e0fe               and eax, 0xfffffffe
// 006dcd41  8bf1                 mov esi, ecx
// 006dcd43  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dcd46  50                   push eax
// 006dcd47  55                   push ebp
// 006dcd48  e8cff50d00           call 0x7bc31c
// 006dcd4d  8bf8                 mov edi, eax
// 006dcd4f  f6c301               test bl, 1
// 006dcd52  741f                 je 0x6dcd73
// 006dcd54  8b7634               mov esi, dword ptr [esi + 0x34]
// 006dcd57  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006dcd5a  6a00                 push 0
// 006dcd5c  6a09                 push 9
// 006dcd5e  680a110000           push 0x110a
// 006dcd63  51                   push ecx
// 006dcd64  ff15142e8000         call dword ptr [0x802e14]
// 006dcd6a  3bc5                 cmp eax, ebp
// 006dcd6c  7503                 jne 0x6dcd71
// 006dcd6e  83cf01               or edi, 1
// 006dcd71  8bc7                 mov eax, edi
// 006dcd73  5f                   pop edi
// 006dcd74  5e                   pop esi
// 006dcd75  5d                   pop ebp
// 006dcd76  5b                   pop ebx
// 006dcd77  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetItemState@CXTTreeBase@@QBEIPAU_TREEITEM@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
