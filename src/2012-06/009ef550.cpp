// roc 2012-06 009ef550  unit: CXTPPropertyGridView  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ef550
//
// 009ef550  51                   push ecx
// 009ef551  8b542408             mov edx, dword ptr [esp + 8]
// 009ef555  56                   push esi
// 009ef556  8bf1                 mov esi, ecx
// 009ef558  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009ef55c  8d442404             lea eax, [esp + 4]
// 009ef560  50                   push eax
// 009ef561  51                   push ecx
// 009ef562  52                   push edx
// 009ef563  8bce                 mov ecx, esi
// 009ef565  c744241000000000     mov dword ptr [esp + 0x10], 0
// 009ef56d  e84ea00a00           call 0xa995c0
// 009ef572  83f8ff               cmp eax, -1
// 009ef575  7414                 je 0x9ef58b
// 009ef577  837c240400           cmp dword ptr [esp + 4], 0
// 009ef57c  750d                 jne 0x9ef58b
// 009ef57e  50                   push eax
// 009ef57f  8bce                 mov ecx, esi
// 009ef581  e83affffff           call 0x9ef4c0
// 009ef586  5e                   pop esi
// 009ef587  59                   pop ecx
// 009ef588  c20800               ret 8
// 009ef58b  33c0                 xor eax, eax
// 009ef58d  5e                   pop esi
// 009ef58e  59                   pop ecx
// 009ef58f  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?ItemFromPoint@CXTPPropertyGridView@@QBEPAVCXTPPropertyGridItem@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
