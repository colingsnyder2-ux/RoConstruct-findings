// roc 2010-06 00402a40  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00402a40
//
// 00402a40  8b442404             mov eax, dword ptr [esp + 4]
// 00402a44  83f850               cmp eax, 0x50
// 00402a47  7713                 ja 0x402a5c
// 00402a49  0fb688742a4000       movzx ecx, byte ptr [eax + 0x402a74]
// 00402a50  ff248d642a4000       jmp dword ptr [ecx*4 + 0x402a64]
// 00402a57  e9f6513a00           jmp 0x7a7c52
// 00402a5c  e9eb513a00           jmp 0x7a7c4c
// 00402a61  c3                   ret 
// 00402a62  8bff                 mov edi, edi
// 00402a64  61                   popal 
// 00402a65  2a4000               sub al, byte ptr [eax]
// 00402a68  57                   push edi
// 00402a69  2a4000               sub al, byte ptr [eax]
// 00402a6c  5c                   pop esp
// 00402a6d  2a4000               sub al, byte ptr [eax]
// 00402a70  5c                   pop esp
// 00402a71  2a4000               sub al, byte ptr [eax]
// 00402a74  0003                 add byte ptr [ebx], al
// 00402a76  0303                 add eax, dword ptr [ebx]
// 00402a78  0303                 add eax, dword ptr [ebx]
// 00402a7a  0303                 add eax, dword ptr [ebx]
// 00402a7c  0303                 add eax, dword ptr [ebx]
// 00402a7e  0303                 add eax, dword ptr [ebx]
// 00402a80  0103                 add dword ptr [ebx], eax
// 00402a82  0303                 add eax, dword ptr [ebx]
// 00402a84  0303                 add eax, dword ptr [ebx]
// 00402a86  0303                 add eax, dword ptr [ebx]
// 00402a88  0303                 add eax, dword ptr [ebx]
// 00402a8a  0203                 add al, byte ptr [ebx]
// 00402a8c  0303                 add eax, dword ptr [ebx]
// 00402a8e  0303                 add eax, dword ptr [ebx]
// 00402a90  0303                 add eax, dword ptr [ebx]
// 00402a92  0303                 add eax, dword ptr [ebx]
// 00402a94  0303                 add eax, dword ptr [ebx]
// 00402a96  0203                 add al, byte ptr [ebx]
// 00402a98  0303                 add eax, dword ptr [ebx]
// 00402a9a  0303                 add eax, dword ptr [ebx]
// 00402a9c  0303                 add eax, dword ptr [ebx]
// 00402a9e  0303                 add eax, dword ptr [ebx]
// 00402aa0  0303                 add eax, dword ptr [ebx]
// 00402aa2  0303                 add eax, dword ptr [ebx]
// 00402aa4  0303                 add eax, dword ptr [ebx]
// 00402aa6  0303                 add eax, dword ptr [ebx]
// 00402aa8  0303                 add eax, dword ptr [ebx]
// 00402aaa  0303                 add eax, dword ptr [ebx]
// 00402aac  0303                 add eax, dword ptr [ebx]
// 00402aae  0303                 add eax, dword ptr [ebx]
// 00402ab0  0303                 add eax, dword ptr [ebx]
// 00402ab2  0303                 add eax, dword ptr [ebx]
// 00402ab4  0303                 add eax, dword ptr [ebx]
// 00402ab6  0303                 add eax, dword ptr [ebx]
// 00402ab8  0303                 add eax, dword ptr [ebx]
// 00402aba  0303                 add eax, dword ptr [ebx]
// 00402abc  0303                 add eax, dword ptr [ebx]
// 00402abe  0303                 add eax, dword ptr [ebx]
// 00402ac0  0303                 add eax, dword ptr [ebx]
// 00402ac2  0303                 add eax, dword ptr [ebx]
// copied from an identical function in another client (function ?AfxCrtErrorCheck@@YAHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp