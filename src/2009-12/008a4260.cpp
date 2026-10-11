// from server: 47% by atomic.potato
struct VCXTPReportRow {
    char pad[0x74];
    int field_74;
    void sub_7f3e1e();
    void sub_7f3e2a(void*);
    void sub_7f539a();
    void func(void*);
};

extern "C" int __stdcall CreateFontIndirectA(const void*);
extern "C" int __stdcall GetObjectA(void*, int, void*);

void VCXTPReportRow::func(void* param) {
    char buf[0x3c];
    sub_7f3e1e();
    GetObjectA(*(void**)((char*)param + 4), 0x3c, buf);
    CreateFontIndirectA(buf);
    sub_7f3e2a(buf);
    sub_7f539a();
}
