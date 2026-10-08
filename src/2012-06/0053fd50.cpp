// roc 2012-06 0053fd50  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0053fd50
//
// 0053fd50  56                   push esi
// 0053fd51  6a01                 push 1
// 0053fd53  682821d800           push 0xd82128
// 0053fd58  8bf1                 mov esi, ecx
// 0053fd5a  ff156029b200         call dword ptr [0xb22960]
// 0053fd60  c706942eb400         mov dword ptr [esi], 0xb42e94
// 0053fd66  8bc6                 mov eax, esi
// 0053fd68  5e                   pop esi
// 0053fd69  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0bad_alloc@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
