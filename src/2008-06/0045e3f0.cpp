// from server: 100% by EspClaude
// roc 2008-06 0045e3f0  unit: CRobloxWnd  size: 710 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045e3f0
//
// 0045e3f0  64a100000000         mov eax, dword ptr fs:[0]
// 0045e3f6  6aff                 push -1
// 0045e3f8  68192f7c00           push 0x7c2f19
// 0045e3fd  50                   push eax
// 0045e3fe  64892500000000       mov dword ptr fs:[0], esp
// 0045e405  83ec7c               sub esp, 0x7c
// 0045e408  55                   push ebp
// 0045e409  56                   push esi
// 0045e40a  57                   push edi
// 0045e40b  8bf1                 mov esi, ecx
// 0045e40d  e83e49fbff           call 0x412d50
// 0045e412  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 0045e418  83f802               cmp eax, 2
// 0045e41b  7507                 jne 0x45e424
// 0045e41d  c60564de960000       mov byte ptr [0x96de64], 0
// 0045e424  8d4c2458             lea ecx, [esp + 0x58]
// 0045e428  ff157c4e8000         call dword ptr [0x804e7c]
// 0045e42e  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0045e434  8b01                 mov eax, dword ptr [ecx]
// 0045e436  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0045e439  c784249000000000000000 mov dword ptr [esp + 0x90], 0
// 0045e444  ffd2                 call edx
// 0045e446  8bf8                 mov edi, eax
// 0045e448  81c708010000         add edi, 0x108
// 0045e44e  8bcf                 mov ecx, edi
// 0045e450  897c2410             mov dword ptr [esp + 0x10], edi
// 0045e454  e897380b00           call 0x511cf0
// 0045e459  8d4c2458             lea ecx, [esp + 0x58]
// 0045e45d  c684249000000001     mov byte ptr [esp + 0x90], 1
// 0045e465  ff15804e8000         call dword ptr [0x804e80]
// 0045e46b  8b4670               mov eax, dword ptr [esi + 0x70]
// 0045e46e  83ec08               sub esp, 8
// 0045e471  8bcc                 mov ecx, esp
// 0045e473  8901                 mov dword ptr [ecx], eax
// 0045e475  8b4674               mov eax, dword ptr [esi + 0x74]
// 0045e478  89642414             mov dword ptr [esp + 0x14], esp
// 0045e47c  894104               mov dword ptr [ecx + 4], eax
// 0045e47f  85c0                 test eax, eax
// 0045e481  740c                 je 0x45e48f
// 0045e483  83c004               add eax, 4
// 0045e486  b901000000           mov ecx, 1
// 0045e48b  f00fc108             lock xadd dword ptr [eax], ecx
// 0045e48f  8d4c241c             lea ecx, [esp + 0x1c]
// 0045e493  e8a836fbff           call 0x411b40
// 0045e498  8b4670               mov eax, dword ptr [esi + 0x70]
// 0045e49b  50                   push eax
// 0045e49c  c684249400000002     mov byte ptr [esp + 0x94], 2
// 0045e4a4  e8f7c70300           call 0x49aca0
// 0045e4a9  8be8                 mov ebp, eax
// 0045e4ab  83c404               add esp, 4
// 0045e4ae  85ed                 test ebp, ebp
// 0045e4b0  7507                 jne 0x45e4b9
// 0045e4b2  a2642f9600           mov byte ptr [0x962f64], al
// 0045e4b7  eb21                 jmp 0x45e4da
// 0045e4b9  e89248fbff           call 0x412d50
// 0045e4be  83b84001000002       cmp dword ptr [eax + 0x140], 2
// 0045e4c5  6800c64500           push 0x45c600
// 0045e4ca  0f95c2               setne dl
// 0045e4cd  8bcd                 mov ecx, ebp
// 0045e4cf  8815642f9600         mov byte ptr [0x962f64], dl
// 0045e4d5  e896dfffff           call 0x45c470
// 0045e4da  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 0045e4e0  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 0045e4e3  8d4658               lea eax, [esi + 0x58]
// 0045e4e6  50                   push eax
// 0045e4e7  52                   push edx
// 0045e4e8  e8c3bc1100           call 0x57a1b0
// 0045e4ed  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0045e4f3  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 0045e4f6  50                   push eax
// 0045e4f7  e8c4c11100           call 0x57a6c0
// 0045e4fc  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 0045e502  8b01                 mov eax, dword ptr [ecx]
// 0045e504  8b5008               mov edx, dword ptr [eax + 8]
// 0045e507  ffd2                 call edx
// 0045e509  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0045e50f  8b01                 mov eax, dword ptr [ecx]
// 0045e511  8b96b8000000         mov edx, dword ptr [esi + 0xb8]
// 0045e517  8b4004               mov eax, dword ptr [eax + 4]
// 0045e51a  52                   push edx
// 0045e51b  ffd0                 call eax
// 0045e51d  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 0045e523  8b11                 mov edx, dword ptr [ecx]
// 0045e525  8b420c               mov eax, dword ptr [edx + 0xc]
// 0045e528  ffd0                 call eax
// 0045e52a  8d4c2458             lea ecx, [esp + 0x58]
// 0045e52e  ff15844e8000         call dword ptr [0x804e84]
// 0045e534  8944240c             mov dword ptr [esp + 0xc], eax
// 0045e538  db44240c             fild dword ptr [esp + 0xc]
// 0045e53c  85c0                 test eax, eax
// 0045e53e  7d06                 jge 0x45e546
// 0045e540  d80578978100         fadd dword ptr [0x819778]
// 0045e546  8d4c2414             lea ecx, [esp + 0x14]
// 0045e54a  d95c240c             fstp dword ptr [esp + 0xc]
// 0045e54e  c684249000000001     mov byte ptr [esp + 0x90], 1
// 0045e556  e8658e1100           call 0x5773c0
// 0045e55b  8bcf                 mov ecx, edi
// 0045e55d  c684249000000000     mov byte ptr [esp + 0x90], 0
// 0045e565  e886380b00           call 0x511df0
// 0045e56a  803d642f960000       cmp byte ptr [0x962f64], 0
// 0045e571  7428                 je 0x45e59b
// 0045e573  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0045e579  83c118               add ecx, 0x18
// 0045e57c  e88f0c2c00           call 0x71f210
// 0045e581  85c0                 test eax, eax
// 0045e583  7416                 je 0x45e59b
// 0045e585  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0045e58b  83c118               add ecx, 0x18
// 0045e58e  6a00                 push 0
// 0045e590  e89ba02100           call 0x678630
// 0045e595  d944240c             fld dword ptr [esp + 0xc]
// 0045e599  d918                 fstp dword ptr [eax]
// 0045e59b  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0045e5a1  8b11                 mov edx, dword ptr [ecx]
// 0045e5a3  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0045e5a6  ffd0                 call eax
// 0045e5a8  8bf8                 mov edi, eax
// 0045e5aa  8bcf                 mov ecx, edi
// 0045e5ac  897c2410             mov dword ptr [esp + 0x10], edi
// 0045e5b0  e83b370b00           call 0x511cf0
// 0045e5b5  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0045e5b8  c684249000000003     mov byte ptr [esp + 0x90], 3
// 0045e5c0  85c9                 test ecx, ecx
// 0045e5c2  7409                 je 0x45e5cd
// 0045e5c4  8d4654               lea eax, [esi + 0x54]
// 0045e5c7  50                   push eax
// 0045e5c8  e813700f00           call 0x5555e0
// 0045e5cd  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 0045e5d0  85c9                 test ecx, ecx
// 0045e5d2  0f84a0000000         je 0x45e678
// 0045e5d8  e803f7ffff           call 0x45dce0
// 0045e5dd  85c0                 test eax, eax
// 0045e5df  0f8493000000         je 0x45e678
// 0045e5e5  8ba830010000         mov ebp, dword ptr [eax + 0x130]
// 0045e5eb  85ed                 test ebp, ebp
// 0045e5ed  0f8485000000         je 0x45e678
// 0045e5f3  8b5500               mov edx, dword ptr [ebp]
// 0045e5f6  8b4214               mov eax, dword ptr [edx + 0x14]
// 0045e5f9  6a67                 push 0x67
// 0045e5fb  8bcd                 mov ecx, ebp
// 0045e5fd  ffd0                 call eax
// 0045e5ff  84c0                 test al, al
// 0045e601  7475                 je 0x45e678
// 0045e603  8bcd                 mov ecx, ebp
// 0045e605  e8b6c8ffff           call 0x45aec0
// 0045e60a  84c0                 test al, al
// 0045e60c  746a                 je 0x45e678
// 0045e60e  83beb800000000       cmp dword ptr [esi + 0xb8], 0
// 0045e615  7461                 je 0x45e678
// 0045e617  8d4c243c             lea ecx, [esp + 0x3c]
// 0045e61b  6a00                 push 0
// 0045e61d  51                   push ecx
// 0045e61e  e8fdc8ffff           call 0x45af20
// 0045e623  68489e8100           push 0x819e48
// 0045e628  50                   push eax
// 0045e629  8d542430             lea edx, [esp + 0x30]
// 0045e62d  52                   push edx
// 0045e62e  c68424a400000004     mov byte ptr [esp + 0xa4], 4
// 0045e636  ff15e4238000         call dword ptr [0x8023e4]
// 0045e63c  83c414               add esp, 0x14
// 0045e63f  8d4c243c             lea ecx, [esp + 0x3c]
// 0045e643  c684249000000006     mov byte ptr [esp + 0x90], 6
// 0045e64b  ff1568248000         call dword ptr [0x802468]
// 0045e651  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0045e657  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0045e65a  8b11                 mov edx, dword ptr [ecx]
// 0045e65c  8b527c               mov edx, dword ptr [edx + 0x7c]
// 0045e65f  8d442420             lea eax, [esp + 0x20]
// 0045e663  50                   push eax
// 0045e664  ffd2                 call edx
// 0045e666  8d4c2420             lea ecx, [esp + 0x20]
// 0045e66a  c684249000000003     mov byte ptr [esp + 0x90], 3
// 0045e672  ff1568248000         call dword ptr [0x802468]
// 0045e678  8bcf                 mov ecx, edi
// 0045e67a  c684249000000000     mov byte ptr [esp + 0x90], 0
// 0045e682  e869370b00           call 0x511df0
// 0045e687  8d4c2458             lea ecx, [esp + 0x58]
// 0045e68b  c7842490000000ffffffff mov dword ptr [esp + 0x90], 0xffffffff
// 0045e696  ff15884e8000         call dword ptr [0x804e88]
// 0045e69c  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0045e6a3  5f                   pop edi
// 0045e6a4  5e                   pop esi
// 0045e6a5  64890d00000000       mov dword ptr fs:[0], ecx
// 0045e6ac  5d                   pop ebp
// 0045e6ad  81c488000000         add esp, 0x88
// 0045e6b3  c20400               ret 4

