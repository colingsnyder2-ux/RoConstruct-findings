// from server: 95% by atomic.potato
// roc 2007-08 00588e30  unit: seg_00580000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588e30

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __cdecl sub_62FC62(void*);

struct SoundId {
    int a;
    int b;
};

extern type_info* type_info_8A3038;

void* __cdecl Sound_scalar_deleting_dtor(SoundId* self, unsigned int flags)
{
    if (flags == 2) {
        SoundId* p = self;
        if (type_info_8A3038->operator==(*(type_info*)p)) {
            return p;
        }
        return 0;
    }
    if (flags == 0) {
        SoundId* p = (SoundId*)sub_62FEF6(8);
        if (p) {
            *p = *self;
        }
        return p;
    }
    sub_62FC62(self);
    return 0;
}
