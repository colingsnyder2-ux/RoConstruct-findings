// roc 2008-06 0056b530  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056b530
//
// 0056b530  64a100000000         mov eax, dword ptr fs:[0]
// 0056b536  6aff                 push -1
// 0056b538  689efa7c00           push 0x7cfa9e
// 0056b53d  50                   push eax
// 0056b53e  b801000000           mov eax, 1
// 0056b543  64892500000000       mov dword ptr fs:[0], esp
// 0056b54a  8405d04a9700         test byte ptr [0x974ad0], al
// 0056b550  7525                 jne 0x56b577
// 0056b552  0905d04a9700         or dword ptr [0x974ad0], eax
// 0056b558  b9c44a9700           mov ecx, 0x974ac4
// 0056b55d  c744240800000000     mov dword ptr [esp + 8], 0
// 0056b565  e8067bffff           call 0x563070
// 0056b56a  6850d17f00           push 0x7fd150
// 0056b56f  e83b621300           call 0x6a17af
// 0056b574  83c404               add esp, 4
// 0056b577  8b0c24               mov ecx, dword ptr [esp]
// 0056b57a  b8c44a9700           mov eax, 0x974ac4
// 0056b57f  64890d00000000       mov dword ptr fs:[0], ecx
// 0056b586  83c40c               add esp, 0xc
// 0056b589  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
