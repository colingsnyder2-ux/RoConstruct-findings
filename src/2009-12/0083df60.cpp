// roc 2009-12 0083df60  unit: CXTPCustomizeSheet  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083df60
//
// 0083df60  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 0083df66  57                   push edi
// 0083df67  8b7858               mov edi, dword ptr [eax + 0x58]
// 0083df6a  57                   push edi
// 0083df6b  e8f0feffff           call 0x83de60
// 0083df70  85c0                 test eax, eax
// 0083df72  742f                 je 0x83dfa3
// 0083df74  53                   push ebx
// 0083df75  56                   push esi
// 0083df76  8b742410             mov esi, dword ptr [esp + 0x10]
// 0083df7a  8b16                 mov edx, dword ptr [esi]
// 0083df7c  8b02                 mov eax, dword ptr [edx]
// 0083df7e  6a01                 push 1
// 0083df80  8bce                 mov ecx, esi
// 0083df82  ffd0                 call eax
// 0083df84  8b1e                 mov ebx, dword ptr [esi]
// 0083df86  8bcf                 mov ecx, edi
// 0083df88  e8037dfbff           call 0x7f5c90
// 0083df8d  8b5304               mov edx, dword ptr [ebx + 4]
// 0083df90  33c9                 xor ecx, ecx
// 0083df92  83f803               cmp eax, 3
// 0083df95  0f94c1               sete cl
// 0083df98  51                   push ecx
// 0083df99  8bce                 mov ecx, esi
// 0083df9b  ffd2                 call edx
// 0083df9d  5e                   pop esi
// 0083df9e  5b                   pop ebx
// 0083df9f  5f                   pop edi
// 0083dfa0  c20400               ret 4
// 0083dfa3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0083dfa7  8b01                 mov eax, dword ptr [ecx]
// 0083dfa9  8b10                 mov edx, dword ptr [eax]
// 0083dfab  5f                   pop edi
// 0083dfac  c744240400000000     mov dword ptr [esp + 4], 0
// 0083dfb4  ffe2                 jmp edx
// copied from an identical function in another client (function ?OnUpdateCustomizeImageAndText@CXTPCustomizeSheet@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp