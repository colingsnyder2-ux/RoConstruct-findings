// from server: 100% by auto
// roc 2007-08 004f3ef0  unit: boost::bad_lexical_cast  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f3ef0
//
// 004f3ef0  56                   push esi
// 004f3ef1  8bf1                 mov esi, ecx
// 004f3ef3  8b4608               mov eax, dword ptr [esi + 8]
// 004f3ef6  57                   push edi
// 004f3ef7  8b3e                 mov edi, dword ptr [esi]
// 004f3ef9  c1e004               shl eax, 4
// 004f3efc  6a10                 push 0x10
// 004f3efe  50                   push eax
// 004f3eff  e85cc10000           call 0x500060
// 004f3f04  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f3f08  8906                 mov dword ptr [esi], eax
// 004f3f0a  8b7608               mov esi, dword ptr [esi + 8]
// 004f3f0d  83c408               add esp, 8
// 004f3f10  3bce                 cmp ecx, esi
// 004f3f12  7c02                 jl 0x4f3f16
// 004f3f14  8bce                 mov ecx, esi
// 004f3f16  c1e104               shl ecx, 4
// 004f3f19  03c8                 add ecx, eax
// 004f3f1b  3bc1                 cmp eax, ecx
// 004f3f1d  8bd7                 mov edx, edi
// 004f3f1f  7324                 jae 0x4f3f45
// 004f3f21  85c0                 test eax, eax
// 004f3f23  7416                 je 0x4f3f3b
// 004f3f25  8b32                 mov esi, dword ptr [edx]
// 004f3f27  8930                 mov dword ptr [eax], esi
// 004f3f29  8b7204               mov esi, dword ptr [edx + 4]
// 004f3f2c  897004               mov dword ptr [eax + 4], esi
// 004f3f2f  8b7208               mov esi, dword ptr [edx + 8]
// 004f3f32  897008               mov dword ptr [eax + 8], esi
// 004f3f35  8b720c               mov esi, dword ptr [edx + 0xc]
// 004f3f38  89700c               mov dword ptr [eax + 0xc], esi
// 004f3f3b  83c010               add eax, 0x10
// 004f3f3e  83c210               add edx, 0x10
// 004f3f41  3bc1                 cmp eax, ecx
// 004f3f43  72dc                 jb 0x4f3f21
// 004f3f45  57                   push edi
// 004f3f46  e8c5b80000           call 0x4ff810
// 004f3f4b  83c404               add esp, 4
// 004f3f4e  5f                   pop edi
// 004f3f4f  5e                   pop esi
// 004f3f50  c20400               ret 4
// library g3d-6.09/G3Dcpp\Discovery.cpp (function ?realloc@?$Array@VNetAddress@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Discovery.cpp
