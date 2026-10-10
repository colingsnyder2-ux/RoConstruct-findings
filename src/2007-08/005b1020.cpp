// from server: 89% by colin
struct AutoJoint {
    char pad[0xf8];
    void* field_f8;
    void setJoint(void*);
};

void __stdcall sub_60a0a0(void*, int, void*);
void __stdcall sub_444710(void*, const char*);

void AutoJoint::setJoint(void* arg) {
    sub_60a0a0(field_f8, 1, arg);
    sub_444710(this, (const char*)0x8c5e90);
}
