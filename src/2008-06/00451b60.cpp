// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-atl90-dll roc_doc_native_factory_nothrow_72f2eb7fcd5d8f26.cpp

// Candidate translation unit (score above; library headers required).
// Native document-command initializer. Opaque receiver views expose only proven
// public call contracts and typed subobjects; no fabricated owner storage/slots.
#define _AFXDLL
#include "roc_doc_native_afx_h_e1e961746d00a41c.cpp"
#include <unknwn.h>
#include <boost/scoped_ptr.hpp>
#include "v8datamodel/DataModel.h"
#include <stdexcept>
#include "roc_standard_verbs_native_dtor_12e1e07074f347f2.cpp"
using namespace RBX;
class CRobloxDocNativeView;

// 00450370 is ATL CComObject<CWorkspace>::CreateInstance: stdcall, HRESULT,
// one output pointer; 00401910 RTTI proves IUnknown primary interface at0.
class WorkspaceNativeView {
public:
    boost::shared_ptr<DataModel> getDataModel(); // 0046a940, member24/28
    Workspace* getWorkspace(); // 0046a970, DataModel24->Workspace204
};
extern HRESULT __stdcall createNativeWorkspace(WorkspaceNativeView**) throw();

// Native primary Instance API: dtor0/setName4. Old full SDK Instance has a
// different GuidItem virtual prefix; this view neither allocates nor sizes it.
class NativeInstanceView {
public:
    virtual ~NativeInstanceView();
    virtual void setName(const std::string&)=0;
};
class CRobloxDocNativeView {
public:
    void initializeCommands();
    void bindExisting(unsigned,Verb*); // 00451a10
    void bindOwned(unsigned,Verb*); // 00451a60
    template<class T> T& field(unsigned offset) {
        return *reinterpret_cast<T*>(reinterpret_cast<char*>(this)+offset);
    }
};
static __forceinline VerbContainer* nativeVerbContainer(DataModel* dm) {
    return dm ? reinterpret_cast<VerbContainer*>(reinterpret_cast<char*>(dm)+0x1c8) : 0;
}
class ReportAbuseVerb : public Verb {
    CRobloxDocNativeView* doc;
public:
    __forceinline ReportAbuseVerb(CRobloxDocNativeView* doc,DataModel* dm)
        : Verb(nativeVerbContainer(dm),"ReportAbuse"),doc(doc) {}
    virtual bool isEnabled() const;
    virtual void doIt(IDataState*);
};
class ExitCommand : public Verb {
    CRobloxDocNativeView* doc;
public:
    __forceinline ExitCommand(CRobloxDocNativeView* doc,DataModel* dm)
        : Verb(nativeVerbContainer(dm),"Exit"),doc(doc) {}
    virtual bool isEnabled() const {return true;}
    virtual void doIt(IDataState*);
};
namespace RBX {
class Camera;
class CameraVerb : public Verb {
protected:
    Workspace* workspace;
    Camera* getCamera();
    const Camera* getCamera() const;
    ServiceClient<Selection> selection;
public:
    CameraVerb(std::string,Workspace*);
    virtual bool isEnabled() const {return true;}
    virtual void doIt(IDataState*);
};
class FixedCameraCommand : public CameraVerb {
public:
    FixedCameraCommand(Workspace* ws) : CameraVerb("FixedCamera",ws) {}
    virtual bool isChecked() const;
    virtual void doIt(IDataState*);
};
class CameraPanLeftCommand : public CameraVerb {
public:
    CameraPanLeftCommand(Workspace* ws) : CameraVerb("CameraPanLeft",ws) {}
    virtual bool isEnabled() const;
    virtual void doIt(IDataState*);
};
class CameraPanRightCommand : public CameraVerb {
public:
    CameraPanRightCommand(Workspace* ws) : CameraVerb("CameraPanRight",ws) {}
    virtual bool isEnabled() const;
    virtual void doIt(IDataState*);
};
class CameraTiltUpCommand : public CameraVerb {
public:
    CameraTiltUpCommand(Workspace* ws) : CameraVerb("CameraTiltUp",ws) {}
    virtual bool isEnabled() const;
    virtual void doIt(IDataState*);
};
class CameraTiltDownCommand : public CameraVerb {
public:
    CameraTiltDownCommand(Workspace* ws) : CameraVerb("CameraTiltDown",ws) {}
    virtual bool isEnabled() const;
    virtual void doIt(IDataState*);
};
class CameraZoomInCommand : public CameraVerb {
public:
    CameraZoomInCommand(Workspace* ws) : CameraVerb("CameraZoomIn",ws) {}
    virtual bool isEnabled() const;
    virtual void doIt(IDataState*);
};
class CameraZoomOutCommand : public CameraVerb {
public:
    CameraZoomOutCommand(Workspace* ws) : CameraVerb("CameraZoomOut",ws) {}
    virtual bool isEnabled() const;
    virtual void doIt(IDataState*);
};
class CameraCenterCommand : public CameraVerb {
public:
    CameraCenterCommand(Workspace* ws) : CameraVerb("CameraCenter",ws) {}
    virtual bool isEnabled() const;
    virtual void doIt(IDataState*);
};
class CameraZoomExtentsCommand : public CameraVerb {
public:
    CameraZoomExtentsCommand(Workspace* ws) : CameraVerb("CameraZoomExtents",ws) {}
    virtual bool isEnabled() const;
    virtual void doIt(IDataState*);
};
class CameraModelViewCommand : public CameraVerb {
public:
    CameraModelViewCommand(Workspace* ws) : CameraVerb("CameraModelView",ws) {}
    virtual void doIt(IDataState*);
};
}
// ClipboardObject is an empty nonvirtual native base: RTTI offset is exactly
//40(Cut)/36(Copy), without increasing those allocation sizes; Paste base12.
class ClipboardObject {};
class CutVerb : public DeleteSelectionVerb,public ClipboardObject {
public:
    CutVerb(DataModel*);
    virtual void doIt(IDataState*);
};
class CopyVerb : public EditSelectionVerb,public ClipboardObject {
public:
    CopyVerb(DataModel*);
    virtual void doIt(IDataState*);
};
class PasteVerb : public Verb,public ClipboardObject {
    DataModel* dataModel;
    const bool pasteInto;
public:
    PasteVerb(DataModel*,bool);
    virtual bool isEnabled() const;
    virtual void doIt(IDataState*);
};
class InsertDecal : public EditSelectionVerb {
public:
    InsertDecal(DataModel*,const char*);
    virtual bool isEnabled() const;
    virtual void doIt(IDataState*);
protected:
    // Native slot14 creates a Texture/Decal via genuine shared_ptr factory;
    // 0041e670 returns two words through hidden result, ret4, primary Instance0.
    // Expose that actual value ABI through the genuine common Instance base.
    virtual boost::shared_ptr<Instance> createInstance();
};
class InsertTexture : public InsertDecal {
public:
    InsertTexture(DataModel* dm) : InsertDecal(dm,"InsertTexture") {}
protected:
    virtual boost::shared_ptr<Instance> createInstance();
};
class InsertObject : public RunStateVerb {
public:
    InsertObject(DataModel*);
    virtual void doIt(IDataState*);
};
class InsertService : public RunStateVerb {
public:
    InsertService(DataModel*);
    virtual void doIt(IDataState*);
};
typedef char native_doc_DataModel_Lock_size[(sizeof(DataModel::Lock)==12)?1:-1];
typedef char native_doc_CameraVerb_size[(sizeof(CameraVerb)==28)?1:-1];
typedef char native_doc_ReportAbuseVerb_size[(sizeof(ReportAbuseVerb)==16)?1:-1];
typedef char native_doc_ExitCommand_size[(sizeof(ExitCommand)==16)?1:-1];
typedef char native_doc_CutVerb_size[(sizeof(CutVerb)==40)?1:-1];
typedef char native_doc_CopyVerb_size[(sizeof(CopyVerb)==36)?1:-1];
typedef char native_doc_PasteVerb_size[(sizeof(PasteVerb)==20)?1:-1];
typedef char native_doc_InsertDecal_size[(sizeof(InsertDecal)==36)?1:-1];
typedef char native_doc_InsertTexture_size[(sizeof(InsertTexture)==36)?1:-1];
typedef char native_doc_InsertObject_size[(sizeof(InsertObject)==28)?1:-1];
typedef char native_doc_InsertService_size[(sizeof(InsertService)==28)?1:-1];
void CRobloxDocNativeView::initializeCommands() {
    if(createNativeWorkspace(&field<WorkspaceNativeView*>(0x94))!=S_OK)
        throw std::runtime_error("Unable to create CWorkspace");
    reinterpret_cast<IUnknown*>(field<WorkspaceNativeView*>(0x94))->AddRef();
    boost::shared_ptr<DataModel> dm=field<WorkspaceNativeView*>(0x94)->getDataModel();
    DataModel::Lock lock(dm);
    reinterpret_cast<NativeInstanceView*>(dm.get())->setName(std::string(field<CStringA>(0x20)));
    field<boost::scoped_ptr<StandardVerbs> >(0x90).reset(new StandardVerbs(dm.get()));
    field<std::vector<Verb*> >(0x78).push_back(new ReportAbuseVerb(this,dm.get()));
    field<std::vector<Verb*> >(0x78).push_back(new ExitCommand(this,dm.get()));
    field<std::vector<Verb*> >(0x78).push_back(new FixedCameraCommand(field<WorkspaceNativeView*>(0x94)->getWorkspace()));
    field<std::vector<Verb*> >(0x78).push_back(new CameraPanLeftCommand(field<WorkspaceNativeView*>(0x94)->getWorkspace()));
    field<std::vector<Verb*> >(0x78).push_back(new CameraPanRightCommand(field<WorkspaceNativeView*>(0x94)->getWorkspace()));
    field<std::vector<Verb*> >(0x78).push_back(new CameraTiltUpCommand(field<WorkspaceNativeView*>(0x94)->getWorkspace()));
    field<std::vector<Verb*> >(0x78).push_back(new CameraTiltDownCommand(field<WorkspaceNativeView*>(0x94)->getWorkspace()));
    field<std::vector<Verb*> >(0x78).push_back(new CameraZoomInCommand(field<WorkspaceNativeView*>(0x94)->getWorkspace()));
    field<std::vector<Verb*> >(0x78).push_back(new CameraZoomOutCommand(field<WorkspaceNativeView*>(0x94)->getWorkspace()));
    field<std::vector<Verb*> >(0x78).push_back(new CameraCenterCommand(field<WorkspaceNativeView*>(0x94)->getWorkspace()));
    field<std::vector<Verb*> >(0x78).push_back(new CameraZoomExtentsCommand(field<WorkspaceNativeView*>(0x94)->getWorkspace()));
    field<std::vector<Verb*> >(0x78).push_back(new CameraModelViewCommand(field<WorkspaceNativeView*>(0x94)->getWorkspace()));
    bindExisting(0xe120,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->deleteSelection);
    bindExisting(0xe12a,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->selectAll);
    bindExisting(0x8005,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->duplicate);
    bindExisting(0x8011,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->allCanSelect);
    bindExisting(0x8010,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->canNotSelect);
    bindExisting(0x80d8,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->join);
    bindExisting(0x80d4,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->forceAssertion);
    bindExisting(0x80d5,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->engineStats);
    field<std::map<unsigned,const Name*> >(0x54)[0x8039]=&Name::lookup("Group");
    field<std::map<unsigned,const Name*> >(0x54)[0x803a]=&Name::lookup("UnGroup");
    field<std::map<unsigned,const Name*> >(0x54)[0x8061]=&Name::lookup("WeldSelection");
    field<std::map<unsigned,const Name*> >(0x54)[0x80a5]=&Name::lookup("SnapSelection");
    field<std::map<unsigned,const Name*> >(0x54)[0x8043]=&Name::lookup("SelectionRotate");
    field<std::map<unsigned,const Name*> >(0x54)[0x8044]=&Name::lookup("SelectionTilt");
    field<std::map<unsigned,const Name*> >(0x54)[0x8057]=&Name::lookup("SelectionUpBrick");
    field<std::map<unsigned,const Name*> >(0x54)[0x8059]=&Name::lookup("SelectionUpPlate");
    field<std::map<unsigned,const Name*> >(0x54)[0x8058]=&Name::lookup("SelectionDown");
    bindExisting(0x80aa,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->toolModelSetFront);
    bindExisting(0x80ab,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->toolModelSetPrimaryPart);
    bindOwned(0xe123,new CutVerb(dm.get()));
    bindOwned(0xe122,new CopyVerb(dm.get()));
    bindOwned(0xe125,new PasteVerb(dm.get(),false));
    bindOwned(0x80f7,new PasteVerb(dm.get(),true));
    bindOwned(0x8062,new InsertDecal(dm.get(),"InsertDecal"));
    bindOwned(0x80ee,new InsertTexture(dm.get()));
    bindOwned(0x807f,new InsertObject(dm.get()));
    bindOwned(0x8107,new InsertService(dm.get()));
    bindExisting(0x800d,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->clearStarterpack);
    bindExisting(0x800e,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->clearBackpack);
    field<std::map<unsigned,const Name*> >(0x54)[0x8040]=&Name::lookup("FillTool");
    field<std::map<unsigned,const Name*> >(0x54)[0x8041]=&Name::lookup("DropperTool");
    bindExisting(0x8063,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->toolArrow);
    bindExisting(0x8065,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->toolResize);
    bindExisting(0x8067,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->toolAxisMove);
    bindExisting(0x8073,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->toolLock);
    bindExisting(0x8074,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->toolAnchor);
    bindExisting(0x8077,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->toolGlue);
    bindExisting(0x8078,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->toolFlat);
    bindExisting(0x8079,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->toolWeld);
    bindExisting(0x80a7,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->toolStuds);
    bindExisting(0x80a8,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->toolInlet);
    bindExisting(0x807b,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->toolRightMotor);
    bindExisting(0x807c,&field<boost::scoped_ptr<StandardVerbs> >(0x90)->toolHinge);
}
