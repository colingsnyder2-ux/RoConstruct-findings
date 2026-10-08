// roc 2007-03 004cd6c0  unit: seg_004c0000  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cd6c0
//
// 004cd6c0  53                   push ebx
// 004cd6c1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004cd6c5  55                   push ebp
// 004cd6c6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004cd6ca  56                   push esi
// 004cd6cb  8bf1                 mov esi, ecx
// 004cd6cd  8b06                 mov eax, dword ptr [esi]
// 004cd6cf  57                   push edi
// 004cd6d0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004cd6d4  3bf8                 cmp edi, eax
// 004cd6d6  720e                 jb 0x4cd6e6
// 004cd6d8  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cd6db  8d1488               lea edx, [eax + ecx*4]
// 004cd6de  3bfa                 cmp edi, edx
// 004cd6e0  0f82d8000000         jb 0x4cd7be
// 004cd6e6  3bd8                 cmp ebx, eax
// 004cd6e8  720e                 jb 0x4cd6f8
// 004cd6ea  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cd6ed  8d1488               lea edx, [eax + ecx*4]
// 004cd6f0  3bda                 cmp ebx, edx
// 004cd6f2  0f82c6000000         jb 0x4cd7be
// 004cd6f8  3be8                 cmp ebp, eax
// 004cd6fa  720e                 jb 0x4cd70a
// 004cd6fc  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cd6ff  8d1488               lea edx, [eax + ecx*4]
// 004cd702  3bea                 cmp ebp, edx
// 004cd704  0f82b4000000         jb 0x4cd7be
// 004cd70a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004cd70e  3bc8                 cmp ecx, eax
// 004cd710  720e                 jb 0x4cd720
// 004cd712  8b5604               mov edx, dword ptr [esi + 4]
// 004cd715  8d1490               lea edx, [eax + edx*4]
// 004cd718  3bca                 cmp ecx, edx
// 004cd71a  0f82a2000000         jb 0x4cd7c2
// 004cd720  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cd723  8d5103               lea edx, [ecx + 3]
// 004cd726  3b5608               cmp edx, dword ptr [esi + 8]
// 004cd729  7d4e                 jge 0x4cd779
// 004cd72b  8d0488               lea eax, [eax + ecx*4]
// 004cd72e  85c0                 test eax, eax
// 004cd730  7404                 je 0x4cd736
// 004cd732  8b0f                 mov ecx, dword ptr [edi]
// 004cd734  8908                 mov dword ptr [eax], ecx
// 004cd736  8b5604               mov edx, dword ptr [esi + 4]
// 004cd739  8b06                 mov eax, dword ptr [esi]
// 004cd73b  8d449004             lea eax, [eax + edx*4 + 4]
// 004cd73f  85c0                 test eax, eax
// 004cd741  7404                 je 0x4cd747
// 004cd743  8b0b                 mov ecx, dword ptr [ebx]
// 004cd745  8908                 mov dword ptr [eax], ecx
// 004cd747  8b5604               mov edx, dword ptr [esi + 4]
// 004cd74a  8b06                 mov eax, dword ptr [esi]
// 004cd74c  8d449008             lea eax, [eax + edx*4 + 8]
// 004cd750  85c0                 test eax, eax
// 004cd752  7405                 je 0x4cd759
// 004cd754  8b4d00               mov ecx, dword ptr [ebp]
// 004cd757  8908                 mov dword ptr [eax], ecx
// 004cd759  8b5604               mov edx, dword ptr [esi + 4]
// 004cd75c  8b06                 mov eax, dword ptr [esi]
// 004cd75e  8d44900c             lea eax, [eax + edx*4 + 0xc]
// 004cd762  85c0                 test eax, eax
// 004cd764  7408                 je 0x4cd76e
// 004cd766  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004cd76a  8b11                 mov edx, dword ptr [ecx]
// 004cd76c  8910                 mov dword ptr [eax], edx
// 004cd76e  83460404             add dword ptr [esi + 4], 4
// 004cd772  5f                   pop edi
// 004cd773  5e                   pop esi
// 004cd774  5d                   pop ebp
// 004cd775  5b                   pop ebx
// 004cd776  c21000               ret 0x10
// 004cd779  83c104               add ecx, 4
// 004cd77c  6a00                 push 0
// 004cd77e  51                   push ecx
// 004cd77f  8bce                 mov ecx, esi
// 004cd781  e81adefaff           call 0x47b5a0
// 004cd786  8b4604               mov eax, dword ptr [esi + 4]
// 004cd789  8b0e                 mov ecx, dword ptr [esi]
// 004cd78b  8b17                 mov edx, dword ptr [edi]
// 004cd78d  895481f0             mov dword ptr [ecx + eax*4 - 0x10], edx
// 004cd791  8b4604               mov eax, dword ptr [esi + 4]
// 004cd794  8b0e                 mov ecx, dword ptr [esi]
// 004cd796  8b13                 mov edx, dword ptr [ebx]
// 004cd798  895481f4             mov dword ptr [ecx + eax*4 - 0xc], edx
// 004cd79c  8b4604               mov eax, dword ptr [esi + 4]
// 004cd79f  8b0e                 mov ecx, dword ptr [esi]
// 004cd7a1  8b5500               mov edx, dword ptr [ebp]
// 004cd7a4  895481f8             mov dword ptr [ecx + eax*4 - 8], edx
// 004cd7a8  8b4604               mov eax, dword ptr [esi + 4]
// 004cd7ab  8b0e                 mov ecx, dword ptr [esi]
// 004cd7ad  8b542420             mov edx, dword ptr [esp + 0x20]
// 004cd7b1  8b12                 mov edx, dword ptr [edx]
// 004cd7b3  5f                   pop edi
// 004cd7b4  5e                   pop esi
// 004cd7b5  5d                   pop ebp
// 004cd7b6  895481fc             mov dword ptr [ecx + eax*4 - 4], edx
// 004cd7ba  5b                   pop ebx
// 004cd7bb  c21000               ret 0x10
// 004cd7be  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004cd7c2  8b07                 mov eax, dword ptr [edi]
// 004cd7c4  8b13                 mov edx, dword ptr [ebx]
// 004cd7c6  8b09                 mov ecx, dword ptr [ecx]
// 004cd7c8  89442418             mov dword ptr [esp + 0x18], eax
// 004cd7cc  8b4500               mov eax, dword ptr [ebp]
// 004cd7cf  8954241c             mov dword ptr [esp + 0x1c], edx
// 004cd7d3  8d542420             lea edx, [esp + 0x20]
// 004cd7d7  52                   push edx
// 004cd7d8  89442418             mov dword ptr [esp + 0x18], eax
// 004cd7dc  894c2424             mov dword ptr [esp + 0x24], ecx
// 004cd7e0  8d442418             lea eax, [esp + 0x18]
// 004cd7e4  50                   push eax
// 004cd7e5  8d4c2424             lea ecx, [esp + 0x24]
// 004cd7e9  51                   push ecx
// 004cd7ea  8d542424             lea edx, [esp + 0x24]
// 004cd7ee  52                   push edx
// 004cd7ef  8bce                 mov ecx, esi
// 004cd7f1  e8cafeffff           call 0x4cd6c0
// 004cd7f6  5f                   pop edi
// 004cd7f7  5e                   pop esi
// 004cd7f8  5d                   pop ebp
// 004cd7f9  5b                   pop ebx
// 004cd7fa  c21000               ret 0x10
// library rbxgs-view/QuadVolume.cpp (function ?append@?$Array@I@G3D@@QAEXABI000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
