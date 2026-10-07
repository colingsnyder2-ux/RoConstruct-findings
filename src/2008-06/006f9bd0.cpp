// roc 2008-06 006f9bd0  unit: CXTPCompatibleDC  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f9bd0
//
// 006f9bd0  b801000000           mov eax, 1
// 006f9bd5  840514e99700         test byte ptr [0x97e914], al
// 006f9bdb  751d                 jne 0x6f9bfa
// 006f9bdd  090514e99700         or dword ptr [0x97e914], eax
// 006f9be3  b900e99700           mov ecx, 0x97e900
// 006f9be8  e823cfffff           call 0x6f6b10
// 006f9bed  6830188000           push 0x801830
// 006f9bf2  e8b87bfaff           call 0x6a17af
// 006f9bf7  83c404               add esp, 4
// 006f9bfa  b800e99700           mov eax, 0x97e900
// 006f9bff  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
