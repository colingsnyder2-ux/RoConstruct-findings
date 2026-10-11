// from server: 17% by atomic.potato
struct VChunk {
    char pad0[8];
    char field8[0x10];
    char pad18[4];
    void* field18;

    void* func(void* arg1, void* arg2);
};

struct Ret {
    void* p;
};

extern "C" {
    void* __stdcall sub_5c10a0(void*);
    char* __stdcall sub_5c1a40(void*);
    void* __stdcall sub_5c1a50(void*);
    void* __stdcall sub_5c1a70(void*);
    void* __stdcall sub_5ac710(void*);
    char __stdcall sub_5c0a30(void*, void*, void*);
    void* __stdcall sub_5c1d70(void*, void*, void*, void*, void*, void*);
    void* __stdcall sub_5b61c0(void*, void*);
    void* __stdcall sub_5c14f0(void*, void*, void*);
    void* __stdcall sub_5b4400(void*, void*);
    char __stdcall sub_5c14a0(void*, void*);
    void* __stdcall sub_5c4380(void*);
    void* __stdcall sub_5abd30(void*, void*);
}

void* VChunk::func(void* arg1, void* arg2)
{
    void* v4 = *(void**)sub_5c10a0(this);
    void* v8 = this->field18;
    char vff = 1;
    while (*(char*)sub_5c1a40(v4) == 0) {
        v8 = v4;
        void* t = sub_5ac710(v4);
        void* t2 = sub_5c1a50(arg2);
        char r = sub_5c0a30(this->field8, t2, t);
        vff = r;
        if (r) {
            v4 = *(void**)sub_5c1a50(v4);
        } else {
            v4 = *(void**)sub_5c1a70(v4);
        }
    }
    if (vff) {
        char b = 1;
        void* r = sub_5c1d70(this, &b, v8, arg2, &b, &b);
        sub_5b61c0(arg1, r);
        return arg1;
    }
    void* local14;
    sub_5c14f0(&local14, v8, this);
    if (vff) {
        void* tmp;
        sub_5b4400(this, &tmp);
        if (sub_5c14a0(&local14, tmp)) {
            char b = 1;
            void* r = sub_5c1d70(this, &b, v8, arg2, &b, &b);
            sub_5b61c0(arg1, r);
            return arg1;
        }
        sub_5c4380(&local14);
    }
    void* t = sub_5c1a50(arg2);
    void* t2 = sub_5abd30(&local14, t);
    void* t3 = sub_5ac710(t2);
    if (sub_5c0a30(this->field8, t3, t)) {
        char b = 1;
        void* r = sub_5c1d70(this, &b, v8, arg2, &b, &b);
        sub_5b61c0(arg1, r);
        return arg1;
    }
    char b = 0;
    sub_5b61c0(arg1, &b);
    return arg1;
}
