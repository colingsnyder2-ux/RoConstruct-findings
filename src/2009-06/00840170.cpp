// roc 2009-06 00840170  unit: seg_00840000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00840170
//
// 00840170  d905c43c9200         fld dword ptr [0x923cc4]
// 00840176  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0084017a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0084017e  83ec08               sub esp, 8
// 00840181  d95c2404             fstp dword ptr [esp + 4]
// 00840185  d9ee                 fldz 
// 00840187  d91c24               fstp dword ptr [esp]
// 0084018a  d944241c             fld dword ptr [esp + 0x1c]
// 0084018e  50                   push eax
// 0084018f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00840193  52                   push edx
// 00840194  8b542418             mov edx, dword ptr [esp + 0x18]
// 00840198  83ec08               sub esp, 8
// 0084019b  d95c2404             fstp dword ptr [esp + 4]
// 0084019f  d9442428             fld dword ptr [esp + 0x28]
// 008401a3  d91c24               fstp dword ptr [esp]
// 008401a6  50                   push eax
// 008401a7  8b442420             mov eax, dword ptr [esp + 0x20]
// 008401ab  52                   push edx
// 008401ac  50                   push eax
// 008401ad  e85ec2ffff           call 0x83c410
// 008401b2  c21c00               ret 0x1c
// copied from an identical function in another client (function ?generate@MeshGeneratorAnalog@@QAEPAXPAX00MMHH@Z)

// from server: 100% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// Codegen analog: target ret 0x1c and call 00687860 prove the argument mapping.
// The target loads 360.0f from 0084e97c and passes 0.0f as the preceding argument.
class MeshGeneratorAnalog {
public:
    void* generate(void*, void*, void*, float, float, int, int, float, float);
    void* generate(void*, void*, void*, float, float, int, int);
};
void* MeshGeneratorAnalog::generate(void* a, void* b, void* c,
                                   float d, float e, int f, int g) {
    return generate(a, b, c, d, e, f, g, 0.0f, 360.0f);
}