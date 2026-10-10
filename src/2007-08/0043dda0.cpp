// from server: 75% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ContentId {
    void* ptr;
    ContentId(const ContentId& other);
    ContentId& operator=(const ContentId& other);
    ~ContentId();
};

struct SoundId : ContentId {
    SoundId(const ContentId& id);
};

SoundId::SoundId(const ContentId& id) : ContentId(id)
{
    if (this->ptr) {
        ContentId* p = (ContentId*)((char*)this->ptr + 0xa4);
        if (p) {
            p->ptr = this->ptr;
            void* old = p->ptr;
            if (old) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            void* old2 = *(void**)((char*)p + 4);
            if (old2) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)old2 + 8), -1) == 1) {
                    (*(void(__thiscall**)(void*))*(void**)((char*)old2))((void*)old2);
                }
            }
            *(void**)((char*)p + 4) = old;
        }
    }
}
