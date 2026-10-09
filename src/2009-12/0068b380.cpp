// roc 2009-12 0068b380  unit: ArchiveBinder  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068b380
//
// 0068b380  6aff                 push -1
// 0068b382  681b639400           push 0x94631b
// 0068b387  64a100000000         mov eax, dword ptr fs:[0]
// 0068b38d  50                   push eax
// 0068b38e  64892500000000       mov dword ptr fs:[0], esp
// 0068b395  51                   push ecx
// 0068b396  56                   push esi
// 0068b397  57                   push edi
// 0068b398  6a18                 push 0x18
// 0068b39a  8bf9                 mov edi, ecx
// 0068b39c  e88fe7e8ff           call 0x519b30
// 0068b3a1  8bf0                 mov esi, eax
// 0068b3a3  83c404               add esp, 4
// 0068b3a6  89742408             mov dword ptr [esp + 8], esi
// 0068b3aa  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0068b3b2  85f6                 test esi, esi
// 0068b3b4  741a                 je 0x68b3d0
// 0068b3b6  8b442420             mov eax, dword ptr [esp + 0x20]
// 0068b3ba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0068b3be  50                   push eax
// 0068b3bf  51                   push ecx
// 0068b3c0  8d4e08               lea ecx, [esi + 8]
// 0068b3c3  c70600000000         mov dword ptr [esi], 0
// 0068b3c9  e832c7ffff           call 0x687b00
// 0068b3ce  eb02                 jmp 0x68b3d2
// 0068b3d0  33f6                 xor esi, esi
// 0068b3d2  8b4724               mov eax, dword ptr [edi + 0x24]
// 0068b3d5  85c0                 test eax, eax
// 0068b3d7  7505                 jne 0x68b3de
// 0068b3d9  897720               mov dword ptr [edi + 0x20], esi
// 0068b3dc  eb02                 jmp 0x68b3e0
// 0068b3de  8930                 mov dword ptr [eax], esi
// 0068b3e0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068b3e4  897724               mov dword ptr [edi + 0x24], esi
// 0068b3e7  5f                   pop edi
// 0068b3e8  5e                   pop esi
// 0068b3e9  64890d00000000       mov dword ptr fs:[0], ecx
// 0068b3f0  83c410               add esp, 0x10
// 0068b3f3  c20800               ret 8
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??$addAttribute@PBD@XmlElement@@QAEXABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
