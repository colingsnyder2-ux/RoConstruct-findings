// from server: 81% by colin
struct CMemberTreeView
{
    void sub_00433EA0(void *);
};

extern "C" const char *__cdecl c_str_impl(void *);
extern "C" int __cdecl sub_006A10D0(void *, int, int, int, int, int, int, int, int, int);
extern "C" int __cdecl sub_006A10D6(void *, int, int, int, int, int, int, int, void *);

void CMemberTreeView::sub_00433EA0(void *arg)
{
    const char *text = c_str_impl((char *)arg + 4);
    int result = sub_006A10D0(this, 0x23, (int)text, 0xa, 0xa, 0, 0, 0, 0xffff0000, 0xffff0002);
    sub_006A10D6(this, result, 4, 0, 0, 0, 0, 0, arg);
}
