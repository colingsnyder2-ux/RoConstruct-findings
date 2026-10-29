// roc 2010-06 0047ccd0  unit: VCContent::?$CComObject  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047ccd0
//
// 0047ccd0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047ccd4  834108ff             add dword ptr [ecx + 8], -1
// 0047ccd8  56                   push esi
// 0047ccd9  8b7108               mov esi, dword ptr [ecx + 8]
// 0047ccdc  750d                 jne 0x47cceb
// 0047ccde  85c9                 test ecx, ecx
// 0047cce0  7409                 je 0x47cceb
// 0047cce2  8b01                 mov eax, dword ptr [ecx]
// 0047cce4  8b5010               mov edx, dword ptr [eax + 0x10]
// 0047cce7  6a01                 push 1
// 0047cce9  ffd2                 call edx
// 0047cceb  8bc6                 mov eax, esi
// 0047cced  5e                   pop esi
// 0047ccee  c20400               ret 4
// copied from an identical function in another client (function ?Release@?$CComObject@VCContent@ATL@@@ATL@@UAGKXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct GUID;

struct IUnknown
{
    virtual long __stdcall QueryInterface(const GUID& riid, void** ppvObject) = 0;
    virtual unsigned long __stdcall AddRef() = 0;
    virtual unsigned long __stdcall Release() = 0;
};

struct IServiceProvider : public IUnknown
{
    virtual long __stdcall QueryService(const GUID& guidService, const GUID& riid, void** ppvObject) = 0;
};

struct IContentSink : public IUnknown
{
};

namespace ATL {
class CComSingleThreadModel
{
public:
    static unsigned long Increment(long* p) throw() { return ++(*p); }
    static unsigned long Decrement(long* p) throw() { return --(*p); }
};

class CComObjectRootBase
{
public:
    long m_dwRef;
};

template<class ThreadModel>
class CComObjectRootEx : public CComObjectRootBase
{
public:
    unsigned long InternalRelease()
    {
        return ThreadModel::Decrement(&m_dwRef);
    }
};

class CContent : public IServiceProvider, public IContentSink, public CComObjectRootEx<CComSingleThreadModel>
{
};

template<class Base>
class CComObject : public Base
{
public:
    virtual ~CComObject();
    virtual unsigned long __stdcall Release()
    {
        unsigned long l = this->InternalRelease();
        if (l == 0)
            delete this;
        return l;
    }
};

template class CComObject<CContent>;
}