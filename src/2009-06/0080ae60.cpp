// roc 2009-06 0080ae60  unit: CXTCaptionButton  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080ae60
//
// 0080ae60  6aff                 push -1
// 0080ae62  68931e8800           push 0x881e93
// 0080ae67  64a100000000         mov eax, dword ptr fs:[0]
// 0080ae6d  50                   push eax
// 0080ae6e  51                   push ecx
// 0080ae6f  56                   push esi
// 0080ae70  57                   push edi
// 0080ae71  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0080ae76  33c4                 xor eax, esp
// 0080ae78  50                   push eax
// 0080ae79  8d442410             lea eax, [esp + 0x10]
// 0080ae7d  64a300000000         mov dword ptr fs:[0], eax
// 0080ae83  8bf1                 mov esi, ecx
// 0080ae85  8974240c             mov dword ptr [esp + 0xc], esi
// 0080ae89  8d7e54               lea edi, [esi + 0x54]
// 0080ae8c  c706acc19000         mov dword ptr [esi], 0x90c1ac
// 0080ae92  c70798c19000         mov dword ptr [edi], 0x90c198
// 0080ae98  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0080aea0  e81bfcffff           call 0x80aac0
// 0080aea5  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 0080aeab  85c9                 test ecx, ecx
// 0080aead  740f                 je 0x80aebe
// 0080aeaf  e8f4e0f0ff           call 0x718fa8
// 0080aeb4  c7869c00000000000000 mov dword ptr [esi + 0x9c], 0
// 0080aebe  8bcf                 mov ecx, edi
// 0080aec0  c644241800           mov byte ptr [esp + 0x18], 0
// 0080aec5  e86642f7ff           call 0x77f130
// 0080aeca  8bce                 mov ecx, esi
// 0080aecc  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0080aed4  e8ef110400           call 0x84c0c8
// 0080aed9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080aedd  64890d00000000       mov dword ptr fs:[0], ecx
// 0080aee4  59                   pop ecx
// 0080aee5  5f                   pop edi
// 0080aee6  5e                   pop esi
// 0080aee7  83c410               add esp, 0x10
// 0080aeea  c3                   ret 
// copied from an identical function in another client (function ??1CXTButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp