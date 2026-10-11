// from server: 37% by colin
struct CXTIconHandle {
    int field0;
    char pad1[4];
    int field8;
    int fieldC;
    char pad10[0x10];
    int field20;
    int method_7a6196();
    int method_7a61c0();
    int method_7a61d8();
};

extern "C" int __stdcall sub_7a6116(int);
extern "C" int __stdcall sub_7a60c2(int);
extern "C" int __stdcall sub_7a6132(int, int);
extern "C" void __stdcall DeleteCriticalSection(void*);
extern "C" int __stdcall sub_7a5c04(int);

extern char byte_96dcf8;
extern int dword_97f2ac;

int CXTIconHandle::method_7a6196()
{
    sub_7a6116((int)this);
    this->field0 = 0x2c;
    int r = sub_7a60c2((int)this);
    if (r < 0) {
        byte_96dcf8 = 1;
        this->field0 = 0;
    }
    return (int)this;
}

int CXTIconHandle::method_7a61c0()
{
    sub_7a6132((int)this, dword_97f2ac);
    return sub_7a5c04((int)this + 0x20);
}

int CXTIconHandle::method_7a61d8()
{
    if (this->field0 != 0) {
        int* p = (int*)this->field8;
        int* end = (int*)this->fieldC;
        while (p < end) {
            int v = *p;
            if (v != 0) {
                int* q = *(int**)(v + 0x10);
                if (q != 0) {
                    ((void (__stdcall*)(int*))*(int*)(*q + 8))(q);
                }
                *(int*)(v + 0x10) = 0;
            }
            p++;
        }
        DeleteCriticalSection((void*)((char*)this + 0x10));
        this->field0 = 0;
    }
    return (int)this;
}
