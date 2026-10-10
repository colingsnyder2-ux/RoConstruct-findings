// from server: 84% by colin
struct VVelocityMotor {
    unsigned char pad[0xf8];
    void* field_f8;
    void setDesiredAngle(float angle);
};

extern "C" void __stdcall sub_5B42A0(float angle);
extern "C" void __stdcall sub_444710(void* a, const char* b);

void VVelocityMotor::setDesiredAngle(float angle)
{
    float current = *(float*)((char*)field_f8 + 0x88);
    if (current != angle)
    {
        sub_5B42A0(angle);
        sub_444710(this, (const char*)0x8c6dc4);
    }
}
