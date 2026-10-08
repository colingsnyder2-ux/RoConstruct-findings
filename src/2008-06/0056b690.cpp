// from server: 100% by auto
// roc 2008-06 0056b690  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056b690
//
// 0056b690  64a100000000         mov eax, dword ptr fs:[0]
// 0056b696  6aff                 push -1
// 0056b698  68cefa7c00           push 0x7cface
// 0056b69d  50                   push eax
// 0056b69e  b801000000           mov eax, 1
// 0056b6a3  64892500000000       mov dword ptr fs:[0], esp
// 0056b6aa  8405ec4a9700         test byte ptr [0x974aec], al
// 0056b6b0  7525                 jne 0x56b6d7
// 0056b6b2  0905ec4a9700         or dword ptr [0x974aec], eax
// 0056b6b8  b9d44a9700           mov ecx, 0x974ad4
// 0056b6bd  c744240800000000     mov dword ptr [esp + 8], 0
// 0056b6c5  e806ddebff           call 0x4293d0
// 0056b6ca  6860d17f00           push 0x7fd160
// 0056b6cf  e8db601300           call 0x6a17af
// 0056b6d4  83c404               add esp, 4
// 0056b6d7  8b0c24               mov ecx, dword ptr [esp]
// 0056b6da  b8d44a9700           mov eax, 0x974ad4
// 0056b6df  64890d00000000       mov dword ptr fs:[0], ecx
// 0056b6e6  83c40c               add esp, 0xc
// 0056b6e9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
