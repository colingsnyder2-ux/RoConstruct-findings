// from server: 64% by colin
struct Mouse {
    Mouse(int);
};

struct ScriptMouseCommand {
    void* m_mouse;
    ScriptMouseCommand(int workspace);
};

ScriptMouseCommand::ScriptMouseCommand(int workspace)
{
    Mouse* m = new Mouse(0xcc);
    m_mouse = m;
    if (m)
        m->Mouse::Mouse(workspace);
}
