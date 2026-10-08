// from server: 81% by colin
// roc 2007-08 00658e70  unit: CXTPReportControl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00658e70

extern "C" int __stdcall SetCursor(void*);

extern "C" int __cdecl sub_63023e();

struct CXTPReportControl {
    char pad_0x000[0x168];
    int field_0x168;
    char pad_0x16c[0x200 - 0x16c];
    char* field_0x200;
    int OnMouseMove(int x, int y, int nFlags);
};

int CXTPReportControl::OnMouseMove(int x, int y, int nFlags) {
    if (nFlags == 1) {
        if (this->field_0x168 - 1 == 0) {
            char* p = this->field_0x200;
            SetCursor(*(void**)(p + 0x78));
            return 1;
        }
    }
    sub_63023e();
    return 0;
}
