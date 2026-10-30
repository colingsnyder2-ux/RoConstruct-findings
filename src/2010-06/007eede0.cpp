// roc 2010-06 007eede0  unit: CXTPToolBar::CControlButtonExpand  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007eede0
//
// 007eede0  53                   push ebx
// 007eede1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007eede5  56                   push esi
// 007eede6  53                   push ebx
// 007eede7  8bf1                 mov esi, ecx
// 007eede9  e832d5fbff           call 0x7ac320
// 007eedee  85c0                 test eax, eax
// 007eedf0  7505                 jne 0x7eedf7
// 007eedf2  5e                   pop esi
// 007eedf3  5b                   pop ebx
// 007eedf4  c20400               ret 4
// 007eedf7  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 007eedfe  0f84e2000000         je 0x7eeee6
// 007eee04  57                   push edi
// 007eee05  bf02000000           mov edi, 2
// 007eee0a  39befc000000         cmp dword ptr [esi + 0xfc], edi
// 007eee10  7459                 je 0x7eee6b
// 007eee12  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007eee18  39b8f8000000         cmp dword ptr [eax + 0xf8], edi
// 007eee1e  744b                 je 0x7eee6b
// 007eee20  8bce                 mov ecx, esi
// 007eee22  e8a948c6ff           call 0x4536d0
// 007eee27  85c0                 test eax, eax
// 007eee29  0f84b6000000         je 0x7eeee5
// 007eee2f  53                   push ebx
// 007eee30  e83badfbff           call 0x7a9b70
// 007eee35  83c404               add esp, 4
// 007eee38  85c0                 test eax, eax
// 007eee3a  0f84a5000000         je 0x7eeee5
// 007eee40  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007eee46  39b9e0000000         cmp dword ptr [ecx + 0xe0], edi
// 007eee4c  0f8593000000         jne 0x7eeee5
// 007eee52  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 007eee58  6a00                 push 0
// 007eee5a  52                   push edx
// 007eee5b  e8b0b8fcff           call 0x7ba710
// 007eee60  5f                   pop edi
// 007eee61  5e                   pop esi
// 007eee62  b801000000           mov eax, 1
// 007eee67  5b                   pop ebx
// 007eee68  c20400               ret 4
// 007eee6b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007eee71  83f8ff               cmp eax, -1
// 007eee74  750f                 jne 0x7eee85
// 007eee76  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007eee7c  85c9                 test ecx, ecx
// 007eee7e  7405                 je 0x7eee85
// 007eee80  e80bb8fbff           call 0x7aa690
// 007eee85  ba05000000           mov edx, 5
// 007eee8a  85c0                 test eax, eax
// 007eee8c  7433                 je 0x7eeec1
// 007eee8e  85db                 test ebx, ebx
// 007eee90  7433                 je 0x7eeec5
// 007eee92  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007eee98  39b9e0000000         cmp dword ptr [ecx + 0xe0], edi
// 007eee9e  7521                 jne 0x7eeec1
// 007eeea0  399100010000         cmp dword ptr [ecx + 0x100], edx
// 007eeea6  7419                 je 0x7eeec1
// 007eeea8  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 007eeeae  6a00                 push 0
// 007eeeb0  50                   push eax
// 007eeeb1  e85ab8fcff           call 0x7ba710
// 007eeeb6  5f                   pop edi
// 007eeeb7  5e                   pop esi
// 007eeeb8  b801000000           mov eax, 1
// 007eeebd  5b                   pop ebx
// 007eeebe  c20400               ret 4
// 007eeec1  85db                 test ebx, ebx
// 007eeec3  7520                 jne 0x7eeee5
// 007eeec5  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 007eeecc  7417                 je 0x7eeee5
// 007eeece  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007eeed4  399100010000         cmp dword ptr [ecx + 0x100], edx
// 007eeeda  7409                 je 0x7eeee5
// 007eeedc  6a00                 push 0
// 007eeede  6aff                 push -1
// 007eeee0  e82bb8fcff           call 0x7ba710
// 007eeee5  5f                   pop edi
// 007eeee6  5e                   pop esi
// 007eeee7  b801000000           mov eax, 1
// 007eeeec  5b                   pop ebx
// 007eeeed  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnSetSelected@CXTPControlPopup@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
