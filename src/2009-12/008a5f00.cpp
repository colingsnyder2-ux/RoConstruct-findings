// from server: 80% by atomic.potato
struct VCXTPReportRow {
    char pad0[0x64];
    int field64;
    char pad68[0x4];
    int field6c;
    int field70;
    int field74;
    int field78;
};

extern "C" void __stdcall sub_7f4148();
extern "C" void __stdcall sub_98de74();

void VCXTPReportRow_ctor(VCXTPReportRow* self) {
    sub_7f4148();
    *(int*)self = 0xa05d4c;
    sub_98de74();
    self->field78 = 0;
    self->field74 = 0x9b0198;
    self->field64 = 0;
    self->field6c = 0;
    self->field70 = -1;
}
