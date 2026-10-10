// from server: 33% by atomic.potato
struct ExitCommand
{
    int *command;

    int Get();
};

int ExitCommand::Get()
{
    int *p = command;
    if (p == 0)
        return 0;
    return *p;
}
