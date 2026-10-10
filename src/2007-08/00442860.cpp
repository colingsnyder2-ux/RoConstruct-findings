// from server: 53% by colin
extern "C" void* __stdcall malloc(unsigned int);
extern "C" void __stdcall free(void*);
extern "C" void* __stdcall CreateDIBSection(void*, void*, unsigned int, void**, void*, unsigned int);

struct CPropGrid {
    char pad0[4];
    int field4;
    char pad8[0x14];
    char field1D;
    char pad1E[2];
    int method442750(int);

    int method442860(int a1, int a2, int a3, int a4, int a5, int a6);
};

void sub_401150(void*);
void sub_630b8c(void*, int, unsigned int);

int CPropGrid::method442860(int a1, int a2, int a3, int a4, int a5, int a6)
{
    void* mem;
    char* chunk;
    int* node;
    int* prev;
    void* dib;
    int result;

    mem = malloc(0x430);
    if (mem == 0) {
        chunk = 0;
    } else {
        *(int*)mem = 0;
        chunk = (char*)mem + 8;
    }

    if (chunk == 0) {
        node = (int*)mem;
        while (node != 0) {
            prev = node;
            node = (int*)*node;
            free(prev);
        }
        return 0;
    }

    *(int*)(chunk + 0xc) = 0;
    *(int*)(chunk + 0x14) = 0;
    *(int*)(chunk + 0x18) = 0;
    *(int*)(chunk + 0x1c) = 0;
    *(int*)(chunk + 0x20) = 0;
    *(int*)(chunk + 0x24) = 0;
    *(int*)(chunk + 4) = a1;
    *(int*)chunk = 0x28;
    *(int*)(chunk + 8) = a2;
    *(short*)(chunk + 0xc) = 1;
    *(short*)(chunk + 0xe) = (short)a4;
    *(int*)(chunk + 0x10) = a3;

    if (a4 <= 8) {
        sub_630b8c(chunk + 0x28, 0, 0x400);
    } else if (a3 == 3) {
        *(int*)(chunk + 0x28) = *(int*)a5;
        *(int*)(chunk + 0x2c) = *(int*)(a5 + 4);
        *(int*)(chunk + 0x30) = *(int*)(a5 + 8);
    }

    dib = CreateDIBSection(0, 0, 0, (void**)((char*)this + 8), chunk, 0);
    if (dib == 0) {
        sub_401150((char*)this + 0xc);
        return 0;
    }

    result = (a2 >= 0) ? 1 : 0;
    this->field4 = (int)dib;
    this->method442750(result + 1);
    if (a6 & 1) {
        this->field1D = 1;
    }
    sub_401150((char*)this + 0xc);
    return 1;
}
