// from server: 50% by colin
struct Locale {
    void* p;
    Locale();
    Locale(const Locale&);
    ~Locale();
};

struct String {
    char pad[0x1c];
    String();
    String(const String&);
    ~String();
};

struct SignalDesc {
    char pad[4];
    void* node;
    void* find(void*);
    void* find2(void*);
};

struct AssocItem {
    char pad[0xc];
    void** begin;
    void** end;
    void insert(void**, void**, void*);
};

struct ArrowButton {
    char pad[0xc];
    void** begin;
    void** end;
    void** cap;
    void func(int, int);
};

extern "C" {
    void* __stdcall sub_57C230(void*, void*);
    void* __stdcall sub_57C250(void*, void*);
    void __stdcall sub_57C210(void*, void*);
    void __stdcall sub_657C10(void*, void*, void*);
    void __stdcall sub_6582B0(void*, void*);
    void* __stdcall sub_658170(void*, void*);
    void* __stdcall sub_6A0920(unsigned int);
    void __stdcall sub_802460(void*);
    void __stdcall sub_802468(void*);
    void* __stdcall sub_8025C8();
    void* __stdcall sub_8025C4();
    void __stdcall sub_8025A4(void*);
    void __stdcall sub_802564(void*);
    void __stdcall sub_80245C(void*, void*);
    void __stdcall sub_802890();
    void __stdcall sub_4C7C60(void*, void*, void*, void*, void*);
}

void ArrowButton::func(int a, int b)
{
    void* g = *(void**)0x97d948;
    void* s = sub_57C230(g, (void*)a);
    if (s == 0) return;

    while (s != 0) {
        Locale loc;
        sub_802460(&loc);
        sub_57C210((char*)s + 0x10, &loc);
        void* p1 = sub_8025C8();
        void* p2 = sub_8025C4();
        sub_8025A4(p2);
        sub_657C10(&p1, &p2, &loc);
        sub_6582B0(&p1, &loc);
        sub_802564(&loc);

        void* mem = sub_6A0920(0x34);
        void* item = 0;
        if (mem != 0) {
            sub_80245C(&loc, mem);
            item = sub_658170(mem, &loc);
        }

        void** begin = this->begin;
        void** end = this->end;
        if (begin == 0) {
            int n = 0;
            void** cur = end;
            int m = (int)((char*)cur - (char*)begin) >> 2;
            if (m < n) {
                *cur = item;
                this->end = cur + 1;
            } else {
                sub_4C7C60(this, &item, cur, begin, 0);
            }
        } else {
            int n = ((char*)this->cap - (char*)begin) >> 2;
            int m = ((char*)end - (char*)begin) >> 2;
            if (m < n) {
                *end = item;
                this->end = end + 1;
            } else {
                sub_4C7C60(this, &item, end, begin, 0);
            }
        }

        this->func((int)s, (int)item);
        sub_802468(&loc);
        s = sub_57C250(g, (void*)a);
    }
}
