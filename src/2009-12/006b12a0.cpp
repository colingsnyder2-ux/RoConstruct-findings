// roc 2009-12 006b12a0  unit: seg_006b0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b12a0
//
// 006b12a0  51                   push ecx
// 006b12a1  8d0424               lea eax, [esp]
// 006b12a4  50                   push eax
// 006b12a5  e896ffffff           call 0x6b1240
// 006b12aa  8b0c24               mov ecx, dword ptr [esp]
// 006b12ad  8b442408             mov eax, dword ptr [esp + 8]
// 006b12b1  8808                 mov byte ptr [eax], cl
// 006b12b3  8a4c2402             mov cl, byte ptr [esp + 2]
// 006b12b7  886801               mov byte ptr [eax + 1], ch
// 006b12ba  884802               mov byte ptr [eax + 2], cl
// 006b12bd  59                   pop ecx
// 006b12be  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAE?AUColor@@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Iterator {
    union {
        unsigned long value;
        unsigned char bytes[4];
    };
};

struct Color {
    unsigned char r, g, b;
};

struct S {
    Iterator* find(Iterator*);
    Color f();
};

Color S::f()
{
    Iterator value;
    find(&value);

    Color result;
    result.r = value.bytes[0];
    result.g = value.bytes[1];
    result.b = value.bytes[2];
    return result;
}