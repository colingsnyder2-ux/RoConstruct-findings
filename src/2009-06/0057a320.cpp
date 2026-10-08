// from server: 100% by auto
// roc 2009-06 0057a320  unit: G3D::LineSegment  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a320
//
// 0057a320  8b542408             mov edx, dword ptr [esp + 8]
// 0057a324  83c8ff               or eax, 0xffffffff
// 0057a327  33c9                 xor ecx, ecx
// 0057a329  85d2                 test edx, edx
// 0057a32b  7627                 jbe 0x57a354
// 0057a32d  53                   push ebx
// 0057a32e  56                   push esi
// 0057a32f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057a333  57                   push edi
// 0057a334  0fb63c31             movzx edi, byte ptr [ecx + esi]
// 0057a338  8bd8                 mov ebx, eax
// 0057a33a  81e3ff000000         and ebx, 0xff
// 0057a340  33fb                 xor edi, ebx
// 0057a342  c1e808               shr eax, 8
// 0057a345  3304bda8ba8c00       xor eax, dword ptr [edi*4 + 0x8cbaa8]
// 0057a34c  41                   inc ecx
// 0057a34d  3bca                 cmp ecx, edx
// 0057a34f  72e3                 jb 0x57a334
// 0057a351  5f                   pop edi
// 0057a352  5e                   pop esi
// 0057a353  5b                   pop ebx
// 0057a354  c3                   ret 
// library g3d-6.09/G3Dcpp\Crypto.cpp (function ?crc32@Crypto@G3D@@SAIPBXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Crypto.cpp
