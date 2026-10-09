// roc 2007-03 0042b840  unit: seg_00420000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042b840
//
// 0042b840  8b442404             mov eax, dword ptr [esp + 4]
// 0042b844  85c0                 test eax, eax
// 0042b846  7508                 jne 0x42b850
// 0042b848  b803400080           mov eax, 0x80004003
// 0042b84d  c20400               ret 4
// 0042b850  8b91f4000000         mov edx, dword ptr [ecx + 0xf4]
// 0042b856  8910                 mov dword ptr [eax], edx
// 0042b858  8b89f4000000         mov ecx, dword ptr [ecx + 0xf4]
// 0042b85e  85c9                 test ecx, ecx
// 0042b860  7408                 je 0x42b86a
// 0042b862  8b01                 mov eax, dword ptr [ecx]
// 0042b864  51                   push ecx
// 0042b865  8b4804               mov ecx, dword ptr [eax + 4]
// 0042b868  ffd1                 call ecx
// 0042b86a  33c0                 xor eax, eax
// 0042b86c  c20400               ret 4
// copied from an identical function in another client (function ?GetSomething@CLuaHtmlView@ns_ROCX000000@@QAEHPAPAX@Z)

namespace ns_ROCX000000 {
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
}
