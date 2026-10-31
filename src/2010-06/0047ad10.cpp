// roc 2010-06 0047ad10  unit: DxUserInput  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047ad10
//
// 0047ad10  8bc1                 mov eax, ecx
// 0047ad12  33d2                 xor edx, edx
// 0047ad14  33c9                 xor ecx, ecx
// 0047ad16  668910               mov word ptr [eax], dx
// 0047ad19  bae4040000           mov edx, 0x4e4
// 0047ad1e  894804               mov dword ptr [eax + 4], ecx
// 0047ad21  894810               mov dword ptr [eax + 0x10], ecx
// 0047ad24  66895002             mov word ptr [eax + 2], dx
// 0047ad28  894808               mov dword ptr [eax + 8], ecx
// 0047ad2b  89480c               mov dword ptr [eax + 0xc], ecx
// 0047ad2e  c3                   ret 
// copied from an identical function in another client (function ??0CFileVersionInfo@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_819913a7344f1e19.cpp