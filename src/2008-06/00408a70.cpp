// from server: 96% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_1aee858c13f1ad84.cpp

// Candidate translation unit (score above; library headers required).
#ifndef _CPPUNWIND
#define _CPPUNWIND 1
#endif
#ifndef _AFXDLL
#define _AFXDLL
#endif
#ifndef _MBCS
#define _MBCS
#endif
#include <new>
#include <afxwin.h>
#include <atlutil.h>
#include <string>
#include <exception>
#include <intrin.h>

class sp_counted_base {
public:
    virtual ~sp_counted_base();
    virtual void dispose() = 0;
    virtual void destroy();
    void add_ref_copy() { _InterlockedIncrement(&use_count_); }
    void release()
    {
        if (_InterlockedDecrement(&use_count_) == 0)
        {
            dispose();
            weak_release();
        }
    }
    void weak_release()
    {
        if (_InterlockedDecrement(&weak_count_) == 0)
            destroy();
    }
    long use_count_;
    long weak_count_;
};

class shared_count {
public:
    sp_counted_base* pi_;
    ~shared_count() { if (pi_ != 0) pi_->release(); }
};

template<class T> class shared_ptr {
public:
    T* px;
    shared_count pn;
    T* operator->() const { return px; }
};

struct BStr;
extern BStr* (__thiscall* BStr_ctor)(BStr*, const wchar_t*);
extern const char* (__thiscall* BStr_conv)(const BStr*);
extern void (__thiscall* BStr_dtor)(BStr*);
struct BStr {
    char* m_pszData;
    BStr() {}
    BStr(const wchar_t* psz, BStr*& out) { out = BStr_ctor(this, psz); }
    operator const char*() const { return BStr_conv(this); }
    __declspec(dllimport) ~BStr() throw();
};
struct BStr2 {
    char* m_pszData;
    BStr2(const wchar_t* psz, BStr*& out) { out = BStr_ctor((BStr*)this, psz); }
    __declspec(dllimport) ~BStr2() throw();
};
struct UrlStr {
    char* m_pszData;
    __declspec(dllimport) operator const char*() const throw();
    __declspec(dllimport) ~UrlStr() throw();
};

class Logger {
public:
    void log(int level, const char* fmt, ...);
};
shared_ptr<Logger> __cdecl getLogger();
UrlStr __cdecl getBaseUrl();

class Authenticator {
public:
    Authenticator(const char* host);
    ~Authenticator();
    std::string authenticate(const char* user, const char* password);
    std::string host;
};

HRESULT __cdecl ReportException(const GUID& iid, std::exception& e);
extern const GUID IID_IApp;

class CApp {
public:
    HRESULT __stdcall RobloxAuthenticate(BSTR user, BSTR password) throw();
};

HRESULT __stdcall CApp::RobloxAuthenticate(BSTR user, BSTR password) throw()
{
    AFX_MANAGE_STATE(AfxGetAppModuleState());
    BStr* pp;
    BStr* pu;
    (BStr(password, pp), BStr2(user, pu), getLogger())->log(1, "CApp::RobloxAuthenticate %s %s", BStr_conv(pu), BStr_conv(pp));
    try
    {
        ATL::CUrl url;
        url.CrackUrl(getBaseUrl());
        Authenticator auth(url.GetHostName());
        (BStr(password, pp), BStr2(user, pu), auth).authenticate(BStr_conv(pu), BStr_conv(pp));
    }
    catch (std::exception& e)
    {
        return ReportException(IID_IApp, e);
    }
    return S_OK;
}
