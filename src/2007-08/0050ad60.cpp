// roc 2007-08 0050ad60  unit: G3D::GCamera  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050ad60
//
// 0050ad60  8b442404             mov eax, dword ptr [esp + 4]
// 0050ad64  53                   push ebx
// 0050ad65  56                   push esi
// 0050ad66  57                   push edi
// 0050ad67  8bd9                 mov ebx, ecx
// 0050ad69  33ff                 xor edi, edi
// 0050ad6b  2bd8                 sub ebx, eax
// 0050ad6d  8bf0                 mov esi, eax
// 0050ad6f  90                   nop 
// 0050ad70  33d2                 xor edx, edx
// 0050ad72  8bce                 mov ecx, esi
// 0050ad74  d9040b               fld dword ptr [ebx + ecx]
// 0050ad77  d901                 fld dword ptr [ecx]
// 0050ad79  dae9                 fucompp 
// 0050ad7b  dfe0                 fnstsw ax
// 0050ad7d  f6c444               test ah, 0x44
// 0050ad80  7a1e                 jp 0x50ada0
// 0050ad82  83c201               add edx, 1
// 0050ad85  83c104               add ecx, 4
// 0050ad88  83fa04               cmp edx, 4
// 0050ad8b  7ce7                 jl 0x50ad74
// 0050ad8d  83c701               add edi, 1
// 0050ad90  83c610               add esi, 0x10
// 0050ad93  83ff04               cmp edi, 4
// 0050ad96  7cd8                 jl 0x50ad70
// 0050ad98  5f                   pop edi
// 0050ad99  5e                   pop esi
// 0050ad9a  b001                 mov al, 1
// 0050ad9c  5b                   pop ebx
// 0050ad9d  c20400               ret 4
// 0050ada0  5f                   pop edi
// 0050ada1  5e                   pop esi
// 0050ada2  32c0                 xor al, al
// 0050ada4  5b                   pop ebx
// 0050ada5  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ??8Matrix4@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
