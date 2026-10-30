// roc 2009-06 0046ddd0  unit: VCContent::?$CComObject  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046ddd0
//
// 0046ddd0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046ddd4  834108ff             add dword ptr [ecx + 8], -1
// 0046ddd8  56                   push esi
// 0046ddd9  8b7108               mov esi, dword ptr [ecx + 8]
// 0046dddc  750d                 jne 0x46ddeb
// 0046ddde  85c9                 test ecx, ecx
// 0046dde0  7409                 je 0x46ddeb
// 0046dde2  8b01                 mov eax, dword ptr [ecx]
// 0046dde4  8b5010               mov edx, dword ptr [eax + 0x10]
// 0046dde7  6a01                 push 1
// 0046dde9  ffd2                 call edx
// 0046ddeb  8bc6                 mov eax, esi
// 0046dded  5e                   pop esi
// 0046ddee  c20400               ret 4
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