// from server: 26% by atomic.potato
struct CCommandBarCmdUI
{
    int Run();
    void *field28;
};

int CCommandBarCmdUI::Run()
{
    if (field28)
        return ((CCommandBarCmdUI *)field28)->Run();
    return 0;
}
