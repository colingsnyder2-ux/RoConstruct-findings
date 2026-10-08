// from server: 100% by auto
// roc 2010-06 004882e0  unit: G3D::Win32Window  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004882e0
//
// 004882e0  56                   push esi
// 004882e1  57                   push edi
// 004882e2  8bf1                 mov esi, ecx
// 004882e4  8b4608               mov eax, dword ptr [esi + 8]
// 004882e7  8b3e                 mov edi, dword ptr [esi]
// 004882e9  6a10                 push 0x10
// 004882eb  50                   push eax
// 004882ec  e8af550c00           call 0x54d8a0
// 004882f1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004882f5  8906                 mov dword ptr [esi], eax
// 004882f7  8b7608               mov esi, dword ptr [esi + 8]
// 004882fa  83c408               add esp, 8
// 004882fd  3bce                 cmp ecx, esi
// 004882ff  7d02                 jge 0x488303
// 00488301  8bf1                 mov esi, ecx
// 00488303  03f0                 add esi, eax
// 00488305  8bcf                 mov ecx, edi
// 00488307  3bc6                 cmp eax, esi
// 00488309  7313                 jae 0x48831e
// 0048830b  eb03                 jmp 0x488310
// 0048830d  8d4900               lea ecx, [ecx]
// 00488310  85c0                 test eax, eax
// 00488312  7404                 je 0x488318
// 00488314  8a11                 mov dl, byte ptr [ecx]
// 00488316  8810                 mov byte ptr [eax], dl
// 00488318  40                   inc eax
// 00488319  41                   inc ecx
// 0048831a  3bc6                 cmp eax, esi
// 0048831c  72f2                 jb 0x488310
// 0048831e  57                   push edi
// 0048831f  e89c560c00           call 0x54d9c0
// 00488324  83c404               add esp, 4
// 00488327  5f                   pop edi
// 00488328  5e                   pop esi
// 00488329  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?realloc@?$Array@E@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
