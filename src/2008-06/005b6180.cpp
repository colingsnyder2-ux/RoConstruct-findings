// from server: 100% by king_originala
// roc 2008-06 005b6180  unit: RBX::VHat::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6180
//
// 005b6180  51                   push ecx
// 005b6181  8d0424               lea eax, [esp]
// 005b6184  50                   push eax
// 005b6185  e896ffffff           call 0x5b6120
// 005b618a  8b0c24               mov ecx, dword ptr [esp]
// 005b618d  8b442408             mov eax, dword ptr [esp + 8]
// 005b6191  8808                 mov byte ptr [eax], cl
// 005b6193  8a4c2402             mov cl, byte ptr [esp + 2]
// 005b6197  886801               mov byte ptr [eax + 1], ch
// 005b619a  884802               mov byte ptr [eax + 2], cl
// 005b619d  59                   pop ecx
// 005b619e  c20400               ret 4

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
