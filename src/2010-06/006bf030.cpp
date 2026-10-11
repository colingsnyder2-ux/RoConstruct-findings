// from server: 25% by atomic.potato
extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" int __cdecl string_less(const void*, const void*);
extern "C" void __cdecl string_copy_ctor(void*, const void*);

struct Inner {
    char pad0[0x18];
    int field18;
};

struct S {
    char pad0[0x18];
    Inner* field18;
    int field1c;
    int method_be800(int);
    int method_bed70(int, int, int, int);
    int method(int);
};

int S::method(int arg) {
    int result = this->method_be800(arg);
    int* p = (int*)result;
    if (this == 0) {
        _invalid_parameter_noinfo();
    }
    int* edi = (int*)*(int*)this;
    int ecx18 = this->field18->field18;
    if (edi != 0) {
        if (edi != edi) {
            _invalid_parameter_noinfo();
        }
    } else {
        _invalid_parameter_noinfo();
    }
    if (p != (int*)ecx18) {
        if (!string_less((void*)(arg), (void*)((char*)p + 0xc))) {
            goto skip;
        }
    }
    {
        char buf[0x18];
        string_copy_ctor(buf, (void*)arg);
        int r = this->method_bed70((int)edi, (int)p, (int)buf, 0);
        edi = (int*)*(int*)r;
        p = (int*)*(int*)(r + 4);
    }
skip:
    if (edi == 0) {
        _invalid_parameter_noinfo();
        edi = 0;
        if (p != (int*)*(int*)((char*)edi + 0x18)) {
            _invalid_parameter_noinfo();
        }
    } else {
        edi = (int*)*edi;
        if (p != (int*)*(int*)((char*)edi + 0x18)) {
            _invalid_parameter_noinfo();
        }
    }
    return (int)((char*)p + 0x28);
}
