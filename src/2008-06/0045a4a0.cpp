// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-atl90-dll roc_view_initial_update_native_binding_references87dfa9b141cffd25.cpp

// Candidate translation unit (score above; library headers required).
// Native0045a4a0 full1915B. Binary-backed codegen analogue.
#define _AFXDLL
#include "roc_doc_native_afx_h_e1e961746d00a41c.cpp"
#include <afxwin.h>
#include <atlbase.h>
#include <boost/scoped_ptr.hpp>
#include "v8datamodel/DataModel.h"
#include <exception>
using namespace RBX;

template<class T> static inline T& viewField(void* p,unsigned offset) {
    return *reinterpret_cast<T*>(static_cast<char*>(p)+offset);
}
class CRobloxViewNative;
class NativeWorkspace {
public:
    boost::shared_ptr<DataModel> getDataModel(); //0046a940
};
class NativeRenderBinding {
public:
    void setWorkspace(NativeWorkspace*); //0045f7b0
    void activate(); //0045ead0
};
class NativeBaseService {
public:
    void initializeBase(); //0058c5e0
};
class NativeDataModelServices {
public:
    NativeBaseService* ensureBaseService(); //00452a00
};
void __cdecl reportViewException(const std::exception&); //0044aa70
static __forceinline VerbContainer* viewDataVerbs(DataModel* dm) {
    return dm ? reinterpret_cast<VerbContainer*>(reinterpret_cast<char*>(dm)+0x1c8) : 0;
}
static __forceinline VerbContainer* viewWorkspaceVerbs(DataModel* dm) {
    Workspace* ws=viewField<Workspace*>(dm,0x204);
    return ws ? reinterpret_cast<VerbContainer*>(reinterpret_cast<char*>(ws)+0x2ec) : 0;
}
// Native binding paths dereference the workspace receiver; no nullable base cast.
static __forceinline VerbContainer* viewWorkspaceVerbReceiver(DataModel* dm) {
    return reinterpret_cast<VerbContainer*>(reinterpret_cast<char*>(viewField<Workspace*>(dm,0x204))+0x2ec);
}
// Genuine getter body within original class scope: native Verb::name at4.
inline const Name& Verb::getName() const { return name; }
class InsertModelFromRobloxVerb : public Verb {
    CRobloxViewNative* view;
    DataModel* dataModel;
    double lastAction;
public:
    InsertModelFromRobloxVerb(CRobloxViewNative*,DataModel*);
    virtual bool isEnabled() const;
    virtual void doIt(IDataState*);
};
class HelpCommand : public Verb {
    CRobloxViewNative* view;
public:
    __forceinline HelpCommand(CRobloxViewNative* v,VerbContainer* verbs):Verb(verbs,"Help"),view(v) {}
    virtual bool isEnabled() const;
    virtual void doIt(IDataState*);
};
class ToggleFullscreenVerb : public Verb {
public:
    __forceinline ToggleFullscreenVerb(VerbContainer* verbs):Verb(verbs,"ToggleFullScreen") {}
    virtual bool isEnabled() const;
    virtual bool isChecked() const;
    virtual void doIt(IDataState*);
};
class ToggleIDEModeVerb : public Verb {
    double lastAction;
public:
    ToggleIDEModeVerb(VerbContainer*);
    virtual bool isEnabled() const;
    virtual bool isChecked() const;
    virtual void doIt(IDataState*);
};
class LockPlayModeVerb : public Verb {
public:
    __forceinline LockPlayModeVerb(VerbContainer* verbs):Verb(verbs,"LockPlayMode") {}
    virtual bool isEnabled() const;
    virtual bool isChecked() const;
    virtual void doIt(IDataState*);
};
class CRobloxViewNative : public CView {
public:
    void detachDataModel(); //0045a2f0
    virtual void OnInitialUpdate();
    NativeWorkspace* workspace() { return viewField<NativeWorkspace*>(GetDocument(),0x94); }
};
typedef char NativeCViewSize[sizeof(CView)==0x58?1:-1];
typedef char NativeDataModelLockSize[sizeof(DataModel::Lock)==12?1:-1];
typedef char NativeInsertModelVerbSize[sizeof(InsertModelFromRobloxVerb)==32?1:-1];
typedef char NativeHelpVerbSize[sizeof(HelpCommand)==16?1:-1];
typedef char NativeFullScreenVerbSize[sizeof(ToggleFullscreenVerb)==12?1:-1];
typedef char NativeToggleIDEVerbSize[sizeof(ToggleIDEModeVerb)==24?1:-1];
typedef char NativeLockPlayModeVerbSize[sizeof(LockPlayModeVerb)==12?1:-1];

