// from server: 76% by colin
struct Item {
    int value;
    int index;
};

struct XItem {
    void __cdecl f(int* first, int* last, int* out, int a, int b, int c, int d, int e);
};

void XItem::f(int* first, int* last, int* out, int a, int b, int c, int d, int e)
{
    int* p = first;
    if (p != last) {
        int sum = c + d;
        do {
            int v = *p;
            ((void (__stdcall*)(int, int, int))a)(v, b, sum);
            p++;
        } while (p != last);
    }
    out[0] = a;
    out[1] = c;
    out[2] = d;
    out[3] = b;
    out[4] = e;
    out[5] = e;
}
