// from server: 48% by colin
struct CArray {
    char pad0[0x10];
    int m_flag10;
    char pad14[0x8];
    int m_hwnd1c;
    char pad20[0x20];
    int m_flag40;
    int m_flag44;
    int sub_6a3db0(int, int, int);
};

extern "C" void* __stdcall sub_73836a(void*);
extern "C" void __cdecl sub_62ff20();
extern "C" void __cdecl sub_62ff3e(void*, int);
extern "C" void __cdecl sub_4083e0(void*);
extern "C" int __stdcall sub_6a3c30(CArray*, int, int, int);
extern "C" int __stdcall CallNextHookEx(int, int, int, int);

extern int dword_8C9318;
extern int dword_8C931C;

int CArray::sub_6a3db0(int a2, int a3, int a4) {
    CArray* obj = (CArray*)sub_73836a((void*)0x632280);
    if (obj == 0)
        sub_62ff20();

    if (a2 != 0) {
        return CallNextHookEx(obj->m_hwnd1c, a2, a3, a4);
    }

    int x = *(int*)a4;
    int y = *(int*)(a4 + 4);

    if (a3 == 0x201 || a3 == 0x204)
        obj->m_flag40 = 0;

    if (a3 == 0x202 || a3 == 0xa2) {
        if (obj->m_flag40 != 0) {
            obj->m_flag40 = 0;
            return 1;
        }
    }

    if (obj->m_flag10 != 0) {
        if ((a3 == 0x200 || a3 == 0xa0) && dword_8C9318 == x && dword_8C931C == y)
            return 1;
    }

    dword_8C9318 = x;
    dword_8C931C = y;

    if (obj->m_flag10 == 0) {
        return CallNextHookEx(obj->m_hwnd1c, a3, 0, a4);
    }

    int tmp = obj->m_flag44;
    sub_62ff3e(&tmp, tmp);

    int r = sub_6a3c30(obj, a3, x, y);
    if (r != 0) {
        sub_4083e0(&tmp);
        return 1;
    }

    int r2 = CallNextHookEx(obj->m_hwnd1c, a3, 0, a4);
    sub_4083e0(&tmp);
    return r2;
}
