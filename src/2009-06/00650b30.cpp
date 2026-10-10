// from server: 75% by why2
struct RBX_VExplosion_EventDesc {
    char pad[8];
    double field8;
    int field10;
    double getValue();
};

double RBX_VExplosion_EventDesc::getValue() {
    double result = 0.0;
    if (result == field8) {
        result = (double)field10 / field8;
    }
    return result;
}
