// from server: 100% by auto
// roc 2010-06 00557700  unit: seg_00550000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00557700
//
// 00557700  8b542408             mov edx, dword ptr [esp + 8]
// 00557704  83c8ff               or eax, 0xffffffff
// 00557707  33c9                 xor ecx, ecx
// 00557709  85d2                 test edx, edx
// 0055770b  7627                 jbe 0x557734
// 0055770d  53                   push ebx
// 0055770e  56                   push esi
// 0055770f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00557713  57                   push edi
// 00557714  0fb63c31             movzx edi, byte ptr [ecx + esi]
// 00557718  8bd8                 mov ebx, eax
// 0055771a  81e3ff000000         and ebx, 0xff
// 00557720  33fb                 xor edi, ebx
// 00557722  c1e808               shr eax, 8
// 00557725  3304bd8004a200       xor eax, dword ptr [edi*4 + 0xa20480]
// 0055772c  41                   inc ecx
// 0055772d  3bca                 cmp ecx, edx
// 0055772f  72e3                 jb 0x557714
// 00557731  5f                   pop edi
// 00557732  5e                   pop esi
// 00557733  5b                   pop ebx
// 00557734  c3                   ret 
// library g3d-6.09/G3Dcpp\Crypto.cpp (function ?crc32@Crypto@G3D@@SAIPBXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Crypto.cpp
