// from server: 51% by tester
struct std_string {
    void construct(const std_string&);
};

extern "C" void __stdcall sub_5744a0(void*, const std_string*);
extern "C" void __stdcall sub_80245c();

struct EquationDisplay {
    char pad[0x188];
    std_string equation;
    EquationDisplay(const std_string& title, const std_string& equation);
};

EquationDisplay::EquationDisplay(const std_string& title, const std_string& equation)
{
    sub_5744a0(this, &title);
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
    sub_80245c();
    this->equation.construct(equation);
}
