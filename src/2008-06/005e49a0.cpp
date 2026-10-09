// roc 2008-06 005e49a0  unit: RBX::VGlue::?$FactoryProduct  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e49a0
//
// 005e49a0  6aff                 push -1
// 005e49a2  683bf47b00           push 0x7bf43b
// 005e49a7  64a100000000         mov eax, dword ptr fs:[0]
// 005e49ad  50                   push eax
// 005e49ae  64892500000000       mov dword ptr fs:[0], esp
// 005e49b5  51                   push ecx
// 005e49b6  56                   push esi
// 005e49b7  6820010000           push 0x120
// 005e49bc  8bf1                 mov esi, ecx
// 005e49be  e85dbf0b00           call 0x6a0920
// 005e49c3  83c404               add esp, 4
// 005e49c6  89442404             mov dword ptr [esp + 4], eax
// 005e49ca  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e49d2  85c0                 test eax, eax
// 005e49d4  7409                 je 0x5e49df
// 005e49d6  8bc8                 mov ecx, eax
// 005e49d8  e883210600           call 0x646b60
// 005e49dd  eb02                 jmp 0x5e49e1
// 005e49df  33c0                 xor eax, eax
// 005e49e1  50                   push eax
// 005e49e2  8bce                 mov ecx, esi
// 005e49e4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e49ec  e81ff6ffff           call 0x5e4010
// 005e49f1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e49f5  c7062cf38300         mov dword ptr [esi], 0x83f32c
// 005e49fb  c7461020f38300       mov dword ptr [esi + 0x10], 0x83f320
// 005e4a02  c7461418f38300       mov dword ptr [esi + 0x14], 0x83f318
// 005e4a09  c7462010f38300       mov dword ptr [esi + 0x20], 0x83f310
// 005e4a10  c7462400f38300       mov dword ptr [esi + 0x24], 0x83f300
// 005e4a17  c74644f0f28300       mov dword ptr [esi + 0x44], 0x83f2f0
// 005e4a1e  c74664e0f28300       mov dword ptr [esi + 0x64], 0x83f2e0
// 005e4a25  c78684000000d0f28300 mov dword ptr [esi + 0x84], 0x83f2d0
// 005e4a2f  c786a4000000c0f28300 mov dword ptr [esi + 0xa4], 0x83f2c0
// 005e4a39  c786c4000000b0f28300 mov dword ptr [esi + 0xc4], 0x83f2b0
// 005e4a43  c7863001000098f28300 mov dword ptr [esi + 0x130], 0x83f298
// 005e4a4d  8bc6                 mov eax, esi
// 005e4a4f  5e                   pop esi
// 005e4a50  64890d00000000       mov dword ptr fs:[0], ecx
// 005e4a57  83c410               add esp, 0x10
// 005e4a5a  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??0Glue@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
