// roc 2011-06 0045cbd0  unit: VCRoblox3D::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0045cbd0
//
// 0045cbd0  8b442404             mov eax, dword ptr [esp + 4]
// 0045cbd4  56                   push esi
// 0045cbd5  57                   push edi
// 0045cbd6  85c0                 test eax, eax
// 0045cbd8  7405                 je 0x45cbdf
// 0045cbda  8d70e0               lea esi, [eax - 0x20]
// 0045cbdd  eb02                 jmp 0x45cbe1
// 0045cbdf  33f6                 xor esi, esi
// 0045cbe1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0045cbe5  397e24               cmp dword ptr [esi + 0x24], edi
// 0045cbe8  741e                 je 0x45cc08
// 0045cbea  85ff                 test edi, edi
// 0045cbec  7408                 je 0x45cbf6
// 0045cbee  8b07                 mov eax, dword ptr [edi]
// 0045cbf0  8b4804               mov ecx, dword ptr [eax + 4]
// 0045cbf3  57                   push edi
// 0045cbf4  ffd1                 call ecx
// 0045cbf6  8b4624               mov eax, dword ptr [esi + 0x24]
// 0045cbf9  85c0                 test eax, eax
// 0045cbfb  7408                 je 0x45cc05
// 0045cbfd  8b10                 mov edx, dword ptr [eax]
// 0045cbff  50                   push eax
// 0045cc00  8b4208               mov eax, dword ptr [edx + 8]
// 0045cc03  ffd0                 call eax
// 0045cc05  897e24               mov dword ptr [esi + 0x24], edi
// 0045cc08  5f                   pop edi
// 0045cc09  33c0                 xor eax, eax
// 0045cc0b  5e                   pop esi
// 0045cc0c  c20800               ret 8
// copied from an identical function in another client (function ?SetSomething@VCWorkspaceCComObject@ns_ROCX00000e@@QAEHPAX0@Z)

namespace ns_ROCX00000e {
struct VCWorkspaceCComObject {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void* field20;
    void* field24;
    int SetSomething(void* p1, void* p2);
};

int VCWorkspaceCComObject::SetSomething(void* p1, void* p2) {
    VCWorkspaceCComObject* self;
    if (p1 != 0) {
        self = (VCWorkspaceCComObject*)((char*)p1 - 0x20);
    } else {
        self = 0;
    }
    if (self->field24 != p2) {
        if (p2 != 0) {
            void** vtbl = *(void***)p2;
            void (__stdcall *addref)(void*) = (void (__stdcall *)(void*))vtbl[1];
            addref(p2);
        }
        void* old = self->field24;
        if (old != 0) {
            void** vtbl2 = *(void***)old;
            void (__stdcall *release)(void*) = (void (__stdcall *)(void*))vtbl2[2];
            release(old);
        }
        self->field24 = p2;
    }
    return 0;
}
}
