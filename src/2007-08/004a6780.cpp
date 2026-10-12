// from server: 65% by espeon_1
struct Replicator {
    char pad[0x1d8c];
    int field_1d8c;
    bool method(int* arg);
};

struct Other {
    char pad[0xbc];
    int field_bc;
};

extern "C" bool __stdcall sub_4200C0(int);
extern "C" int* __stdcall sub_495840(void*);

bool Replicator::method(int* arg) {
    int ecx = this->field_1d8c;
    Other* esi = (Other*)arg;
    int eax = esi->field_bc;
    if (eax != ecx) {
        return true;
    }
    if (ecx != 0) {
        if (sub_4200C0(eax)) {
            return true;
        }
    }
    return sub_495840(esi) == (int*)esi;
}
