// from server: 90% by king_originala
struct Text {
    char* data;
    Text();
    ~Text();
    void __cdecl Format(const char* format, ...);
    operator const char*() const;
};

struct Frame {
    char reserved[32];
    void* window;
};

struct Application;

struct ApplicationTable {
    void* reserved[31];
    Frame* (__thiscall* GetMainFrame)(Application*);
};

struct Application {
    ApplicationTable* table;
};

extern Application* __cdecl GetApplication();

extern "C" void* __stdcall ShellExecuteA(
    void* window,
    const char* operation,
    const char* file,
    const char* parameters,
    const char* directory,
    int show
);

void OpenWiki()
{
    Text parameters;
    parameters.Format("url.dll,FileProtocolHandler %s",
                      "http://wiki.roblox.com");

    Application* application = GetApplication();
    Frame* frame = application
        ? application->table->GetMainFrame(application)
        : 0;

    ShellExecuteA(frame->window, "open", "rundll32.exe",
                  parameters, 0, 10);
}
