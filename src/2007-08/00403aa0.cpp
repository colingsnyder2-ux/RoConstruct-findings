// from server: 7% by colin
struct IUnknown {
    virtual int QueryInterface(void*, void*);
    virtual int AddRef();
    virtual int Release();
};

struct IEnumVARIANT {
    virtual int QueryInterface(void*, void*);
    virtual int AddRef();
    virtual int Release();
    virtual int Next(unsigned long, void*, unsigned long*);
    virtual int Skip(unsigned long);
    virtual int Reset();
    virtual int Clone(IEnumVARIANT**);
};

struct IDispatch {
    virtual int QueryInterface(void*, void*);
    virtual int AddRef();
    virtual int Release();
    virtual int GetTypeInfoCount(unsigned int*);
    virtual int GetTypeInfo(unsigned int, unsigned long, void**);
    virtual int GetIDsOfNames(void*, void*, unsigned int, unsigned long, long*);
    virtual int Invoke(long, void*, unsigned long, unsigned short, void*, void*, void*, unsigned int*);
};

struct CComClassFactory {
    virtual int QueryInterface(void*, void*);
    virtual int AddRef();
    virtual int Release();
    virtual int CreateInstance(IUnknown*, void*, void**);
    virtual int LockServer(int);
};

struct CComObject {
    int __stdcall func(int, int);
};

extern "C" int __stdcall func_00403aa0(CComClassFactory* self, int arg1, int arg2);

int __stdcall func_00403aa0(CComClassFactory* self, int arg1, int arg2)
{
    IUnknown* pUnk = 0;
    IEnumVARIANT* pEnum = 0;
    IDispatch* pDisp = 0;
    int hr;

    if (self) {
        self = (CComClassFactory*)((char*)self - 0x18);
    } else {
        self = 0;
    }

    hr = ((IUnknown*)((char*)self + 0x20))->QueryInterface(0, 0);
    if (hr < 0) {
        return hr;
    }

    hr = ((IUnknown*)pUnk)->QueryInterface(0, 0);
    if (hr < 0) {
        if (pEnum) {
            pEnum->Release();
        }
        if (pUnk) {
            pUnk->Release();
        }
        return hr;
    }

    hr = pDisp->Invoke(0, 0, 0, 0, 0, 0, 0, 0);
    if (hr < 0) {
        if (pDisp) {
            pDisp->Release();
        }
        if (pEnum) {
            pEnum->Release();
        }
        if (pUnk) {
            pUnk->Release();
        }
        return hr;
    }

    if (pDisp) {
        pDisp->Release();
    }
    if (pEnum) {
        pEnum->Release();
    }
    if (pUnk) {
        pUnk->Release();
    }
    return 0;
}
