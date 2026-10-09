// roc 2008-06 00658880  unit: RBX::ArrowButton  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00658880
//
// 00658880  6840d99700           push 0x97d940
// 00658885  68e0876500           push 0x6587e0
// 0065888a  e8a1eaefff           call 0x557330
// 0065888f  a144d99700           mov eax, dword ptr [0x97d944]
// 00658894  83c408               add esp, 8
// 00658897  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
