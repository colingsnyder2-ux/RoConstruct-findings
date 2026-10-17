// from server: 49% by colin
struct CPropGrid {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    char field1C;
    char field1D;
    int field20;
    int field24;
    CPropGrid();
    ~CPropGrid();
    int f();
    int g(int, int, int, int);
};

struct CSelectionPropGrid {
    int f(int, int);
    int value0;
    int value4;
    int value8;
    int valueC;
    int value10;
    int value14;
    int value18;
};

struct S_func_00442c80 {
    char pad0[12];
    int m_x;
    int f();
};

struct S_func_00442cd0 {
    char pad0[4];
    int m_x;
    int f();
};

struct S_func_00442f70 {
    int f(int, int, int, int);
};

struct S_func_005105b0 {
    int f(int, int, int);
};

struct S_func_0050e230 {
    void f();
};

struct S_func_006a0f2c {
    int f(void*, void*);
};

struct S_func_006a17e0 {
    int f(void*, void*, int);
};

struct S_func_006bd6a0 {
    int f(void*);
};

struct S_func_006bfcc0 {
    int f(void*);
};

extern "C" {
    void* __stdcall FindResourceA(void*, const char*, const char*);
    int __stdcall FreeResource(void*);
    void* __stdcall LoadResource(void*, void*);
    void* __stdcall LockResource(void*);
    int __stdcall SizeofResource(void*, void*);
    void* __stdcall memcpy(void*, const void*, unsigned int);
}

extern void* (__stdcall *g_pfn_802190)(void*, void*, void*);
extern void* (__stdcall *g_pfn_8021a8)(void*, void*);
extern void* (__stdcall *g_pfn_802210)(void*);
extern void* (__stdcall *g_pfn_8021c8)(void*, void*, int);
extern int (__stdcall *g_pfn_80220c)(void*);

struct CPatchedControlComboBox {
    bool f();
};

bool CPatchedControlComboBox::f()
{
    void* hInstance = (void*)0x810c40;
    void* hRes = (void*)((S_func_006a0f2c*)0)->f((void*)this, hInstance);
    if (!hRes)
        return false;
    void* hRes2 = g_pfn_802190((void*)this, hInstance, hRes);
    if (!hRes2)
        return false;
    void* hRes3 = g_pfn_8021a8(hRes, hRes2);
    if (!hRes3)
        return false;
    void* hRes4 = g_pfn_802210(hRes3);
    if (!hRes4)
        return false;
    void* pData = g_pfn_8021c8(hRes, hRes2, 5);
    S_func_005105b0* grid = (S_func_005105b0*)0;
    grid->f((int)hRes4, (int)pData, 0);
    int rows = *(int*)((char*)grid + 0x1c);
    int cols = *(int*)((char*)grid + 0x20);
    int i;
    for (i = 0; i < rows; i++) {
        int j;
        for (j = 0; j < cols; j++) {
            int* base = *(int**)((char*)grid + 0x18);
            int idx = j * rows + i;
            char* p = (char*)(base + idx);
            char* q = p + 2;
            if (p != q) {
                char t = *q;
                *q = *p;
                *p = t;
            }
        }
    }
    CPropGrid pg;
    pg.f();
    int a = *(int*)((char*)grid + 0x20);
    int b = *(int*)((char*)grid + 0x1c);
    int c = (a == 4) ? 1 : 0;
    int d = a * 8;
    int e = *(int*)((char*)grid + 0x18);
    S_func_00442f70* sp = (S_func_00442f70*)0;
    int r = sp->f(e, d, c, b);
    if (r == 0) {
        pg.~CPropGrid();
        ((S_func_0050e230*)0)->f();
        return false;
    }
    ((S_func_00442c80*)0)->f();
    int* src = *(int**)((char*)grid + 0x18);
    int n = *(int*)((char*)grid + 0x20);
    int k;
    for (k = 0; k < n; k++) {
        CSelectionPropGrid* sel = (CSelectionPropGrid*)0;
        int v = sel->f(0, k);
        int stride = *(int*)((char*)grid + 0x1c);
        int off = k * stride;
        int len = stride * 4;
        memcpy((void*)v, (void*)(src + off), len);
    }
    S_func_00442cd0* cd = (S_func_00442cd0*)0;
    int x = cd->f();
    S_func_006bd6a0* bd = (S_func_006bd6a0*)0;
    bd->f((void*)x);
    S_func_006bfcc0* bc = (S_func_006bfcc0*)0;
    int res = bc->f((void*)x);
    bool ok = (res != 0);
    g_pfn_80220c(hRes3);
    pg.~CPropGrid();
    ((S_func_0050e230*)0)->f();
    return ok;
}
