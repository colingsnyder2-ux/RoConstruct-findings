// from server: 49% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void destroy();
    virtual void release();
    long refs;
    long weakRefs;
};

struct Listener {
    char padding[0x130];
    void* slot;
};

struct SoundService {
    char padding[0x130];
    void* field130;
    char padding2[0x34];
    void* field168;
    void update(void*, void*);
};

extern void* (__thiscall *getInstance)(void*);
extern void (__thiscall *removeListener)(void*, void*);
extern void (__thiscall *addListener)(void*, void*);
extern void (__thiscall *clearSlot)(void*, void*);
extern void (__thiscall *destroySlot)(void*);
extern void (__thiscall *resetService)(SoundService*);
extern void (__thiscall *stopService)(SoundService*);
extern void (__thiscall *refreshService)(SoundService*);
extern void* (__thiscall *getSource)(void*);
extern void (__thiscall *buildListener)(void*, SoundService*);
extern void (__thiscall *assignSlot)(void*, void*);
extern void (__thiscall *releaseRef)(RefCounted*);

void SoundService::update(void* a, void* b)
{
    Listener* self = this ? (Listener*)((char*)this + 0x130) : 0;

    if (a) {
        void* inst = getInstance(a);
        if (inst) {
            removeListener((char*)inst + 0x130, self);
        }
    }

    if (field168) {
        clearSlot(field168, 0);
        destroySlot(&field168);
    }

    if (a) {
        stopService(this);
    }

    if (b) {
        void* inst = getInstance(b);
        if (inst) {
            addListener((char*)inst + 0x130, (char*)this + 0x130);
        }

        refreshService(this);
        resetService(this);

        void* src = getSource(b);
        if (src) {
            void* tmp;
            buildListener(&tmp, this);

            field168 = *(void**)tmp;
            assignSlot(&field168, (char*)tmp + 4);

            if (tmp) {
                RefCounted* rc = (RefCounted*)tmp;
                if (_InterlockedExchangeAdd(&rc->refs, -1) == 1) {
                    rc->destroy();
                    if (_InterlockedExchangeAdd(&rc->weakRefs, -1) == 1) {
                        rc->release();
                    }
                }
            }

            clearSlot(field168, src);
        }
    }
}
