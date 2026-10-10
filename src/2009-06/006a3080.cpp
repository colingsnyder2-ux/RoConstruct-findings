// from server: 52% by why2
struct RBX_VehicleSeat {
    char pad[0x30c];
    int field_30c;

    void sub_6a2f70();
    int get();
};

void RBX_VehicleSeat::sub_6a2f70() {
}

int RBX_VehicleSeat::get() {
    sub_6a2f70();
    return field_30c;
}
