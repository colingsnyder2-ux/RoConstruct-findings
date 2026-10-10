// from server: 31% by colin
// roc 2007-08 005c3d30  unit: boost::signals::Vconnection::?$sp_counted_impl_p  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c3d30

extern "C" {
    void __stdcall sub_411850(void*);
    int __stdcall sub_77e708(void*, void*);
    void* __stdcall sub_77e710(void*, void*);
}

struct type_info {
    virtual ~type_info();
    virtual int __thiscall operator==(const type_info&) const;
};

struct bad_cast {
    bad_cast(const char*);
};

struct sp_counted_impl_p {
    void* field0;
    void dispose();
};

void sp_counted_impl_p::dispose()
{
    void* p = this->field0;
    if (p != 0) {
        void* v = *(void**)p;
        if (v != 0) {
            int (__thiscall *fn)(void*) = *(int(__thiscall**)(void*))((char*)v + 4);
            fn(v);
        } else {
            v = (void*)0x8827c8;
        }
        if (sub_77e708(v, (void*)0x8abf28)) {
            void* r = *(void**)this->field0;
            r = (char*)r + 4;
            if (r != 0) {
                return;
            }
        }
    }
    sub_77e710((void*)0x786e04, (void*)0x786dfc);
    sub_411850((void*)0x786dfc);
}
