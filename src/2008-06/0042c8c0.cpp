// from server: 86% by EspClaude
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <intrin.h>
#include <string>
#include <stdexcept>
#include <list>

typedef long HRESULT;
typedef unsigned short VARTYPE;
typedef struct _GUID { unsigned long Data1; unsigned short Data2, Data3; unsigned char Data4[8]; } GUID;
typedef GUID IID;
struct tagVARIANT { VARTYPE vt; unsigned short r1, r2, r3; union { long lVal; void* p; double d; }; };
typedef tagVARIANT VARIANT;
extern "C" __declspec(dllimport) void __stdcall VariantInit(VARIANT*);
extern "C" __declspec(dllimport) HRESULT __stdcall VariantClear(VARIANT*);

struct __declspec(uuid("00000000-0000-0000-C000-000000000046")) IUnknown {
    virtual HRESULT __stdcall QueryInterface(const IID& riid, void** ppv) = 0;
    virtual unsigned long __stdcall AddRef() = 0;
    virtual unsigned long __stdcall Release() = 0;
};
struct __declspec(uuid("00020400-0000-0000-C000-000000000046")) IDispatch : IUnknown {
    virtual HRESULT __stdcall GetTypeInfoCount(unsigned int*) = 0;
    virtual HRESULT __stdcall GetTypeInfo(unsigned int, unsigned long, void**) = 0;
    virtual HRESULT __stdcall GetIDsOfNames(const IID&, wchar_t**, unsigned int, unsigned long, long*) = 0;
    virtual HRESULT __stdcall Invoke(long, const IID&, unsigned long, unsigned short, void*, VARIANT*, void*, unsigned int*) = 0;
};
struct __declspec(uuid("3050f21f-98b5-11cf-bb82-00aa00bdce0b")) IHTMLElementCollection : IDispatch {
    virtual HRESULT __stdcall toString(void*) = 0;
    virtual HRESULT __stdcall put_length(long) = 0;
    virtual HRESULT __stdcall get_length(long*) = 0;
    virtual HRESULT __stdcall get__newEnum(IUnknown**) = 0;
    virtual HRESULT __stdcall item(VARIANT name, VARIANT index, IDispatch** pdisp) = 0;
};
struct __declspec(uuid("332c4425-26cb-11d0-b483-00c04fd90119")) IHTMLDocument2 : IDispatch {
    virtual HRESULT __stdcall get_Script(IDispatch**) = 0;
    virtual HRESULT __stdcall get_all(IHTMLElementCollection** p) = 0;
};
struct __declspec(uuid("3050f5d2-98b5-11cf-bb82-00aa00bdce0b")) IHTMLInputElement : IDispatch {};

template<class T> class CComPtr {
public:
    CComPtr() throw() { p = 0; }
    ~CComPtr() throw() { if (p) p->Release(); }
    operator T*() const throw() { return p; }
    T* operator->() const throw() { return p; }
    T** operator&() throw() { return &p; }
    bool operator!() const throw() { return p == 0; }
    T* p;
};
template<class T> class CComQIPtr : public CComPtr<T> {
public:
    CComQIPtr(IUnknown* lp) throw() { if (lp != 0) lp->QueryInterface(__uuidof(T), (void**)&this->p); }
};
class CComVariant : public tagVARIANT {
public:
    CComVariant() throw() { ::VariantInit(this); }
    CComVariant(const char* lpszSrc) { vt = 0; *this = lpszSrc; }
    ~CComVariant() throw() { Clear(); }
    CComVariant& operator=(const char* lpszSrc);
    HRESULT Clear() { return ::VariantClear(this); }
};

namespace boost {
namespace detail {
struct sp_counted_base {
    virtual ~sp_counted_base() {}
    virtual void dispose() = 0;
    virtual void destroy() { delete this; }
    long use_count_;
    long weak_count_;
};
struct shared_count {
    sp_counted_base* pi_;
    shared_count(const shared_count& r) : pi_(r.pi_) { if (pi_ != 0) _InterlockedIncrement(&pi_->use_count_); }
    ~shared_count();
};
}
template<class T> class shared_ptr {
public:
    explicit shared_ptr(T* p);
    T* px;
    detail::shared_count pn;
    T* operator->() const { return px; }
    T* get() const { return px; }
};
}
template<class T> class dm_ptr {
public:
    dm_ptr(const dm_ptr& r);
    ~dm_ptr();
    T* px; void* pn;
};

namespace G3D { std::string __cdecl format(const char* fmt, ...); }
namespace RBX {
class DataModel;
class ReadRequest {
public:
    ReadRequest(dm_ptr<DataModel> dm);
    ~ReadRequest();
    void* a; void* b; void* c;
};
class Instance;
}

class CHtmlView {
public:
    virtual ~CHtmlView();
    IDispatch* GetHtmlDocument() const;
};

bool __cdecl isSameElement(IHTMLInputElement* a, IHTMLInputElement* b);

class CLuaHtmlView : public CHtmlView {
public:
    class Binder {
    public:
        Binder(IHTMLInputElement* element);
        void bind(boost::shared_ptr<RBX::Instance> instance, int property);
        char pad[0x30];
        IHTMLInputElement* element;
    };
    char pad0[0x100 - 4];
    dm_ptr<RBX::DataModel> dataModel;
    char pad1[0x110 - 0x108];
    typedef std::list<boost::shared_ptr<Binder> > BaseList;
    struct BinderList : public BaseList {
        struct iterator : public BaseList::iterator {
            iterator(const BaseList::iterator& i) : BaseList::iterator(i) {}
            __declspec(noinline) boost::shared_ptr<Binder>& operator*() const { return BaseList::iterator::operator*(); }
        };
        __declspec(noinline) void push_back(const boost::shared_ptr<Binder>& v) { BaseList::push_back(v); }
    };
    BinderList binders;
    void bindElement(boost::shared_ptr<RBX::Instance> instance, int property, const char* elementName);
};

void CLuaHtmlView::bindElement(boost::shared_ptr<RBX::Instance> instance, int property, const char* elementName)
{
    CComQIPtr<IHTMLDocument2> doc(GetHtmlDocument());
    if (!doc)
        throw std::runtime_error("The HtmlDocument is not loaded");
    CComPtr<IHTMLElementCollection> all;
    doc->get_all(&all);
    CComPtr<IDispatch> item;
    {
        CComVariant index;
        all->item(CComVariant(elementName), index, &item);
    }
    if (!item)
        throw std::runtime_error(G3D::format("%s not found", elementName));
    CComQIPtr<IHTMLInputElement> input(item);
    if (!input)
        throw std::runtime_error(G3D::format("%s is not an input element", elementName));
    Binder* binder = 0;
    BaseList::iterator end = binders.end();
    for (BinderList::iterator it = binders.begin(); it != end; ++it)
        if (isSameElement((*(BaseList::iterator&)it)->element, input)) {
            binder = (*it).get();
            break;
        }
    if (!binder) {
        RBX::ReadRequest request(dataModel);
        binder = new Binder(input);
        binders.push_back(boost::shared_ptr<Binder>(binder));
    }
    binder->bind(instance, property);
}
