// roc 2008-06 005dd280  unit: RBX::Message  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd280
//
// 005dd280  53                   push ebx
// 005dd281  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005dd285  56                   push esi
// 005dd286  57                   push edi
// 005dd287  8bf1                 mov esi, ecx
// 005dd289  8dbe40010000         lea edi, [esi + 0x140]
// 005dd28f  53                   push ebx
// 005dd290  57                   push edi
// 005dd291  ff15d8238000         call dword ptr [0x8023d8]
// 005dd297  83c408               add esp, 8
// 005dd29a  84c0                 test al, al
// 005dd29c  7415                 je 0x5dd2b3
// 005dd29e  53                   push ebx
// 005dd29f  8bcf                 mov ecx, edi
// 005dd2a1  ff150c248000         call dword ptr [0x80240c]
// 005dd2a7  6868a69700           push 0x97a668
// 005dd2ac  8bce                 mov ecx, esi
// 005dd2ae  e84d08e3ff           call 0x40db00
// 005dd2b3  5f                   pop edi
// 005dd2b4  5e                   pop esi
// 005dd2b5  5b                   pop ebx
// 005dd2b6  c20400               ret 4
// library openrbx-client/App\v8datamodel\Message.cpp (function ?setText@Message@RBX@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Message.cpp
