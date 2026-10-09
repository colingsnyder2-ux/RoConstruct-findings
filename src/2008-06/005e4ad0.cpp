// roc 2008-06 005e4ad0  unit: RBX::VGlue::?$FactoryProduct  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e4ad0
//
// 005e4ad0  6aff                 push -1
// 005e4ad2  683bf47b00           push 0x7bf43b
// 005e4ad7  64a100000000         mov eax, dword ptr fs:[0]
// 005e4add  50                   push eax
// 005e4ade  64892500000000       mov dword ptr fs:[0], esp
// 005e4ae5  51                   push ecx
// 005e4ae6  56                   push esi
// 005e4ae7  68c4000000           push 0xc4
// 005e4aec  8bf1                 mov esi, ecx
// 005e4aee  e82dbe0b00           call 0x6a0920
// 005e4af3  83c404               add esp, 4
// 005e4af6  89442404             mov dword ptr [esp + 4], eax
// 005e4afa  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e4b02  85c0                 test eax, eax
// 005e4b04  7409                 je 0x5e4b0f
// 005e4b06  8bc8                 mov ecx, eax
// 005e4b08  e8630f0600           call 0x645a70
// 005e4b0d  eb02                 jmp 0x5e4b11
// 005e4b0f  33c0                 xor eax, eax
// 005e4b11  50                   push eax
// 005e4b12  8bce                 mov ecx, esi
// 005e4b14  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e4b1c  e8dff5ffff           call 0x5e4100
// 005e4b21  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e4b25  c70604f48300         mov dword ptr [esi], 0x83f404
// 005e4b2b  c74610f8f38300       mov dword ptr [esi + 0x10], 0x83f3f8
// 005e4b32  c74614f0f38300       mov dword ptr [esi + 0x14], 0x83f3f0
// 005e4b39  c74620e8f38300       mov dword ptr [esi + 0x20], 0x83f3e8
// 005e4b40  c74624d8f38300       mov dword ptr [esi + 0x24], 0x83f3d8
// 005e4b47  c74644c8f38300       mov dword ptr [esi + 0x44], 0x83f3c8
// 005e4b4e  c74664b8f38300       mov dword ptr [esi + 0x64], 0x83f3b8
// 005e4b55  c78684000000a8f38300 mov dword ptr [esi + 0x84], 0x83f3a8
// 005e4b5f  c786a400000098f38300 mov dword ptr [esi + 0xa4], 0x83f398
// 005e4b69  c786c400000088f38300 mov dword ptr [esi + 0xc4], 0x83f388
// 005e4b73  c7863001000070f38300 mov dword ptr [esi + 0x130], 0x83f370
// 005e4b7d  8bc6                 mov eax, esi
// 005e4b7f  5e                   pop esi
// 005e4b80  64890d00000000       mov dword ptr fs:[0], ecx
// 005e4b87  83c410               add esp, 0x10
// 005e4b8a  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??0Rotate@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
