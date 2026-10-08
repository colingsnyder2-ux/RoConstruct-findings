// from server: 67% by colin
// roc 2007-08 006571b0  unit: CXTPReportControl::CReportDropTarget  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006571b0
//
// 006571b0  8b442404             mov eax, dword ptr [esp + 4]
// 006571b4  50                   push eax
// 006571b5  e8d6e8ffff           call 0x655a90
// 006571ba  50                   push eax
// 006571bb  e84290fdff           call 0x630202
// 006571c0  83c408               add esp, 8
// 006571c3  85c0                 test eax, eax
// 006571c5  7419                 je 0x6571e0
// 006571c7  56                   push esi
// 006571c8  8b30                 mov esi, dword ptr [eax]
// 006571ca  83c9ff               or ecx, 0xffffffff
// 006571cd  0bd1                 or edx, ecx
// 006571cf  52                   push edx
// 006571d0  8b96e0010000         mov edx, dword ptr [esi + 0x1e0]
// 006571d6  51                   push ecx
// 006571d7  6a00                 push 0
// 006571d9  6a00                 push 0
// 006571db  8bc8                 mov ecx, eax
// 006571dd  ffd2                 call edx
// 006571df  5e                   pop esi
// 006571e0  c20400               ret 4

extern "C" void* __cdecl sub_00655A90(void*);
extern "C" void* __cdecl sub_00630202(void*, void*);

struct CReportDropTarget {
    void sub_006571B0(void*);
};

void CReportDropTarget::sub_006571B0(void* arg)
{
    void* p = sub_00655A90(arg);
    void* q = sub_00630202(p, 0);
    if (q != 0) {
        void* v = *(void**)q;
        int (*fn)(void*, int, int, int, int) = *(int (**)(void*, int, int, int, int))((char*)v + 0x1e0);
        fn(q, 0, 0, -1, -1);
    }
}
