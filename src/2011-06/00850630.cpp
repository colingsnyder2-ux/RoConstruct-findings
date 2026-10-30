// roc 2011-06 00850630  unit: CXTPToolBar::CControlButtonExpand  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00850630
//
// 00850630  53                   push ebx
// 00850631  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00850635  56                   push esi
// 00850636  53                   push ebx
// 00850637  8bf1                 mov esi, ecx
// 00850639  e8c2e1fbff           call 0x80e800
// 0085063e  85c0                 test eax, eax
// 00850640  7505                 jne 0x850647
// 00850642  5e                   pop esi
// 00850643  5b                   pop ebx
// 00850644  c20400               ret 4
// 00850647  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 0085064e  0f84e2000000         je 0x850736
// 00850654  57                   push edi
// 00850655  bf02000000           mov edi, 2
// 0085065a  39befc000000         cmp dword ptr [esi + 0xfc], edi
// 00850660  7459                 je 0x8506bb
// 00850662  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00850668  39b8f8000000         cmp dword ptr [eax + 0xf8], edi
// 0085066e  744b                 je 0x8506bb
// 00850670  8bce                 mov ecx, esi
// 00850672  e819c8c1ff           call 0x46ce90
// 00850677  85c0                 test eax, eax
// 00850679  0f84b6000000         je 0x850735
// 0085067f  53                   push ebx
// 00850680  e8dbbbfbff           call 0x80c260
// 00850685  83c404               add esp, 4
// 00850688  85c0                 test eax, eax
// 0085068a  0f84a5000000         je 0x850735
// 00850690  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00850696  39b9e0000000         cmp dword ptr [ecx + 0xe0], edi
// 0085069c  0f8593000000         jne 0x850735
// 008506a2  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 008506a8  6a00                 push 0
// 008506aa  52                   push edx
// 008506ab  e8d0c4fcff           call 0x81cb80
// 008506b0  5f                   pop edi
// 008506b1  5e                   pop esi
// 008506b2  b801000000           mov eax, 1
// 008506b7  5b                   pop ebx
// 008506b8  c20400               ret 4
// 008506bb  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008506c1  83f8ff               cmp eax, -1
// 008506c4  750f                 jne 0x8506d5
// 008506c6  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 008506cc  85c9                 test ecx, ecx
// 008506ce  7405                 je 0x8506d5
// 008506d0  e88bc5fbff           call 0x80cc60
// 008506d5  ba05000000           mov edx, 5
// 008506da  85c0                 test eax, eax
// 008506dc  7433                 je 0x850711
// 008506de  85db                 test ebx, ebx
// 008506e0  7433                 je 0x850715
// 008506e2  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008506e8  39b9e0000000         cmp dword ptr [ecx + 0xe0], edi
// 008506ee  7521                 jne 0x850711
// 008506f0  399100010000         cmp dword ptr [ecx + 0x100], edx
// 008506f6  7419                 je 0x850711
// 008506f8  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 008506fe  6a00                 push 0
// 00850700  50                   push eax
// 00850701  e87ac4fcff           call 0x81cb80
// 00850706  5f                   pop edi
// 00850707  5e                   pop esi
// 00850708  b801000000           mov eax, 1
// 0085070d  5b                   pop ebx
// 0085070e  c20400               ret 4
// 00850711  85db                 test ebx, ebx
// 00850713  7520                 jne 0x850735
// 00850715  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 0085071c  7417                 je 0x850735
// 0085071e  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00850724  399100010000         cmp dword ptr [ecx + 0x100], edx
// 0085072a  7409                 je 0x850735
// 0085072c  6a00                 push 0
// 0085072e  6aff                 push -1
// 00850730  e84bc4fcff           call 0x81cb80
// 00850735  5f                   pop edi
// 00850736  5e                   pop esi
// 00850737  b801000000           mov eax, 1
// 0085073c  5b                   pop ebx
// 0085073d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnSetSelected@CXTPControlPopup@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
