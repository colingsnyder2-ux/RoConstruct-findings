// roc 2007-08 00772900  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772900
//
// 00772900  53                   push ebx
// 00772901  55                   push ebp
// 00772902  56                   push esi
// 00772903  57                   push edi
// 00772904  6a04                 push 4
// 00772906  83ec0c               sub esp, 0xc
// 00772909  8bc4                 mov eax, esp
// 0077290b  b950295800           mov ecx, 0x582950
// 00772910  8908                 mov dword ptr [eax], ecx
// 00772912  33d2                 xor edx, edx
// 00772914  895004               mov dword ptr [eax + 4], edx
// 00772917  83ec0c               sub esp, 0xc
// 0077291a  33f6                 xor esi, esi
// 0077291c  897008               mov dword ptr [eax + 8], esi
// 0077291f  8bc4                 mov eax, esp
// 00772921  bf800e5800           mov edi, 0x580e80
// 00772926  8938                 mov dword ptr [eax], edi
// 00772928  6840a87a00           push 0x7aa840
// 0077292d  33db                 xor ebx, ebx
// 0077292f  33ed                 xor ebp, ebp
// 00772931  895804               mov dword ptr [eax + 4], ebx
// 00772934  6880c77a00           push 0x7ac780
// 00772939  b968318c00           mov ecx, 0x8c3168
// 0077293e  896808               mov dword ptr [eax + 8], ebp
// 00772941  e82afbe0ff           call 0x582470
// 00772946  68d0a57700           push 0x77a5d0
// 0077294b  e8d3e3ebff           call 0x630d23
// 00772950  83c404               add esp, 4
// 00772953  5f                   pop edi
// 00772954  5e                   pop esi
// 00772955  5d                   pop ebp
// 00772956  5b                   pop ebx
// 00772957  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ??__Eprop_AttachmentPoint@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
