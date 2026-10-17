// from server: 31% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct StdString {
    unsigned char storage[28];
    StdString(const StdString &);
    StdString(const char *);
    ~StdString();
};

extern "C" StdString * __cdecl string_concat_cstr(StdString *out, const StdString *a, const char *b);
extern "C" StdString * __cdecl string_concat(StdString *out, const StdString *a, const StdString *b);

struct RefCounted {
    void *vptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct SharedPtr {
    void *object;
    void *control;
};

struct Widget {
    unsigned char pad[0x18];
    StdString name;
};

struct WidgetList {
    Widget **begin;
    Widget **end;
};

struct UnifiedImageWidget {
    unsigned char pad[0x18];
    StdString imageName;
    unsigned imageState;
    void render(const WidgetList &list);
};

extern void __cdecl widget_render_helper(void *self, Widget *w);

void UnifiedImageWidget::render(const WidgetList &list)
{
    int count = (int)(list.end - list.begin);
    unsigned i = 0;
    if (count <= 0)
        return;
    do {
        if (i >= (unsigned)count)
            _invalid_parameter_noinfo();
        Widget *w = list.begin[i];

        StdString tmp1((const char *)0);
        StdString tmp2((const char *)0);
        StdString tmp3((const char *)0);
        StdString tmp4((const char *)0);

        string_concat_cstr(&tmp1, &w->name, (const char *)0x812e58);
        string_concat(&tmp2, &tmp1, &this->imageName);
        string_concat(&tmp3, &tmp2, &tmp1);

        SharedPtr sp;
        sp.object = 0;
        sp.control = 0;

        widget_render_helper(this, w);

        if (sp.object) {
            RefCounted *rc = (RefCounted *)sp.object;
            if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
                void (__cdecl *dtor)(void *) = *(void (__cdecl **)(void *))((char *)rc->vptr + 4);
                dtor(rc);
                if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                    void (__cdecl *wdtor)(void *) = *(void (__cdecl **)(void *))((char *)rc->vptr + 8);
                    wdtor(rc);
                }
            }
        }

        tmp4.~StdString();
        tmp3.~StdString();
        tmp2.~StdString();
        tmp1.~StdString();

        i++;
    } while (i < (unsigned)count);
}
