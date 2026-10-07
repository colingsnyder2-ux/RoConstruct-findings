// roc 2008-06 00595500  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595500
//
// 00595500  51                   push ecx
// 00595501  8b442408             mov eax, dword ptr [esp + 8]
// 00595505  c6411001             mov byte ptr [ecx + 0x10], 1
// 00595509  8b5104               mov edx, dword ptr [ecx + 4]
// 0059550c  895004               mov dword ptr [eax + 4], edx
// 0059550f  8b5108               mov edx, dword ptr [ecx + 8]
// 00595512  c7042400000000       mov dword ptr [esp], 0
// 00595519  895008               mov dword ptr [eax + 8], edx
// 0059551c  85d2                 test edx, edx
// 0059551e  740e                 je 0x59552e
// 00595520  56                   push esi
// 00595521  83c204               add edx, 4
// 00595524  be01000000           mov esi, 1
// 00595529  f00fc132             lock xadd dword ptr [edx], esi
// 0059552d  5e                   pop esi
// 0059552e  8a490c               mov cl, byte ptr [ecx + 0xc]
// 00595531  88480c               mov byte ptr [eax + 0xc], cl
// 00595534  59                   pop ecx
// 00595535  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ?release@scoped_connection@signals@boost@@QAE?AVconnection@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
