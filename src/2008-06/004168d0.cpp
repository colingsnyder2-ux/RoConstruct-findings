// from server: 100% by tester
// roc 2008-06 004168d0  unit: VCContent::?$CComObject  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004168d0
//
// 004168d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004168d4  834108ff             add dword ptr [ecx + 8], -1
// 004168d8  56                   push esi
// 004168d9  8b7108               mov esi, dword ptr [ecx + 8]
// 004168dc  750d                 jne 0x4168eb
// 004168de  85c9                 test ecx, ecx
// 004168e0  7409                 je 0x4168eb
// 004168e2  8b01                 mov eax, dword ptr [ecx]
// 004168e4  8b5010               mov edx, dword ptr [eax + 0x10]
// 004168e7  6a01                 push 1
// 004168e9  ffd2                 call edx
// 004168eb  8bc6                 mov eax, esi
// 004168ed  5e                   pop esi
// 004168ee  c20400               ret 4

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
