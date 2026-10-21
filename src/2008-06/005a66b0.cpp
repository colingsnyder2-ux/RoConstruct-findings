// from server: 89% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <intrin.h>

class sp_counted_base {
public:
    virtual ~sp_counted_base();
    virtual void dispose() = 0;
    virtual void destroy();
    void release()
    {
        if (_InterlockedDecrement(&use_count_) == 0)
        {
            dispose();
            weak_release();
        }
    }
    void weak_release()
    {
        if (_InterlockedDecrement(&weak_count_) == 0)
            destroy();
    }
    long use_count_;
    long weak_count_;
};

class shared_count {
public:
    sp_counted_base* pi_;
    ~shared_count() { if (pi_ != 0) pi_->release(); }
    shared_count& operator=(const shared_count& r);
};

template<class T> class shared_ptr {
public:
    T* px;
    shared_count pn;
    T* get() const { return px; }
    T* operator->() const { return px; }
    void reset();
    operator bool() const { return px != 0; }
};

namespace RBX {
class Instance {
public:
    void setParent(Instance* parent);
};

class Listener {
public:
    virtual void onEvent();
};

class ListenerList {
public:
    void addListener(Listener* l);
    void removeListener(Listener* l);
};

class World {
public:
    char pad[0x130];
    ListenerList listeners;
};

class ScriptContext;
class ServiceProvider {
public:
    ScriptContext* createScriptContext();
    World* findWorld();
    Instance* findCameraParent();
};

class WorkspaceBase {
public:
    virtual ~WorkspaceBase();
    char pad[0x2e4 - 4];
    void* m_2e4;
    char pad2[0x384 - 0x2e8];
};

class Workspace : public WorkspaceBase, public Listener {
public:
    char pad3[0x3a0 - 0x388];
    shared_ptr<Instance> camera;
    char pad4[0x3f4 - 0x3a8];
    ScriptContext* scriptContext;
    void onServiceProvider(ServiceProvider* oldProvider, ServiceProvider* newProvider);
};

shared_ptr<Instance> __cdecl createCamera(Workspace* workspace, void* data, World* world);

void Workspace::onServiceProvider(ServiceProvider* oldProvider, ServiceProvider* newProvider)
{
    if (oldProvider)
    {
        Listener* listener = this;
        if (World* world = oldProvider->findWorld())
            world->listeners.removeListener(listener);
        if (camera)
        {
            camera->setParent(0);
            camera.reset();
        }
    }
    if (newProvider)
    {
        scriptContext = newProvider->createScriptContext();
        World* world = newProvider->findWorld();
        Listener* listener = this;
        if (world)
            world->listeners.addListener(listener);
        if (Instance* parent = newProvider->findCameraParent())
        {
            camera = createCamera(this, m_2e4, world);
            camera->setParent(parent);
        }
    }
}
}
