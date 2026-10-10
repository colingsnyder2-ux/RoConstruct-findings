// from server: 72% by colin
extern "C" {
    void __cdecl _memset(void*, int, unsigned int);
    void __cdecl _security_check_cookie(unsigned int);
}

struct Inner {
    int sub_667770(int*, int*);
};

struct CRobloxTreeCtrl {
    char pad[0x18];
    Inner inner;
    int sub_667ae0(int*);
};

int CRobloxTreeCtrl::sub_667ae0(int* param) {
    char buffer[0x3c];
    int local;
    int result;

    _memset(buffer, 0, 0x3c);
    local = -1;

    result = inner.sub_667770(&local, param);
    if (result != 0) {
        return local;
    }
    return -1;
}
