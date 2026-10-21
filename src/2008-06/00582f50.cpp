// from server: 89% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_cameranativeextentsacf1c6b49cd9bc8a.cpp

// Candidate translation unit (score above; library headers required).
#include "util/Extents.h"
#include "util/Name.h"
#include <string>
#include <vector>
#include <boost/shared_ptr.hpp>

#include <G3D/Vector3.h>
#include <G3D/Rect2D.h>

namespace RBX {

class IDataState { public: virtual void setDirty(bool) = 0; };
class PVInstance {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual Extents getExtents() const;
};
class Selection {
public:
    char pad[0x13c];
    std::vector<PVInstance*> selection;
    size_t size() const { return selection.size(); }
    PVInstance* operator[](size_t i) const { return selection[i]; }
};
class Camera {
public:
    void setCameraType(int type);
    void zoomExtents(Extents extents, const G3D::Rect2D& viewPort, int zoomType);
    bool zoomExtents(const G3D::Rect2D& viewPort);
};
class ICameraOwner { public: virtual void v0(); virtual Camera* getCamera() const = 0; };
class Instance { public: virtual ~Instance(); };
class ServiceProvider { public: void playSound(int id); };
ServiceProvider* findServiceProvider(Instance* context);
class InstancePad : public Instance { public: char pad[0x288 - 4]; };
class Workspace : public InstancePad, public ICameraOwner {
public:
    char pad2[0x2d4 - 0x28c];
    G3D::Rect2D viewPort;
    virtual Camera* getCamera() const;
};
void trackVerb(const char* name, Workspace* workspace);

template<class Class>
class ServiceClient
{
    Instance* context;
    mutable boost::shared_ptr<Class> service;
public:
    ServiceClient(Instance* context) : context(context) {}
    Class* operator->() { return createService(true); }
    Class* createService(bool create);
};

class Verb {
public:
    virtual ~Verb();
    const Name* name;
};
class CameraVerb : public Verb {
public:
    void* pad;
    Workspace* workspace;
};
class CameraZoomExtentsCommand : public CameraVerb {
public:
    void doIt(IDataState* dataState);
};

void CameraZoomExtentsCommand::doIt(IDataState* dataState)
{
    ServiceClient<Selection> selection(workspace);
    Extents extents;

    if (selection->size() >= 1)
    {
        Selection* s = selection.operator->();
        const std::vector<PVInstance*>& selected=s->selection;
        extents = selected[0]->getExtents();
        size_t i = 1;
        if (i < selected.size())
            do
            {
                extents.unionWith(selected[i]->getExtents());
                ++i;
            } while (i < selected.size());

        workspace->getCamera()->setCameraType(0);
        workspace->getCamera()->zoomExtents(extents, workspace->viewPort, 0);
        findServiceProvider(workspace)->playSound(11);
        dataState->setDirty(true);
        trackVerb(name->c_str(), workspace);
        dataState->setDirty(true);
    }
    else
    {
        G3D::Vector3::zero();
        workspace->getCamera()->zoomExtents(workspace->viewPort);
        findServiceProvider(workspace)->playSound(11);
        dataState->setDirty(true);
    }
}
}
