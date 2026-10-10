// from server: 65% by colin
struct SleepStage {
    char pad[0xb4];
    int field_b4;
    int field_b8;
    void stepSleepStage(int* a);
};

extern "C" int __stdcall sub_605550(int* a, int* b, int* c);
extern "C" int __stdcall sub_5E29B0(int* a, int* b, int* c);
extern "C" void __stdcall invalid_parameter_noinfo();

void SleepStage::stepSleepStage(int* a) {
    int local1;
    int local2;
    int local3;
    int* p = &field_b4;
    int val = field_b8;
    int* arg = a;
    int* it;
    local2 = (int)arg;
    it = (int*)sub_605550(p, &local1, &local3);
    if (*it != 0 && *it != (int)p) {
        invalid_parameter_noinfo();
    }
    if (it[1] == val) {
        local2 = (int)arg;
        sub_5E29B0(p, &local1, &local3);
    }
}
