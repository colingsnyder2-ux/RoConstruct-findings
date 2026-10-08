// from server: 42% by colin
// roc 2007-08 00651e10  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00651e10
//
// 00651e10  8b01                 mov eax, dword ptr [ecx]
// 00651e12  8b908c010000         mov edx, dword ptr [eax + 0x18c]
// 00651e18  56                   push esi
// 00651e19  57                   push edi
// 00651e1a  ffd2                 call edx
// 00651e1c  8b10                 mov edx, dword ptr [eax]
// 00651e1e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00651e22  8b3e                 mov edi, dword ptr [esi]
// 00651e24  8bc8                 mov ecx, eax
// 00651e26  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 00651e2c  ffd0                 call eax
// 00651e2e  8b17                 mov edx, dword ptr [edi]
// 00651e30  50                   push eax
// 00651e31  8bce                 mov ecx, esi
// 00651e33  ffd2                 call edx
// 00651e35  5f                   pop edi
// 00651e36  5e                   pop esi
// 00651e37  c20400               ret 4

struct XTP_REPORTRECORDITEM_DRAWARGS {
    void Draw(void* arg);
};

struct Vtbl1 {
    virtual void* f18c();
};

struct Vtbl2 {
    virtual void* f160();
};

void XTP_REPORTRECORDITEM_DRAWARGS::Draw(void* arg) {
    Vtbl1* a = (Vtbl1*)this;
    Vtbl2* b = (Vtbl2*)a->f18c();
    void* r = b->f160();
    void** pv = *(void***)arg;
    ((void(__thiscall*)(void*, void*))pv[0])(arg, r);
}
