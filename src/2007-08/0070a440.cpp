// from server: 30% by colin
extern "C" __declspec(dllimport) int __stdcall SetPixel(void*, int, int, unsigned long);

extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void* __cdecl sub_62FF32(unsigned int);
extern "C" void __cdecl sub_41F680(void*);
extern "C" void __cdecl sub_738B0E(void*, int, int, int);
extern "C" int __cdecl sub_738B08(void*, int);
extern "C" void __cdecl sub_6E4770(void*, void*);

struct CXTColorHex {
    void sub_70A440(int, int, int, int, int, int, int, int);
};

void CXTColorHex::sub_70A440(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    int* p = (int*)sub_62FEF6(0x1c);
    int* obj = p;
    sub_738B0E((char*)this + 0x7c, 0, 1, a1);
    int v = sub_738B08((char*)this + 0x7c, 0);
    int* arr = (int*)sub_62FF32(0x540);
    obj[6] = a1;
    obj[4] = 1;
    obj[0] = a2;
    obj[5] = (int)arr;
    obj[3] = a3;
    obj[1] = a4;
    obj[2] = a5;
    sub_6E4770((char*)this + 0x7c, obj);
    if (a1 == *(int*)((char*)this + 0x78)) {
        *(int*)((char*)this + 0x70) = a6;
        *(int*)((char*)this + 0x74) = a7;
    }
    int idx = 0;
    int y = a7;
    int x = a6;
    int i;
    for (i = 9; i != 0; i--) {
        SetPixel((void*)v, x, y, a1);
        arr[idx * 2] = x;
        arr[idx * 2 + 1] = y;
        idx++;
        SetPixel((void*)v, x + 1, y, a1);
        arr[idx * 2] = x + 1;
        arr[idx * 2 + 1] = y;
        idx++;
        x++;
        y++;
    }
    y = a7 - 1;
    for (i = 0xb; i != 0; i--) {
        SetPixel((void*)v, x + 2, y, a1);
        arr[idx * 2] = x + 2;
        arr[idx * 2 + 1] = y;
        idx++;
        SetPixel((void*)v, x + 3, y, a1);
        arr[idx * 2] = x + 3;
        arr[idx * 2 + 1] = y;
        idx++;
        x++;
        y++;
    }
    y = a7 - 2;
    for (i = 0xd; i != 0; i--) {
        SetPixel((void*)v, x + 4, y, a1);
        arr[idx * 2] = x + 4;
        arr[idx * 2 + 1] = y;
        idx++;
        SetPixel((void*)v, x + 5, y, a1);
        arr[idx * 2] = x + 5;
        arr[idx * 2 + 1] = y;
        idx++;
        x++;
        y++;
    }
    y = a7 - 3;
    for (i = 0xf; i != 0; i--) {
        SetPixel((void*)v, x + 6, y, a1);
        arr[idx * 2] = x + 6;
        arr[idx * 2 + 1] = y;
        idx++;
        SetPixel((void*)v, x + 7, y, a1);
        arr[idx * 2] = x + 7;
        arr[idx * 2 + 1] = y;
        idx++;
        SetPixel((void*)v, x + 8, y, a1);
        arr[idx * 2] = x + 8;
        arr[idx * 2 + 1] = y;
        idx++;
        x++;
        y++;
    }
    y = a7 - 2;
    for (i = 0xd; i != 0; i--) {
        SetPixel((void*)v, x + 9, y, a1);
        arr[idx * 2] = x + 9;
        arr[idx * 2 + 1] = y;
        idx++;
        SetPixel((void*)v, x + 10, y, a1);
        arr[idx * 2] = x + 10;
        arr[idx * 2 + 1] = y;
        idx++;
        x++;
        y++;
    }
    y = a7 - 1;
    for (i = 0xb; i != 0; i--) {
        SetPixel((void*)v, x + 11, y, a1);
        arr[idx * 2] = x + 11;
        arr[idx * 2 + 1] = y;
        idx++;
        SetPixel((void*)v, x + 12, y, a1);
        arr[idx * 2] = x + 12;
        arr[idx * 2 + 1] = y;
        idx++;
        x++;
        y++;
    }
    int base = x + 13;
    int j;
    for (j = 0; j < 9; j++) {
        int yy = a7 + j;
        SetPixel((void*)v, base, yy, a1);
        arr[idx * 2] = base;
        arr[idx * 2 + 1] = yy;
        idx++;
    }
    sub_738B08((char*)this + 0x7c, v);
    sub_41F680((char*)this + 0x7c);
}
