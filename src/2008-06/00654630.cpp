// from server: 58% by colin
extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __stdcall invalid_parameter_noinfo();
extern "C" void __stdcall string_ctor(void*);

struct Element {
    char pad[0x18];
};

struct Container {
    char pad0[0xc];
    Element* begin;
    Element* end;
    void push_back(Element*);
};

struct ScoreHud {
    char pad0[0xc];
    Element* begin;
    Element* end;
    void func(int, int);
    void reserve(int);
};

void ScoreHud::func(int a, int count) {
    this->reserve(count);
    int i = 0;
    if (count > 0) {
        int offset = 0;
        do {
            unsigned int n = (unsigned int)((this->end - this->begin) / 0x18);
            if ((unsigned int)i >= n) {
                invalid_parameter_noinfo();
            }
            Element* e = (Element*)((char*)this->begin + offset);
            char buf[0x1c];
            string_ctor(buf);
            Container* c = (Container*)e;
            c->push_back((Element*)buf);
            i++;
            offset += 0x18;
        } while (i < count);
    }
    char buf2[0x1c];
    string_ctor(buf2);
    Container* c2 = (Container*)((char*)this + 0x18);
    c2->push_back((Element*)buf2);
}
