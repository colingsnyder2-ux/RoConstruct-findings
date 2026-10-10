// from server: 39% by colin
struct String {
    char buf[0x1c];
    String();
    ~String();
};

struct EnumPropDescriptor {
    char pad[0x1c];
    void* getset;
    bool checkFlags(void* arg);
};

extern "C" {
    void __stdcall GetSystemTimeAsFileTime(void*);
    void __stdcall SystemTimeToFileTime(void*, void*);
}

bool __fastcall sub_55D8A0(void*);
bool __fastcall sub_55D300(void*);
bool __fastcall sub_55D310(void*, void*);
bool __fastcall sub_55D5F0(void*, void*);
void* __fastcall sub_5DC010(void*, void*);
bool __fastcall sub_5DC2A0(void*);

bool EnumPropDescriptor::checkFlags(void* arg) {
    char* p = (char*)arg;
    if (sub_55D8A0(p)) {
        return true;
    }
    p = (char*)p + 0xc;
    if (sub_55D300(p)) {
        String s;
        if (sub_55D310(p, &s)) {
            void* v = 0;
            if (sub_5DC010(&v, &s)) {
                if (sub_5DC2A0(&v)) {
                    void* gs = this->getset;
                    void* vt = *(void**)gs;
                    void (*fn)(void*, void*) = *(void (**)(void*, void*))((char*)vt + 8);
                    fn(gs, arg);
                    s.~String();
                    return true;
                }
            }
            if (v == 0) {
                void* vt = *(void**)this;
                bool (*fn)(void*, void*, int) = *(bool (**)(void*, void*, int))((char*)vt + 0x28);
                if (fn(this, arg, 0)) {
                    s.~String();
                    return true;
                }
            }
            s.~String();
        }
    }
    void* v2 = 0;
    if (sub_55D5F0(p, &v2)) {
        void* gs = this->getset;
        void* vt = *(void**)gs;
        void (*fn)(void*, void*) = *(void (**)(void*, void*))((char*)vt + 8);
        fn(gs, arg);
    }
    return false;
}
