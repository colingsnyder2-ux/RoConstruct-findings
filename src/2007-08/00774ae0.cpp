// roc 2007-08 00774ae0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774ae0
//
// 00774ae0  53                   push ebx
// 00774ae1  55                   push ebp
// 00774ae2  56                   push esi
// 00774ae3  57                   push edi
// 00774ae4  6a05                 push 5
// 00774ae6  83ec0c               sub esp, 0xc
// 00774ae9  8bc4                 mov eax, esp
// 00774aeb  b9e0bb5b00           mov ecx, 0x5bbbe0
// 00774af0  8908                 mov dword ptr [eax], ecx
// 00774af2  33d2                 xor edx, edx
// 00774af4  895004               mov dword ptr [eax + 4], edx
// 00774af7  83ec0c               sub esp, 0xc
// 00774afa  33f6                 xor esi, esi
// 00774afc  897008               mov dword ptr [eax + 8], esi
// 00774aff  8bc4                 mov eax, esp
// 00774b01  bf70e25500           mov edi, 0x55e270
// 00774b06  8938                 mov dword ptr [eax], edi
// 00774b08  6848647a00           push 0x7a6448
// 00774b0d  33db                 xor ebx, ebx
// 00774b0f  33ed                 xor ebp, ebp
// 00774b11  895804               mov dword ptr [eax + 4], ebx
// 00774b14  682c907b00           push 0x7b902c
// 00774b19  b9a0678c00           mov ecx, 0x8c67a0
// 00774b1e  896808               mov dword ptr [eax + 8], ebp
// 00774b21  e88a71e4ff           call 0x5bbcb0
// 00774b26  68f0bb7700           push 0x77bbf0
// 00774b2b  e8f3c1ebff           call 0x630d23
// 00774b30  83c404               add esp, 4
// 00774b33  5f                   pop edi
// 00774b34  5e                   pop esi
// 00774b35  5d                   pop ebp
// 00774b36  5b                   pop ebx
// 00774b37  c3                   ret 
// library rbxgs/v8datamodel\PVInstance.cpp (function ??__E?prop_ControllerType@PVInstance@RBX@@2V?$EnumPropDescriptor@VPVInstance@RBX@@W4ControllerType@Controller@2@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
