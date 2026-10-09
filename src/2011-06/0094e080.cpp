// roc 2011-06 0094e080  unit: Ogre::RbxMeshPartAdapter::??fillVertices::?BA::FileLoader  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0094e080
//
// 0094e080  d9ee                 fldz 
// 0094e082  c3                   ret 
// copied from an identical function in another client (function ?getValue@TypedStatsItem@ns_ROCX00001f@@QAENXZ)

namespace ns_ROCX00001f {
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
