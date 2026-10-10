// from server: 90% by atomic.potato
extern "C" void __stdcall sub_5e50f0(void*);

struct SimJob {
    void* field00;
    int field04;
    int field08;
    int field0c;
    int field10;
    int field14;
    int field18;
    int field1c;
    int field20;
    int field24;
    SimJob* f(int value);
};

SimJob* SimJob::f(int value)
{
    sub_5e50f0(this);
    field24 = value;
    field00 = (void*)0x83f73c;
    return this;
}
