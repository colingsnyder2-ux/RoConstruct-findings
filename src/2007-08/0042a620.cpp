// from server: 100% by colin
// roc 2007-08 0042a620  unit: CLuaHtmlView  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042a620
//
// 0042a620  8b442404             mov eax, dword ptr [esp + 4]
// 0042a624  85c0                 test eax, eax
// 0042a626  7508                 jne 0x42a630
// 0042a628  b803400080           mov eax, 0x80004003
// 0042a62d  c20400               ret 4
// 0042a630  8b91f4000000         mov edx, dword ptr [ecx + 0xf4]
// 0042a636  8910                 mov dword ptr [eax], edx
// 0042a638  8b89f4000000         mov ecx, dword ptr [ecx + 0xf4]
// 0042a63e  85c9                 test ecx, ecx
// 0042a640  7408                 je 0x42a64a
// 0042a642  8b01                 mov eax, dword ptr [ecx]
// 0042a644  51                   push ecx
// 0042a645  8b4804               mov ecx, dword ptr [eax + 4]
// 0042a648  ffd1                 call ecx
// 0042a64a  33c0                 xor eax, eax
// 0042a64c  c20400               ret 4

struct CLuaHtmlView {
    int unknown0[61];
    void* field_f4;
    int GetSomething(void** out);
};

int CLuaHtmlView::GetSomething(void** out) {
    if (out == 0) {
        return 0x80004003;
    }
    *out = field_f4;
    void* p = field_f4;
    if (p != 0) {
        void** vtable = *(void***)p;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtable[1];
        fn(p);
    }
    return 0;
}
