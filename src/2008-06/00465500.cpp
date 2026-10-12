// from server: 83% by king_originala
extern "C" int (__stdcall *PostMessageA)(void*, unsigned int, unsigned int, long);

struct EmptyPair {
    void* first;
    void* second;

    EmptyPair() : first(0), second(0) {}
    EmptyPair(const EmptyPair&);
    ~EmptyPair();
};

struct EditorBase {
    void reset(EmptyPair);
};

struct WindowData {
    char padding[0x20];
    void* handle;
};

struct CScriptEditor {
    char padding[0x54];
    WindowData* window;

    void close(int, int, int, int);
};

void CScriptEditor::close(int, int, int, int canceled)
{
    if (canceled == 0) {
        reinterpret_cast<EditorBase*>(
            reinterpret_cast<char*>(this) - 0xec)->reset(EmptyPair());
        PostMessageA(window->handle, 0x10, 0, 0);
    }
}
