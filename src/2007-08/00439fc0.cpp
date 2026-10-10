// from server: 78% by colin
struct VSoundId_XItem {
    void __cdecl f(int* begin, int* end, void* fn, int arg, int* out, int extra);
};

void VSoundId_XItem::f(int* begin, int* end, void* fn, int arg, int* out, int extra)
{
    while (begin != end) {
        int v = *begin;
        ((void (__stdcall*)(int, int))fn)(v, arg);
        begin++;
    }

    out[0] = (int)fn;
    out[1] = extra;
    out[2] = arg;
}
