// from server: 100% by auto
// roc 2012-06 009de420  unit: CXTPTabClientWnd  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009de420
//
// 009de420  56                   push esi
// 009de421  8bf1                 mov esi, ecx
// 009de423  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 009de42a  57                   push edi
// 009de42b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009de42f  7455                 je 0x9de486
// 009de431  8b4704               mov eax, dword ptr [edi + 4]
// 009de434  3d01020000           cmp eax, 0x201
// 009de439  741c                 je 0x9de457
// 009de43b  3d04020000           cmp eax, 0x204
// 009de440  7415                 je 0x9de457
// 009de442  3d07020000           cmp eax, 0x207
// 009de447  740e                 je 0x9de457
// 009de449  3d03020000           cmp eax, 0x203
// 009de44e  7407                 je 0x9de457
// 009de450  3d06020000           cmp eax, 0x206
// 009de455  752f                 jne 0x9de486
// 009de457  8b0f                 mov ecx, dword ptr [edi]
// 009de459  3b4e20               cmp ecx, dword ptr [esi + 0x20]
// 009de45c  7528                 jne 0x9de486
// 009de45e  8b570c               mov edx, dword ptr [edi + 0xc]
// 009de461  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 009de467  52                   push edx
// 009de468  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009de46b  50                   push eax
// 009de46c  6868280000           push 0x2868
// 009de471  52                   push edx
// 009de472  ff15043cb200         call dword ptr [0xb23c04]
// 009de478  85c0                 test eax, eax
// 009de47a  740a                 je 0x9de486
// 009de47c  5f                   pop edi
// 009de47d  b801000000           mov eax, 1
// 009de482  5e                   pop esi
// 009de483  c20400               ret 4
// 009de486  57                   push edi
// 009de487  8bce                 mov ecx, esi
// 009de489  e88042faff           call 0x98270e
// 009de48e  5f                   pop edi
// 009de48f  5e                   pop esi
// 009de490  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?PreTranslateMessage@CXTPTabClientWnd@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
