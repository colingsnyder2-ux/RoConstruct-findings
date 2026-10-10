// from server: 36% by colin
struct CXTPToolBar_CControlButtonExpand {
    void f(int, int);
};

struct Inner {
    int field_f4;
};

struct Other {
    int field_9c;
    int field_a4;
    int field_f8;
    Inner* field_fc;
    void* field_158;
    int field_16c;
};

extern "C" void* __stdcall sub_63a580(void*);
extern "C" void* __stdcall sub_63a000(void*);
extern "C" void __stdcall sub_63a690(void*, int);
extern "C" int __stdcall PtInRect(const void*, int, int);

void CXTPToolBar_CControlButtonExpand::f(int x, int y)
{
    Other* self = (Other*)this;
    if (self->field_16c == 0)
        return;
    int eax = self->field_9c;
    if (eax == -1) {
        void* p = self->field_158;
        if (p != 0)
            eax = (int)sub_63a580(p);
    }
    if (eax == 0)
        return;
    if (self->field_f8 != 4)
        return;
    if (self->field_fc->field_f4 == 2)
        return;
    if (self->field_a4 == 0)
        return;

    void* obj = sub_63a000(this);
    void* vtable = *(void**)obj;
    void (*fn)(void*, void*, void*) = *(void (**)(void*, void*, void*))((char*)vtable + 0xc0);
    char rect[16];
    fn(obj, rect, this);

    int r1 = PtInRect(rect, x, y);
    if (r1 != 0) {
        if (self->field_a4 != 3) {
            self->field_a4 = 3;
            sub_63a690(this, 0);
            return;
        }
    }
    int r2 = PtInRect(rect, x, y);
    if (r2 == 0) {
        if (self->field_a4 != 4) {
            self->field_a4 = 4;
            sub_63a690(this, 0);
        }
    }
}
