// roc 2007-03 007393f0  unit: seg_00730000  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007393f0
//
// 007393f0  6aff                 push -1
// 007393f2  682cd77600           push 0x76d72c
// 007393f7  64a100000000         mov eax, dword ptr fs:[0]
// 007393fd  50                   push eax
// 007393fe  83ec5c               sub esp, 0x5c
// 00739401  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00739406  33c4                 xor eax, esp
// 00739408  89442458             mov dword ptr [esp + 0x58], eax
// 0073940c  56                   push esi
// 0073940d  57                   push edi
// 0073940e  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00739413  33c4                 xor eax, esp
// 00739415  50                   push eax
// 00739416  8d442468             lea eax, [esp + 0x68]
// 0073941a  64a300000000         mov dword ptr fs:[0], eax
// 00739420  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 00739424  8b742478             mov esi, dword ptr [esp + 0x78]
// 00739428  57                   push edi
// 00739429  89742414             mov dword ptr [esp + 0x14], esi
// 0073942d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00739435  e83678dcff           call 0x500c70
// 0073943a  83c404               add esp, 4
// 0073943d  84c0                 test al, al
// 0073943f  7508                 jne 0x739449
// 00739441  c70600000000         mov dword ptr [esi], 0
// 00739447  eb6c                 jmp 0x7394b5
// 00739449  6a01                 push 1
// 0073944b  6a01                 push 1
// 0073944d  57                   push edi
// 0073944e  8d4c2424             lea ecx, [esp + 0x24]
// 00739452  e88983dcff           call 0x5017e0
// 00739457  6820020000           push 0x220
// 0073945c  c744247401000000     mov dword ptr [esp + 0x74], 1
// 00739464  e89f4ceeff           call 0x61e108
// 00739469  83c404               add esp, 4
// 0073946c  89442414             mov dword ptr [esp + 0x14], eax
// 00739470  85c0                 test eax, eax
// 00739472  c644247002           mov byte ptr [esp + 0x70], 2
// 00739477  7411                 je 0x73948a
// 00739479  8d4c2418             lea ecx, [esp + 0x18]
// 0073947d  51                   push ecx
// 0073947e  57                   push edi
// 0073947f  6a00                 push 0
// 00739481  8bc8                 mov ecx, eax
// 00739483  e868f6ffff           call 0x738af0
// 00739488  eb02                 jmp 0x73948c
// 0073948a  33c0                 xor eax, eax
// 0073948c  50                   push eax
// 0073948d  8bce                 mov ecx, esi
// 0073948f  c644247401           mov byte ptr [esp + 0x74], 1
// 00739494  c70600000000         mov dword ptr [esi], 0
// 0073949a  e8f1bbd3ff           call 0x475090
// 0073949f  8d4c2418             lea ecx, [esp + 0x18]
// 007394a3  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 007394ab  c644247000           mov byte ptr [esp + 0x70], 0
// 007394b0  e8db80dcff           call 0x501590
// 007394b5  8bc6                 mov eax, esi
// 007394b7  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007394bb  64890d00000000       mov dword ptr fs:[0], ecx
// 007394c2  59                   pop ecx
// 007394c3  5f                   pop edi
// 007394c4  5e                   pop esi
// 007394c5  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007394c9  33cc                 xor ecx, esp
// 007394cb  e8d659eeff           call 0x61eea6
// 007394d0  83c468               add esp, 0x68
// 007394d3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GFont.cpp (function ?fromFile@GFont@G3D@@SA?AV?$ReferenceCountedPointer@VGFont@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GFont.cpp
