// roc 2009-06 00642b20  unit: seg_00640000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00642b20
//
// 00642b20  51                   push ecx
// 00642b21  8d0424               lea eax, [esp]
// 00642b24  50                   push eax
// 00642b25  e896ffffff           call 0x642ac0
// 00642b2a  8b0c24               mov ecx, dword ptr [esp]
// 00642b2d  8b442408             mov eax, dword ptr [esp + 8]
// 00642b31  8808                 mov byte ptr [eax], cl
// 00642b33  8a4c2402             mov cl, byte ptr [esp + 2]
// 00642b37  886801               mov byte ptr [eax + 1], ch
// 00642b3a  884802               mov byte ptr [eax + 2], cl
// 00642b3d  59                   pop ecx
// 00642b3e  c20400               ret 4
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