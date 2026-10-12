// from server: 89% by king_originala
struct CMainFrame;

struct Settings
{
    void set(const char*, const char*, int);
};

struct Application
{
    unsigned int reserved;
    Settings* settings;
};

extern Application* __cdecl getApplication();

struct FrameBinding
{
    char storage[0x178];
    void bind(CMainFrame*, const char*, int);
};

struct Finalizer
{
    void finish();
};

struct CMainFrame
{
    char reserved0[0xf8];
    bool fullscreen;
    bool alternateFullscreen;
    char reserved1[0x0a];
    bool loadEnabled;
    char reserved2[7];
    FrameBinding binding;
    Finalizer finalizer;

    void update();
    void updateFullscreen();
    int Load(int);
    void updateFrame();
};

void CMainFrame::update()
{
    int enabled = (fullscreen || alternateFullscreen) ? 1 : 0;
    Application* application = getApplication();
    application->settings->set("Settings", "fullscreen", enabled);

    if (fullscreen)
        updateFullscreen();
    else
        binding.bind(this, "CMainFrameV2", 0);

    if (loadEnabled)
        Load(0);

    updateFrame();
    finalizer.finish();
}
