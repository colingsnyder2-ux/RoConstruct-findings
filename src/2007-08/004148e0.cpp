// from server: 62% by colin
// roc 2007-08 004148e0  unit: DHTMLWindow  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004148e0
//
// 004148e0  53                   push ebx
// 004148e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004148e5  85db                 test ebx, ebx
// 004148e7  750f                 jne 0x4148f8
// 004148e9  53                   push ebx
// 004148ea  53                   push ebx
// 004148eb  6a01                 push 1
// 004148ed  68050000c0           push 0xc0000005
// 004148f2  ff150cd37700         call dword ptr [0x77d30c]
// 004148f8  56                   push esi
// 004148f9  8b742410             mov esi, dword ptr [esp + 0x10]
// 004148fd  85f6                 test esi, esi
// 004148ff  7434                 je 0x414935
// 00414901  8b442414             mov eax, dword ptr [esp + 0x14]
// 00414905  85c0                 test eax, eax
// 00414907  742c                 je 0x414935
// 00414909  57                   push edi
// 0041490a  8906                 mov dword ptr [esi], eax
// 0041490c  ff15c4d27700         call dword ptr [0x77d2c4]
// 00414912  8d7b04               lea edi, [ebx + 4]
// 00414915  57                   push edi
// 00414916  894604               mov dword ptr [esi + 4], eax
// 00414919  ff15fcd27700         call dword ptr [0x77d2fc]
// 0041491f  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00414922  894608               mov dword ptr [esi + 8], eax
// 00414925  57                   push edi
// 00414926  89731c               mov dword ptr [ebx + 0x1c], esi
// 00414929  ff15f8d27700         call dword ptr [0x77d2f8]
// 0041492f  5f                   pop edi
// 00414930  5e                   pop esi
// 00414931  5b                   pop ebx
// 00414932  c20c00               ret 0xc
// 00414935  6a00                 push 0
// 00414937  6a00                 push 0
// 00414939  6a01                 push 1
// 0041493b  68050000c0           push 0xc0000005
// 00414940  ff150cd37700         call dword ptr [0x77d30c]

struct DHTMLWindow {
    char pad[4];
    char pad2[0x18];
    void* m_list;
};

extern "C" {
    void __stdcall RaiseException(unsigned int code, unsigned int flags, unsigned int nargs, const unsigned int* args);
    unsigned long __stdcall GetCurrentThreadId();
    void __stdcall EnterCriticalSection(void* cs);
    void __stdcall LeaveCriticalSection(void* cs);
}

void __stdcall DHTMLWindow_AddRef(DHTMLWindow* self, void** out, void* item)
{
    if (self == 0) {
        RaiseException(0xc0000005, 1, 0, 0);
    }
    if (out != 0 && item != 0) {
        *out = item;
        out[1] = (void*)GetCurrentThreadId();
        out[2] = self->m_list;
        EnterCriticalSection((char*)self + 4);
        self->m_list = out;
        LeaveCriticalSection((char*)self + 4);
        return;
    }
    RaiseException(0xc0000005, 1, 0, 0);
}
