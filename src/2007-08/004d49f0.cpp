// from server: 47% by colin
struct Texture {
    void* field0;
    void* field4;
    void* field8;
    void* insert(void* a, void* b, void* c, void* d);
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" int __cdecl sub_4D0670(void*, void*);
extern "C" void __cdecl sub_4D07E0(void*);
extern "C" void __cdecl sub_4D08E0(void*);
extern "C" void __cdecl sub_4D2A30(void*, void*, int, void*);
extern "C" void* __cdecl sub_4D3700(void*, void*);
extern "C" int __cdecl sub_466AB0(void*, void*);

void* Texture::insert(void* a, void* b, void* c, void* d)
{
    if (this->field8 == 0) {
        sub_4D2A30(this, a, 1, d);
        return a;
    }

    void* edi = *(void**)this->field4;
    void* ebp = b;

    if (ebp != 0 && ebp != this) {
        _invalid_parameter_noinfo();
    }

    void* ebx = c;

    if (ebx == edi) {
        if (sub_4D0670(this, (char*)ebx + 0xc) == 0) {
            goto fail;
        }
        sub_4D2A30(this, a, 1, d);
        return a;
    }

    if (ebp != 0 && ebp != this) {
        _invalid_parameter_noinfo();
    }

    edi = *(void**)this->field4;

    if (ebx == edi) {
        void* tmp = *(void**)((char*)edi + 8);
        if (sub_4D0670(this, (char*)tmp + 0xc) == 0) {
            goto fail;
        }
        sub_4D2A30(this, a, 0, d);
        return a;
    }

    if (sub_4D0670(this, (char*)ebx + 0xc) != 0) {
        void* local[2];
        local[0] = ebp;
        local[1] = ebx;
        sub_4D07E0(local);

        void* p = local[1];
        if (sub_4D0670(this, (char*)p + 0xc) != 0) {
            void* q = local[1];
            void* r = *(void**)((char*)q + 8);
            if (*(char*)((char*)r + 0x29) != 0) {
                sub_4D2A30(this, a, 0, d);
                return a;
            } else {
                sub_4D2A30(this, a, 1, d);
                return a;
            }
        }
    }

    if (sub_4D0670(this, (char*)ebx + 0xc) != 0) {
        void* local[2];
        local[0] = ebp;
        local[1] = ebx;
        void* local2[2];
        local2[0] = this;
        local2[1] = *(void**)this->field4;
        sub_4D08E0(local);

        if (sub_466AB0(local2, local) != 0) {
            void* q = local[1];
            void* r = *(void**)((char*)q + 8);
            if (*(char*)((char*)r + 0x29) != 0) {
                sub_4D2A30(this, a, 0, d);
                return a;
            } else {
                sub_4D2A30(this, a, 1, d);
                return a;
            }
        } else {
            void* p = local[1];
            if (sub_4D0670(this, (char*)p + 0xc) == 0) {
                goto fail;
            }
            void* q = local[1];
            void* r = *(void**)((char*)q + 8);
            if (*(char*)((char*)r + 0x29) != 0) {
                sub_4D2A30(this, a, 0, d);
                return a;
            } else {
                sub_4D2A30(this, a, 1, d);
                return a;
            }
        }
    }

fail:
    {
        void* local[2];
        void* result = sub_4D3700(this, local);
        *(void**)a = *(void**)result;
        *(void**)((char*)a + 4) = *(void**)((char*)result + 4);
        return a;
    }
}
