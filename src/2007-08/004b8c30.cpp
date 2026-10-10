// from server: 78% by colin
struct RakPeer {
    char pad0[8];
    unsigned short field_8;
    char pad1[0x22c - 0xa];
    char* field_22c;
    void func(int* out, int a, int b);
};

extern unsigned short dword_892F60;
extern int dword_892F5C;

extern "C" bool __fastcall sub_4A3480(void* self, void* arg);

void RakPeer::func(int* out, int a, int b)
{
    unsigned short v14 = dword_892F60;
    int ebp = dword_892F5C;
    unsigned int edi = 0;
    if (field_8 > 0) {
        unsigned int ebx = 0;
        do {
            char* edx = field_22c;
            if (sub_4A3480(edx + ebx + 4, &v14) ||
                sub_4A3480(&dword_892F5C, &v14)) {
                char* eax = field_22c + ebx;
                if (*eax != 0) {
                    char* esi = field_22c;
                    unsigned int t = edi * 0x840;
                    out[0] = *(int*)(t + (unsigned int)esi + 0xc);
                    out[1] = *(int*)(t + (unsigned int)esi + 0x10);
                    return;
                }
                ebp = *(int*)(eax + 0xc);
                v14 = *(unsigned short*)(eax + 0x10);
            }
            edi++;
            ebx += 0x840;
        } while (edi < field_8);
    }
    out[0] = ebp;
    out[1] = *(int*)&v14;
}
