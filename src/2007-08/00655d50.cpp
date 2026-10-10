// from server: 46% by colin
struct CXTPReportControl;

struct CXTPReportRow {
    void* vtable;
    char pad[0x30];
    int field34;
    int field38;
    char pad2[0x10];
    int field4c;
};

struct CXTPReportRecord {
    void* vtable;
};

struct CXTPReportControl {
    char pad[0xb0];
    void* fieldb0;
    char pad2[0xb0];
    int field164;
    int GetCount();
    CXTPReportRow* GetRow(int index);
    void* GetPaintManager();
    void* GetRecord();
    void AddRow(CXTPReportRow* row);
    void RecalcRows();
    void OnRowChanged(CXTPReportRow* row);
    void Method188(CXTPReportRow* row);
    void Method158(void* a, void* b);
    int Method18c(CXTPReportRow* row);
    void Method198();
    void Method1b8(CXTPReportRow* row);

    void ProcessRows(int a, int b, int c);
};

extern "C" {
    int __stdcall sub_663c50(CXTPReportControl* ctrl);
    CXTPReportRow* __stdcall sub_661700(CXTPReportControl* ctrl, int index);
    int __stdcall sub_661ce0(CXTPReportRow* row);
    int __stdcall sub_661f30(CXTPReportRow* row);
}

int CXTPReportControl::GetCount() {
    return sub_663c50(this);
}

CXTPReportRow* CXTPReportControl::GetRow(int index) {
    return sub_661700(this, index);
}

void CXTPReportControl::Method158(void* a, void* b) {
}

int CXTPReportControl::Method18c(CXTPReportRow* row) {
    return 0;
}

void CXTPReportControl::Method198() {
}

void CXTPReportControl::Method1b8(CXTPReportRow* row) {
}

void CXTPReportControl::AddRow(CXTPReportRow* row) {
}

void CXTPReportControl::RecalcRows() {
}

void CXTPReportControl::OnRowChanged(CXTPReportRow* row) {
}

void CXTPReportControl::Method188(CXTPReportRow* row) {
}

void CXTPReportControl::ProcessRows(int a, int b, int c) {
    int count = sub_663c50(this);
    if (count <= 0) return;
    for (int i = 0; i < count; i++) {
        CXTPReportRow* row = sub_661700(this, i);
        if (row->field38 == 0) {
            if (row->field34 == 0) {
                continue;
            }
            void* pm = *(void**)((char*)this->fieldb0 + 0x250);
            void* vt = *(void**)this;
            void (*fn)(void*, void*, void*) = *(void (**)(void*, void*, void*))((char*)vt + 0x158);
            fn(this, pm, 0);
            int (*fn2)(void*, CXTPReportRow*) = *(int (**)(void*, CXTPReportRow*))((char*)vt + 0x18c);
            if (fn2(this, row) != 0) {
                continue;
            }
        }
        void* vt = *(void**)this;
        void (*fn3)(void*) = *(void (**)(void*))((char*)vt + 0x198);
        fn3(this);
        CXTPReportRow* r = row;
        void* vt2 = *(void**)r;
        void (*fn4)(void*, CXTPReportRow*, CXTPReportControl*) = *(void (**)(void*, CXTPReportRow*, CXTPReportControl*))((char*)vt2 + 0x58);
        fn4(r, row, this);
        r->field4c = c;
        void* vt3 = *(void**)r;
        void (*fn5)(void*, CXTPReportRow*) = *(void (**)(void*, CXTPReportRow*))((char*)vt3 + 0x60);
        fn5(r, r);
        if (sub_661ce0(row) == 0) {
            continue;
        }
        int val = sub_661f30(row);
        void* vt4 = *(void**)r;
        void* (*fn6)(void*, CXTPReportRow*) = *(void* (**)(void*, CXTPReportRow*))((char*)vt4 + 0xb8);
        void* result = fn6(r, r);
        ProcessRows((int)result, b, c);
        void* vt5 = *(void**)r;
        void* (*fn7)(void*, CXTPReportRow*) = *(void* (**)(void*, CXTPReportRow*))((char*)vt5 + 0xb8);
        void* result2 = fn7(r, r);
        if (result2 == 0) {
            continue;
        }
        if (this->field164 == 0) {
            continue;
        }
        void* vt6 = *(void**)r;
        void* (*fn8)(void*, CXTPReportRow*) = *(void* (**)(void*, CXTPReportRow*))((char*)vt6 + 0xb8);
        void* result3 = fn8(r, r);
        void* vt7 = *(void**)this;
        void (*fn9)(void*, void*) = *(void (**)(void*, void*))((char*)vt7 + 0x188);
        fn9(this, result3);
    }
}
