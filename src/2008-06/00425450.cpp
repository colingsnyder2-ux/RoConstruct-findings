// from server: 30% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct Inner {
    char pad[0xc4];
    void Lock();
    void Unlock();
};

struct TreeCtrlNode {
    char pad0[0x50];
    unsigned char flags;
    char pad1[3];
    void* owner;
    char pad2[4];
    void* ref;
    void RemoveChild(void*);
};

struct Owner {
    char pad[0x15c];
    void (__stdcall *fn)(void*);
};

void TreeCtrlNode::RemoveChild(void* p)
{
    if (flags & 2) {
        Inner* inner = (Inner*)((char*)owner + 0xc4);
        inner->Lock();
        char guard = 1;
        void* tmp = 0;
        ((TreeCtrlNode*)((char*)this + 0x5c))->RemoveChild(&tmp);
        inner->Unlock();
    }
    Owner* o = (Owner*)owner;
    o->fn((char*)this - 4);
    RefCounted* r = (RefCounted*)ref;
    if (r) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)r + 4), -1) == 1) {
            r->Release();
            if (_InterlockedExchangeAdd((volatile long*)((char*)r + 8), -1) == 1) {
                r->Release();
            }
        }
    }
}
