// from server: 70% by atomic.potato
struct DxUserInput
{
    char pad0[40];

    void Update();
};

void DxUserInput::Update()
{
    DxUserInput* p = this - 1;
    p->Update();
    p->Update();
}
