// from server: 40% by colin
// roc 2007-08 0041bd80  size: 119 bytes
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS /EHsc /MD

extern "C" {
    int __stdcall VariantInit(void* pvarg);
    int __stdcall VariantClear(void* pvarg);
    int __stdcall VariantChangeType(void* pvarg, void* pvarSrc, unsigned short wFlags, unsigned short vt);
    int __stdcall sub_550DD0(void* p);
}

struct VDHTMLWindow_SignalDesc {
    long Invoke(void* pvar);
};

long VDHTMLWindow_SignalDesc::Invoke(void* pvar) {
    char buf[16];
    int hr;
    int ok;
    VariantInit(buf);
    hr = VariantChangeType(buf, pvar, 0, 8);
    if (hr >= 0) {
        ok = sub_550DD0(*(void**)(buf + 8));
        hr = ok ? 0x80004005 : 0x7fffbffb;
    }
    VariantClear(buf);
    return hr;
}
