// from server: 88% by colin
// roc 2007-08 0040f4f0  unit: CutVerb  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040f4f0

struct Elem {
    char pad[0x1c];
    int a;
    int b;
};

struct String {
    void operator=(const String&);
};

struct CutVerb {
};

Elem* __cdecl copy_range(Elem* first, Elem* last, Elem* dest) {
    if (first != last) {
        do {
            *(String*)dest = *(const String*)first;
            dest->a = first->a;
            dest->b = first->b;
            first += 1;
            dest += 1;
        } while (first != last);
    }
    return dest;
}
