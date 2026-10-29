// roc 2009-12 00697890  unit: RBX::VIAdornableCollector::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00697890
//
// 00697890  8b442404             mov eax, dword ptr [esp + 4]
// 00697894  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00697897  8b542408             mov edx, dword ptr [esp + 8]
// 0069789b  56                   push esi
// 0069789c  8b7008               mov esi, dword ptr [eax + 8]
// 0069789f  52                   push edx
// 006978a0  8b9198000000         mov edx, dword ptr [ecx + 0x98]
// 006978a6  8b1432               mov edx, dword ptr [edx + esi]
// 006978a9  035004               add edx, dword ptr [eax + 4]
// 006978ac  8b00                 mov eax, dword ptr [eax]
// 006978ae  8d8c0a98000000       lea ecx, [edx + ecx + 0x98]
// 006978b5  ffd0                 call eax
// 006978b7  5e                   pop esi
// 006978b8  c3                   ret 
// copied from an identical function in another client (function ?invoke@ns_ROCX000004@@YAXPAX0@Z)

namespace ns_ROCX000004 {
// from server: 100% by tester
struct FactoryProduct {
};

void __cdecl invoke(void* arg1, void* arg2)
{
    char* p = (char*)arg1;
    void* vtable = *(void**)p;
    int offset = *(int*)(p + 8);
    char* base = *(char**)(p + 0x10);
    int delta = *(int*)(base + 0x98);
    int index = *(int*)(delta + offset);
    int total = index + *(int*)(p + 4);
    char* self = base + 0x98 + total;
    ((void (__thiscall*)(void*, void*))vtable)(self, arg2);
}
}
