// from server: 100% by auto
// roc 2012-06 00850e80  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00850e80
//
// 00850e80  56                   push esi
// 00850e81  8b742408             mov esi, dword ptr [esp + 8]
// 00850e85  8b4674               mov eax, dword ptr [esi + 0x74]
// 00850e88  85c0                 test eax, eax
// 00850e8a  746e                 je 0x850efa
// 00850e8c  57                   push edi
// 00850e8d  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00850e90  03f8                 add edi, eax
// 00850e92  837f0806             cmp dword ptr [edi + 8], 6
// 00850e96  740b                 je 0x850ea3
// 00850e98  6a05                 push 5
// 00850e9a  56                   push esi
// 00850e9b  e8e03d0000           call 0x854c80
// 00850ea0  83c408               add esp, 8
// 00850ea3  8b4608               mov eax, dword ptr [esi + 8]
// 00850ea6  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 00850ea9  8908                 mov dword ptr [eax], ecx
// 00850eab  8b50f4               mov edx, dword ptr [eax - 0xc]
// 00850eae  895004               mov dword ptr [eax + 4], edx
// 00850eb1  8b48f8               mov ecx, dword ptr [eax - 8]
// 00850eb4  894808               mov dword ptr [eax + 8], ecx
// 00850eb7  8b4608               mov eax, dword ptr [esi + 8]
// 00850eba  8b17                 mov edx, dword ptr [edi]
// 00850ebc  83e810               sub eax, 0x10
// 00850ebf  8910                 mov dword ptr [eax], edx
// 00850ec1  8b4f04               mov ecx, dword ptr [edi + 4]
// 00850ec4  894804               mov dword ptr [eax + 4], ecx
// 00850ec7  8b5708               mov edx, dword ptr [edi + 8]
// 00850eca  895008               mov dword ptr [eax + 8], edx
// 00850ecd  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00850ed0  2b4608               sub eax, dword ptr [esi + 8]
// 00850ed3  5f                   pop edi
// 00850ed4  83f810               cmp eax, 0x10
// 00850ed7  7f0b                 jg 0x850ee4
// 00850ed9  6a01                 push 1
// 00850edb  56                   push esi
// 00850edc  e87f380000           call 0x854760
// 00850ee1  83c408               add esp, 8
// 00850ee4  83460810             add dword ptr [esi + 8], 0x10
// 00850ee8  8b4608               mov eax, dword ptr [esi + 8]
// 00850eeb  6a01                 push 1
// 00850eed  83c0e0               add eax, -0x20
// 00850ef0  50                   push eax
// 00850ef1  56                   push esi
// 00850ef2  e839400000           call 0x854f30
// 00850ef7  83c40c               add esp, 0xc
// 00850efa  6a02                 push 2
// 00850efc  56                   push esi
// 00850efd  e87e3d0000           call 0x854c80
// 00850f02  83c408               add esp, 8
// 00850f05  5e                   pop esi
// 00850f06  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_errormsg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
