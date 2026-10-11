// from server: 50% by colin
struct EquationDisplay {
    char pad[0x188];
    void* field188;
    EquationDisplay(const EquationDisplay& other, int a, int b);
};

extern "C" void __stdcall sub_5744a0(void*, const void*);
extern "C" void __stdcall sub_80245c(void*);

EquationDisplay::EquationDisplay(const EquationDisplay& other, int a, int b)
{
    sub_5744a0(&field188, &other.field188);
    *(void**)this = (void*)0x84becc;
    *(void**)((char*)this + 0x10) = (void*)0x84bebc;
    *(void**)((char*)this + 0x14) = (void*)0x84beb4;
    *(void**)((char*)this + 0x20) = (void*)0x84beac;
    *(void**)((char*)this + 0x24) = (void*)0x84be9c;
    *(void**)((char*)this + 0x44) = (void*)0x84be8c;
    *(void**)((char*)this + 0x64) = (void*)0x84be7c;
    *(void**)((char*)this + 0x84) = (void*)0x84be6c;
    *(void**)((char*)this + 0xa4) = (void*)0x84be5c;
    *(void**)((char*)this + 0xc4) = (void*)0x84be4c;
    *(void**)((char*)this + 0x130) = (void*)0x84be44;
    sub_80245c((void*)0x80245c);
}
