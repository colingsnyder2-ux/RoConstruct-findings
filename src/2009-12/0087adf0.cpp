// roc 2009-12 0087adf0  unit: CXTPControlGallery  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087adf0
//
// 0087adf0  83ec18               sub esp, 0x18
// 0087adf3  53                   push ebx
// 0087adf4  56                   push esi
// 0087adf5  8bd9                 mov ebx, ecx
// 0087adf7  e8e4d3ffff           call 0x8781e0
// 0087adfc  85c0                 test eax, eax
// 0087adfe  0f849f010000         je 0x87afa3
// 0087ae04  8b742424             mov esi, dword ptr [esp + 0x24]
// 0087ae08  83feff               cmp esi, -1
// 0087ae0b  0f8492010000         je 0x87afa3
// 0087ae11  8bcb                 mov ecx, ebx
// 0087ae13  e8c8d3ffff           call 0x8781e0
// 0087ae18  3bf0                 cmp esi, eax
// 0087ae1a  0f8d83010000         jge 0x87afa3
// 0087ae20  8d442410             lea eax, [esp + 0x10]
// 0087ae24  50                   push eax
// 0087ae25  8bcb                 mov ecx, ebx
// 0087ae27  e824d6ffff           call 0x878450
// 0087ae2c  8bcb                 mov ecx, ebx
// 0087ae2e  e81dc5ffff           call 0x877350
// 0087ae33  8b5024               mov edx, dword ptr [eax + 0x24]
// 0087ae36  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0087ae39  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087ae3d  2b442410             sub eax, dword ptr [esp + 0x10]
// 0087ae41  8954240c             mov dword ptr [esp + 0xc], edx
// 0087ae45  8d1409               lea edx, [ecx + ecx]
// 0087ae48  3bd0                 cmp edx, eax
// 0087ae4a  0f8f49010000         jg 0x87af99
// 0087ae50  85c9                 test ecx, ecx
// 0087ae52  0f8441010000         je 0x87af99
// 0087ae58  837c242800           cmp dword ptr [esp + 0x28], 0
// 0087ae5d  55                   push ebp
// 0087ae5e  57                   push edi
// 0087ae5f  0f8d8d000000         jge 0x87aef2
// 0087ae65  8dab4c020000         lea ebp, [ebx + 0x24c]
// 0087ae6b  56                   push esi
// 0087ae6c  8bcd                 mov ecx, ebp
// 0087ae6e  e89df3ffff           call 0x87a210
// 0087ae73  83781400             cmp dword ptr [eax + 0x14], 0
// 0087ae77  7523                 jne 0x87ae9c
// 0087ae79  8d7eff               lea edi, [esi - 1]
// 0087ae7c  85ff                 test edi, edi
// 0087ae7e  7c1c                 jl 0x87ae9c
// 0087ae80  57                   push edi
// 0087ae81  8bcd                 mov ecx, ebp
// 0087ae83  e888f3ffff           call 0x87a210
// 0087ae88  50                   push eax
// 0087ae89  ff1568cc9800         call dword ptr [0x98cc68]
// 0087ae8f  85c0                 test eax, eax
// 0087ae91  0f84f6000000         je 0x87af8d
// 0087ae97  83ef01               sub edi, 1
// 0087ae9a  79e4                 jns 0x87ae80
// 0087ae9c  46                   inc esi
// 0087ae9d  3bb354020000         cmp esi, dword ptr [ebx + 0x254]
// 0087aea3  7d3a                 jge 0x87aedf
// 0087aea5  8d3c76               lea edi, [esi + esi*2]
// 0087aea8  03ff                 add edi, edi
// 0087aeaa  03ff                 add edi, edi
// 0087aeac  03ff                 add edi, edi
// 0087aeae  8bff                 mov edi, edi
// 0087aeb0  85ff                 test edi, edi
// 0087aeb2  7c39                 jl 0x87aeed
// 0087aeb4  3b7508               cmp esi, dword ptr [ebp + 8]
// 0087aeb7  7d34                 jge 0x87aeed
// 0087aeb9  8b4504               mov eax, dword ptr [ebp + 4]
// 0087aebc  03c7                 add eax, edi
// 0087aebe  83781400             cmp dword ptr [eax + 0x14], 0
// 0087aec2  751b                 jne 0x87aedf
// 0087aec4  50                   push eax
// 0087aec5  ff1568cc9800         call dword ptr [0x98cc68]
// 0087aecb  85c0                 test eax, eax
// 0087aecd  7504                 jne 0x87aed3
// 0087aecf  8974242c             mov dword ptr [esp + 0x2c], esi
// 0087aed3  46                   inc esi
// 0087aed4  83c718               add edi, 0x18
// 0087aed7  3bb354020000         cmp esi, dword ptr [ebx + 0x254]
// 0087aedd  7cd1                 jl 0x87aeb0
// 0087aedf  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0087aee3  5f                   pop edi
// 0087aee4  5d                   pop ebp
// 0087aee5  5e                   pop esi
// 0087aee6  5b                   pop ebx
// 0087aee7  83c418               add esp, 0x18
// 0087aeea  c20800               ret 8
// 0087aeed  e81a8cf7ff           call 0x7f3b0c
// 0087aef2  8bcb                 mov ecx, ebx
// 0087aef4  8d7e01               lea edi, [esi + 1]
// 0087aef7  e8e4d2ffff           call 0x8781e0
// 0087aefc  3bf8                 cmp edi, eax
// 0087aefe  7d4d                 jge 0x87af4d
// 0087af00  8d2c7f               lea ebp, [edi + edi*2]
// 0087af03  03ed                 add ebp, ebp
// 0087af05  03ed                 add ebp, ebp
// 0087af07  03ed                 add ebp, ebp
// 0087af09  8da42400000000       lea esp, [esp]
// 0087af10  85ed                 test ebp, ebp
// 0087af12  7cd9                 jl 0x87aeed
// 0087af14  3bbb54020000         cmp edi, dword ptr [ebx + 0x254]
// 0087af1a  7dd1                 jge 0x87aeed
// 0087af1c  8bb350020000         mov esi, dword ptr [ebx + 0x250]
// 0087af22  03f5                 add esi, ebp
// 0087af24  56                   push esi
// 0087af25  ff1568cc9800         call dword ptr [0x98cc68]
// 0087af2b  85c0                 test eax, eax
// 0087af2d  7505                 jne 0x87af34
// 0087af2f  394614               cmp dword ptr [esi + 0x14], eax
// 0087af32  7459                 je 0x87af8d
// 0087af34  837e1400             cmp dword ptr [esi + 0x14], 0
// 0087af38  750f                 jne 0x87af49
// 0087af3a  8bcb                 mov ecx, ebx
// 0087af3c  47                   inc edi
// 0087af3d  83c518               add ebp, 0x18
// 0087af40  e89bd2ffff           call 0x8781e0
// 0087af45  3bf8                 cmp edi, eax
// 0087af47  7cc7                 jl 0x87af10
// 0087af49  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0087af4d  8bc6                 mov eax, esi
// 0087af4f  85f6                 test esi, esi
// 0087af51  7c2e                 jl 0x87af81
// 0087af53  8d0c76               lea ecx, [esi + esi*2]
// 0087af56  03c9                 add ecx, ecx
// 0087af58  03c9                 add ecx, ecx
// 0087af5a  03c9                 add ecx, ecx
// 0087af5c  85c0                 test eax, eax
// 0087af5e  7c8d                 jl 0x87aeed
// 0087af60  3b8354020000         cmp eax, dword ptr [ebx + 0x254]
// 0087af66  7d85                 jge 0x87aeed
// 0087af68  8b9350020000         mov edx, dword ptr [ebx + 0x250]
// 0087af6e  837c0a1400           cmp dword ptr [edx + ecx + 0x14], 0
// 0087af73  0f856affffff         jne 0x87aee3
// 0087af79  48                   dec eax
// 0087af7a  83e918               sub ecx, 0x18
// 0087af7d  85c0                 test eax, eax
// 0087af7f  7ddf                 jge 0x87af60
// 0087af81  5f                   pop edi
// 0087af82  5d                   pop ebp
// 0087af83  8bc6                 mov eax, esi
// 0087af85  5e                   pop esi
// 0087af86  5b                   pop ebx
// 0087af87  83c418               add esp, 0x18
// 0087af8a  c20800               ret 8
// 0087af8d  8bc7                 mov eax, edi
// 0087af8f  5f                   pop edi
// 0087af90  5d                   pop ebp
// 0087af91  5e                   pop esi
// 0087af92  5b                   pop ebx
// 0087af93  83c418               add esp, 0x18
// 0087af96  c20800               ret 8
// 0087af99  8bc6                 mov eax, esi
// 0087af9b  5e                   pop esi
// 0087af9c  5b                   pop ebx
// 0087af9d  83c418               add esp, 0x18
// 0087afa0  c20800               ret 8
// 0087afa3  5e                   pop esi
// 0087afa4  83c8ff               or eax, 0xffffffff
// 0087afa7  5b                   pop ebx
// 0087afa8  83c418               add esp, 0x18
// 0087afab  c20800               ret 8
// copied from an identical function in another client (function ?GetNextInRow@CXTPControlGallery@@QBEJJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp