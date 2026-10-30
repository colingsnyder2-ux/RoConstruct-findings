// roc 2010-06 005a09a0  unit: RBX::VStandardOut::?$sp_counted_impl_p  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a09a0
//
// 005a09a0  8b442404             mov eax, dword ptr [esp + 4]
// 005a09a4  83f850               cmp eax, 0x50
// 005a09a7  7722                 ja 0x5a09cb
// 005a09a9  0fb688e8095a00       movzx ecx, byte ptr [eax + 0x5a09e8]
// 005a09b0  ff248dd8095a00       jmp dword ptr [ecx*4 + 0x5a09d8]
// 005a09b7  680e000780           push 0x8007000e
// 005a09bc  e80f22e6ff           call 0x402bd0
// 005a09c1  6857000780           push 0x80070057
// 005a09c6  e80522e6ff           call 0x402bd0
// 005a09cb  6805400080           push 0x80004005
// 005a09d0  e8fb21e6ff           call 0x402bd0
// 005a09d5  c3                   ret 
// 005a09d6  8bff                 mov edi, edi
// 005a09d8  d509                 aad 9
// 005a09da  5a                   pop edx
// 005a09db  00b7095a00c1         add byte ptr [edi - 0x3effa5f7], dh
// 005a09e1  095a00               or dword ptr [edx], ebx
// 005a09e4  cb                   retf 
// 005a09e5  095a00               or dword ptr [edx], ebx
// 005a09e8  0003                 add byte ptr [ebx], al
// 005a09ea  0303                 add eax, dword ptr [ebx]
// 005a09ec  0303                 add eax, dword ptr [ebx]
// 005a09ee  0303                 add eax, dword ptr [ebx]
// 005a09f0  0303                 add eax, dword ptr [ebx]
// 005a09f2  0303                 add eax, dword ptr [ebx]
// 005a09f4  0103                 add dword ptr [ebx], eax
// 005a09f6  0303                 add eax, dword ptr [ebx]
// 005a09f8  0303                 add eax, dword ptr [ebx]
// 005a09fa  0303                 add eax, dword ptr [ebx]
// 005a09fc  0303                 add eax, dword ptr [ebx]
// 005a09fe  0203                 add al, byte ptr [ebx]
// 005a0a00  0303                 add eax, dword ptr [ebx]
// 005a0a02  0303                 add eax, dword ptr [ebx]
// 005a0a04  0303                 add eax, dword ptr [ebx]
// 005a0a06  0303                 add eax, dword ptr [ebx]
// 005a0a08  0303                 add eax, dword ptr [ebx]
// 005a0a0a  0203                 add al, byte ptr [ebx]
// 005a0a0c  0303                 add eax, dword ptr [ebx]
// 005a0a0e  0303                 add eax, dword ptr [ebx]
// 005a0a10  0303                 add eax, dword ptr [ebx]
// 005a0a12  0303                 add eax, dword ptr [ebx]
// 005a0a14  0303                 add eax, dword ptr [ebx]
// 005a0a16  0303                 add eax, dword ptr [ebx]
// 005a0a18  0303                 add eax, dword ptr [ebx]
// 005a0a1a  0303                 add eax, dword ptr [ebx]
// 005a0a1c  0303                 add eax, dword ptr [ebx]
// 005a0a1e  0303                 add eax, dword ptr [ebx]
// 005a0a20  0303                 add eax, dword ptr [ebx]
// 005a0a22  0303                 add eax, dword ptr [ebx]
// 005a0a24  0303                 add eax, dword ptr [ebx]
// 005a0a26  0303                 add eax, dword ptr [ebx]
// 005a0a28  0303                 add eax, dword ptr [ebx]
// 005a0a2a  0303                 add eax, dword ptr [ebx]
// 005a0a2c  0303                 add eax, dword ptr [ebx]
// 005a0a2e  0303                 add eax, dword ptr [ebx]
// 005a0a30  0303                 add eax, dword ptr [ebx]
// 005a0a32  0303                 add eax, dword ptr [ebx]
// 005a0a34  0303                 add eax, dword ptr [ebx]
// 005a0a36  0303                 add eax, dword ptr [ebx]
// copied from an identical function in another client (function ?AtlCrtErrorCheck@ATL@@YAHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp