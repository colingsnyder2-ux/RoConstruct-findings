// from server: 26% by colin
// roc 2008-06 00651d40  unit: RBX::ScoreHud  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00651d40

extern "C" void __stdcall sub_6A067A(void*);
extern "C" void __stdcall sub_802468(void*);

struct Inner {
    char pad[0x0c];
    void* begin;
    void* end;
    void* cap;
};

struct Outer {
    void* field0;
    char pad[4];
    Inner inner;
};

void __cdecl sub_651D40(Outer* first, Outer* last)
{
    while (first != last) {
        Inner* p = &first->inner;
        void* b = p->begin;
        if (b != 0) {
            void* e = p->end;
            while (b != e) {
                sub_802468(b);
                b = (char*)b + 0x1c;
            }
            sub_6A067A(p->begin);
        }
        void* f0 = first->field0;
        p->begin = 0;
        p->end = 0;
        p->cap = 0;
        sub_6A067A(f0);
        first = (Outer*)((char*)first + 0x18);
    }
}
