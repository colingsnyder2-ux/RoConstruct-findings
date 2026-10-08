// roc 2007-03 004cd800  unit: seg_004c0000  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cd800
//
// 004cd800  53                   push ebx
// 004cd801  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004cd805  55                   push ebp
// 004cd806  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004cd80a  56                   push esi
// 004cd80b  8bf1                 mov esi, ecx
// 004cd80d  8b06                 mov eax, dword ptr [esi]
// 004cd80f  57                   push edi
// 004cd810  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004cd814  3bf8                 cmp edi, eax
// 004cd816  720e                 jb 0x4cd826
// 004cd818  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cd81b  8d1488               lea edx, [eax + ecx*4]
// 004cd81e  3bfa                 cmp edi, edx
// 004cd820  0f829a000000         jb 0x4cd8c0
// 004cd826  3bd8                 cmp ebx, eax
// 004cd828  720e                 jb 0x4cd838
// 004cd82a  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cd82d  8d1488               lea edx, [eax + ecx*4]
// 004cd830  3bda                 cmp ebx, edx
// 004cd832  0f8288000000         jb 0x4cd8c0
// 004cd838  3be8                 cmp ebp, eax
// 004cd83a  720a                 jb 0x4cd846
// 004cd83c  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cd83f  8d1488               lea edx, [eax + ecx*4]
// 004cd842  3bea                 cmp ebp, edx
// 004cd844  727a                 jb 0x4cd8c0
// 004cd846  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cd849  8d5102               lea edx, [ecx + 2]
// 004cd84c  3b5608               cmp edx, dword ptr [esi + 8]
// 004cd84f  7d39                 jge 0x4cd88a
// 004cd851  8d0488               lea eax, [eax + ecx*4]
// 004cd854  85c0                 test eax, eax
// 004cd856  7404                 je 0x4cd85c
// 004cd858  8b0f                 mov ecx, dword ptr [edi]
// 004cd85a  8908                 mov dword ptr [eax], ecx
// 004cd85c  8b5604               mov edx, dword ptr [esi + 4]
// 004cd85f  8b06                 mov eax, dword ptr [esi]
// 004cd861  8d449004             lea eax, [eax + edx*4 + 4]
// 004cd865  85c0                 test eax, eax
// 004cd867  7404                 je 0x4cd86d
// 004cd869  8b0b                 mov ecx, dword ptr [ebx]
// 004cd86b  8908                 mov dword ptr [eax], ecx
// 004cd86d  8b5604               mov edx, dword ptr [esi + 4]
// 004cd870  8b06                 mov eax, dword ptr [esi]
// 004cd872  8d449008             lea eax, [eax + edx*4 + 8]
// 004cd876  85c0                 test eax, eax
// 004cd878  7405                 je 0x4cd87f
// 004cd87a  8b4d00               mov ecx, dword ptr [ebp]
// 004cd87d  8908                 mov dword ptr [eax], ecx
// 004cd87f  83460403             add dword ptr [esi + 4], 3
// 004cd883  5f                   pop edi
// 004cd884  5e                   pop esi
// 004cd885  5d                   pop ebp
// 004cd886  5b                   pop ebx
// 004cd887  c20c00               ret 0xc
// 004cd88a  83c103               add ecx, 3
// 004cd88d  6a00                 push 0
// 004cd88f  51                   push ecx
// 004cd890  8bce                 mov ecx, esi
// 004cd892  e809ddfaff           call 0x47b5a0
// 004cd897  8b5604               mov edx, dword ptr [esi + 4]
// 004cd89a  8b06                 mov eax, dword ptr [esi]
// 004cd89c  8b0f                 mov ecx, dword ptr [edi]
// 004cd89e  894c90f4             mov dword ptr [eax + edx*4 - 0xc], ecx
// 004cd8a2  8b5604               mov edx, dword ptr [esi + 4]
// 004cd8a5  8b06                 mov eax, dword ptr [esi]
// 004cd8a7  8b0b                 mov ecx, dword ptr [ebx]
// 004cd8a9  894c90f8             mov dword ptr [eax + edx*4 - 8], ecx
// 004cd8ad  8b5604               mov edx, dword ptr [esi + 4]
// 004cd8b0  8b06                 mov eax, dword ptr [esi]
// 004cd8b2  8b4d00               mov ecx, dword ptr [ebp]
// 004cd8b5  5f                   pop edi
// 004cd8b6  5e                   pop esi
// 004cd8b7  5d                   pop ebp
// 004cd8b8  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 004cd8bc  5b                   pop ebx
// 004cd8bd  c20c00               ret 0xc
// 004cd8c0  8b17                 mov edx, dword ptr [edi]
// 004cd8c2  8b03                 mov eax, dword ptr [ebx]
// 004cd8c4  8b4d00               mov ecx, dword ptr [ebp]
// 004cd8c7  89542418             mov dword ptr [esp + 0x18], edx
// 004cd8cb  8d542414             lea edx, [esp + 0x14]
// 004cd8cf  8944241c             mov dword ptr [esp + 0x1c], eax
// 004cd8d3  52                   push edx
// 004cd8d4  894c2418             mov dword ptr [esp + 0x18], ecx
// 004cd8d8  8d442420             lea eax, [esp + 0x20]
// 004cd8dc  50                   push eax
// 004cd8dd  8d4c2420             lea ecx, [esp + 0x20]
// 004cd8e1  51                   push ecx
// 004cd8e2  8bce                 mov ecx, esi
// 004cd8e4  e817ffffff           call 0x4cd800
// 004cd8e9  5f                   pop edi
// 004cd8ea  5e                   pop esi
// 004cd8eb  5d                   pop ebp
// 004cd8ec  5b                   pop ebx
// 004cd8ed  c20c00               ret 0xc
// library rbxgs-view/QuadVolume.cpp (function ?append@?$Array@I@G3D@@QAEXABI00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
