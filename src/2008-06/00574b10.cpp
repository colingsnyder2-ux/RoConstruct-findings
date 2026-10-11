// from server: 70% by colin
struct GuiItem;

struct Inner {
    virtual bool v44();
    virtual void v40();
};

struct Holder {
    Inner* ptr;
};

struct GuiItem {
    char pad[0x130];
    Holder holder;
    void* method(int* out, int* in);
};

extern "C" void __stdcall sub_456e80(Holder* h);
extern "C" void __stdcall sub_574980(GuiItem* self, int* out, int* in);

void* GuiItem::method(int* out, int* in)
{
    if (*in >= 1 && *in == 7) {
        out[0] = 0;
        out[1] = 0;
        return out;
    }

    Inner* p = holder.ptr;
    if (p) {
        if (p->v44()) {
            int tmp[2];
            sub_574980(this, tmp, in);
            if (tmp[0]) {
                out[0] = tmp[0];
                out[1] = tmp[1];
                return out;
            }
        }

        Inner* q = holder.ptr;
        int tmp2[2];
        typedef void (__thiscall *Fn)(Inner*, int*, int*);
        Fn fn = *(Fn*)(*(char**)q + 0x130);
        fn(q, tmp2, in);
        if (tmp2[0]) {
            out[0] = tmp2[0];
            out[1] = tmp2[1];
            return out;
        }

        Inner* r = holder.ptr;
        if (r) {
            typedef void (__thiscall *Fn2)(Inner*);
            Fn2 fn2 = *(Fn2*)(*(char**)r + 0x40);
            fn2(r);
        }
        sub_456e80(&holder);
    }

    sub_574980(this, out, in);
    return out;
}