// from server: 70% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <intrin.h>
#include <string>

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

typedef std::string String;

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

namespace G3D {
class Stopwatch {
public:
    char data[0x58];
    void tick();
    void tock();
};
}
class RenderStats {
public:
    G3D::Stopwatch render2D;
    G3D::Stopwatch swapBuffer;
    G3D::Stopwatch sort;
    G3D::Stopwatch cpuRenderTotal;
};
namespace RBX {
class StopwatchScope {
    G3D::Stopwatch* stopwatch;
public:
    StopwatchScope(G3D::Stopwatch& s) : stopwatch(&s) { s.tick(); }
    ~StopwatchScope() { stopwatch->tock(); }
};
}

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
    virtual RenderStats& getRenderStats();
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
    FrameHistory& getHistory() { return history; }
};

class UserInputBase {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual bool keyDown(int key) const;
    bool ctrlKeyDown() const;
};
class ControllerService {
public:
    char pad[0x130];
    UserInputBase* hardwareDevice;
};
String getScreenshotFolder(int csidl = 0);
namespace RBX {
class Workspace {
public:
    void visitParts(void (*fn)(void*));
    static Workspace* findWorkspace(const void* context);
};
class DataModel;
template<class T> static T* findService(const DataModel* context);
class DataModel {
public:
    void render(Renderer* renderer, void* rect);
    void renderOverlay(Renderer* renderer);
    template<class T> T* find() const;
    class scoped_lock {
    public:
        scoped_lock(shared_ptr<const DataModel> dm);
        ~scoped_lock();
        int a, b, c;
    };
};
template<class T> static T* findService(const DataModel* context) { if (context) return context->find<T>(); return 0; }
class GameSettings {
public:
    char pad[0x13c];
    int graphicsMode;
    int frameRateMode;
    static GameSettings* singleton();
};
extern bool showBevels;
}

