// roc 2010-06 0040e810  unit: UIEnumConnectionPoints::V?$CComEnum::?$CComObject  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040e810
//
// 0040e810  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040e814  834118ff             add dword ptr [ecx + 0x18], -1
// 0040e818  56                   push esi
// 0040e819  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0040e81c  750d                 jne 0x40e82b
// 0040e81e  85c9                 test ecx, ecx
// 0040e820  7409                 je 0x40e82b
// 0040e822  8b01                 mov eax, dword ptr [ecx]
// 0040e824  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0040e827  6a01                 push 1
// 0040e829  ffd2                 call edx
// 0040e82b  8bc6                 mov eax, esi
// 0040e82d  5e                   pop esi
// 0040e82e  c20400               ret 4
// copied from an identical function in another client (function ?Release@?$CComObject@VCComEnumConnectionPoints@ATL@@@ATL@@UAGKXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct GUID;

struct IUnknown
{
    virtual long __stdcall QueryInterface(const GUID& riid, void** ppvObject) = 0;
    virtual unsigned long __stdcall AddRef() = 0;
    virtual unsigned long __stdcall Release() = 0;
};

struct IConnectionPoint;

struct IEnumConnectionPoints : public IUnknown
{
    virtual long __stdcall Next(unsigned long cConnections, IConnectionPoint** ppCP, unsigned long* pcFetched) = 0;
    virtual long __stdcall Skip(unsigned long cConnections) = 0;
    virtual long __stdcall Reset() = 0;
    virtual long __stdcall Clone(IEnumConnectionPoints** ppEnum) = 0;
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

class CComEnumImpl : public IEnumConnectionPoints
{
public:
    IConnectionPoint** m_begin;
    IConnectionPoint** m_end;
    IConnectionPoint** m_iter;
    unsigned long m_dwFlags;
    IUnknown* m_spUnk;
};

class CComEnumConnectionPoints : public CComEnumImpl, public CComObjectRootEx<CComSingleThreadModel>
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

template class CComObject<CComEnumConnectionPoints>;
}