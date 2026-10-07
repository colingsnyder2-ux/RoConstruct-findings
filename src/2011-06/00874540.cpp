// roc 2011-06 00874540  unit: CXTPToolTipContext  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00874540
//
// 00874540  837c240400           cmp dword ptr [esp + 4], 0
// 00874545  56                   push esi
// 00874546  8bf1                 mov esi, ecx
// 00874548  7437                 je 0x874581
// 0087454a  833d8c8ad10000       cmp dword ptr [0xd18a8c], 0
// 00874551  755a                 jne 0x8745ad
// 00874553  833d908ad10000       cmp dword ptr [0xd18a90], 0
// 0087455a  7551                 jne 0x8745ad
// 0087455c  ff157003a400         call dword ptr [0xa40370]
// 00874562  50                   push eax
// 00874563  6a00                 push 0
// 00874565  6890448700           push 0x874490
// 0087456a  6a07                 push 7
// 0087456c  ff15001ba400         call dword ptr [0xa41b00]
// 00874572  8935908ad100         mov dword ptr [0xd18a90], esi
// 00874578  a38c8ad100           mov dword ptr [0xd18a8c], eax
// 0087457d  5e                   pop esi
// 0087457e  c20400               ret 4
// 00874581  a18c8ad100           mov eax, dword ptr [0xd18a8c]
// 00874586  85c0                 test eax, eax
// 00874588  7423                 je 0x8745ad
// 0087458a  3935908ad100         cmp dword ptr [0xd18a90], esi
// 00874590  751b                 jne 0x8745ad
// 00874592  50                   push eax
// 00874593  ff15041ba400         call dword ptr [0xa41b04]
// 00874599  c7058c8ad10000000000 mov dword ptr [0xd18a8c], 0
// 008745a3  c705908ad10000000000 mov dword ptr [0xd18a90], 0
// 008745ad  5e                   pop esi
// 008745ae  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?HookMouseMove@CXTPToolTipContextToolTip@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
