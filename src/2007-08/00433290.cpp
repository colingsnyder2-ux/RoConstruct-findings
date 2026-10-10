// from server: 81% by colin
struct CMarshalWindow {
    int processMessage(int, int, int, int, int, int);
};

extern "C" int __cdecl sub_433160(int, int, int, int*);

int CMarshalWindow::processMessage(int a, int b, int c, int d, int e, int f)
{
    if (f != 0)
        return 0;

    if (a == 2) {
        int local = 1;
        int r = sub_433160(2, b, c, &local);
        *(int*)d = r;
        if (local != 0)
            return 1;
        return 0;
    }

    if (a == 0x465) {
        int* p = (int*)b;
        int* vtbl = (int*)*p;
        ((void (__thiscall*)(int*))vtbl[0])(p);
        vtbl = (int*)*p;
        ((void (__thiscall*)(int*, int))vtbl[1])(p, 1);
        *(int*)c = 0;
        return 1;
    }

    return 0;
}
