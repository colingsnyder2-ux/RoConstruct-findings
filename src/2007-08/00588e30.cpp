// from server: 88% by colin
// roc 2007-08 00588e30  unit: seg_00580000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588e30

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct SoundId {
    int a;
    int b;
};

struct Sound {
    void* fmod_sound;
    void* system;
    int refCount;
    bool isStreaming;
    SoundId id;
    bool is3D;

    void* scalar_deleting_dtor(unsigned int);
};

extern type_info type_info_SoundId;

void* __cdecl Sound_scalar_deleting_dtor(Sound* self, unsigned int flags)
{
    if (flags == 2) {
        Sound* p = self;
        if (type_info_SoundId == *(type_info*)&type_info_SoundId) {
            return p;
        }
        return 0;
    }
    if (flags == 0) {
        SoundId* p = (SoundId*)operator_new(8);
        if (p) {
            *p = *(SoundId*)self;
            return p;
        }
        return 0;
    }
    operator_delete(self);
    return 0;
}