class IRunView;
class Notifier {
public:
    void notify(IRunView* view);
};

void configurePart(void* part);
extern bool g_showFrameRate;

class IRunView {
public:
    virtual void InvalidateRunView() = 0;
    virtual void AdjustThrottle(double) = 0;
};
struct CRobloxWndPad { virtual ~CRobloxWndPad(); char pad[0x50]; };
template<class T> class Ptr { public: T* p; T* get() const { return p; } T* operator->() const { return p; } };
class CRobloxWnd : public CRobloxWndPad, public IRunView {
public:
    void InvalidateRunView(); void AdjustThrottle(double);
    int rect[6];
    shared_ptr<RBX::DataModel> dataModel;
    Notifier* notifier;
    char pad2[0xb0 - 0x7c];
    View* view;
    Ptr<Renderer> renderer;
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
        RBX::StopwatchScope scope(view->getRenderStats().cpuRenderTotal);
        timer.reset();
        RBX::DataModel::scoped_lock dmLock(dataModel);
        RBX::Workspace* workspace = RBX::Workspace::findWorkspace(dataModel.get());
        if (!workspace)
            g_showFrameRate = false;
        else {
            g_showFrameRate = RBX::GameSettings::singleton()->frameRateMode != 2;
            workspace->visitParts(configurePart);
        }
        dataModel.get()->render(renderer.p, rect);
        dataModel.get()->renderOverlay(renderer.get());
        renderer->beginFrame();
        view->render(hud);
        renderer->endFrame();
        ms = (float)timer.getMilliseconds();
    }
    if (g_showFrameRate && hud->getHistory().size())
        hud->getHistory()[0] = ms;
    {
        RBX::StopwatchScope scope(view->getRenderStats().render2D);
        if (notifier)
            notifier->notify(this);
        ControllerService* controller = RBX::findService<ControllerService>(dataModel.get());
        if (controller) {
            UserInputBase* input = controller->hardwareDevice;
            if (input && input->keyDown(0x67) && input->ctrlKeyDown() && hud)
            {
                String path = getScreenshotFolder() + "\\Roblox.jpg";
                hud->label->setText(path);
            }
        }
    }
}
