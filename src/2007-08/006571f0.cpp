// from server: 90% by colin
// roc 2007-08 006571f0  unit: CXTPReportControl::CReportDropTarget  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006571f0
//
// 006571f0  8b442404             mov eax, dword ptr [esp + 4]
// 006571f4  50                   push eax
// 006571f5  e896e8ffff           call 0x655a90
// 006571fa  50                   push eax
// 006571fb  e80290fdff           call 0x630202
// 00657200  83c408               add esp, 8
// 00657203  85c0                 test eax, eax
// 00657205  7423                 je 0x65722a
// 00657207  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065720b  8b10                 mov edx, dword ptr [eax]
// 0065720d  8b92e4010000         mov edx, dword ptr [edx + 0x1e4]
// 00657213  51                   push ecx
// 00657214  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00657218  51                   push ecx
// 00657219  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065721d  51                   push ecx
// 0065721e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00657222  51                   push ecx
// 00657223  8bc8                 mov ecx, eax
// 00657225  ffd2                 call edx
// 00657227  c21400               ret 0x14
// 0065722a  33c0                 xor eax, eax
// 0065722c  c21400               ret 0x14

extern "C" void* __cdecl sub_655a90(void*);
extern "C" void* __cdecl sub_630202(void*);

struct CXTPReportControl {
    void* CReportDropTarget(void*, void*, void*, void*, void*);
};

void* CXTPReportControl::CReportDropTarget(void* a, void* b, void* c, void* d, void* e)
{
    void* p = sub_655a90(a);
    void* q = sub_630202(p);
    if (q)
    {
        void* vtbl = *(void**)q;
        void* fn = *(void**)((char*)vtbl + 0x1e4);
        typedef void* (__thiscall *Fn)(void*, void*, void*, void*, void*);
        return ((Fn)fn)(q, b, c, d, e);
    }
    return 0;
}
