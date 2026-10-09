// from server: 89% by colin
// roc 2007-08 0040f750  unit: CopyVerb  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040f750

struct Element {
    char pad[0x1c];
    int field1c;
    int field20;
    void assign(const Element* other);
};

struct S {
};

void __cdecl copy(Element* begin, Element* end, Element* dst)
{
    if (begin != end) {
        do {
            begin->assign(dst);
            begin->field1c = dst->field1c;
            begin->field20 = dst->field20;
            begin += 1;
        } while (begin != end);
    }
}
