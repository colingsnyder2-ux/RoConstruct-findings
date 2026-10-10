// from server: 49% by colin
struct ScoreHud {
    char pad0[4];
    void* begin;
    void* end;
    char pad1[4];
    void* field10;
    void method(int, int);
};

extern "C" void __stdcall sub_620260(void*);
extern "C" void __stdcall sub_445fe0(void*, void*);
extern "C" void __stdcall sub_77e6a4(void*);
extern "C" void __stdcall sub_77e6d8(void);

void ScoreHud::method(int a, int b)
{
    void* local[4];
    local[1] = 0;
    local[2] = 0;
    local[3] = 0;
    sub_620260(local);
    if (a > 0) {
        int i = 0;
        int off = 0;
        do {
            void* p = this->begin;
            if (p == 0 || (unsigned)(((char*)this->end - (char*)p) >> 4) <= (unsigned)i) {
                sub_77e6d8();
            }
            void* elem = (char*)this->begin + off;
            void* tmp[7];
            sub_77e6a4(tmp);
            sub_445fe0(elem, tmp);
            i++;
            off += 16;
        } while (i < a);
    }
    void* tmp2[7];
    sub_77e6a4(tmp2);
    sub_445fe0((char*)this + 16, tmp2);
}
