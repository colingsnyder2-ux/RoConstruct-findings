// from server: 91% by atomic.potato
struct Scintilla_CScintillaView {
    void method(int, int);
};

void Scintilla_CScintillaView::method(int arg1, int arg2)
{
    int *p = (int *)arg2;
    unsigned short limit = *(unsigned short *)(*(int *)(*p + 0x74) + 0x1e);
    unsigned int val = *(unsigned int *)(arg2 + 0x14);
    if (val <= limit) {
        if (val > *(unsigned int *)((char *)this + 0xbc)) {
            int (*fn)(int, int) = *(int (**)(int, int))(*(int *)this + 0x194);
            if (fn(arg1, arg2) == 0) {
                *(int *)(arg2 + 0x10) = 0;
            }
        }
    } else {
        *(int *)(arg2 + 0x10) = 0;
    }
}
