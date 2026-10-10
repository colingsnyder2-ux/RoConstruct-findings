// from server: 53% by colin
struct S {
    char pad[0x100];
    void* f(void* a, void* b, void* c, void* d, void* e, void* f, void* g);
};

extern "C" void __stdcall sub_61C560(void*);
extern "C" void __stdcall sub_77E4FC(void*);
extern "C" void __stdcall sub_77E6D8(void);
extern "C" void __stdcall sub_75CF88(void);

void* S::f(void* a, void* b, void* c, void* d, void* e, void* f, void* g)
{
    char* esi = (char*)a;
    char* ebp = (char*)b;
    char* edi;
    char bl;
    unsigned short di;
    char local[8];
    void* result;

    for (;;) {
        if (esi != (char*)-2) {
            if (esi == 0) {
                sub_77E6D8();
            } else if (esi != (char*)c) {
                sub_77E6D8();
            }
        }
        if (ebp == (char*)d) break;
        if (esi != (char*)-2) {
            if (esi == 0) {
                sub_77E6D8();
            }
            if (*(unsigned int*)(esi + 0x18) >= 0x10) {
                edi = *(char**)(esi + 4);
            } else {
                edi = esi + 4;
            }
            if (ebp >= edi + *(unsigned int*)(esi + 0x14)) {
                sub_77E6D8();
            }
        }
        bl = *ebp;
        di = *(unsigned short*)e;
        sub_61C560(local);
        if ((*(unsigned short**)(local + 0x10))[bl] & di) {
            if (esi != (char*)-2) {
                if (esi == 0) {
                    sub_77E6D8();
                }
                if (*(unsigned int*)(esi + 0x18) >= 0x10) {
                    edi = *(char**)(esi + 4);
                } else {
                    edi = esi + 4;
                }
                if (ebp >= edi + *(unsigned int*)(esi + 0x14)) {
                    sub_77E6D8();
                }
            }
            ebp++;
            continue;
        }
        break;
    }
    result = f;
    *(char**)result = esi;
    *(char**)((char*)result + 4) = ebp;
    sub_77E4FC(local);
    return result;
}
