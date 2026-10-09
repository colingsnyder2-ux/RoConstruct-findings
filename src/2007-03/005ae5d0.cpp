// roc 2007-03 005ae5d0  unit: seg_005a0000  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ae5d0
//
// 005ae5d0  d9ee                 fldz 
// 005ae5d2  c3                   ret 
// copied from an identical function in another client (function ?getValue@TypedStatsItem@ns_ROCX000013@@QAENXZ)

namespace ns_ROCX000013 {
struct TypedStatsItem {
    char pad[0x110];
    double getValue();
    void formatValue(double);
    void update();
};

double TypedStatsItem::getValue() {
    return 0.0;
}

void TypedStatsItem::formatValue(double) {
}

void TypedStatsItem::update() {
    formatValue(getValue());
}
}
