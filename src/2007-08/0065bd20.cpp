// from server: 78% by colin
// roc 2007-08 0065bd20  unit: CXTPReportControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065bd20
//
// 0065bd20  51                   push ecx
// 0065bd21  56                   push esi
// 0065bd22  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065bd26  81c1fc010000         add ecx, 0x1fc
// 0065bd2c  51                   push ecx
// 0065bd2d  8bce                 mov ecx, esi
// 0065bd2f  c744240800000000     mov dword ptr [esp + 8], 0
// 0065bd37  ff1574dd7700         call dword ptr [0x77dd74]
// 0065bd3d  8bc6                 mov eax, esi
// 0065bd3f  5e                   pop esi
// 0065bd40  59                   pop ecx
// 0065bd41  c20400               ret 4

struct CXTPReportControl {
    char pad[0x1fc];
    void* field_1fc;
    CXTPReportControl* sub_0065bd20(void* arg);
};

extern "C" void* __stdcall sub_77dd74(void*, void*);

CXTPReportControl* CXTPReportControl::sub_0065bd20(void* arg) {
    void* local = 0;
    sub_77dd74(&field_1fc, &local);
    return (CXTPReportControl*)arg;
}
