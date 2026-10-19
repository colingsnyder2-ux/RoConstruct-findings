// from server: 100% by colin
// from server: 93% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD

typedef long HRESULT;
struct IID { unsigned long a; unsigned short b, c; unsigned char d[8]; };

struct QueryInterfaceBase
{
    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** result);
    unsigned char interfaceBytes04[12];
};
struct DeletingInterfaceBase
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual ~DeletingInterfaceBase() throw();
};
struct WorkspaceObject : QueryInterfaceBase, DeletingInterfaceBase
{
    unsigned char interfaceBytes14[12];
    long references;
    unsigned char applicationBytes24[16];
    WorkspaceObject(void* outer) throw();
    virtual ~WorkspaceObject() throw();
    void SetVoid(void*) {}
    void InternalFinalConstructAddRef() { ++references; }
    void InternalFinalConstructRelease() { --references; }
    HRESULT _AtlInitialConstruct() { return 0; }
    HRESULT FinalConstruct();
    HRESULT _AtlFinalConstruct() { return 0; }
};

class CException {
public:
    virtual ~CException();
    void Delete();
};

template <class T1>
struct CComCreator
{
    static HRESULT __stdcall CreateInstance(void* pv, const IID& riid, void** ppv)
    {
        if (ppv == 0)
            return 0x80004003L;
        *ppv = 0;

        HRESULT hRes = 0x8007000EL;
        T1* p = 0;
        try { p = new T1(pv); } catch (CException* e) { e->Delete(); }
        if (p != 0)
        {
            p->SetVoid(pv);
            p->InternalFinalConstructAddRef();
            hRes = p->_AtlInitialConstruct();
            if (hRes >= 0)
                hRes = p->FinalConstruct();
            if (hRes >= 0)
                hRes = p->_AtlFinalConstruct();
            p->InternalFinalConstructRelease();
            if (hRes == 0)
                hRes = p->QueryInterface(riid, ppv);
            if (hRes != 0)
                delete p;
        }
        return hRes;
    }
};

template struct CComCreator<WorkspaceObject>;
