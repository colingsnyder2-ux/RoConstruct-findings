// roc 2007-03 0040a060  unit: seg_00400000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040a060
//
// 0040a060  8b442404             mov eax, dword ptr [esp + 4]
// 0040a064  85c0                 test eax, eax
// 0040a066  56                   push esi
// 0040a067  57                   push edi
// 0040a068  7405                 je 0x40a06f
// 0040a06a  8d70e4               lea esi, [eax - 0x1c]
// 0040a06d  eb02                 jmp 0x40a071
// 0040a06f  33f6                 xor esi, esi
// 0040a071  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0040a075  397e20               cmp dword ptr [esi + 0x20], edi
// 0040a078  741e                 je 0x40a098
// 0040a07a  85ff                 test edi, edi
// 0040a07c  7408                 je 0x40a086
// 0040a07e  8b07                 mov eax, dword ptr [edi]
// 0040a080  8b4804               mov ecx, dword ptr [eax + 4]
// 0040a083  57                   push edi
// 0040a084  ffd1                 call ecx
// 0040a086  8b4620               mov eax, dword ptr [esi + 0x20]
// 0040a089  85c0                 test eax, eax
// 0040a08b  7408                 je 0x40a095
// 0040a08d  8b10                 mov edx, dword ptr [eax]
// 0040a08f  50                   push eax
// 0040a090  8b4208               mov eax, dword ptr [edx + 8]
// 0040a093  ffd0                 call eax
// 0040a095  897e20               mov dword ptr [esi + 0x20], edi
// 0040a098  5f                   pop edi
// 0040a099  33c0                 xor eax, eax
// 0040a09b  5e                   pop esi
// 0040a09c  c20800               ret 8
// copied from an identical function in another client (function ?Assign@VCApp_CComObject@ns_ROCX000001@@QAEHPAX0@Z)

namespace ns_ROCX000001 {
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
}
