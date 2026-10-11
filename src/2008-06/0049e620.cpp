// from server: 52% by tester
// roc 2008-06 0049e620  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049e620

extern "C" void* __cdecl operator_new(unsigned int size);

struct sp_counted_base {
    void* vftable;
    int use_count;
    int weak_count;
};

struct sp_counted_impl_p {
    sp_counted_base base;
    void* px;
};

struct AbuseReporter_data {
    void* queue_storage;
};

struct AbuseReporter {
    void* _data;
    AbuseReporter(AbuseReporter_data* d, int unused);
};

AbuseReporter::AbuseReporter(AbuseReporter_data* d, int unused)
{
    _data = 0;
    sp_counted_impl_p* p = (sp_counted_impl_p*)operator_new(0x14);
    if (p) {
        p->base.use_count = 1;
        p->base.weak_count = 1;
        p->base.vftable = (void*)0x822cd8;
        p->px = d;
    } else {
        p = 0;
    }
    _data = p;
}
