// roc 2008-06 0056b500  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056b500
//
// 0056b500  8b442408             mov eax, dword ptr [esp + 8]
// 0056b504  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056b508  8b4004               mov eax, dword ptr [eax + 4]
// 0056b50b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0056b50e  3bc8                 cmp ecx, eax
// 0056b510  741b                 je 0x56b52d
// 0056b512  83c004               add eax, 4
// 0056b515  50                   push eax
// 0056b516  83c104               add ecx, 4
// 0056b519  51                   push ecx
// 0056b51a  ff155c238000         call dword ptr [0x80235c]
// 0056b520  83c408               add esp, 8
// 0056b523  84c0                 test al, al
// 0056b525  7406                 je 0x56b52d
// 0056b527  b801000000           mov eax, 1
// 0056b52c  c3                   ret 
// 0056b52d  33c0                 xor eax, eax
// 0056b52f  c3                   ret 
// library openrbx-client/App\reflection\reflection_function.cpp (function ?compare@?$MemberDescriptorContainer@VFunctionDescriptor@Reflection@RBX@@@Reflection@RBX@@SA_NPBVFunctionDescriptor@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/reflection_function.cpp
