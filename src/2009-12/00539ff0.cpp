// roc 2009-12 00539ff0  unit: G3D::VRay::?$holder  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00539ff0
//
// 00539ff0  56                   push esi
// 00539ff1  6a10                 push 0x10
// 00539ff3  8bf1                 mov esi, ecx
// 00539ff5  e866982b00           call 0x7f3860
// 00539ffa  83c404               add esp, 4
// 00539ffd  85c0                 test eax, eax
// 00539fff  741d                 je 0x53a01e
// 0053a001  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053a005  d901                 fld dword ptr [ecx]
// 0053a007  c700d8d19b00         mov dword ptr [eax], 0x9bd1d8
// 0053a00d  d95804               fstp dword ptr [eax + 4]
// 0053a010  d94104               fld dword ptr [ecx + 4]
// 0053a013  d95808               fstp dword ptr [eax + 8]
// 0053a016  d94108               fld dword ptr [ecx + 8]
// 0053a019  d9580c               fstp dword ptr [eax + 0xc]
// 0053a01c  eb02                 jmp 0x53a020
// 0053a01e  33c0                 xor eax, eax
// 0053a020  8d542408             lea edx, [esp + 8]
// 0053a024  8bc8                 mov ecx, eax
// 0053a026  3bd6                 cmp edx, esi
// 0053a028  7404                 je 0x53a02e
// 0053a02a  8b0e                 mov ecx, dword ptr [esi]
// 0053a02c  8906                 mov dword ptr [esi], eax
// 0053a02e  85c9                 test ecx, ecx
// 0053a030  7408                 je 0x53a03a
// 0053a032  8b01                 mov eax, dword ptr [ecx]
// 0053a034  8b10                 mov edx, dword ptr [eax]
// 0053a036  6a01                 push 1
// 0053a038  ffd2                 call edx
// 0053a03a  8bc6                 mov eax, esi
// 0053a03c  5e                   pop esi
// 0053a03d  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?4VVector3@G3D@@@any@boost@@QAEAAV01@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
