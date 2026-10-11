// from server: 81% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct RBX_TextureId {
    virtual void vf0();
};

struct RBX_placeholder_any_boost {
    virtual void vf0();
};

struct S_func_006bb040 {
};

void* __cdecl f(void* p)
{
    if (p == 0)
        goto fail;

    {
        void* obj = *(void**)p;
        void* casted;
        if (obj != 0) {
            void** vtbl = *(void***)obj;
            typedef void* (__thiscall *Fn)(void*);
            Fn fn = (Fn)vtbl[1];
            casted = fn(obj);
        } else {
            casted = (void*)0x00b0030c;
        }

        type_info* ti = (type_info*)0x00b3729c;
        bool ok = ((type_info*)casted)->operator==(*ti);
        if (!ok)
            goto fail;

        return (char*)*(void**)p + 4;
    }

fail:
    return 0;
}
