// roc 2007-03 004fdac0  unit: seg_004f0000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fdac0
//
// 004fdac0  8b542408             mov edx, dword ptr [esp + 8]
// 004fdac4  83c8ff               or eax, 0xffffffff
// 004fdac7  33c9                 xor ecx, ecx
// 004fdac9  85d2                 test edx, edx
// 004fdacb  7629                 jbe 0x4fdaf6
// 004fdacd  53                   push ebx
// 004fdace  56                   push esi
// 004fdacf  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004fdad3  57                   push edi
// 004fdad4  0fb63c31             movzx edi, byte ptr [ecx + esi]
// 004fdad8  8bd8                 mov ebx, eax
// 004fdada  81e3ff000000         and ebx, 0xff
// 004fdae0  33fb                 xor edi, ebx
// 004fdae2  c1e808               shr eax, 8
// 004fdae5  3304bd10ff7900       xor eax, dword ptr [edi*4 + 0x79ff10]
// 004fdaec  83c101               add ecx, 1
// 004fdaef  3bca                 cmp ecx, edx
// 004fdaf1  72e1                 jb 0x4fdad4
// 004fdaf3  5f                   pop edi
// 004fdaf4  5e                   pop esi
// 004fdaf5  5b                   pop ebx
// 004fdaf6  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Crypto.cpp (function ?crc32@Crypto@G3D@@SAIPBXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Crypto.cpp
