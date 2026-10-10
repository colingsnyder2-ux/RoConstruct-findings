// from server: 62% by colin
// roc 2007-08 0063f1d0  unit: CXTPPaintManager  size: 490 bytes

struct CXTPPaintManager {
    char pad[0x70];
    int field70;
    char pad2[0x20];
    int field94;
    int field98;
    int field9c;
    int fielda0;
    int fielda4;
    int fielda8;
    int fieldac;
    int fieldb0;
    int fieldb4;
    int fieldb8;
    int fieldbc;
    int fieldc0;
    char pad3[0x44];
    int field108;
    void method_63efc0(int, void*);

    void method_63f1d0();
};

struct CUnknown1 {
    void method_63cd00();
};

struct CUnknown2 {
    void method_63cce0();
};

struct CUnknown3 {
    void method_63022c();
    void method_630238(void*);
};

struct CUnknown4 {
    int method_63d190(void*);
};

extern "C" {
    int __stdcall SystemParametersInfoA(unsigned int, unsigned int, void*, unsigned int);
    int __stdcall CreateFontIndirectA(const void*);
    int __cdecl _mbsicmp(const unsigned char*, const unsigned char*);
    int __cdecl strcpy_s(char*, unsigned int, const char*);
}

extern void* __cdecl func_671140();
extern int __stdcall func_671aa0(void*);
extern void __stdcall func_630a1e();

void CXTPPaintManager::method_63f1d0()
{
    char buf[0x1d0];
    CUnknown1* p1;
    CUnknown2* p2;
    CUnknown3* p3;
    CUnknown4* p4;
    int i;
    char* p;
    void* h;
    int val;

    p2 = (CUnknown2*)(buf + 0x84);
    p2->method_63cce0();

    if (this->field108 != 0) {
        p1 = (CUnknown1*)(buf + 0xc);
        p1->method_63cd00();

        val = *(int*)(buf + 0x124);
        if (val < 0) {
            if (val > -0xb) {
                *(int*)(buf + 0xc) = val;
            } else {
                *(int*)(buf + 0xc) = -0xb;
            }
        } else {
            *(int*)(buf + 0xc) = val;
        }

        *(int*)(buf + 0x1c) = *(int*)(buf + 0x134);
        *(char*)(buf + 0x24) = *(char*)(buf + 0x138);
        *(char*)(buf + 0x2f) = *(char*)(buf + 0x13b);

        strcpy_s(buf + 0x2c, 0x20, buf + 0x140);

        if (_mbsicmp((unsigned char*)(buf + 0x34), (unsigned char*)"Segoe UI") == 0) {
            h = func_671140();
            if (func_671aa0(h) != 0) {
                if (p4->method_63d190(buf + 0x28) != 0) {
                    *(char*)(buf + 0x26) = 6;
                }
            }
        }

        this->method_63efc0(1, buf + 0x10);
    }

    SystemParametersInfoA(0x1f, 0x3c, buf + 0x4c, 0);

    if (this->field70 != 0) {
        h = func_671140();
        if (func_671aa0(h) != 0) {
            *(char*)(buf + 0x62) = 6;
            *(char*)(buf + 0xfa) = 6;
            *(char*)(buf + 0x17a) = 6;
        }
    }

    p3 = (CUnknown3*)((char*)this + 0x94);
    if (this->field9c != 0 || this->field98 != 0) {
        p3->method_63022c();
        p3->method_630238(buf + 0xe0);
    }

    p3 = (CUnknown3*)((char*)this + 0xa0);
    if (this->fielda8 != 0 || this->fielda4 != 0) {
        p3->method_63022c();
        p3->method_630238(buf + 0x48);
    }

    *(int*)(buf + 0x58) = 0x2bc;

    p3 = (CUnknown3*)((char*)this + 0xac);
    if (this->fieldb4 != 0 || this->fieldb0 != 0) {
        p3->method_63022c();
        p3->method_630238(buf + 0x48);
    }

    p3 = (CUnknown3*)((char*)this + 0xb8);
    if (this->fieldc0 != 0 || this->fieldbc != 0) {
        p3->method_63022c();
        p3->method_630238(buf + 0x160);
    }

    func_630a1e();
}
