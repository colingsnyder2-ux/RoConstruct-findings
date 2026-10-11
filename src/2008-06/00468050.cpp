// from server: 32% by colin
struct DxUserInput
{
    char pad0[0x34];
    int lock;
    char pad1[0x191 - 0x38];
    unsigned char flag;

    void Method(unsigned char arg);
};

extern "C" void __stdcall EnterCriticalSection(int*);
extern "C" void __stdcall LeaveCriticalSection(int*);

void DxUserInput_sub(int*);

void DxUserInput::Method(unsigned char arg)
{
    EnterCriticalSection(&this->lock);
    this->flag = arg;
    DxUserInput_sub((int*)this);
    LeaveCriticalSection(&this->lock);
}
