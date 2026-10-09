// roc 2008-06 005e72c0  unit: RBX::Connector  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e72c0
//
// 005e72c0  d9ee                 fldz 
// 005e72c2  c3                   ret 
// copied from an identical function in another client (function ?getValue@TypedStatsItem@ns_ROCX00000d@@QAENXZ)

namespace ns_ROCX00000d {
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
