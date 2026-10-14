// roc 2009-06 00577900  unit: G3D::LineSegment  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577900
//
// 00577900  8b442404             mov eax, dword ptr [esp + 4]
// 00577904  53                   push ebx
// 00577905  56                   push esi
// 00577906  57                   push edi
// 00577907  8bd9                 mov ebx, ecx
// 00577909  33ff                 xor edi, edi
// 0057790b  2bd8                 sub ebx, eax
// 0057790d  8bf0                 mov esi, eax
// 0057790f  90                   nop 
// 00577910  33d2                 xor edx, edx
// 00577912  8bce                 mov ecx, esi
// 00577914  d901                 fld dword ptr [ecx]
// 00577916  d81c0b               fcomp dword ptr [ebx + ecx]
// 00577919  dfe0                 fnstsw ax
// 0057791b  f6c444               test ah, 0x44
// 0057791e  7a1a                 jp 0x57793a
// 00577920  42                   inc edx
// 00577921  83c104               add ecx, 4
// 00577924  83fa04               cmp edx, 4
// 00577927  7ceb                 jl 0x577914
// 00577929  47                   inc edi
// 0057792a  83c610               add esi, 0x10
// 0057792d  83ff04               cmp edi, 4
// 00577930  7cde                 jl 0x577910
// 00577932  5f                   pop edi
// 00577933  5e                   pop esi
// 00577934  b001                 mov al, 1
// 00577936  5b                   pop ebx
// 00577937  c20400               ret 4
// 0057793a  5f                   pop edi
// 0057793b  5e                   pop esi
// 0057793c  32c0                 xor al, al
// 0057793e  5b                   pop ebx
// 0057793f  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Matrix4.cpp (function ??8Matrix4@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix4.cpp
