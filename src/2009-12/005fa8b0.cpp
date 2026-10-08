// roc 2009-12 005fa8b0  unit: G3D::LineSegment  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fa8b0
//
// 005fa8b0  8b542408             mov edx, dword ptr [esp + 8]
// 005fa8b4  83c8ff               or eax, 0xffffffff
// 005fa8b7  33c9                 xor ecx, ecx
// 005fa8b9  85d2                 test edx, edx
// 005fa8bb  7627                 jbe 0x5fa8e4
// 005fa8bd  53                   push ebx
// 005fa8be  56                   push esi
// 005fa8bf  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fa8c3  57                   push edi
// 005fa8c4  0fb63c31             movzx edi, byte ptr [ecx + esi]
// 005fa8c8  8bd8                 mov ebx, eax
// 005fa8ca  81e3ff000000         and ebx, 0xff
// 005fa8d0  33fb                 xor edi, ebx
// 005fa8d2  c1e808               shr eax, 8
// 005fa8d5  3304bd18299c00       xor eax, dword ptr [edi*4 + 0x9c2918]
// 005fa8dc  41                   inc ecx
// 005fa8dd  3bca                 cmp ecx, edx
// 005fa8df  72e3                 jb 0x5fa8c4
// 005fa8e1  5f                   pop edi
// 005fa8e2  5e                   pop esi
// 005fa8e3  5b                   pop ebx
// 005fa8e4  c3                   ret 
// library g3d-6.09/G3Dcpp\Crypto.cpp (function ?crc32@Crypto@G3D@@SAIPBXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Crypto.cpp
