// roc 2009-06 004a9890  unit: G3D::Win32Window  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9890
//
// 004a9890  56                   push esi
// 004a9891  8bf1                 mov esi, ecx
// 004a9893  8b4608               mov eax, dword ptr [esi + 8]
// 004a9896  8d0440               lea eax, [eax + eax*2]
// 004a9899  57                   push edi
// 004a989a  8b3e                 mov edi, dword ptr [esi]
// 004a989c  03c0                 add eax, eax
// 004a989e  03c0                 add eax, eax
// 004a98a0  6a10                 push 0x10
// 004a98a2  50                   push eax
// 004a98a3  e8c8180c00           call 0x56b170
// 004a98a8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a98ac  8906                 mov dword ptr [esi], eax
// 004a98ae  8b7608               mov esi, dword ptr [esi + 8]
// 004a98b1  83c408               add esp, 8
// 004a98b4  3bce                 cmp ecx, esi
// 004a98b6  7c02                 jl 0x4a98ba
// 004a98b8  8bce                 mov ecx, esi
// 004a98ba  8d0c49               lea ecx, [ecx + ecx*2]
// 004a98bd  8d1488               lea edx, [eax + ecx*4]
// 004a98c0  8bcf                 mov ecx, edi
// 004a98c2  3bc2                 cmp eax, edx
// 004a98c4  731e                 jae 0x4a98e4
// 004a98c6  85c0                 test eax, eax
// 004a98c8  7410                 je 0x4a98da
// 004a98ca  8b31                 mov esi, dword ptr [ecx]
// 004a98cc  8930                 mov dword ptr [eax], esi
// 004a98ce  8b7104               mov esi, dword ptr [ecx + 4]
// 004a98d1  897004               mov dword ptr [eax + 4], esi
// 004a98d4  8b7108               mov esi, dword ptr [ecx + 8]
// 004a98d7  897008               mov dword ptr [eax + 8], esi
// 004a98da  83c00c               add eax, 0xc
// 004a98dd  83c10c               add ecx, 0xc
// 004a98e0  3bc2                 cmp eax, edx
// 004a98e2  72e2                 jb 0x4a98c6
// 004a98e4  57                   push edi
// 004a98e5  e8a6190c00           call 0x56b290
// 004a98ea  83c404               add esp, 4
// 004a98ed  5f                   pop edi
// 004a98ee  5e                   pop esi
// 004a98ef  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?realloc@?$Array@VLoopBody@GWindow@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
