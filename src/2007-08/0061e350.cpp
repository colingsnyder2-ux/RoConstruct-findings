// from server: 21% by colin
struct ScoreHud {
    void f(int* first, int* last, int* dest);
};

extern "C" void __stdcall sub_429A50(void* out, void* self);

void ScoreHud::f(int* first, int* last, int* dest)
{
    int* cur = first;
    while (cur != last) {
        if (dest) {
            sub_429A50(&dest, dest);
        }
        int tmp;
        tmp = cur[1];
        dest[1] = tmp;
        cur[1] = tmp;
        tmp = cur[2];
        dest[2] = tmp;
        cur[2] = tmp;
        tmp = cur[3];
        dest[3] = tmp;
        cur[3] = tmp;
        cur += 4;
        dest += 4;
    }
}
