// from server: 66% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Workspace
{
    unsigned char padding[0x1b4];
    int active;
    void setActive(int);
};

template<class T> struct Shared
{
    T* object;
    Control* control;

    template<class U> Shared(const Shared<U>&);
    ~Shared();
    Workspace* workspace() const;
};

template<class T>
template<class U>
inline Shared<T>::Shared(const Shared<U>& other)
    : object((T*)other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

template<class T>
inline Shared<T>::~Shared()
{
    Control* p = control;
    if (p)
    {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

template<class T>
inline Workspace* Shared<T>::workspace() const
{
    return object ? object->workspace() : 0;
}

struct Mutex;
struct HeldMutex;

struct Holder
{
    Shared<HeldMutex> get();
};

struct Lock
{
    unsigned char storage[12];
    Lock(Shared<Mutex>);
    ~Lock();
};

struct Service
{
    void stop();
};

struct Model
{
    unsigned char padding[0x204];
    Service* service;
    Workspace* workspace();
    void reset();
};

struct Resource
{
    ~Resource();
};

extern void __cdecl detach(Resource*, Model*);
extern void __cdecl releaseMemory(void*);

struct CRobloxDoc
{
    unsigned char padding0[0x74];
    Resource* resource;
    unsigned char padding1[0x1c];
    Holder* holder;

    Shared<Model> getModel();
    void func_00455580();
};

void CRobloxDoc::func_00455580()
{
    Lock lock(holder->get());

    bool active = getModel().object->workspace()->active != 0;
    if (active)
    {
        getModel().workspace()->setActive(0);
        getModel().object->reset();
        detach(resource, getModel().object);
        getModel().object->service->stop();

        Resource* old = resource;
        if (old)
        {
            old->~Resource();
            releaseMemory(old);
        }
        resource = 0;
    }
}
