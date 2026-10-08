// from server: 100% by auto
// roc 2007-08 00508740  unit: G3D::GCamera  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00508740
//
// 00508740  8b542408             mov edx, dword ptr [esp + 8]
// 00508744  83c8ff               or eax, 0xffffffff
// 00508747  33c9                 xor ecx, ecx
// 00508749  85d2                 test edx, edx
// 0050874b  7629                 jbe 0x508776
// 0050874d  53                   push ebx
// 0050874e  56                   push esi
// 0050874f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00508753  57                   push edi
// 00508754  0fb63c31             movzx edi, byte ptr [ecx + esi]
// 00508758  8bd8                 mov ebx, eax
// 0050875a  81e3ff000000         and ebx, 0xff
// 00508760  33fb                 xor edi, ebx
// 00508762  c1e808               shr eax, 8
// 00508765  3304bd00077a00       xor eax, dword ptr [edi*4 + 0x7a0700]
// 0050876c  83c101               add ecx, 1
// 0050876f  3bca                 cmp ecx, edx
// 00508771  72e1                 jb 0x508754
// 00508773  5f                   pop edi
// 00508774  5e                   pop esi
// 00508775  5b                   pop ebx
// 00508776  c3                   ret 
// library g3d-6.09/G3Dcpp\Crypto.cpp (function ?crc32@Crypto@G3D@@SAIPBXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Crypto.cpp
