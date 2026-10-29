// roc 2010-06 0061f010  unit: RBX::Accoutrement  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0061f010
//
// 0061f010  51                   push ecx
// 0061f011  8d0424               lea eax, [esp]
// 0061f014  50                   push eax
// 0061f015  e896ffffff           call 0x61efb0
// 0061f01a  8b0c24               mov ecx, dword ptr [esp]
// 0061f01d  8b442408             mov eax, dword ptr [esp + 8]
// 0061f021  8808                 mov byte ptr [eax], cl
// 0061f023  8a4c2402             mov cl, byte ptr [esp + 2]
// 0061f027  886801               mov byte ptr [eax + 1], ch
// 0061f02a  884802               mov byte ptr [eax + 2], cl
// 0061f02d  59                   pop ecx
// 0061f02e  c20400               ret 4
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