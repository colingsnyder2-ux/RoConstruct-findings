// roc 2008-06 0056b620  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056b620
//
// 0056b620  83ec10               sub esp, 0x10
// 0056b623  56                   push esi
// 0056b624  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056b628  85f6                 test esi, esi
// 0056b62a  7509                 jne 0x56b635
// 0056b62c  33c0                 xor eax, eax
// 0056b62e  5e                   pop esi
// 0056b62f  83c410               add esp, 0x10
// 0056b632  c20400               ret 4
// 0056b635  8b4604               mov eax, dword ptr [esi + 4]
// 0056b638  85c0                 test eax, eax
// 0056b63a  74f0                 je 0x56b62c
// 0056b63c  894c2418             mov dword ptr [esp + 0x18], ecx
// 0056b640  57                   push edi
// 0056b641  8d4c241c             lea ecx, [esp + 0x1c]
// 0056b645  51                   push ecx
// 0056b646  8d542414             lea edx, [esp + 0x14]
// 0056b64a  52                   push edx
// 0056b64b  8bc8                 mov ecx, eax
// 0056b64d  e87e650200           call 0x591bd0
// 0056b652  8b08                 mov ecx, dword ptr [eax]
// 0056b654  8b7804               mov edi, dword ptr [eax + 4]
// 0056b657  8b4604               mov eax, dword ptr [esi + 4]
// 0056b65a  8b7018               mov esi, dword ptr [eax + 0x18]
// 0056b65d  8b00                 mov eax, dword ptr [eax]
// 0056b65f  894c2408             mov dword ptr [esp + 8], ecx
// 0056b663  897c240c             mov dword ptr [esp + 0xc], edi
// 0056b667  85c9                 test ecx, ecx
// 0056b669  7404                 je 0x56b66f
// 0056b66b  3bc8                 cmp ecx, eax
// 0056b66d  7406                 je 0x56b675
// 0056b66f  ff1590288000         call dword ptr [0x802890]
// 0056b675  3bfe                 cmp edi, esi
// 0056b677  5f                   pop edi
// 0056b678  74b2                 je 0x56b62c
// 0056b67a  8d4c2404             lea ecx, [esp + 4]
// 0056b67e  e86dd11000           call 0x6787f0
// 0056b683  83c004               add eax, 4
// 0056b686  8b00                 mov eax, dword ptr [eax]
// 0056b688  5e                   pop esi
// 0056b689  83c410               add esp, 0x10
// 0056b68c  c20400               ret 4
// library openrbx-client/App\reflection\signal.cpp (function ?findSignalInstance@SignalDescriptor@Reflection@RBX@@IBEPAVSignalInstance@23@PBVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/signal.cpp
