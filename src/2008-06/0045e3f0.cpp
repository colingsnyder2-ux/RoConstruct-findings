// from server: 70% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <intrin.h>

class sp_counted_base {
public:
    virtual ~sp_counted_base();
    virtual void dispose() = 0;
    virtual void destroy();
    void add_ref_copy() { _InterlockedIncrement(&use_count_); }
    void release()
    {
        if (_InterlockedDecrement(&use_count_) == 0)
        {
            dispose();
            weak_release();
        }
    }
    void weak_release()
    {
        if (_InterlockedDecrement(&weak_count_) == 0)
            destroy();
    }
    long use_count_;
    long weak_count_;
};

class shared_count {
public:
    sp_counted_base* pi_;
    shared_count(const shared_count& r) : pi_(r.pi_) { if (pi_ != 0) pi_->add_ref_copy(); }
    ~shared_count() { if (pi_ != 0) pi_->release(); }
};

template<class T> class shared_ptr {
public:
    typedef T* shared_ptr::*unspecified_bool_type;
    T* px;
    shared_count pn;
    template<class Y> shared_ptr(shared_ptr<Y> const& r) : px(r.px), pn(r.pn) {}
    T* operator->() const { return px; }
    T* get() const { return px; }
    operator unspecified_bool_type() const { return px == 0 ? 0 : &shared_ptr::px; }
};

class String {
public:
    __declspec(dllimport) ~String();
    char storage[0x1c];
};
__declspec(dllimport) String operator+(const String& left, const char* right);

namespace Ogre {
class __declspec(dllimport) Timer {
public:
    Timer();
    ~Timer();
    void reset();
    unsigned long getMilliseconds();
    char storage[0x30];
};
}

class Mutex {
public:
    int data;
    void lock();
    void unlock();
};

class Scene : public Mutex {
public:
    char pad[0x108 - sizeof(Mutex)];
    Mutex renderMutex;
};

class ScopedLock {
public:
    Mutex* m;
    ScopedLock(Mutex& mutex) : m(&mutex) { m->lock(); }
    ~ScopedLock() { m->unlock(); }
};

class Renderer {
public:
    virtual void v0();
    virtual void v1();
    virtual void beginFrame();
    virtual void endFrame();
};

class HudTarget;
class View {
public:
    virtual void v0();
    virtual void render(HudTarget* hud);
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual Scene* getScene();
};

class TextLabel {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void setText(const String& text);
};

class FrameHistory {
public:
    unsigned int size() const;
    float& operator[](int i);
};

class HudTarget {
public:
    char pad[0xc];
    TextLabel* label;
    char pad2[0x18 - 0x10];
    FrameHistory history;
};

class Player {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual bool isA(int type);
    bool isLoaded();
    static String getStatusText(Player* player = 0);
};

class Players {
public:
    char pad[0x130];
    Player* localPlayer;
};

namespace RBX {
class Workspace {
public:
    void visitParts(void (*fn)(void*));
    static Workspace* findWorkspace(const void* context);
};
class DataModel {
public:
    void render(Renderer* renderer, void* rect);
    void renderOverlay(Renderer* renderer);
    Players* findPlayers();
    class scoped_lock {
    public:
        scoped_lock(shared_ptr<const DataModel> dm);
        ~scoped_lock();
        int a, b, c;
    };
};
class GameSettings {
public:
    char pad[0x13c];
    int graphicsMode;
    int frameRateMode;
    static GameSettings* singleton();
};
extern bool showBevels;
}

class Notifier {
public:
    void notify(void* rect);
};

void configurePart(void* part);
extern bool g_showFrameRate;

class CRobloxWnd {
public:
    char pad[0x54];
    int m54;
    int rect[6];
    shared_ptr<RBX::DataModel> dataModel;
    Notifier* notifier;
    char pad2[0xb0 - 0x7c];
    View* view;
    Renderer* renderer;
    HudTarget* hud;
    void doRender(int unused);
};

void CRobloxWnd::doRender(int unused)
{
    int mode = RBX::GameSettings::singleton()->graphicsMode;
    if (mode == 2)
        RBX::showBevels = false;
    Ogre::Timer timer;
    float ms;
    {
        ScopedLock lock(view->getScene()->renderMutex);
        timer.reset();
        RBX::DataModel::scoped_lock dmLock(dataModel);
        RBX::Workspace* workspace = RBX::Workspace::findWorkspace(dataModel.get());
        g_showFrameRate = workspace && RBX::GameSettings::singleton()->frameRateMode != 2;
        if (workspace)
            workspace->visitParts(configurePart);
        dataModel.get()->render(renderer, rect);
        dataModel.get()->renderOverlay(renderer);
        renderer->beginFrame();
        view->render(hud);
        renderer->endFrame();
        ms = (float)timer.getMilliseconds();
    }
    if (g_showFrameRate && hud->history.size())
        hud->history[0] = ms;
    {
        ScopedLock lock(*view->getScene());
        if (notifier)
            notifier->notify(&m54);
        if (dataModel.get())
        {
            Players* players = dataModel.get()->findPlayers();
            if (players)
            {
                Player* player = players->localPlayer;
                if (player && player->isA(0x67) && player->isLoaded() && hud)
                {
                    String text = Player::getStatusText() + "\\Roblox.jpg";
                    hud->label->setText(text);
                }
            }
        }
    }
}