void CRobloxViewNative::OnInitialUpdate() {
    try {
        detachDataModel();
        viewField<NativeRenderBinding>(this,0xb0).setWorkspace(0);
        viewField<boost::shared_ptr<DataModel> >(this,0x170).reset();
        CView::OnInitialUpdate();
        viewField<NativeRenderBinding>(this,0xb0).setWorkspace(workspace());
        viewField<boost::shared_ptr<DataModel> >(this,0x170)=workspace()->getDataModel();
        DataModel::Lock lock(viewField<boost::shared_ptr<DataModel> >(this,0x170));
        if(viewField<void*>(this,0x1d8))
            viewField<ATL::CComPtr<IUnknown> >(viewField<void*>(this,0x1d8),0xfc)=reinterpret_cast<IUnknown*>(workspace());
        DataModel* dm=viewField<boost::shared_ptr<DataModel> >(this,0x170).get();
        if(dm) reinterpret_cast<Notifier<Instance,DescendentAdded>*>(reinterpret_cast<char*>(dm)+0x150)->addListener(reinterpret_cast<Listener<Instance,DescendentAdded>*>(reinterpret_cast<char*>(this)+0xa0));
        dm=viewField<boost::shared_ptr<DataModel> >(this,0x170).get();
        if(dm) reinterpret_cast<Notifier<Instance,DescendentRemoving>*>(reinterpret_cast<char*>(dm)+0x170)->addListener(reinterpret_cast<Listener<Instance,DescendentRemoving>*>(reinterpret_cast<char*>(this)+0xa4));
        viewField<VerbContainer>(this,0x78).setVerbParent(viewWorkspaceVerbs(viewField<boost::shared_ptr<DataModel> >(this,0x170).get()));
        viewField<boost::scoped_ptr<Verb> >(this,0x1e0).reset(new InsertModelFromRobloxVerb(this,viewField<boost::shared_ptr<DataModel> >(this,0x170).get()));
        viewField<boost::scoped_ptr<Verb> >(this,0x1dc).reset(new HelpCommand(this,viewDataVerbs(viewField<boost::shared_ptr<DataModel> >(this,0x170).get())));
        viewField<boost::scoped_ptr<Verb> >(this,0x1e4).reset(new ToggleFullscreenVerb(viewDataVerbs(viewField<boost::shared_ptr<DataModel> >(this,0x170).get())));
        viewField<boost::scoped_ptr<Verb> >(this,0x1e8).reset(new ToggleIDEModeVerb(viewDataVerbs(viewField<boost::shared_ptr<DataModel> >(this,0x170).get())));
        viewField<boost::scoped_ptr<Verb> >(this,0x1ec).reset(new LockPlayModeVerb(viewDataVerbs(viewField<boost::shared_ptr<DataModel> >(this,0x170).get())));
        boost::shared_ptr<DataModel>& model=viewField<boost::shared_ptr<DataModel> >(this,0x170);
        std::map<unsigned,const Name*>& commands=viewField<std::map<unsigned,const Name*> >(this,0x58);
        {
            Verb* verb=viewWorkspaceVerbReceiver(model.get())->getVerb("CameraPanLeft");
            commands[0x8027]=verb ? &verb->getName() : &Name::getNullName();
        }
        {
            Verb* verb=viewWorkspaceVerbReceiver(model.get())->getVerb("CameraPanRight");
            commands[0x8028]=verb ? &verb->getName() : &Name::getNullName();
        }
        {
            Verb* verb=viewWorkspaceVerbReceiver(model.get())->getVerb("CameraTiltUp");
            commands[0x8029]=verb ? &verb->getName() : &Name::getNullName();
        }
        {
            Verb* verb=viewWorkspaceVerbReceiver(model.get())->getVerb("CameraTiltDown");
            commands[0x802a]=verb ? &verb->getName() : &Name::getNullName();
        }
        {
            Verb* verb=viewWorkspaceVerbReceiver(model.get())->getVerb("CameraZoomIn");
            commands[0x802b]=verb ? &verb->getName() : &Name::getNullName();
        }
        {
            Verb* verb=viewWorkspaceVerbReceiver(model.get())->getVerb("CameraZoomOut");
            commands[0x802c]=verb ? &verb->getName() : &Name::getNullName();
        }
        {
            Verb* verb=viewWorkspaceVerbReceiver(model.get())->getVerb("CameraCenter");
            commands[0x80a6]=verb ? &verb->getName() : &Name::getNullName();
        }
        {
            Verb* verb=viewWorkspaceVerbReceiver(model.get())->getVerb("CameraZoomExtents");
            commands[0x802d]=verb ? &verb->getName() : &Name::getNullName();
        }
        {
            Verb* verb=viewWorkspaceVerbReceiver(model.get())->getVerb("CameraModelView");
            commands[0x80d7]=verb ? &verb->getName() : &Name::getNullName();
        }
        commands[0x802f]=&Name::lookup("Help");
        commands[0x8030]=&Name::lookup("ToggleFullScreen");
        commands[0x80a3]=&Name::lookup("LockPlayMode");
        commands[0x8032]=&Name::lookup("FollowCamera");
        commands[0x80a2]=&Name::lookup("WatchCamera");
        commands[0x8043]=&Name::lookup("SelectionRotate");
        commands[0x8044]=&Name::lookup("SelectionTilt");
        viewField<NativeRenderBinding>(this,0xb0).activate();
        NativeBaseService* service=reinterpret_cast<NativeDataModelServices*>(model.get())->ensureBaseService();
        if(service) service->initializeBase();
    } catch(const std::exception& e) { reportViewException(e); }
}
