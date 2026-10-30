// from server: 100% by auto
// roc 2007-08 00665440  unit: CXTTreeBase  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00665440
//
// 00665440  53                   push ebx
// 00665441  56                   push esi
// 00665442  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00665446  57                   push edi
// 00665447  8bf9                 mov edi, ecx
// 00665449  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0066544c  56                   push esi
// 0066544d  e806320d00           call 0x738658
// 00665452  85c0                 test eax, eax
// 00665454  8b1dd8ec7700         mov ebx, dword ptr [0x77ecd8]
// 0066545a  7415                 je 0x665471
// 0066545c  8b4734               mov eax, dword ptr [edi + 0x34]
// 0066545f  8b4020               mov eax, dword ptr [eax + 0x20]
// 00665462  56                   push esi
// 00665463  6a04                 push 4
// 00665465  680a110000           push 0x110a
// 0066546a  50                   push eax
// 0066546b  ffd3                 call ebx
// 0066546d  85c0                 test eax, eax
// 0066546f  7549                 jne 0x6654ba
// 00665471  8b4734               mov eax, dword ptr [edi + 0x34]
// 00665474  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00665477  56                   push esi
// 00665478  6a01                 push 1
// 0066547a  680a110000           push 0x110a
// 0066547f  51                   push ecx
// 00665480  ffd3                 call ebx
// 00665482  85c0                 test eax, eax
// 00665484  7534                 jne 0x6654ba
// 00665486  8b4734               mov eax, dword ptr [edi + 0x34]
// 00665489  8b5020               mov edx, dword ptr [eax + 0x20]
// 0066548c  56                   push esi
// 0066548d  6a03                 push 3
// 0066548f  680a110000           push 0x110a
// 00665494  52                   push edx
// 00665495  ffd3                 call ebx
// 00665497  8bf0                 mov esi, eax
// 00665499  85f6                 test esi, esi
// 0066549b  741b                 je 0x6654b8
// 0066549d  8b4734               mov eax, dword ptr [edi + 0x34]
// 006654a0  8b4020               mov eax, dword ptr [eax + 0x20]
// 006654a3  56                   push esi
// 006654a4  6a01                 push 1
// 006654a6  680a110000           push 0x110a
// 006654ab  50                   push eax
// 006654ac  ffd3                 call ebx
// 006654ae  85c0                 test eax, eax
// 006654b0  74d4                 je 0x665486
// 006654b2  5f                   pop edi
// 006654b3  5e                   pop esi
// 006654b4  5b                   pop ebx
// 006654b5  c20400               ret 4
// 006654b8  33c0                 xor eax, eax
// 006654ba  5f                   pop edi
// 006654bb  5e                   pop esi
// 006654bc  5b                   pop ebx
// 006654bd  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetNextItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
