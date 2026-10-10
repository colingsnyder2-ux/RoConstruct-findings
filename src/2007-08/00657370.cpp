// from server: 48% by colin
extern "C" {
    int __stdcall sub_77DDAC(int);
    int __stdcall sub_77DD88(int, int);
    int __stdcall sub_77D564(int, int);
    void __stdcall sub_62FF20();
}

struct CReportDropTarget {
    int field0;
    int field4;
    int field8;

    int sub_657370(int a2, CReportDropTarget* a3, int a4);
};

int CReportDropTarget::sub_657370(int a2, CReportDropTarget* a3, int a4) {
    int i = 0;
    sub_77DDAC((int)this);
    int count = a3->field8;
    int result = 0;
    if (count > 0) {
        do {
            if (i > 0) {
                sub_77DD88((int)this, a4);
            }
            if (i < 0 || i >= a3->field8) {
                sub_62FF20();
            }
            sub_77D564((int)this, (int)(a3->field4 + i * 4));
            i++;
        } while (i < count);
    }
    return (int)this;
}
