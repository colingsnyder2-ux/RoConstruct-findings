// from server: 100% by auto
// roc 2007-08 00666230  unit: CRobloxTreeCtrl  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00666230
//
// 00666230  53                   push ebx
// 00666231  8b1dd8ec7700         mov ebx, dword ptr [0x77ecd8]
// 00666237  56                   push esi
// 00666238  57                   push edi
// 00666239  6a00                 push 0
// 0066623b  8bf9                 mov edi, ecx
// 0066623d  8b4734               mov eax, dword ptr [edi + 0x34]
// 00666240  8b4020               mov eax, dword ptr [eax + 0x20]
// 00666243  6a00                 push 0
// 00666245  680a110000           push 0x110a
// 0066624a  50                   push eax
// 0066624b  ffd3                 call ebx
// 0066624d  8bf0                 mov esi, eax
// 0066624f  85f6                 test esi, esi
// 00666251  0f84db000000         je 0x666332
// 00666257  55                   push ebp
// 00666258  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0066625c  8d642400             lea esp, [esp]
// 00666260  8b442414             mov eax, dword ptr [esp + 0x14]
// 00666264  3bf0                 cmp esi, eax
// 00666266  7442                 je 0x6662aa
// 00666268  3bf5                 cmp esi, ebp
// 0066626a  743e                 je 0x6662aa
// 0066626c  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00666271  741b                 je 0x66628e
// 00666273  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00666276  6a02                 push 2
// 00666278  56                   push esi
// 00666279  e8bc230d00           call 0x73863a
// 0066627e  a802                 test al, 2
// 00666280  740c                 je 0x66628e
// 00666282  6a02                 push 2
// 00666284  6a00                 push 0
// 00666286  56                   push esi
// 00666287  8bcf                 mov ecx, edi
// 00666289  e8a2f9ffff           call 0x665c30
// 0066628e  8b4734               mov eax, dword ptr [edi + 0x34]
// 00666291  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00666294  56                   push esi
// 00666295  6a06                 push 6
// 00666297  680a110000           push 0x110a
// 0066629c  51                   push ecx
// 0066629d  ffd3                 call ebx
// 0066629f  8bf0                 mov esi, eax
// 006662a1  85f6                 test esi, esi
// 006662a3  75bb                 jne 0x666260
// 006662a5  e987000000           jmp 0x666331
// 006662aa  3bc5                 cmp eax, ebp
// 006662ac  742e                 je 0x6662dc
// 006662ae  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006662b1  6a02                 push 2
// 006662b3  56                   push esi
// 006662b4  e881230d00           call 0x73863a
// 006662b9  a802                 test al, 2
// 006662bb  750c                 jne 0x6662c9
// 006662bd  6a02                 push 2
// 006662bf  6a02                 push 2
// 006662c1  56                   push esi
// 006662c2  8bcf                 mov ecx, edi
// 006662c4  e867f9ffff           call 0x665c30
// 006662c9  8b4734               mov eax, dword ptr [edi + 0x34]
// 006662cc  8b5020               mov edx, dword ptr [eax + 0x20]
// 006662cf  56                   push esi
// 006662d0  6a06                 push 6
// 006662d2  680a110000           push 0x110a
// 006662d7  52                   push edx
// 006662d8  ffd3                 call ebx
// 006662da  8bf0                 mov esi, eax
// 006662dc  85f6                 test esi, esi
// 006662de  7451                 je 0x666331
// 006662e0  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006662e3  6a02                 push 2
// 006662e5  56                   push esi
// 006662e6  e84f230d00           call 0x73863a
// 006662eb  a802                 test al, 2
// 006662ed  750c                 jne 0x6662fb
// 006662ef  6a02                 push 2
// 006662f1  6a02                 push 2
// 006662f3  56                   push esi
// 006662f4  8bcf                 mov ecx, edi
// 006662f6  e835f9ffff           call 0x665c30
// 006662fb  3b742414             cmp esi, dword ptr [esp + 0x14]
// 006662ff  741d                 je 0x66631e
// 00666301  3bf5                 cmp esi, ebp
// 00666303  7419                 je 0x66631e
// 00666305  8b4734               mov eax, dword ptr [edi + 0x34]
// 00666308  8b4020               mov eax, dword ptr [eax + 0x20]
// 0066630b  56                   push esi
// 0066630c  6a06                 push 6
// 0066630e  680a110000           push 0x110a
// 00666313  50                   push eax
// 00666314  ffd3                 call ebx
// 00666316  8bf0                 mov esi, eax
// 00666318  85f6                 test esi, esi
// 0066631a  75c4                 jne 0x6662e0
// 0066631c  eb13                 jmp 0x666331
// 0066631e  8b4734               mov eax, dword ptr [edi + 0x34]
// 00666321  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00666324  56                   push esi
// 00666325  6a06                 push 6
// 00666327  680a110000           push 0x110a
// 0066632c  51                   push ecx
// 0066632d  ffd3                 call ebx
// 0066632f  8bf0                 mov esi, eax
// 00666331  5d                   pop ebp
// 00666332  837c241800           cmp dword ptr [esp + 0x18], 0
// 00666337  7439                 je 0x666372
// 00666339  85f6                 test esi, esi
// 0066633b  7435                 je 0x666372
// 0066633d  8d4900               lea ecx, [ecx]
// 00666340  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00666343  6a02                 push 2
// 00666345  56                   push esi
// 00666346  e8ef220d00           call 0x73863a
// 0066634b  a802                 test al, 2
// 0066634d  740c                 je 0x66635b
// 0066634f  6a02                 push 2
// 00666351  6a00                 push 0
// 00666353  56                   push esi
// 00666354  8bcf                 mov ecx, edi
// 00666356  e8d5f8ffff           call 0x665c30
// 0066635b  8b4734               mov eax, dword ptr [edi + 0x34]
// 0066635e  8b5020               mov edx, dword ptr [eax + 0x20]
// 00666361  56                   push esi
// 00666362  6a06                 push 6
// 00666364  680a110000           push 0x110a
// 00666369  52                   push edx
// 0066636a  ffd3                 call ebx
// 0066636c  8bf0                 mov esi, eax
// 0066636e  85f6                 test esi, esi
// 00666370  75ce                 jne 0x666340
// 00666372  5f                   pop edi
// 00666373  5e                   pop esi
// 00666374  5b                   pop ebx
// 00666375  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?SelectItems@CXTTreeBase@@QAEXPAU_TREEITEM@@0H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
