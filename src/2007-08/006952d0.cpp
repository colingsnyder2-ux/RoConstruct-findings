// from server: 100% by auto
// roc 2007-08 006952d0  unit: CXTPToolTipContextToolTip::PAUTOOLITEM::?$CArray  size: 277 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006952d0
//
// 006952d0  83ec18               sub esp, 0x18
// 006952d3  55                   push ebp
// 006952d4  56                   push esi
// 006952d5  8b354cec7700         mov esi, dword ptr [0x77ec4c]
// 006952db  6a01                 push 1
// 006952dd  8be9                 mov ebp, ecx
// 006952df  ffd6                 call esi
// 006952e1  6685c0               test ax, ax
// 006952e4  0f8cf3000000         jl 0x6953dd
// 006952ea  6a02                 push 2
// 006952ec  ffd6                 call esi
// 006952ee  6685c0               test ax, ax
// 006952f1  0f8ce6000000         jl 0x6953dd
// 006952f7  6a04                 push 4
// 006952f9  ffd6                 call esi
// 006952fb  6685c0               test ax, ax
// 006952fe  0f8cd9000000         jl 0x6953dd
// 00695304  53                   push ebx
// 00695305  57                   push edi
// 00695306  8d442410             lea eax, [esp + 0x10]
// 0069530a  50                   push eax
// 0069530b  ff1554ec7700         call dword ptr [0x77ec54]
// 00695311  33ff                 xor edi, edi
// 00695313  397d5c               cmp dword ptr [ebp + 0x5c], edi
// 00695316  0f8ea8000000         jle 0x6953c4
// 0069531c  8b1dbced7700         mov ebx, dword ptr [0x77edbc]
// 00695322  85ff                 test edi, edi
// 00695324  0f8cae000000         jl 0x6953d8
// 0069532a  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 0069532d  0f8da5000000         jge 0x6953d8
// 00695333  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 00695336  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 00695339  8b5620               mov edx, dword ptr [esi + 0x20]
// 0069533c  52                   push edx
// 0069533d  ffd3                 call ebx
// 0069533f  85c0                 test eax, eax
// 00695341  7475                 je 0x6953b8
// 00695343  8b4620               mov eax, dword ptr [esi + 0x20]
// 00695346  50                   push eax
// 00695347  e874aef9ff           call 0x6301c0
// 0069534c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0069534f  894c2418             mov dword ptr [esp + 0x18], ecx
// 00695353  8b5610               mov edx, dword ptr [esi + 0x10]
// 00695356  8954241c             mov dword ptr [esp + 0x1c], edx
// 0069535a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0069535d  894c2420             mov dword ptr [esp + 0x20], ecx
// 00695361  8b5618               mov edx, dword ptr [esi + 0x18]
// 00695364  89542424             mov dword ptr [esp + 0x24], edx
// 00695368  f6460801             test byte ptr [esi + 8], 1
// 0069536c  8d4c2418             lea ecx, [esp + 0x18]
// 00695370  51                   push ecx
// 00695371  740c                 je 0x69537f
// 00695373  8b5020               mov edx, dword ptr [eax + 0x20]
// 00695376  52                   push edx
// 00695377  ff15d4ed7700         call dword ptr [0x77edd4]
// 0069537d  eb07                 jmp 0x695386
// 0069537f  8bc8                 mov ecx, eax
// 00695381  e888aef9ff           call 0x63020e
// 00695386  8b542414             mov edx, dword ptr [esp + 0x14]
// 0069538a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0069538e  52                   push edx
// 0069538f  50                   push eax
// 00695390  8d4c2420             lea ecx, [esp + 0x20]
// 00695394  51                   push ecx
// 00695395  ff1594ed7700         call dword ptr [0x77ed94]
// 0069539b  85c0                 test eax, eax
// 0069539d  7419                 je 0x6953b8
// 0069539f  f6460801             test byte ptr [esi + 8], 1
// 006953a3  7529                 jne 0x6953ce
// 006953a5  8d542410             lea edx, [esp + 0x10]
// 006953a9  52                   push edx
// 006953aa  6a00                 push 0
// 006953ac  8bcd                 mov ecx, ebp
// 006953ae  e87de9ffff           call 0x693d30
// 006953b3  3b4620               cmp eax, dword ptr [esi + 0x20]
// 006953b6  7416                 je 0x6953ce
// 006953b8  83c701               add edi, 1
// 006953bb  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 006953be  0f8c5effffff         jl 0x695322
// 006953c4  5f                   pop edi
// 006953c5  5b                   pop ebx
// 006953c6  5e                   pop esi
// 006953c7  33c0                 xor eax, eax
// 006953c9  5d                   pop ebp
// 006953ca  83c418               add esp, 0x18
// 006953cd  c3                   ret 
// 006953ce  5f                   pop edi
// 006953cf  5b                   pop ebx
// 006953d0  8bc6                 mov eax, esi
// 006953d2  5e                   pop esi
// 006953d3  5d                   pop ebp
// 006953d4  83c418               add esp, 0x18
// 006953d7  c3                   ret 
// 006953d8  e943abf9ff           jmp 0x62ff20
// 006953dd  5e                   pop esi
// 006953de  33c0                 xor eax, eax
// 006953e0  5d                   pop ebp
// 006953e1  83c418               add esp, 0x18
// 006953e4  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?FindTool@CXTPToolTipContextToolTip@@IAEPAUTOOLITEM@1@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp
