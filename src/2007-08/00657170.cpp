// from server: 53% by colin
// roc 2007-08 00657170  unit: seg_00650000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00657170

extern "C" void* __stdcall sub_655A90(void*);
extern "C" void* __stdcall sub_630202(void*, void*);

struct CXTPReportControl_CReportDropTarget
{
    void* sub_657170(void* p1, void* p2, void* p3, void* p4, void* p5);
};

void* CXTPReportControl_CReportDropTarget::sub_657170(void* p1, void* p2, void* p3, void* p4, void* p5)
{
    void* v = sub_655A90(p1);
    void* r = sub_630202(v, p1);
    if (r == 0)
        return 0;
    void* (__stdcall *fn)(void*, void*, void*, void*, void*) =
        *(void* (__stdcall **)(void*, void*, void*, void*, void*))((char*)*(void**)r + 0x1e0);
    return fn(r, p2, p3, p4, p5);
}
