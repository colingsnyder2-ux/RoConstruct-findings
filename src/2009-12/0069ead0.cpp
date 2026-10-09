// roc 2009-12 0069ead0  unit: std::strstream  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069ead0
//
// 0069ead0  8b442404             mov eax, dword ptr [esp + 4]
// 0069ead4  8b542408             mov edx, dword ptr [esp + 8]
// 0069ead8  8901                 mov dword ptr [ecx], eax
// 0069eada  895104               mov dword ptr [ecx + 4], edx
// 0069eadd  c20800               ret 8
// library openrbx-client/App\util\Guid.cpp (function ?assign@Guid@RBX@@QAEXUData@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
