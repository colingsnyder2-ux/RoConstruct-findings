// roc 2007-08 004d97e0  unit: RBX::View::MegaTextureProxy  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d97e0
//
// 004d97e0  53                   push ebx
// 004d97e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004d97e5  55                   push ebp
// 004d97e6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004d97ea  56                   push esi
// 004d97eb  8bf1                 mov esi, ecx
// 004d97ed  8b06                 mov eax, dword ptr [esi]
// 004d97ef  57                   push edi
// 004d97f0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004d97f4  3bf8                 cmp edi, eax
// 004d97f6  720e                 jb 0x4d9806
// 004d97f8  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d97fb  8d1488               lea edx, [eax + ecx*4]
// 004d97fe  3bfa                 cmp edi, edx
// 004d9800  0f82d8000000         jb 0x4d98de
// 004d9806  3bd8                 cmp ebx, eax
// 004d9808  720e                 jb 0x4d9818
// 004d980a  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d980d  8d1488               lea edx, [eax + ecx*4]
// 004d9810  3bda                 cmp ebx, edx
// 004d9812  0f82c6000000         jb 0x4d98de
// 004d9818  3be8                 cmp ebp, eax
// 004d981a  720e                 jb 0x4d982a
// 004d981c  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d981f  8d1488               lea edx, [eax + ecx*4]
// 004d9822  3bea                 cmp ebp, edx
// 004d9824  0f82b4000000         jb 0x4d98de
// 004d982a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d982e  3bc8                 cmp ecx, eax
// 004d9830  720e                 jb 0x4d9840
// 004d9832  8b5604               mov edx, dword ptr [esi + 4]
// 004d9835  8d1490               lea edx, [eax + edx*4]
// 004d9838  3bca                 cmp ecx, edx
// 004d983a  0f82a2000000         jb 0x4d98e2
// 004d9840  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d9843  8d5103               lea edx, [ecx + 3]
// 004d9846  3b5608               cmp edx, dword ptr [esi + 8]
// 004d9849  7d4e                 jge 0x4d9899
// 004d984b  8d0488               lea eax, [eax + ecx*4]
// 004d984e  85c0                 test eax, eax
// 004d9850  7404                 je 0x4d9856
// 004d9852  8b0f                 mov ecx, dword ptr [edi]
// 004d9854  8908                 mov dword ptr [eax], ecx
// 004d9856  8b5604               mov edx, dword ptr [esi + 4]
// 004d9859  8b06                 mov eax, dword ptr [esi]
// 004d985b  8d449004             lea eax, [eax + edx*4 + 4]
// 004d985f  85c0                 test eax, eax
// 004d9861  7404                 je 0x4d9867
// 004d9863  8b0b                 mov ecx, dword ptr [ebx]
// 004d9865  8908                 mov dword ptr [eax], ecx
// 004d9867  8b5604               mov edx, dword ptr [esi + 4]
// 004d986a  8b06                 mov eax, dword ptr [esi]
// 004d986c  8d449008             lea eax, [eax + edx*4 + 8]
// 004d9870  85c0                 test eax, eax
// 004d9872  7405                 je 0x4d9879
// 004d9874  8b4d00               mov ecx, dword ptr [ebp]
// 004d9877  8908                 mov dword ptr [eax], ecx
// 004d9879  8b5604               mov edx, dword ptr [esi + 4]
// 004d987c  8b06                 mov eax, dword ptr [esi]
// 004d987e  8d44900c             lea eax, [eax + edx*4 + 0xc]
// 004d9882  85c0                 test eax, eax
// 004d9884  7408                 je 0x4d988e
// 004d9886  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d988a  8b11                 mov edx, dword ptr [ecx]
// 004d988c  8910                 mov dword ptr [eax], edx
// 004d988e  83460404             add dword ptr [esi + 4], 4
// 004d9892  5f                   pop edi
// 004d9893  5e                   pop esi
// 004d9894  5d                   pop ebp
// 004d9895  5b                   pop ebx
// 004d9896  c21000               ret 0x10
// 004d9899  83c104               add ecx, 4
// 004d989c  6a00                 push 0
// 004d989e  51                   push ecx
// 004d989f  8bce                 mov ecx, esi
// 004d98a1  e81a37faff           call 0x47cfc0
// 004d98a6  8b4604               mov eax, dword ptr [esi + 4]
// 004d98a9  8b0e                 mov ecx, dword ptr [esi]
// 004d98ab  8b17                 mov edx, dword ptr [edi]
// 004d98ad  895481f0             mov dword ptr [ecx + eax*4 - 0x10], edx
// 004d98b1  8b4604               mov eax, dword ptr [esi + 4]
// 004d98b4  8b0e                 mov ecx, dword ptr [esi]
// 004d98b6  8b13                 mov edx, dword ptr [ebx]
// 004d98b8  895481f4             mov dword ptr [ecx + eax*4 - 0xc], edx
// 004d98bc  8b4604               mov eax, dword ptr [esi + 4]
// 004d98bf  8b0e                 mov ecx, dword ptr [esi]
// 004d98c1  8b5500               mov edx, dword ptr [ebp]
// 004d98c4  895481f8             mov dword ptr [ecx + eax*4 - 8], edx
// 004d98c8  8b4604               mov eax, dword ptr [esi + 4]
// 004d98cb  8b0e                 mov ecx, dword ptr [esi]
// 004d98cd  8b542420             mov edx, dword ptr [esp + 0x20]
// 004d98d1  8b12                 mov edx, dword ptr [edx]
// 004d98d3  5f                   pop edi
// 004d98d4  5e                   pop esi
// 004d98d5  5d                   pop ebp
// 004d98d6  895481fc             mov dword ptr [ecx + eax*4 - 4], edx
// 004d98da  5b                   pop ebx
// 004d98db  c21000               ret 0x10
// 004d98de  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d98e2  8b07                 mov eax, dword ptr [edi]
// 004d98e4  8b13                 mov edx, dword ptr [ebx]
// 004d98e6  8b09                 mov ecx, dword ptr [ecx]
// 004d98e8  89442418             mov dword ptr [esp + 0x18], eax
// 004d98ec  8b4500               mov eax, dword ptr [ebp]
// 004d98ef  8954241c             mov dword ptr [esp + 0x1c], edx
// 004d98f3  8d542420             lea edx, [esp + 0x20]
// 004d98f7  52                   push edx
// 004d98f8  89442418             mov dword ptr [esp + 0x18], eax
// 004d98fc  894c2424             mov dword ptr [esp + 0x24], ecx
// 004d9900  8d442418             lea eax, [esp + 0x18]
// 004d9904  50                   push eax
// 004d9905  8d4c2424             lea ecx, [esp + 0x24]
// 004d9909  51                   push ecx
// 004d990a  8d542424             lea edx, [esp + 0x24]
// 004d990e  52                   push edx
// 004d990f  8bce                 mov ecx, esi
// 004d9911  e8cafeffff           call 0x4d97e0
// 004d9916  5f                   pop edi
// 004d9917  5e                   pop esi
// 004d9918  5d                   pop ebp
// 004d9919  5b                   pop ebx
// 004d991a  c21000               ret 0x10
// library rbxgs-view/QuadVolume.cpp (function ?append@?$Array@I@G3D@@QAEXABI000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
