// from server: 41% by colin
extern "C" {
    void* __cdecl malloc(unsigned int size);
    void __cdecl free(void* ptr);
    int __cdecl memcpy_s(void* dest, unsigned int destSize, const void* src, unsigned int count);
    int __stdcall GetDIBits(void* hdc, void* hbm, unsigned int start, unsigned int lines, void* bits, void* bmi, unsigned int usage);
}

struct CXTPCommandBar {
    int sub_6498C0(void* p1, void* p2, unsigned int* p3, unsigned int* p4);
};

int CXTPCommandBar::sub_6498C0(void* p1, void* p2, unsigned int* p3, unsigned int* p4) {
    if (p1 != 0) {
        return 0;
    }

    unsigned char bmi[0x2c];
    memcpy_s(bmi, 0x2c, 0, 0x2c);

    unsigned int width = 0x28;
    unsigned int height;
    if (p2 == 0) {
        height = 0;
    } else {
        height = *(unsigned int*)((char*)p2 + 4);
    }

    int result = GetDIBits(0, p1, 0, 0, 0, bmi, 0);
    if (result == 0) {
        return 0;
    }

    if (*(unsigned short*)(bmi + 0x0e) != 0x20) {
        return 0;
    }

    unsigned int w = *(unsigned int*)(bmi + 0x04);
    unsigned int h = *(unsigned int*)(bmi + 0x08);
    unsigned int size = w * h * 4;
    *p3 = size;

    void* bits = malloc(size);
    *p4 = (unsigned int)bits;
    if (bits == 0) {
        return 0;
    }

    void* bmi2 = malloc(0x34);
    unsigned int* pBmi2 = (unsigned int*)bmi2;
    if (bmi2 == 0) {
        if (bits != 0) {
            free(bits);
            *p4 = 0;
        }
        return 0;
    }

    memcpy_s(bmi2, 0x28, bmi, 0x28);

    unsigned int h2;
    if (p2 == 0) {
        h2 = 0;
    } else {
        h2 = *(unsigned int*)((char*)p2 + 4);
    }

    result = GetDIBits(0, p1, 0, h2, bits, bmi2, 0);
    if (result == 0) {
        if (bits != 0) {
            free(bits);
            *p4 = 0;
        }
        if (bmi2 != 0) {
            free(bmi2);
        }
        return 0;
    }

    return 1;
}
