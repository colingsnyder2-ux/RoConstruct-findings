// from server: 14% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

typedef long HRESULT;
typedef unsigned int DWORD;
typedef int BOOL;

extern "C" void __stdcall AtlThrowImpl(HRESULT hr);
extern "C" void __cdecl check_result(int);
extern "C" int __cdecl sub_406300(char*, char*, unsigned int*, unsigned int);
extern "C" DWORD __stdcall GetModuleFileNameA(void*, char*, DWORD);
extern "C" int __cdecl _mbscmp(const char*, const char*);
extern "C" char* __cdecl _mbsstr(const char*, const char*);

struct StdString {
    char* data;
    StdString();
    StdString(const StdString&);
    ~StdString();
    StdString& operator=(const StdString&);
};

struct CComPtr {
    void* p;
    CComPtr();
    ~CComPtr();
    void Release();
};

extern void* g_80283c;
extern void* g_8028b4;
extern void* g_8021a4;
extern char g_974ab9;
extern char g_974abc;
extern char g_80f090;
extern char g_812e58;
extern char g_82f5ec;
extern char g_82f5e4;
extern char g_82f5d0;
extern char g_82f5bc;
extern char g_82f5a8;
extern char g_82f59c;
extern char g_569bf0;

struct StandardOut {
    bool f();
};

bool StandardOut::f()
{
    if (g_974ab9)
        return true;

    StdString s1;
    s1 = StdString();

    void* p = 0;
    CComPtr sp;
    sp.p = 0;

    if (!p) {
        AtlThrowImpl(0x80004005);
    }

    void* iface = *(void**)p;
    HRESULT hr = ((HRESULT (__stdcall*)(void*, void*, void*))g_80283c)(iface, p, 0);
    bool ok = (hr == 0);

    if (ok)
        return true;

    if (sub_406300(0, 0, 0, 0))
        return true;

    if (sub_406300(0, 0, 0, 0))
        return true;

    StdString s2;
    s2 = StdString();

    CComPtr sp2;
    sp2.p = 0;

    if (p) {
        if (p != (void*)1 && p != (void*)3) {
            StdString s3;
            s3 = StdString();

            StdString s4;
            s4 = StdString();

            if (s4.data && *(int*)(s4.data - 0xc) >= 0) {
                if (_mbscmp(s4.data, &g_82f5e4) == 0) {
                    if (s4.data && *(int*)(s4.data - 0xc) >= 0) {
                        if (_mbscmp(s4.data, &g_82f5d0) == 0) {
                            goto done;
                        }
                        if (s4.data && *(int*)(s4.data - 0xc) >= 0) {
                            if (_mbscmp(s4.data, &g_82f5bc) == 0) {
                                goto done;
                            }
                            if (s4.data && *(int*)(s4.data - 0xc) >= 0) {
                                if (_mbscmp(s4.data, &g_82f5a8) == 0) {
                                    goto done;
                                }
                            }
                        }
                    }
                }
            }

            char buf[0x104];
            if (GetModuleFileNameA(0, buf, 0x104)) {
                StdString s5;
                s5 = StdString();

                StdString s6;
                s6 = StdString();

                if (s6.data && *(int*)(s6.data - 0xc) >= 0) {
                    if (_mbscmp(s6.data, &g_82f59c) == 0) {
                        goto done;
                    }
                }
            }
        }
    }

done:
    return false;
}
