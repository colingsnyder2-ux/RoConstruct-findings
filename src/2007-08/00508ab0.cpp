// roc 2007-08 00508ab0  unit: G3D::GCamera  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00508ab0
//
// 00508ab0  56                   push esi
// 00508ab1  57                   push edi
// 00508ab2  8bf1                 mov esi, ecx
// 00508ab4  8b4608               mov eax, dword ptr [esi + 8]
// 00508ab7  8b3e                 mov edi, dword ptr [esi]
// 00508ab9  6a10                 push 0x10
// 00508abb  50                   push eax
// 00508abc  e89f75ffff           call 0x500060
// 00508ac1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00508ac5  8906                 mov dword ptr [esi], eax
// 00508ac7  8b7608               mov esi, dword ptr [esi + 8]
// 00508aca  83c408               add esp, 8
// 00508acd  3bce                 cmp ecx, esi
// 00508acf  7d02                 jge 0x508ad3
// 00508ad1  8bf1                 mov esi, ecx
// 00508ad3  03f0                 add esi, eax
// 00508ad5  3bc6                 cmp eax, esi
// 00508ad7  8bcf                 mov ecx, edi
// 00508ad9  7317                 jae 0x508af2
// 00508adb  eb03                 jmp 0x508ae0
// 00508add  8d4900               lea ecx, [ecx]
// 00508ae0  85c0                 test eax, eax
// 00508ae2  7404                 je 0x508ae8
// 00508ae4  8a11                 mov dl, byte ptr [ecx]
// 00508ae6  8810                 mov byte ptr [eax], dl
// 00508ae8  83c001               add eax, 1
// 00508aeb  83c101               add ecx, 1
// 00508aee  3bc6                 cmp eax, esi
// 00508af0  72ee                 jb 0x508ae0
// 00508af2  57                   push edi
// 00508af3  e8186dffff           call 0x4ff810
// 00508af8  83c404               add esp, 4
// 00508afb  5f                   pop edi
// 00508afc  5e                   pop esi
// 00508afd  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?realloc@?$Array@E@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
