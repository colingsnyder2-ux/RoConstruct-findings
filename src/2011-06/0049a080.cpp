// roc 2011-06 0049a080  unit: VerbBinderJob  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049a080
//
// 0049a080  8bc1                 mov eax, ecx
// 0049a082  33d2                 xor edx, edx
// 0049a084  33c9                 xor ecx, ecx
// 0049a086  668910               mov word ptr [eax], dx
// 0049a089  bae4040000           mov edx, 0x4e4
// 0049a08e  894804               mov dword ptr [eax + 4], ecx
// 0049a091  894810               mov dword ptr [eax + 0x10], ecx
// 0049a094  66895002             mov word ptr [eax + 2], dx
// 0049a098  894808               mov dword ptr [eax + 8], ecx
// 0049a09b  89480c               mov dword ptr [eax + 0xc], ecx
// 0049a09e  c3                   ret 
// copied from an identical function in another client (function ??0CFileVersionInfo@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_819913a7344f1e19.cpp