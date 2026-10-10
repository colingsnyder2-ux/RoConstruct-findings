// from server: 78% by colin
struct GuiItem {
    char pad[0xfc];
    int menuState;
};

struct UnifiedWidget : GuiItem {
    void setMenuState(int value);
};

extern "C" int __cdecl sub_487C10(GuiItem *self);
extern "C" void *__cdecl sub_630D36(void *a, void *b, void *c, int d, int e);
extern "C" void __cdecl _invalid_parameter_noinfo();

void UnifiedWidget::setMenuState(int value) {
    if (menuState >= 2) {
        unsigned int i = 0;
        unsigned int count = (unsigned int)sub_487C10(this);
        if (count > 0) {
            int arg = value;
            while (i < count) {
                void *vec = *(void **)((char *)this + 0xc0);
                int *begin = *(int **)((char *)vec + 4);
                int *end = *(int **)((char *)vec + 8);
                if (begin == 0 || i >= (unsigned int)((end - begin) >> 3)) {
                    _invalid_parameter_noinfo();
                }
                void *item = *(void **)((char *)begin + i * 8);
                void *result = sub_630D36(item, (void *)0x881F4C, (void *)0x881F30, 0, 0);
                if (result != 0) {
                    void **vtbl = *(void ***)result;
                    void (__thiscall *fn)(void *, int) = (void (__thiscall *)(void *, int))vtbl[0x64 / 4];
                    fn(result, arg);
                }
                i++;
                count = (unsigned int)sub_487C10(this);
            }
        }
    }
}
