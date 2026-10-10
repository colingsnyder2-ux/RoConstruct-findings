// from server: 41% by colin
// roc 2007-08 004ef500  unit: RBX::Render::SceneManager  size: 277 bytes

extern "C" {
    __declspec(dllimport) long __stdcall InterlockedIncrement(long volatile*);
    __declspec(dllimport) long __stdcall InterlockedDecrement(long volatile*);
}

void* __cdecl operator_new(unsigned int size);
void __cdecl operator_delete(void* p);

struct RefCounted {
    long refCount;
    virtual void destroy();
    void addRef() { InterlockedIncrement(&refCount); }
    void release() {
        if (InterlockedDecrement(&refCount) == 0) {
            destroy();
            operator_delete(this);
        }
    }
};

struct Node {
    Node* next;
    RefCounted* value;
};

struct SceneManager {
    void** array;
    int count;
    void resize(int newCount);
};

void SceneManager::resize(int newCount) {
    void** oldArray = array;
    int oldCount = count;
    void** newArray = (void**)operator_new(newCount * 4);
    int copyCount = oldCount < newCount ? oldCount : newCount;
    void** dst = newArray;
    void** src = oldArray;
    void** dstEnd = newArray + copyCount;
    while (dst < dstEnd) {
        if (dst) {
            *dst = 0;
            if (*src) {
                *dst = *src;
                RefCounted* r = (RefCounted*)*src;
                r->addRef();
            }
        }
        dst++;
        src++;
    }
    void** freeEnd = oldArray + oldCount;
    void** freeIt = oldArray;
    while (freeIt < freeEnd) {
        if (*freeIt) {
            RefCounted* r = (RefCounted*)*freeIt;
            if (InterlockedDecrement(&r->refCount) == 0) {
                r->destroy();
                operator_delete(r);
            }
        }
        *freeIt = 0;
        freeIt++;
    }
    operator_delete(oldArray);
    array = newArray;
    count = newCount;
}
