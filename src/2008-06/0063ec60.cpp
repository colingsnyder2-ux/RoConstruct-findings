// from server: 92% by king_originala
struct String {
    char storage[28];

    String(const char*);
    String(const String&);
    ~String();
};

struct ResizeTool {
    char padding[0x28];
    bool resizing;

    String defaultCursor();
    String cursor();
};

String ResizeTool::cursor()
{
    return resizing ? String("ResizeCursor") : defaultCursor();
}
