// from server: 100% by colin
// roc 2007-08 00409d70  unit: VCApp::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00409d70
//
// 00409d70  8b442404             mov eax, dword ptr [esp + 4]
// 00409d74  85c0                 test eax, eax
// 00409d76  56                   push esi
// 00409d77  57                   push edi
// 00409d78  7405                 je 0x409d7f
// 00409d7a  8d70e4               lea esi, [eax - 0x1c]
// 00409d7d  eb02                 jmp 0x409d81
// 00409d7f  33f6                 xor esi, esi
// 00409d81  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00409d85  397e20               cmp dword ptr [esi + 0x20], edi
// 00409d88  741e                 je 0x409da8
// 00409d8a  85ff                 test edi, edi
// 00409d8c  7408                 je 0x409d96
// 00409d8e  8b07                 mov eax, dword ptr [edi]
// 00409d90  8b4804               mov ecx, dword ptr [eax + 4]
// 00409d93  57                   push edi
// 00409d94  ffd1                 call ecx
// 00409d96  8b4620               mov eax, dword ptr [esi + 0x20]
// 00409d99  85c0                 test eax, eax
// 00409d9b  7408                 je 0x409da5
// 00409d9d  8b10                 mov edx, dword ptr [eax]
// 00409d9f  50                   push eax
// 00409da0  8b4208               mov eax, dword ptr [edx + 8]
// 00409da3  ffd0                 call eax
// 00409da5  897e20               mov dword ptr [esi + 0x20], edi
// 00409da8  5f                   pop edi
// 00409da9  33c0                 xor eax, eax
// 00409dab  5e                   pop esi
// 00409dac  c20800               ret 8

struct VCApp_CComObject {
    int Assign(void* p, void* q);
};

int VCApp_CComObject::Assign(void* p, void* q)
{
    char* self;
    if (p != 0)
        self = (char*)p - 0x1c;
    else
        self = 0;

    if (*(void**)(self + 0x20) != q) {
        if (q != 0) {
            void** vt = *(void***)q;
            void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vt[1];
            fn(q);
        }
        void* old = *(void**)(self + 0x20);
        if (old != 0) {
            void** vt = *(void***)old;
            void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vt[2];
            fn(old);
        }
        *(void**)(self + 0x20) = q;
    }
    return 0;
}
