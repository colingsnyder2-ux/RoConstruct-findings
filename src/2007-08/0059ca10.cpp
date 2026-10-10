// from server: 64% by colin
struct RBX_UserInputBase
{
    char pad[0x138];
    void* field_138;
    RBX_UserInputBase* copyFrom(RBX_UserInputBase* other);
};

extern "C" void* __stdcall sub_77e69c(void*, const void*);

RBX_UserInputBase* RBX_UserInputBase::copyFrom(RBX_UserInputBase* other)
{
    void* tmp = 0;
    sub_77e69c(&this->field_138, &other->field_138);
    *(void**)((char*)other + 0x1c) = *(void**)((char*)&this->field_138 + 0x1c);
    return other;
}
