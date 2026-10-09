// roc 2007-03 00403770  unit: seg_00400000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00403770
//
// 00403770  8b442404             mov eax, dword ptr [esp + 4]
// 00403774  85c0                 test eax, eax
// 00403776  56                   push esi
// 00403777  57                   push edi
// 00403778  7405                 je 0x40377f
// 0040377a  8d70e0               lea esi, [eax - 0x20]
// 0040377d  eb02                 jmp 0x403781
// 0040377f  33f6                 xor esi, esi
// 00403781  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00403785  397e24               cmp dword ptr [esi + 0x24], edi
// 00403788  741e                 je 0x4037a8
// 0040378a  85ff                 test edi, edi
// 0040378c  7408                 je 0x403796
// 0040378e  8b07                 mov eax, dword ptr [edi]
// 00403790  8b4804               mov ecx, dword ptr [eax + 4]
// 00403793  57                   push edi
// 00403794  ffd1                 call ecx
// 00403796  8b4624               mov eax, dword ptr [esi + 0x24]
// 00403799  85c0                 test eax, eax
// 0040379b  7408                 je 0x4037a5
// 0040379d  8b10                 mov edx, dword ptr [eax]
// 0040379f  50                   push eax
// 004037a0  8b4208               mov eax, dword ptr [edx + 8]
// 004037a3  ffd0                 call eax
// 004037a5  897e24               mov dword ptr [esi + 0x24], edi
// 004037a8  5f                   pop edi
// 004037a9  33c0                 xor eax, eax
// 004037ab  5e                   pop esi
// 004037ac  c20800               ret 8
// copied from an identical function in another client (function ?SetSomething@VCWorkspaceCComObject@ns_ROCX00000b@@QAEHPAX0@Z)

namespace ns_ROCX00000b {
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
