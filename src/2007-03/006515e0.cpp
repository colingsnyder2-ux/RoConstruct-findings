// roc 2007-03 006515e0  unit: seg_00650000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006515e0
//
// 006515e0  53                   push ebx
// 006515e1  8b1d50ee7700         mov ebx, dword ptr [0x77ee50]
// 006515e7  56                   push esi
// 006515e8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006515ec  85f6                 test esi, esi
// 006515ee  57                   push edi
// 006515ef  8bf9                 mov edi, ecx
// 006515f1  7514                 jne 0x651607
// 006515f3  8b4734               mov eax, dword ptr [edi + 0x34]
// 006515f6  8b4020               mov eax, dword ptr [eax + 0x20]
// 006515f9  6a00                 push 0
// 006515fb  6a00                 push 0
// 006515fd  680a110000           push 0x110a
// 00651602  50                   push eax
// 00651603  ffd3                 call ebx
// 00651605  8bf0                 mov esi, eax
// 00651607  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0065160a  56                   push esi
// 0065160b  e894970e00           call 0x73ada4
// 00651610  85c0                 test eax, eax
// 00651612  7440                 je 0x651654
// 00651614  8b4734               mov eax, dword ptr [edi + 0x34]
// 00651617  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0065161a  56                   push esi
// 0065161b  6a04                 push 4
// 0065161d  680a110000           push 0x110a
// 00651622  51                   push ecx
// 00651623  ffd3                 call ebx
// 00651625  85c0                 test eax, eax
// 00651627  741e                 je 0x651647
// 00651629  8da42400000000       lea esp, [esp]
// 00651630  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00651633  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00651636  50                   push eax
// 00651637  6a01                 push 1
// 00651639  680a110000           push 0x110a
// 0065163e  52                   push edx
// 0065163f  8bf0                 mov esi, eax
// 00651641  ffd3                 call ebx
// 00651643  85c0                 test eax, eax
// 00651645  75e9                 jne 0x651630
// 00651647  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0065164a  56                   push esi
// 0065164b  e854970e00           call 0x73ada4
// 00651650  85c0                 test eax, eax
// 00651652  75c0                 jne 0x651614
// 00651654  5f                   pop edi
// 00651655  8bc6                 mov eax, esi
// 00651657  5e                   pop esi
// 00651658  5b                   pop ebx
// 00651659  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetLastItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
