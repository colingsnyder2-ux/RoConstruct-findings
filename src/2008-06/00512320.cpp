// from server: 100% by auto
// roc 2008-06 00512320  unit: G3D::GCamera  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512320
//
// 00512320  8b542408             mov edx, dword ptr [esp + 8]
// 00512324  83c8ff               or eax, 0xffffffff
// 00512327  33c9                 xor ecx, ecx
// 00512329  85d2                 test edx, edx
// 0051232b  7627                 jbe 0x512354
// 0051232d  53                   push ebx
// 0051232e  56                   push esi
// 0051232f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00512333  57                   push edi
// 00512334  0fb63c31             movzx edi, byte ptr [ecx + esi]
// 00512338  8bd8                 mov ebx, eax
// 0051233a  81e3ff000000         and ebx, 0xff
// 00512340  33fb                 xor edi, ebx
// 00512342  c1e808               shr eax, 8
// 00512345  3304bdc0838200       xor eax, dword ptr [edi*4 + 0x8283c0]
// 0051234c  41                   inc ecx
// 0051234d  3bca                 cmp ecx, edx
// 0051234f  72e3                 jb 0x512334
// 00512351  5f                   pop edi
// 00512352  5e                   pop esi
// 00512353  5b                   pop ebx
// 00512354  c3                   ret 
// library g3d-6.09/G3Dcpp\Crypto.cpp (function ?crc32@Crypto@G3D@@SAIPBXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Crypto.cpp
