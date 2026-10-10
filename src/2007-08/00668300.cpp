// from server: 51% by colin
extern "C" {
    void __stdcall memset(void*, int, unsigned int);
    int __stdcall InvalidateRect(void*, const void*, int);
}

struct CRobloxTreeCtrl {
    char pad[0x18];
    char field_18[0x1c];
    char pad2[0x4];
    void* field_34;
    void func_00668300(int, int);
};

void func_00667770(void*, int);
void* func_00668170(int);

void CRobloxTreeCtrl::func_00668300(int a, int b)
{
    char buf[0x3c];
    memset(buf, 0, 0x3c);
    *(int*)(buf + 0x48) = -1;
    func_00667770(buf, a);
    *(int*)(buf + 0x44) = b;
    void* p = func_00668170(a);
    int* dst = (int*)p;
    int* src = (int*)buf;
    for (int i = 0; i < 0x11; i++) {
        dst[i] = src[i];
    }
    InvalidateRect(*(void**)((char*)field_34 + 0x20), 0, 1);
}
