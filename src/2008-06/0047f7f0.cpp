// roc 2008-06 0047f7f0  unit: G3D::Win32Window  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047f7f0
//
// 0047f7f0  56                   push esi
// 0047f7f1  8bf1                 mov esi, ecx
// 0047f7f3  8b4608               mov eax, dword ptr [esi + 8]
// 0047f7f6  8d0440               lea eax, [eax + eax*2]
// 0047f7f9  57                   push edi
// 0047f7fa  8b3e                 mov edi, dword ptr [esi]
// 0047f7fc  03c0                 add eax, eax
// 0047f7fe  03c0                 add eax, eax
// 0047f800  6a10                 push 0x10
// 0047f802  50                   push eax
// 0047f803  e8788d0800           call 0x508580
// 0047f808  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047f80c  8906                 mov dword ptr [esi], eax
// 0047f80e  8b7608               mov esi, dword ptr [esi + 8]
// 0047f811  83c408               add esp, 8
// 0047f814  3bce                 cmp ecx, esi
// 0047f816  7c02                 jl 0x47f81a
// 0047f818  8bce                 mov ecx, esi
// 0047f81a  8d0c49               lea ecx, [ecx + ecx*2]
// 0047f81d  8d1488               lea edx, [eax + ecx*4]
// 0047f820  8bcf                 mov ecx, edi
// 0047f822  3bc2                 cmp eax, edx
// 0047f824  731e                 jae 0x47f844
// 0047f826  85c0                 test eax, eax
// 0047f828  7410                 je 0x47f83a
// 0047f82a  8b31                 mov esi, dword ptr [ecx]
// 0047f82c  8930                 mov dword ptr [eax], esi
// 0047f82e  8b7104               mov esi, dword ptr [ecx + 4]
// 0047f831  897004               mov dword ptr [eax + 4], esi
// 0047f834  8b7108               mov esi, dword ptr [ecx + 8]
// 0047f837  897008               mov dword ptr [eax + 8], esi
// 0047f83a  83c00c               add eax, 0xc
// 0047f83d  83c10c               add ecx, 0xc
// 0047f840  3bc2                 cmp eax, edx
// 0047f842  72e2                 jb 0x47f826
// 0047f844  57                   push edi
// 0047f845  e8d6840800           call 0x507d20
// 0047f84a  83c404               add esp, 4
// 0047f84d  5f                   pop edi
// 0047f84e  5e                   pop esi
// 0047f84f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?realloc@?$Array@VLoopBody@GWindow@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
