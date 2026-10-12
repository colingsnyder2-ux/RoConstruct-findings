// from server: 52% by king_originala
struct State {
    void set(int);
};

struct Handle {
    State* get(int);
};

struct RunCommand {
    char padding[0x0C];
    void* volatile object;
    Handle handle;

    void prepare();
    void execute(int);
};

void RunCommand::execute(int)
{
    (void)object;
    prepare();
    handle.get(1)->set(1);
}
