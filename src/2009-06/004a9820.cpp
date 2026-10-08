// from server: 100% by auto
// roc 2009-06 004a9820  unit: G3D::Win32Window  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9820
//
// 004a9820  56                   push esi
// 004a9821  8bf1                 mov esi, ecx
// 004a9823  8b4608               mov eax, dword ptr [esi + 8]
// 004a9826  8d0480               lea eax, [eax + eax*4]
// 004a9829  57                   push edi
// 004a982a  8b3e                 mov edi, dword ptr [esi]
// 004a982c  03c0                 add eax, eax
// 004a982e  03c0                 add eax, eax
// 004a9830  6a10                 push 0x10
// 004a9832  50                   push eax
// 004a9833  e838190c00           call 0x56b170
// 004a9838  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a983c  8906                 mov dword ptr [esi], eax
// 004a983e  8b7608               mov esi, dword ptr [esi + 8]
// 004a9841  83c408               add esp, 8
// 004a9844  3bce                 cmp ecx, esi
// 004a9846  7c02                 jl 0x4a984a
// 004a9848  8bce                 mov ecx, esi
// 004a984a  8d0c89               lea ecx, [ecx + ecx*4]
// 004a984d  8d1488               lea edx, [eax + ecx*4]
// 004a9850  8bcf                 mov ecx, edi
// 004a9852  3bc2                 cmp eax, edx
// 004a9854  732a                 jae 0x4a9880
// 004a9856  85c0                 test eax, eax
// 004a9858  741c                 je 0x4a9876
// 004a985a  8b31                 mov esi, dword ptr [ecx]
// 004a985c  8930                 mov dword ptr [eax], esi
// 004a985e  8b7104               mov esi, dword ptr [ecx + 4]
// 004a9861  897004               mov dword ptr [eax + 4], esi
// 004a9864  8b7108               mov esi, dword ptr [ecx + 8]
// 004a9867  897008               mov dword ptr [eax + 8], esi
// 004a986a  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004a986d  89700c               mov dword ptr [eax + 0xc], esi
// 004a9870  8b7110               mov esi, dword ptr [ecx + 0x10]
// 004a9873  897010               mov dword ptr [eax + 0x10], esi
// 004a9876  83c014               add eax, 0x14
// 004a9879  83c114               add ecx, 0x14
// 004a987c  3bc2                 cmp eax, edx
// 004a987e  72d6                 jb 0x4a9856
// 004a9880  57                   push edi
// 004a9881  e80a1a0c00           call 0x56b290
// 004a9886  83c404               add esp, 4
// 004a9889  5f                   pop edi
// 004a988a  5e                   pop esi
// 004a988b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?realloc@?$Array@TSDL_Event@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
