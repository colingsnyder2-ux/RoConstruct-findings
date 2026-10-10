// from server: 85% by atomic.potato
extern "C" void __fastcall ContinueFunction(void*);

struct CCommandBarCmdUI
{
    void Update();
    char padding[40];
    void* field28;
};

void CCommandBarCmdUI::Update()
{
    if (field28 != 0)
        ContinueFunction(field28);
}
