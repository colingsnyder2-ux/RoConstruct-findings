// from server: 84% by colin
struct BodyMover {
    char pad[0x138];
    int field138;
    void f(int, int);
};

extern "C" void* __stdcall sub_4530F0();

struct JointsService {
    char pad[0x150];
    void addMover(int*);
    void removeMover(int*);
};

void BodyMover::f(int a, int b) {
    if (a) {
        int* p;
        if (this)
            p = &this->field138;
        else
            p = 0;
        void* svc = sub_4530F0();
        if (svc) {
            JointsService* js = (JointsService*)((char*)svc + 0x150);
            js->addMover(p);
        }
    }
    if (b) {
        int* p;
        if (this)
            p = &this->field138;
        else
            p = 0;
        void* svc = sub_4530F0();
        if (svc) {
            JointsService* js = (JointsService*)((char*)svc + 0x150);
            js->removeMover(p);
        }
    }
}
