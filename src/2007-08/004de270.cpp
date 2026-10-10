// from server: 21% by colin
struct Level {
    char pad0[4];
    void* field4;
    void* field8;
    int f(int a, int b, int c, int d);
};

extern "C" void __stdcall sub_4DD410(void* self, int a, int b, void* c, void* d);
extern "C" int __stdcall sub_4D9580(void* self, void* a, void* b);
extern "C" void __stdcall sub_4DE100(void* self, void* a, void* b);
extern "C" void __stdcall sub_61DA50(void* self);
extern "C" void __stdcall sub_587AE0(void* self);
extern "C" int __stdcall sub_466AB0(void* self, void* a);
extern "C" void __stdcall sub_77E6D8();

int Level::f(int a, int b, int c, int d) {
    if (field8 == 0) {
        sub_4DD410(this, a, 1, field4, (void*)d);
        return a;
    }
    void* edi = *(void**)field4;
    void* ebp = (void*)b;
    if (ebp != 0 && ebp != this) {
        sub_77E6D8();
    }
    void* ebx = (void*)c;
    if (ebx == edi) {
        if (!sub_4D9580(this, (void*)d, (char*)ebx + 0xc)) {
            goto fail;
        }
        sub_4DD410(this, a, 1, ebx, (void*)d);
        return a;
    }
    if (ebp != 0 && ebp != this) {
        sub_77E6D8();
    }
    edi = *(void**)field4;
    if (ebx == edi) {
        void* tmp = *((void**)((char*)field4 + 8));
        if (!sub_4D9580(this, (void*)d, (char*)tmp + 0xc)) {
            goto fail;
        }
        sub_4DD410(this, a, 0, tmp, (void*)d);
        return a;
    }
    if (sub_4D9580(this, (void*)d, (char*)ebx + 0xc)) {
        void* local24 = ebp;
        void* local28 = ebx;
        sub_61DA50(&local24);
        void* p = local28;
        if (sub_4D9580(this, (void*)d, (char*)p + 0xc)) {
            void* q = local28;
            void* r = *((void**)((char*)q + 8));
            if (*((char*)r + 0x35) != 0) {
                sub_4DD410(this, a, 0, q, (void*)d);
                return a;
            } else {
                sub_4DD410(this, a, 1, ebx, (void*)d);
                return a;
            }
        }
    }
    if (!sub_4D9580(this, (void*)d, (char*)ebx + 0xc)) {
        goto fail;
    }
    {
        void* local24 = ebp;
        void* local28 = ebx;
        void* local14 = *(void**)field4;
        void* local10 = this;
        sub_587AE0(&local24);
        if (!sub_466AB0(&local10, &local24)) {
            void* p = local24;
            if (!sub_4D9580(this, (void*)d, (char*)p + 0xc)) {
                goto fail;
            }
        }
        void* r = *((void**)((char*)ebx + 8));
        if (*((char*)r + 0x35) != 0) {
            sub_4DD410(this, a, 0, ebx, (void*)d);
            return a;
        } else {
            void* p = local24;
            sub_4DD410(this, a, 1, p, (void*)d);
            return a;
        }
    }
fail:
    {
        char tmp[8];
        sub_4DE100(this, tmp, (void*)d);
        *(void**)a = *(void**)tmp;
        *(void**)((char*)a + 4) = *(void**)(tmp + 4);
        return a;
    }
}
