// roc 2008-06 00716200  unit: CXTPPropertyGridView  size: 445 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00716200
//
// 00716200  83ec18               sub esp, 0x18
// 00716203  56                   push esi
// 00716204  8bf1                 mov esi, ecx
// 00716206  57                   push edi
// 00716207  8dbee8000000         lea edi, [esi + 0xe8]
// 0071620d  85ff                 test edi, edi
// 0071620f  0f84f6000000         je 0x71630b
// 00716215  837f2000             cmp dword ptr [edi + 0x20], 0
// 00716219  0f84ec000000         je 0x71630b
// 0071621f  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 00716225  50                   push eax
// 00716226  ff153c2d8000         call dword ptr [0x802d3c]
// 0071622c  85c0                 test eax, eax
// 0071622e  0f84d7000000         je 0x71630b
// 00716234  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 0071623a  8d4c2410             lea ecx, [esp + 0x10]
// 0071623e  51                   push ecx
// 0071623f  52                   push edx
// 00716240  ff15342e8000         call dword ptr [0x802e34]
// 00716246  8d442408             lea eax, [esp + 8]
// 0071624a  50                   push eax
// 0071624b  ff159c2d8000         call dword ptr [0x802d9c]
// 00716251  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00716255  8b542408             mov edx, dword ptr [esp + 8]
// 00716259  51                   push ecx
// 0071625a  52                   push edx
// 0071625b  8d86b8000000         lea eax, [esi + 0xb8]
// 00716261  50                   push eax
// 00716262  ff152c2d8000         call dword ptr [0x802d2c]
// 00716268  85c0                 test eax, eax
// 0071626a  7409                 je 0x716275
// 0071626c  83be5801000000       cmp dword ptr [esi + 0x158], 0
// 00716273  741e                 je 0x716293
// 00716275  6816b78000           push 0x80b716
// 0071627a  8d8ed8000000         lea ecx, [esi + 0xd8]
// 00716280  ff15b83e8000         call dword ptr [0x803eb8]
// 00716286  6a00                 push 0
// 00716288  6a00                 push 0
// 0071628a  6a00                 push 0
// 0071628c  8bcf                 mov ecx, edi
// 0071628e  e88de2ffff           call 0x714520
// 00716293  8b442424             mov eax, dword ptr [esp + 0x24]
// 00716297  3d05020000           cmp eax, 0x205
// 0071629c  7735                 ja 0x7162d3
// 0071629e  3d04020000           cmp eax, 0x204
// 007162a3  7359                 jae 0x7162fe
// 007162a5  3d04010000           cmp eax, 0x104
// 007162aa  7711                 ja 0x7162bd
// 007162ac  7450                 je 0x7162fe
// 007162ae  3d00010000           cmp eax, 0x100
// 007162b3  7449                 je 0x7162fe
// 007162b5  5f                   pop edi
// 007162b6  5e                   pop esi
// 007162b7  83c418               add esp, 0x18
// 007162ba  c20400               ret 4
// 007162bd  3d01020000           cmp eax, 0x201
// 007162c2  7247                 jb 0x71630b
// 007162c4  3d02020000           cmp eax, 0x202
// 007162c9  7633                 jbe 0x7162fe
// 007162cb  5f                   pop edi
// 007162cc  5e                   pop esi
// 007162cd  83c418               add esp, 0x18
// 007162d0  c20400               ret 4
// 007162d3  05f9fdffff           add eax, 0xfffffdf9
// 007162d8  3d9c000000           cmp eax, 0x9c
// 007162dd  772c                 ja 0x71630b
// 007162df  0fb68820637100       movzx ecx, byte ptr [eax + 0x716320]
// 007162e6  ff248d14637100       jmp dword ptr [ecx*4 + 0x716314]
// 007162ed  6816b78000           push 0x80b716
// 007162f2  8d8ed8000000         lea ecx, [esi + 0xd8]
// 007162f8  ff15b83e8000         call dword ptr [0x803eb8]
// 007162fe  6a00                 push 0
// 00716300  6a00                 push 0
// 00716302  6a00                 push 0
// 00716304  8bcf                 mov ecx, edi
// 00716306  e815e2ffff           call 0x714520
// 0071630b  5f                   pop edi
// 0071630c  5e                   pop esi
// 0071630d  83c418               add esp, 0x18
// 00716310  c20400               ret 4
// 00716313  90                   nop 
// library xtp-11.2.2-lib-strlen/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?RelayToolTipEvent@CXTPPropertyGridView@@AAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/PropertyGrid/XTPPropertyGridView.cpp
