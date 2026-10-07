// roc 2007-08 0050ac00  unit: G3D::GCamera  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050ac00
//
// 0050ac00  53                   push ebx
// 0050ac01  55                   push ebp
// 0050ac02  8bc1                 mov eax, ecx
// 0050ac04  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050ac08  56                   push esi
// 0050ac09  57                   push edi
// 0050ac0a  8d580c               lea ebx, [eax + 0xc]
// 0050ac0d  8d7924               lea edi, [ecx + 0x24]
// 0050ac10  8d7008               lea esi, [eax + 8]
// 0050ac13  8d5108               lea edx, [ecx + 8]
// 0050ac16  bd03000000           mov ebp, 3
// 0050ac1b  eb03                 jmp 0x50ac20
// 0050ac1d  8d4900               lea ecx, [ecx]
// 0050ac20  d942f8               fld dword ptr [edx - 8]
// 0050ac23  83c20c               add edx, 0xc
// 0050ac26  d95ef8               fstp dword ptr [esi - 8]
// 0050ac29  83c610               add esi, 0x10
// 0050ac2c  d942f0               fld dword ptr [edx - 0x10]
// 0050ac2f  83c704               add edi, 4
// 0050ac32  d95eec               fstp dword ptr [esi - 0x14]
// 0050ac35  83c310               add ebx, 0x10
// 0050ac38  83ed01               sub ebp, 1
// 0050ac3b  d942f4               fld dword ptr [edx - 0xc]
// 0050ac3e  d95ef0               fstp dword ptr [esi - 0x10]
// 0050ac41  d947fc               fld dword ptr [edi - 4]
// 0050ac44  d95bf0               fstp dword ptr [ebx - 0x10]
// 0050ac47  75d7                 jne 0x50ac20
// 0050ac49  d9ee                 fldz 
// 0050ac4b  5f                   pop edi
// 0050ac4c  d95030               fst dword ptr [eax + 0x30]
// 0050ac4f  5e                   pop esi
// 0050ac50  d95034               fst dword ptr [eax + 0x34]
// 0050ac53  5d                   pop ebp
// 0050ac54  d95838               fstp dword ptr [eax + 0x38]
// 0050ac57  5b                   pop ebx
// 0050ac58  d9e8                 fld1 
// 0050ac5a  d9583c               fstp dword ptr [eax + 0x3c]
// 0050ac5d  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ??0Matrix4@G3D@@QAE@ABVCoordinateFrame@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
