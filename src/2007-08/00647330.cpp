// from server: 39% by colin
// roc 2007-08 00647330  size: 357 bytes
// CXTPCommandBar destructor

extern "C" void __stdcall sub_62FC62(void*);
extern "C" void __stdcall sub_6301E4(void*);
extern "C" void __stdcall sub_6305E0(void*);
extern "C" void __stdcall sub_646E20(void*, int, int, int);
extern "C" void __stdcall sub_671E80(void*);
extern "C" void __stdcall sub_67A640(void*, int);
extern "C" void __stdcall sub_67A660(void*);
extern "C" void __stdcall sub_6A2B60(void*);
extern "C" void* __stdcall sub_6A3040(void*);
extern "C" void __stdcall sub_6A3450(void*);
extern "C" void __stdcall sub_6C9CA0(void*);
extern "C" void* __stdcall sub_73836A(void*, void*);
extern "C" void __stdcall sub_738322(void*);
extern "C" void __stdcall sub_62FF20(void*);

struct CXTPCommandBar {
    void dtor();
};

void CXTPCommandBar::dtor() {
    *(void**)this = (void*)0x7c678c;
    *(void**)((char*)this + 0x54) = (void*)0x7c677c;
    *(void**)((char*)this + 0x5c) = (void*)0x7c671c;

    if (*(void**)((char*)this + 0xdc) != 0) {
        sub_646E20(*(void**)((char*)this + 0xdc), 0, 1, 0);
    }

    void* p = sub_6A3040((char*)this + 0x54);
    sub_6A3450(p);

    void* q = sub_73836A((void*)0x8c9314, (void*)0x632280);
    if (q != 0) {
        if (*(void**)((char*)q + 0x20) == this) {
            *(void**)((char*)q + 0x20) = 0;
        }
    } else {
        sub_62FF20(this);
    }

    if (*(void**)((char*)this + 0xf8) != 0) {
        sub_67A660(*(void**)((char*)this + 0xf8));
        sub_67A640(*(void**)((char*)this + 0xf8), 0);
        if (*(void**)((char*)this + 0xf8) != 0) {
            sub_6301E4(*(void**)((char*)this + 0xf8));
            *(void**)((char*)this + 0xf8) = 0;
        }
    }

    if (*(void**)((char*)this + 0x164) != 0) {
        sub_6301E4(*(void**)((char*)this + 0x164));
        *(void**)((char*)this + 0x164) = 0;
    }

    if (*(void**)((char*)this + 0x168) != 0) {
        sub_6301E4(*(void**)((char*)this + 0x168));
        *(void**)((char*)this + 0x168) = 0;
    }

    if (*(void**)((char*)this + 0x174) != 0) {
        sub_6301E4(*(void**)((char*)this + 0x174));
        *(void**)((char*)this + 0x174) = 0;
    }

    void* r = *(void**)((char*)this + 0x178);
    if (r != 0) {
        sub_6C9CA0(r);
        sub_62FC62(r);
    }

    sub_738322((char*)this + 0xf0);

    sub_671E80((char*)this + 0x5c);
    sub_6A2B60((char*)this + 0x54);
    sub_6305E0(this);
}
