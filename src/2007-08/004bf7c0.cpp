// from server: 68% by tester
struct RakPeer {
    char pad0[8];
    unsigned short field8;
    char pad1[0x22c - 0xa];
    int field22c;
    char pad2[0x708 - 0x230];
    int field708;
    char pad3[0x8c8 - 0x70c];
    int field8c8;
    int field8cc;

    int func_004bf7c0(int a1, int a2, int a3, int a4);
};

extern "C" int __cdecl sub_4b7f70();
extern "C" void __cdecl sub_4c9ed0(int);
extern "C" void __cdecl sub_60b220(int, int);
extern "C" void __cdecl sub_4c4ba0(int, int);
extern "C" void __cdecl sub_4c4a90(int, int);
extern "C" void __cdecl sub_4c9e00(int, int);
extern "C" void __cdecl sub_4bd590(int, int, int);

extern int dword_892f5c;
extern unsigned short word_892f60;

int RakPeer::func_004bf7c0(int a1, int a2, int a3, int a4)
{
    int result;
    unsigned int i;
    unsigned int count;
    int base;
    int entry;
    int tmp;

    result = sub_4b7f70();
    count = field8;
    i = 0;
    if (count == 0) {
        return 0;
    }
    base = field22c;
    while (*(char*)base != 0) {
        i++;
        base += 0x840;
        if (i >= count) {
            return 0;
        }
    }

    entry = i * 0x840 + field22c;

    sub_4c9ed0(entry + 0x828);
    *(int*)(entry + 4) = a1;
    *(unsigned short*)(entry + 8) = (unsigned short)a2;
    *(int*)(entry + 0x834) = field708;
    *(char*)entry = 1;

    tmp = field8c8;
    sub_60b220(tmp, entry + 0x18);
    tmp = field8cc;
    sub_4c4ba0(tmp, entry + 0x18);
    sub_4c4a90(0, entry + 0x18);

    *(int*)(entry + 0x824) = a3;

    {
        int* p = (int*)(entry + 0x7d8);
        int n = 5;
        do {
            *(unsigned short*)((char*)p - 4) = 0xffff;
            *p = 0;
            p += 2;
            n--;
        } while (n != 0);
    }

    *(int*)(entry + 0x838) = a4;
    *(int*)(entry + 0x7fc) = 0;
    *(int*)(entry + 0x804) = 0;
    *(char*)(entry + 0x7d0) = 0;
    *(unsigned short*)(entry + 0x800) = 0xffff;
    *(int*)(entry + 0x80c) = result;
    *(int*)(entry + 0xc) = dword_892f5c;
    *(unsigned short*)(entry + 0x10) = word_892f60;
    *(char*)(entry + 0x820) = 0;
    *(int*)(entry + 0x808) = result;
    sub_4c9e00(1, entry + 0x18);

    {
        int local14 = a1;
        unsigned short local18 = (unsigned short)a2;
        int local20 = i;
        sub_4bd590((int)this + 0x230, (int)&local20, (int)&local14);
    }

    return entry;
}
