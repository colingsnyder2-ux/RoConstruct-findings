// roc 2012-06 005bb410  unit: RakNet::RakPeer  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bb410
//
// 005bb410  56                   push esi
// 005bb411  57                   push edi
// 005bb412  8bf1                 mov esi, ecx
// 005bb414  33ff                 xor edi, edi
// 005bb416  39be34020000         cmp dword ptr [esi + 0x234], edi
// 005bb41c  7644                 jbe 0x5bb462
// 005bb41e  53                   push ebx
// 005bb41f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005bb423  8b8630020000         mov eax, dword ptr [esi + 0x230]
// 005bb429  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005bb42c  53                   push ebx
// 005bb42d  8d4804               lea ecx, [eax + 4]
// 005bb430  e86b64faff           call 0x5618a0
// 005bb435  84c0                 test al, al
// 005bb437  750f                 jne 0x5bb448
// 005bb439  47                   inc edi
// 005bb43a  3bbe34020000         cmp edi, dword ptr [esi + 0x234]
// 005bb440  72e1                 jb 0x5bb423
// 005bb442  5b                   pop ebx
// 005bb443  5f                   pop edi
// 005bb444  5e                   pop esi
// 005bb445  c20400               ret 4
// 005bb448  8b8e34020000         mov ecx, dword ptr [esi + 0x234]
// 005bb44e  8b8630020000         mov eax, dword ptr [esi + 0x230]
// 005bb454  8b5488fc             mov edx, dword ptr [eax + ecx*4 - 4]
// 005bb458  8914b8               mov dword ptr [eax + edi*4], edx
// 005bb45b  ff8e34020000         dec dword ptr [esi + 0x234]
// 005bb461  5b                   pop ebx
// 005bb462  5f                   pop edi
// 005bb463  5e                   pop esi
// 005bb464  c20400               ret 4
// library rbx2016-raknet/RakPeer.cpp (function ?RemoveFromActiveSystemList@RakPeer@RakNet@@IAEXABUSystemAddress@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
