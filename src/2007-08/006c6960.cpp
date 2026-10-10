// from server: 57% by colin
struct CXTPCustomizeSheet_CCustomizeEdit {
    void dtor();
};

extern "C" void __stdcall sub_77ddbc(void*);

struct Inner1 {
    void** vtable;
    void release(int);
};

struct Inner2 {
    void** vtable;
    void release(int);
};

void CXTPCustomizeSheet_CCustomizeEdit::dtor() {
    *(void**)this = (void*)0x7d74ac;
    *(void**)((char*)this + 0x20) = (void*)0x7d744c;

    Inner1* p1 = *(Inner1**)((char*)this + 0x168);
    if (p1) {
        *(int*)((char*)p1 + 0x5c) = 0;
        Inner1* p1b = *(Inner1**)((char*)this + 0x168);
        if (p1b) {
            void** vt = p1b->vtable;
            void (__thiscall *fn)(Inner1*, int) = (void (__thiscall*)(Inner1*, int))vt[1];
            fn(p1b, 1);
        }
    }

    Inner2* p2 = *(Inner2**)((char*)this + 0x194);
    if (p2) {
        void** vt = p2->vtable;
        void (__thiscall *fn)(Inner2*, int) = (void (__thiscall*)(Inner2*, int))vt[0];
        fn(p2, 1);
        *(void**)((char*)this + 0x194) = 0;
    }

    sub_77ddbc((char*)this + 0x18c);
    sub_77ddbc((char*)this + 0x188);
    sub_77ddbc((char*)this + 0x180);

    extern void sub_63bf00(void*);
    sub_63bf00(this);
}
