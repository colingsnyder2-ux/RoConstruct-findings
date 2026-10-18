// from server: 75% by colin
struct UnifiedWidget {
    char pad[0x14];
    int mode;
    int f(int *a, int *b);
};

extern "C" int __fastcall sub_574860(void *self, int *a, int *b);
extern "C" int __fastcall sub_574760(void *self, int *a, int *b);
extern "C" int __fastcall sub_574de0(void *self, int *a, int *b);

int UnifiedWidget::f(int *a, int *b)
{
    UnifiedWidget *self = (UnifiedWidget *)((char *)this - 0x130);
    int (*vtbl)(void *) = *(int (**)(void *))self;
    if (!((char (__fastcall *)(void *))vtbl)(self))
        goto fail;
    if (*a < 1 || *a > 7)
        goto fail;
    switch (this->mode) {
    case 0:
        sub_574860(self, a, b);
        return (int)b;
    case 1:
        sub_574760(self, a, b);
        return (int)b;
    case 2:
        sub_574de0(self, a, b);
        return (int)b;
    }
fail:
    b[1] = 0;
    b[0] = 0;
    return (int)b;
}
