// roc 2008-06 0049a770  unit: RBX::VInstance::V?$shared_ptr::V?$vector::?$sp_counted_impl_p  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049a770
//
// 0049a770  6aff                 push -1
// 0049a772  68c0987d00           push 0x7d98c0
// 0049a777  64a100000000         mov eax, dword ptr fs:[0]
// 0049a77d  50                   push eax
// 0049a77e  64892500000000       mov dword ptr fs:[0], esp
// 0049a785  83ec18               sub esp, 0x18
// 0049a788  56                   push esi
// 0049a789  8bf1                 mov esi, ecx
// 0049a78b  6a01                 push 1
// 0049a78d  8d4c2408             lea ecx, [esp + 8]
// 0049a791  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0049a799  e8d209f8ff           call 0x41b170
// 0049a79e  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049a7a2  2b442410             sub eax, dword ptr [esp + 0x10]
// 0049a7a6  c644242401           mov byte ptr [esp + 0x24], 1
// 0049a7ab  c1f802               sar eax, 2
// 0049a7ae  85c0                 test eax, eax
// 0049a7b0  7706                 ja 0x49a7b8
// 0049a7b2  ff1590288000         call dword ptr [0x802890]
// 0049a7b8  8d4c242c             lea ecx, [esp + 0x2c]
// 0049a7bc  51                   push ecx
// 0049a7bd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0049a7c1  e83a35ffff           call 0x48dd00
// 0049a7c6  8b0e                 mov ecx, dword ptr [esi]
// 0049a7c8  8b11                 mov edx, dword ptr [ecx]
// 0049a7ca  8b5204               mov edx, dword ptr [edx + 4]
// 0049a7cd  8d442404             lea eax, [esp + 4]
// 0049a7d1  50                   push eax
// 0049a7d2  ffd2                 call edx
// 0049a7d4  8d4c2404             lea ecx, [esp + 4]
// 0049a7d8  c644242400           mov byte ptr [esp + 0x24], 0
// 0049a7dd  e83e07f8ff           call 0x41af20
// 0049a7e2  8b442430             mov eax, dword ptr [esp + 0x30]
// 0049a7e6  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0049a7ee  85c0                 test eax, eax
// 0049a7f0  742c                 je 0x49a81e
// 0049a7f2  8bf0                 mov esi, eax
// 0049a7f4  83c004               add eax, 4
// 0049a7f7  83c9ff               or ecx, 0xffffffff
// 0049a7fa  f00fc108             lock xadd dword ptr [eax], ecx
// 0049a7fe  751e                 jne 0x49a81e
// 0049a800  8b16                 mov edx, dword ptr [esi]
// 0049a802  8b4204               mov eax, dword ptr [edx + 4]
// 0049a805  8bce                 mov ecx, esi
// 0049a807  ffd0                 call eax
// 0049a809  8d4e08               lea ecx, [esi + 8]
// 0049a80c  83caff               or edx, 0xffffffff
// 0049a80f  f00fc111             lock xadd dword ptr [ecx], edx
// 0049a813  7509                 jne 0x49a81e
// 0049a815  8b06                 mov eax, dword ptr [esi]
// 0049a817  8b5008               mov edx, dword ptr [eax + 8]
// 0049a81a  8bce                 mov ecx, esi
// 0049a81c  ffd2                 call edx
// 0049a81e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0049a822  5e                   pop esi
// 0049a823  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a82a  83c424               add esp, 0x24
// 0049a82d  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ??RGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@RBX@@QBEXV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
