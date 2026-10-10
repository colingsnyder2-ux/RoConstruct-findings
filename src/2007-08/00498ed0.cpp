// from server: 10% by colin
extern "C" void* __stdcall malloc(unsigned int size);

struct AbuseReporterData;

struct AbuseReporter
{
    void construct(void* p, void* q);
};

struct AbuseReporterHolder
{
    void* field0;
    void* field4;
    void init(AbuseReporter* reporter);
};

void AbuseReporter::construct(void* p, void* q)
{
    (void)p;
    (void)q;
}

void AbuseReporterHolder::init(AbuseReporter* reporter)
{
    void* mem = malloc(0x110);
    void* obj = 0;
    if (mem != 0)
    {
        AbuseReporter* r = (AbuseReporter*)mem;
        r->construct(0, 0);
        obj = mem;
    }
    reporter->construct(this->field0, obj);
}
