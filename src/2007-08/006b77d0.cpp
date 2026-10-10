// from server: 29% by colin
struct CXTPControlGallery {
    int method_6b77d0(int, int, int, int);
};

extern "C" int __stdcall sub_62ff38(int, int);
extern "C" int __stdcall sub_62ff3e(int);

struct Helper {
    int sub_63b530(int, int, int, int);
    int sub_6713d0(int*);
    int sub_6b3d70(int);
    int sub_6b6f10(int);
};

int CXTPControlGallery::method_6b77d0(int a1, int a2, int a3, int a4) {
    int local3 = 0;
    int local4 = 0;
    int result;

    sub_62ff3e(*(int*)((char*)this - 4));

    Helper* h = (Helper*)this;
    if (h->sub_6713d0(&local3) != 0) {
        int idx = h->sub_6713d0(&local3) - 1;
        Helper* p = (Helper*)((char*)this - 0x20);
        if (p->sub_6b3d70(idx) == 0) {
            return 0x80070057;
        }
        p->sub_6b6f10(idx);
        return 0;
    }

    result = h->sub_63b530(local3, local4, a3, a4);
    return result;
}
