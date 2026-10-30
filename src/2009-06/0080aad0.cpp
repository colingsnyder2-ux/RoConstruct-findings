// roc 2009-06 0080aad0  unit: CXTCaptionButton  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080aad0
//
// 0080aad0  6aff                 push -1
// 0080aad2  68e81d8800           push 0x881de8
// 0080aad7  64a100000000         mov eax, dword ptr fs:[0]
// 0080aadd  50                   push eax
// 0080aade  56                   push esi
// 0080aadf  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0080aae4  33c4                 xor eax, esp
// 0080aae6  50                   push eax
// 0080aae7  8d442408             lea eax, [esp + 8]
// 0080aaeb  64a300000000         mov dword ptr fs:[0], eax
// 0080aaf1  8bf1                 mov esi, ecx
// 0080aaf3  8b442428             mov eax, dword ptr [esp + 0x28]
// 0080aaf7  8b542424             mov edx, dword ptr [esp + 0x24]
// 0080aafb  50                   push eax
// 0080aafc  83ec24               sub esp, 0x24
// 0080aaff  8bcc                 mov ecx, esp
// 0080ab01  89642450             mov dword ptr [esp + 0x50], esp
// 0080ab05  6a01                 push 1
// 0080ab07  52                   push edx
// 0080ab08  e8d3b0f2ff           call 0x735be0
// 0080ab0d  8b442448             mov eax, dword ptr [esp + 0x48]
// 0080ab11  83ec24               sub esp, 0x24
// 0080ab14  8bcc                 mov ecx, esp
// 0080ab16  89642470             mov dword ptr [esp + 0x70], esp
// 0080ab1a  6a01                 push 1
// 0080ab1c  50                   push eax
// 0080ab1d  c744246400000000     mov dword ptr [esp + 0x64], 0
// 0080ab25  e8b6b0f2ff           call 0x735be0
// 0080ab2a  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0080ab2e  8b06                 mov eax, dword ptr [esi]
// 0080ab30  8b542464             mov edx, dword ptr [esp + 0x64]
// 0080ab34  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 0080ab3a  51                   push ecx
// 0080ab3b  52                   push edx
// 0080ab3c  8bce                 mov ecx, esi
// 0080ab3e  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 0080ab46  ffd0                 call eax
// 0080ab48  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0080ab4c  64890d00000000       mov dword ptr fs:[0], ecx
// 0080ab53  59                   pop ecx
// 0080ab54  5e                   pop esi
// 0080ab55  83c40c               add esp, 0xc
// 0080ab58  c21400               ret 0x14
// copied from an identical function in another client (function ?SetIcon@CXTButton@@UAEHVCSize@@PAUHICON__@@1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp