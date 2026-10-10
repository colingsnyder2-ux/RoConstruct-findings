// from server: 51% by atomic.potato
extern "C" void basic_string_ctor(void *, const char *);

struct LaserTool {
    char pad[4];
    void *text;
    LaserTool();
};

LaserTool::LaserTool() {
    basic_string_ctor(text, "GunCursor");
}
