// roc 2012-06 009c8b00  unit: CXTPToolBar::CControlButtonExpand  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c8b00
//
// 009c8b00  53                   push ebx
// 009c8b01  8b5c2408             mov ebx, dword ptr [esp + 8]
// 009c8b05  56                   push esi
// 009c8b06  53                   push ebx
// 009c8b07  8bf1                 mov esi, ecx
// 009c8b09  e802e0fbff           call 0x986b10
// 009c8b0e  85c0                 test eax, eax
// 009c8b10  7505                 jne 0x9c8b17
// 009c8b12  5e                   pop esi
// 009c8b13  5b                   pop ebx
// 009c8b14  c20400               ret 4
// 009c8b17  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 009c8b1e  0f84e2000000         je 0x9c8c06
// 009c8b24  57                   push edi
// 009c8b25  bf02000000           mov edi, 2
// 009c8b2a  39befc000000         cmp dword ptr [esi + 0xfc], edi
// 009c8b30  7459                 je 0x9c8b8b
// 009c8b32  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 009c8b38  39b8f8000000         cmp dword ptr [eax + 0xf8], edi
// 009c8b3e  744b                 je 0x9c8b8b
// 009c8b40  8bce                 mov ecx, esi
// 009c8b42  e879f2aaff           call 0x477dc0
// 009c8b47  85c0                 test eax, eax
// 009c8b49  0f84b6000000         je 0x9c8c05
// 009c8b4f  53                   push ebx
// 009c8b50  e89bb9fbff           call 0x9844f0
// 009c8b55  83c404               add esp, 4
// 009c8b58  85c0                 test eax, eax
// 009c8b5a  0f84a5000000         je 0x9c8c05
// 009c8b60  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 009c8b66  39b9e0000000         cmp dword ptr [ecx + 0xe0], edi
// 009c8b6c  0f8593000000         jne 0x9c8c05
// 009c8b72  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 009c8b78  6a00                 push 0
// 009c8b7a  52                   push edx
// 009c8b7b  e8d0c2fcff           call 0x994e50
// 009c8b80  5f                   pop edi
// 009c8b81  5e                   pop esi
// 009c8b82  b801000000           mov eax, 1
// 009c8b87  5b                   pop ebx
// 009c8b88  c20400               ret 4
// 009c8b8b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 009c8b91  83f8ff               cmp eax, -1
// 009c8b94  750f                 jne 0x9c8ba5
// 009c8b96  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 009c8b9c  85c9                 test ecx, ecx
// 009c8b9e  7405                 je 0x9c8ba5
// 009c8ba0  e87bc3fbff           call 0x984f20
// 009c8ba5  ba05000000           mov edx, 5
// 009c8baa  85c0                 test eax, eax
// 009c8bac  7433                 je 0x9c8be1
// 009c8bae  85db                 test ebx, ebx
// 009c8bb0  7433                 je 0x9c8be5
// 009c8bb2  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 009c8bb8  39b9e0000000         cmp dword ptr [ecx + 0xe0], edi
// 009c8bbe  7521                 jne 0x9c8be1
// 009c8bc0  399100010000         cmp dword ptr [ecx + 0x100], edx
// 009c8bc6  7419                 je 0x9c8be1
// 009c8bc8  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 009c8bce  6a00                 push 0
// 009c8bd0  50                   push eax
// 009c8bd1  e87ac2fcff           call 0x994e50
// 009c8bd6  5f                   pop edi
// 009c8bd7  5e                   pop esi
// 009c8bd8  b801000000           mov eax, 1
// 009c8bdd  5b                   pop ebx
// 009c8bde  c20400               ret 4
// 009c8be1  85db                 test ebx, ebx
// 009c8be3  7520                 jne 0x9c8c05
// 009c8be5  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 009c8bec  7417                 je 0x9c8c05
// 009c8bee  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 009c8bf4  399100010000         cmp dword ptr [ecx + 0x100], edx
// 009c8bfa  7409                 je 0x9c8c05
// 009c8bfc  6a00                 push 0
// 009c8bfe  6aff                 push -1
// 009c8c00  e84bc2fcff           call 0x994e50
// 009c8c05  5f                   pop edi
// 009c8c06  5e                   pop esi
// 009c8c07  b801000000           mov eax, 1
// 009c8c0c  5b                   pop ebx
// 009c8c0d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnSetSelected@CXTPControlPopup@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
