// from server: 45% by colin
// roc 2007-08 00663ba0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00663ba0
//
// 00663ba0  56                   push esi
// 00663ba1  57                   push edi
// 00663ba2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00663ba6  85ff                 test edi, edi
// 00663ba8  8d7120               lea esi, [ecx + 0x20]
// 00663bab  7c1f                 jl 0x663bcc
// 00663bad  3b7e08               cmp edi, dword ptr [esi + 8]
// 00663bb0  7d1a                 jge 0x663bcc
// 00663bb2  8b4604               mov eax, dword ptr [esi + 4]
// 00663bb5  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00663bb8  e827c6fcff           call 0x6301e4
// 00663bbd  6a01                 push 1
// 00663bbf  57                   push edi
// 00663bc0  8bce                 mov ecx, esi
// 00663bc2  e8e9ea0600           call 0x6d26b0
// 00663bc7  5f                   pop edi
// 00663bc8  5e                   pop esi
// 00663bc9  c20400               ret 4
// 00663bcc  e84fc3fcff           call 0x62ff20

struct VCXTPReportRows_CXTPHeapObjectT
{
    char pad[0x20];
    struct Inner
    {
        char pad0[4];
        void** data;
        int count;
    } inner;
    void method(int index);
};

extern "C" void __cdecl func_0062ff20();
extern "C" void __cdecl func_006301e4();
extern "C" void __cdecl func_006d26b0();

void VCXTPReportRows_CXTPHeapObjectT::method(int index)
{
    Inner* p = &inner;
    if (index >= 0 && index < p->count)
    {
        void* item = p->data[index];
        func_006301e4();
        func_006d26b0();
    }
    else
    {
        func_0062ff20();
    }
}
