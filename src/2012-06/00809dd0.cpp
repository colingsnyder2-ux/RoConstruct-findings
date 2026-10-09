// roc 2012-06 00809dd0  unit: RBX::InsertService  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00809dd0
//
// 00809dd0  68309d8000           push 0x809d30
// 00809dd5  68bcfbe400           push 0xe4fbbc
// 00809dda  e8c177bfff           call 0x4015a0
// 00809ddf  a1c4fbe400           mov eax, dword ptr [0xe4fbc4]
// 00809de4  83c408               add esp, 8
// 00809de7  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
