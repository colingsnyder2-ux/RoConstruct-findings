// roc 2011-06 00417e90  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00417e90
//
// 00417e90  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00417e94  834108ff             add dword ptr [ecx + 8], -1
// 00417e98  56                   push esi
// 00417e99  8b7108               mov esi, dword ptr [ecx + 8]
// 00417e9c  750d                 jne 0x417eab
// 00417e9e  85c9                 test ecx, ecx
// 00417ea0  7409                 je 0x417eab
// 00417ea2  8b01                 mov eax, dword ptr [ecx]
// 00417ea4  8b5010               mov edx, dword ptr [eax + 0x10]
// 00417ea7  6a01                 push 1
// 00417ea9  ffd2                 call edx
// 00417eab  8bc6                 mov eax, esi
// 00417ead  5e                   pop esi
// 00417eae  c20400               ret 4
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