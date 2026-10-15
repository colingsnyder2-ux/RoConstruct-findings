// from server: 100% by colin
// roc 2008-06 004e8160  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e8160
//
// 004e8160  d9ee                 fldz 
// 004e8162  8bc1                 mov eax, ecx
// 004e8164  33c9                 xor ecx, ecx
// 004e8166  c700e0e18100         mov dword ptr [eax], 0x81e1e0
// 004e816c  894804               mov dword ptr [eax + 4], ecx
// 004e816f  d95814               fstp dword ptr [eax + 0x14]
// 004e8172  d9442404             fld dword ptr [esp + 4]
// 004e8176  ba01000000           mov edx, 1
// 004e817b  d95818               fstp dword ptr [eax + 0x18]
// 004e817e  894808               mov dword ptr [eax + 8], ecx
// 004e8181  841520f09600         test byte ptr [0x96f020], dl
// 004e8187  7516                 jne 0x4e819f
// 004e8189  091520f09600         or dword ptr [0x96f020], edx
// 004e818f  56                   push esi
// 004e8190  8b35ac248000         mov esi, dword ptr [0x8024ac]
// 004e8196  dd06                 fld qword ptr [esi]
// 004e8198  5e                   pop esi
// 004e8199  dd1d18f09600         fstp qword ptr [0x96f018]
// 004e819f  dd0518f09600         fld qword ptr [0x96f018]
// 004e81a5  d9581c               fstp dword ptr [eax + 0x1c]
// 004e81a8  c74020a06e8200       mov dword ptr [eax + 0x20], 0x826ea0
// 004e81af  894824               mov dword ptr [eax + 0x24], ecx
// 004e81b2  01158c289700         add dword ptr [0x97288c], edx
// 004e81b8  894810               mov dword ptr [eax + 0x10], ecx
// 004e81bb  89480c               mov dword ptr [eax + 0xc], ecx
// 004e81be  c20400               ret 4

extern const double* infinityValue;
extern unsigned int instanceCount;
extern unsigned char primaryTable[];
extern unsigned char secondaryTable[];

struct S {
    void* volatile table;
    unsigned int field04;
    volatile unsigned int field08;
    volatile unsigned int field0C;
    volatile unsigned int field10;
    volatile float field14;
    volatile float field18;
    volatile float field1C;
    void* volatile field20;
    volatile unsigned int field24;

    S(float value);
};

S::S(float value)
{
    table = primaryTable;
    field04 = 0;
    field14 = 0.0f;
    field18 = value;
    field08 = 0;

    static double infinity = *infinityValue;
    field1C = (float)infinity;

    field20 = secondaryTable;
    field24 = 0;
    ++instanceCount;
    field10 = 0;
    field0C = 0;
}
