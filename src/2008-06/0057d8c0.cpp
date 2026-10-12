// from server: 84% by king_originala
struct Selection {
    void apply();
};

struct Context {
    char padding[0x204];
    Selection* selection;
};

struct Command {
    char padding[0x0c];
    Context* context;

    void prepare();
    Context* execute(int);
};

Context* Command::execute(int)
{
    Context* previous = context;
    prepare();
    context->selection->apply();
    return previous;
}
