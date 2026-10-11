// from server: 72% by atomic.potato
// roc 2009-06 00418d50  unit: CRBXHTMLControlSite::XDocHostUIHandler  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00418d50
//
// 00418d50  8b442404             mov eax, dword ptr [esp + 4]
// 00418d54  8b8834ffffff         mov ecx, dword ptr [eax - 0xcc]
// 00418d5a  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00418d5d  8b11                 mov edx, dword ptr [ecx]
// 00418d5f  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 00418d65  ffd0                 call eax
// 00418d67  c20400               ret 4

struct Inner {
    virtual void vf_1ac();
};

struct Mid {
    char pad[0x20];
    Inner* p;
};

struct Outer {
    char pad[0xcc];
    Mid* m;
};

struct CRBXHTMLControlSite {
    void f(void* arg);
};

void CRBXHTMLControlSite::f(void* arg) {
    Outer* o = (Outer*)((char*)arg - 0xcc);
    Mid* m = o->m;
    Inner* in = m->p;
    in->vf_1ac();
}
