// from server: 39% by colin
// roc 2008-06 0056d890  unit: G3D::VColor3::?$holder  size: 286 bytes

typedef unsigned int DWORD;

extern "C" {
    int __stdcall sub_409d50(void*);
    int __stdcall sub_415c90(void*);
    int __stdcall sub_509b10(void*, void*, void*, void*);
    int __stdcall sub_56c6d0(void*);
    void* __stdcall sub_56ce60();
    int __stdcall sub_56d1d0(void*, void*);
    int __stdcall sub_5bebb0(void*, void*);
    int __stdcall sub_6a158c(void*, void*);
}

struct S {
    void* field0;
    void* field4;
    void f();
};

void S::f() {
    float zero;
    char buf[32];
    int flag;

    if (field4 != 0) {
        void* obj = field4;
        void* vtbl = *(void**)obj;
        void* fn = *(void**)((char*)vtbl + 4);
        void* res;
        if (obj != 0) {
            res = ((void*(*)(void*))fn)(obj);
        } else {
            res = (void*)0x929614;
        }
        if (((int(__stdcall*)(void*, void*))0x802878)(res, (void*)0x946364)) {
            if ((char*)field4 + 4 != 0) {
                goto done;
            }
        }
    }

    if (((int(__stdcall*)(void*, void*))0x802878)(*(void**)((char*)field0 + 8), (void*)0x92bef8)) {
        zero = 0.0f;
        sub_415c90(&zero);
        if (sub_5bebb0(&zero, field4)) {
            sub_56d1d0(field4, &zero);
            field0 = sub_56ce60();
            sub_56c6d0(field4);
            goto done;
        }
    }

    {
        void* a = sub_56ce60();
        void* b = *(void**)((char*)a + 0xc);
        void* c;
        if (*(DWORD*)((char*)b + 0x1c) < 0x10) {
            c = (char*)b + 8;
        } else {
            c = *(void**)((char*)b + 8);
        }
        void* d = *(void**)((char*)field0 + 0xc);
        void* e = (char*)d + 4;
        void* g;
        if (*(DWORD*)((char*)e + 0x18) < 0x10) {
            g = (char*)e + 4;
        } else {
            g = *(void**)((char*)e + 4);
        }
        sub_509b10(buf, (void*)0x82f71c, g, c);
        flag = 0;
        sub_409d50(buf);
        sub_6a158c((void*)0x8d1bc8, buf);
    }

done:
    return;
}
