// from server: 48% by colin
struct CXTPTabClientWnd__CSingleWorkspace {
    void dtor();
};

extern "C" void __stdcall sub_6301E4(void*);
extern "C" void __stdcall sub_6FE640(void*);
extern "C" int __stdcall sub_474F20();
extern "C" void* __stdcall sub_68BDE0(int);
extern "C" void __stdcall sub_68A140(void*);
extern "C" void __stdcall sub_6305E0(void*);

void CXTPTabClientWnd__CSingleWorkspace::dtor()
{
    *(void**)this = (void*)0x7CFD64;
    *(void**)((char*)this + 0x54) = (void*)0x7CFD50;

    void* p = *(void**)((char*)this + 0x8C);
    if (p != 0) {
        sub_6301E4(p);
        *(void**)((char*)this + 0x8C) = 0;
    }

    void* q = *(void**)((char*)this + 0x7C);
    if (q != 0) {
        *(void**)((char*)q + 0x8C) = 0;
        sub_6FE640(*(void**)((char*)this + 0x7C));
    } else {
        int n = sub_474F20();
        for (int i = 0; i < n; i++) {
            void* r = sub_68BDE0(i);
            if (r != 0) {
                void** vt = *(void***)r;
                void (*fn)(void*, int) = (void (*)(void*, int))vt[1];
                fn(r, 1);
            }
            n = sub_474F20();
        }
    }

    void* s = *(void**)((char*)this + 0xEC);
    if (s != 0) {
        void** vt = *(void***)s;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[1];
        fn(s, 1);
        *(void**)((char*)this + 0xEC) = 0;
    }

    void* t = *(void**)((char*)this + 0xC8);
    if (t != 0) {
        sub_6301E4(t);
        *(void**)((char*)this + 0xC8) = 0;
    }

    sub_68A140((char*)this + 0x68);

    *(void**)((char*)this + 0x54) = (void*)0x7CF7A0;
    sub_6305E0(this);
}
