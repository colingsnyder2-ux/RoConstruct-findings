// from server: 53% by colin
extern "C" int __cdecl sub_60EE90(int, const char*, ...);
extern "C" int __cdecl sub_60FEF0(int, int, int);
extern "C" int __cdecl sub_613A40(int, int, int, int, int, int);
extern "C" int __cdecl sub_617520(int, int, int);

struct S {
    char pad0[0xc];
    int field_c;
    int field_10;
    char pad14[0x20];
    char field_33;
    char field_34;
    char pad35[0x13];
    char field_48;
    int field_1c;
    int field_24;
    int field_3c;

    int f(int* a2);
};

int S::f(int* a2)
{
    int* esi = *(int**)this;
    char count = *((char*)esi + 0x48);
    int ebp = *((int*)esi + 0x24);
    int* ebx = (int*)((char*)esi + 0x24);
    int eax = 0;
    int saved = ebp;
    if ((int)count > 0) {
        int* ecx = (int*)((char*)this + 0x34);
        int cmpval = *a2;
        while (1) {
            char c1 = *((char*)ecx - 1);
            if ((int)c1 == cmpval) {
                char c2 = *((char*)ecx);
                if ((int)c2 == a2[2]) {
                    goto found;
                }
            }
            eax++;
            ecx = (int*)((char*)ecx + 2);
            if (eax >= (int)*((char*)esi + 0x48)) break;
        }
        ebp = saved;
    }
    {
        int v = (int)*((char*)esi + 0x48) + 1;
        if (v > 0x3c) {
            int e = *((int*)esi + 0x3c);
            if (e == 0) {
                int r = sub_60EE90(this->field_10, (const char*)0x7c33a8, 0x3c, (const char*)0x7c3424);
                sub_617520(this->field_c, r, 0);
            } else {
                int r = sub_60EE90(this->field_10, (const char*)0x7c3380, e, 0x3c, (const char*)0x7c3424);
                sub_617520(this->field_c, r, 0);
            }
        }
    }
    {
        int v = (int)*((char*)esi + 0x48) + 1;
        if (v > *ebx) {
            int r = sub_613A40(this->field_10, *((int*)esi + 0x1c), (int)ebx, 4, 0x7ffffffd, 0x785954);
            *((int*)esi + 0x1c) = r;
        }
    }
    while (ebp < *ebx) {
        *((int*)(*((int*)esi + 0x1c)) + ebp) = 0;
        ebp++;
    }
    {
        char c = *((char*)esi + 0x48);
        int* arr = (int*)*((int*)esi + 0x1c);
        int val = a2[0];
        arr[c] = val;
        if ((*(char*)(val + 5) & 3) != 0) {
            if ((*((char*)esi + 5) & 4) != 0) {
                sub_60FEF0(this->field_10, (int)esi, val);
            }
        }
        char b0 = *((char*)a2);
        char c2 = *((char*)esi + 0x48);
        *((char*)this + c2 * 2 + 0x33) = b0;
        char b8 = *((char*)a2 + 8);
        char c3 = *((char*)esi + 0x48);
        *((char*)this + c3 * 2 + 0x34) = b8;
        char cl = *((char*)esi + 0x48);
        *((char*)esi + 0x48) = cl + 1;
    }
found:
    return 0;
}
