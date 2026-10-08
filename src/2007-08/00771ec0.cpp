// roc 2007-08 00771ec0  unit: seg_00770000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771ec0
//
// 00771ec0  56                   push esi
// 00771ec1  6a01                 push 1
// 00771ec3  681cb07a00           push 0x7ab01c
// 00771ec8  83ec0c               sub esp, 0xc
// 00771ecb  8bc4                 mov eax, esp
// 00771ecd  b9c03f5700           mov ecx, 0x573fc0
// 00771ed2  8908                 mov dword ptr [eax], ecx
// 00771ed4  33d2                 xor edx, edx
// 00771ed6  33f6                 xor esi, esi
// 00771ed8  895004               mov dword ptr [eax + 4], edx
// 00771edb  b9602a8c00           mov ecx, 0x8c2a60
// 00771ee0  897008               mov dword ptr [eax + 8], esi
// 00771ee3  e8086ce0ff           call 0x578af0
// 00771ee8  6880a37700           push 0x77a380
// 00771eed  e831eeebff           call 0x630d23
// 00771ef2  83c404               add esp, 4
// 00771ef5  5e                   pop esi
// 00771ef6  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Edesc_getMass@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
