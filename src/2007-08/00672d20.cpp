// from server: 46% by colin
struct CXTPControlButtonColor {
    void construct();
};

extern "C" void __fastcall sub_63C810(void*);
extern "C" void __fastcall sub_738334(void*);
extern "C" void __fastcall sub_63A120(void*, int);
extern "C" int __fastcall sub_6724A0(void*);
extern "C" void* __fastcall sub_6B3010();

void CXTPControlButtonColor::construct() {
    sub_63C810(this);
    *(void**)this = (void*)0x7cbc3c;
    *(void**)((char*)this + 0x20) = (void*)0x7cbbdc;
    sub_738334(this);
    *(int*)((char*)this + 0x168) = -1;
    *(int*)((char*)this + 0x170) = -1;
    sub_63A120(this, 0x10);
    int n = sub_6724A0(this);
    if (n > 0) {
        char* p = (char*)0x8c8d60;
        int count = n;
        do {
            void* obj = sub_6B3010();
            void** vt = *(void***)obj;
            void (__thiscall *fn)(void*, void*, void*) = (void (__thiscall *)(void*, void*, void*))vt[1];
            fn(obj, p, *(void**)(p - 4));
            p += 0xc;
            --count;
        } while (count != 0);
    }
    *(int*)((char*)this + 0x16c) = -1;
}
