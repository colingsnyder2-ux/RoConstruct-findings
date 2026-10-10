// from server: 26% by colin
struct Sub {
    void Release();
    void Destroy();
};

struct Inner {
    char pad0[0x18];
    void* vtbl18;
    char pad1[0x18];
    void* ptr30;
    void* ptr34;
    char pad2[0x04];
    void* ptr38;
    char pad3[0x08];
    void* ptr44;
    char pad4[0x10];
    void* ptr58;
    char pad5[0x08];
    void* ptr64;
    char pad6[0x14];
    void* ptr7c;
    char pad7[0x04];
    void* ptr80;
    void* ptr84;
    void* ptr88;
    void* ptr8c;
    void* ptr90;
};

struct Notifier {
    void* vtbl0;
    char pad0[0x04];
    void* ptr8;
    void* ptrc;
    void* ptr10;
    char pad1[0x04];
    void* vtbl18;
    void* ptr20;
    void* ptr24;
    void* ptr28;
    char pad2[0x04];
    void* ptr30;
    void* ptr34;
    void* ptr38;
    void* ptr3c;
    void* ptr40;
    void* ptr44;
    void* ptr48;
    void* ptr4c;
    char pad3[0x08];
    void* ptr58;
    void* ptr5c;
    void* ptr60;
    void* ptr64;
    char pad4[0x14];
    void* ptr7c;
    void* ptr80;
    void* ptr84;
    void* ptr88;
    void* ptr8c;
    void* ptr90;
    void Destroy();
};

extern "C" void __cdecl FreeMem(void*);
extern "C" void __cdecl Sub_5ff5b0(void*);
extern "C" void __cdecl Sub_5b3a60(void*, void*, void*, void*, void*);
extern "C" void __cdecl Sub_77e6ac(void*);

void Notifier::Destroy()
{
    this->vtbl0 = (void*)0x7b58b0;
    this->vtbl18 = (void*)0x7b58a0;

    if (this->ptr34 != 0) {
        void** v = *(void***)this->ptr34;
        void (*fn)(void*, int) = (void (*)(void*, int))v[0];
        fn(this->ptr34, 1);
    }

    if (this->ptr30 != 0) {
        Sub_5ff5b0(this->ptr30);
        FreeMem(this->ptr30);
    }

    if (this->ptr90 != 0) {
        Sub_77e6ac((char*)this->ptr90 + 0x20018);
        FreeMem(this->ptr90);
    }

    if (this->ptr8c != 0) {
        Sub_77e6ac((char*)this->ptr8c + 0x20018);
        FreeMem(this->ptr8c);
    }

    if (this->ptr88 != 0) {
        Sub_77e6ac((char*)this->ptr88 + 0x20018);
        FreeMem(this->ptr88);
    }

    FreeMem(this->ptr7c);
    this->ptr7c = 0;
    this->ptr80 = 0;
    this->ptr84 = 0;

    {
        void* p = this->ptr64;
        void* q = *(void**)p;
        Sub_5b3a60(&p, &p, q, &p, q);
        FreeMem(*(void**)((char*)&p + 4));
        *(void**)((char*)&p + 4) = 0;
        *(void**)((char*)&p + 8) = 0;
    }

    FreeMem(this->ptr58);
    this->ptr58 = 0;
    this->ptr5c = 0;
    this->ptr60 = 0;

    FreeMem(this->ptr44);
    this->ptr44 = 0;
    this->ptr48 = 0;
    this->ptr4c = 0;

    FreeMem(this->ptr38);
    this->ptr38 = 0;
    this->ptr3c = 0;
    this->ptr40 = 0;

    this->vtbl18 = (void*)0x7b5890;

    if (this->ptr20 != 0) {
        FreeMem(this->ptr20);
    }
    this->ptr20 = 0;
    this->ptr24 = 0;
    this->ptr28 = 0;

    this->vtbl0 = (void*)0x7b5880;

    if (this->ptr8 != 0) {
        FreeMem(this->ptr8);
    }
    this->ptr8 = 0;
    this->ptrc = 0;
    this->ptr10 = 0;
}
