// from server: 89% by colin
struct VHumanoidBoundFuncDesc {
    void setFlag(bool value);
    unsigned char flags;
};

void VHumanoidBoundFuncDesc::setFlag(bool value)
{
    unsigned char oldFlags = *(unsigned char*)((char*)this + 0x164);
    unsigned char current = (oldFlags >> 3) & 1;
    if (current != (unsigned char)value) {
        unsigned char newFlags = oldFlags ^ (((unsigned char)value << 3) & 8);
        *(unsigned char*)((char*)this + 0x164) = newFlags;
        extern void __stdcall func_00444710(unsigned int);
        func_00444710(0x8c5808);
    }
}
