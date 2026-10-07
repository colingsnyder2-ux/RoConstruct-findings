// roc 2011-06 00516710  unit: RBX::Network::NetworkOwnerJob  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00516710
//
// 00516710  53                   push ebx
// 00516711  57                   push edi
// 00516712  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00516716  8bd9                 mov ebx, ecx
// 00516718  85ff                 test edi, edi
// 0051671a  7435                 je 0x516751
// 0051671c  803f00               cmp byte ptr [edi], 0
// 0051671f  7430                 je 0x516751
// 00516721  8bc7                 mov eax, edi
// 00516723  8d5001               lea edx, [eax + 1]
// 00516726  8a08                 mov cl, byte ptr [eax]
// 00516728  40                   inc eax
// 00516729  84c9                 test cl, cl
// 0051672b  75f9                 jne 0x516726
// 0051672d  56                   push esi
// 0051672e  2bc2                 sub eax, edx
// 00516730  8d7001               lea esi, [eax + 1]
// 00516733  56                   push esi
// 00516734  8bcb                 mov ecx, ebx
// 00516736  e855feffff           call 0x516590
// 0051673b  8b03                 mov eax, dword ptr [ebx]
// 0051673d  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00516740  56                   push esi
// 00516741  57                   push edi
// 00516742  51                   push ecx
// 00516743  e8944e2f00           call 0x80b5dc
// 00516748  83c40c               add esp, 0xc
// 0051674b  5e                   pop esi
// 0051674c  5f                   pop edi
// 0051674d  5b                   pop ebx
// 0051674e  c20400               ret 4
// 00516751  5f                   pop edi
// 00516752  c703a8eec200         mov dword ptr [ebx], 0xc2eea8
// 00516758  5b                   pop ebx
// 00516759  c20400               ret 4
// library rbx2016-raknet/RakString.cpp (function ?Assign@RakString@RakNet@@IAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakString.cpp
