// from server: 100% by king_originala
// roc 2008-06 0045e910  unit: CRobloxWnd  size: 394 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045e910
//
// 0045e910  6aff                 push -1
// 0045e912  68602f7c00           push 0x7c2f60
// 0045e917  64a100000000         mov eax, dword ptr fs:[0]
// 0045e91d  50                   push eax
// 0045e91e  64892500000000       mov dword ptr fs:[0], esp
// 0045e925  83ec70               sub esp, 0x70
// 0045e928  53                   push ebx
// 0045e929  56                   push esi
// 0045e92a  8bf1                 mov esi, ecx
// 0045e92c  33db                 xor ebx, ebx
// 0045e92e  56                   push esi
// 0045e92f  8d4c2428             lea ecx, [esp + 0x28]
// 0045e933  885c240f             mov byte ptr [esp + 0xf], bl
// 0045e937  e808262400           call 0x6a0f44
// 0045e93c  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 0045e943  399ea4000000         cmp dword ptr [esi + 0xa4], ebx
// 0045e949  0f8422010000         je 0x45ea71
// 0045e94f  395c2428             cmp dword ptr [esp + 0x28], ebx
// 0045e953  0f8418010000         je 0x45ea71
// 0045e959  395e70               cmp dword ptr [esi + 0x70], ebx
// 0045e95c  0f840f010000         je 0x45ea71
// 0045e962  8d442440             lea eax, [esp + 0x40]
// 0045e966  50                   push eax
// 0045e967  ff156c2d8000         call dword ptr [0x802d6c]
// 0045e96d  85c0                 test eax, eax
// 0045e96f  0f85fc000000         jne 0x45ea71
// 0045e975  8b8ea4000000         mov ecx, dword ptr [esi + 0xa4]
// 0045e97b  e8d0c3ffff           call 0x45ad50
// 0045e980  399eac000000         cmp dword ptr [esi + 0xac], ebx
// 0045e986  7530                 jne 0x45e9b8
// 0045e988  8b5620               mov edx, dword ptr [esi + 0x20]
// 0045e98b  8d4c240c             lea ecx, [esp + 0xc]
// 0045e98f  51                   push ecx
// 0045e990  52                   push edx
// 0045e991  ff15842d8000         call dword ptr [0x802d84]
// 0045e997  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0045e99b  6800800000           push 0x8000
// 0045e9a0  8d442410             lea eax, [esp + 0x10]
// 0045e9a4  50                   push eax
// 0045e9a5  6aff                 push -1
// 0045e9a7  68549e8100           push 0x819e54
// 0045e9ac  51                   push ecx
// 0045e9ad  ff15182d8000         call dword ptr [0x802d18]
// 0045e9b3  e9b9000000           jmp 0x45ea71
// 0045e9b8  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 0045e9be  6a01                 push 1
// 0045e9c0  50                   push eax
// 0045e9c1  8d4c2414             lea ecx, [esp + 0x14]
// 0045e9c5  e8b6551600           call 0x5c3f80
// 0045e9ca  8bce                 mov ecx, esi
// 0045e9cc  c684248000000001     mov byte ptr [esp + 0x80], 1
// 0045e9d4  e8d7d4ffff           call 0x45beb0
// 0045e9d9  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 0045e9df  e85ce40100           call 0x47ce40
// 0045e9e4  6a01                 push 1
// 0045e9e6  8bce                 mov ecx, esi
// 0045e9e8  e8d3fcffff           call 0x45e6c0
// 0045e9ed  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 0045e9f3  c644240b01           mov byte ptr [esp + 0xb], 1
// 0045e9f8  e8a3e40100           call 0x47cea0
// 0045e9fd  c6868a00000001       mov byte ptr [esi + 0x8a], 1
// 0045ea04  389e8b000000         cmp byte ptr [esi + 0x8b], bl
// 0045ea0a  752e                 jne 0x45ea3a
// 0045ea0c  e83f43fbff           call 0x412d50
// 0045ea11  3bc3                 cmp eax, ebx
// 0045ea13  7405                 je 0x45ea1a
// 0045ea15  83c014               add eax, 0x14
// 0045ea18  eb02                 jmp 0x45ea1c
// 0045ea1a  33c0                 xor eax, eax
// 0045ea1c  8b0d10d59600         mov ecx, dword ptr [0x96d510]
// 0045ea22  8b11                 mov edx, dword ptr [ecx]
// 0045ea24  50                   push eax
// 0045ea25  8b4208               mov eax, dword ptr [edx + 8]
// 0045ea28  ffd0                 call eax
// 0045ea2a  84c0                 test al, al
// 0045ea2c  740c                 je 0x45ea3a
// 0045ea2e  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 0045ea31  e8ea6d1100           call 0x575820
// 0045ea36  84c0                 test al, al
// 0045ea38  750d                 jne 0x45ea47
// 0045ea3a  8bce                 mov ecx, esi
// 0045ea3c  e86fd4ffff           call 0x45beb0
// 0045ea41  889e8b000000         mov byte ptr [esi + 0x8b], bl
// 0045ea47  389e80000000         cmp byte ptr [esi + 0x80], bl
// 0045ea4d  7412                 je 0x45ea61
// 0045ea4f  889e80000000         mov byte ptr [esi + 0x80], bl
// 0045ea55  e856a20e00           call 0x548cb0
// 0045ea5a  c605a138970001       mov byte ptr [0x9738a1], 1
// 0045ea61  8d4c240c             lea ecx, [esp + 0xc]
// 0045ea65  889c2480000000       mov byte ptr [esp + 0x80], bl
// 0045ea6c  e85f581600           call 0x5c42d0
// 0045ea71  8d4c2424             lea ecx, [esp + 0x24]
// 0045ea75  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 0045ea80  e8b9242400           call 0x6a0f3e
// 0045ea85  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0045ea89  8a44240b             mov al, byte ptr [esp + 0xb]
// 0045ea8d  5e                   pop esi
// 0045ea8e  5b                   pop ebx
// 0045ea8f  64890d00000000       mov dword ptr fs:[0], ecx
// 0045ea96  83c47c               add esp, 0x7c
// 0045ea99  c3                   ret 

struct Rect {
    long left, top, right, bottom;
};

extern "C" {
    extern int (__stdcall *IsRectEmpty)(const Rect *);
    extern int (__stdcall *GetClientRect)(void *, Rect *);
    extern int (__stdcall *DrawTextA)(void *, const char *, int, Rect *, unsigned int);
}

struct Window;

struct PaintContext {
    unsigned char prefix[4];
    void *dc;
    unsigned char middle[20];
    Rect rect;
    unsigned char tail[40];

    PaintContext(Window *);
    ~PaintContext();
};

struct Guard {
    unsigned char storage[24];

    Guard(void *, int);
    ~Guard();
};

struct Image {
    void makeCurrent();
};

struct Renderer {
    void prepare();
    void render();
};

struct View {
    bool ready();
};

struct Service {
    virtual void slot0();
    virtual void slot1();
    virtual bool enabled(void *);
};

extern Service *service;
extern unsigned char changed;
extern void *getContext();
extern void notify();

struct Window {
    unsigned char pad0[0x20];
    void *handle;
    unsigned char pad24[0x4c];
    View *view;
    unsigned char pad74[0x0c];
    bool pending;
    unsigned char pad81[9];
    bool active;
    bool refresh;
    unsigned char pad8c[0x0c];
    void *lock;
    unsigned char pad9c[8];
    Image *image;
    unsigned char pada8[4];
    Renderer *renderer;

    bool draw();
    void update();
    void setMode(bool);
};

bool Window::draw()
{
    bool result = false;
    PaintContext paint(this);

    if (image && paint.dc && view && !IsRectEmpty(&paint.rect)) {
        image->makeCurrent();

        if (!renderer) {
            Rect rect;
            GetClientRect(handle, &rect);
            DrawTextA(paint.dc,
                      "Roblox can't run with your graphics driver",
                      -1, &rect, 0x8000);
        } else {
            void *guardLock = lock;
            Guard guard(guardLock, 1);
            update();
            renderer->prepare();
            setMode(true);
            result = true;
            renderer->render();
            active = true;

            if (!refresh) {
                void *context = getContext();
                void *argument = context
                    ? static_cast<unsigned char *>(context) + 0x14
                    : 0;
                if (!service->enabled(argument) || !view->ready()) {
                    update();
                    refresh = false;
                }
            } else {
                update();
                refresh = false;
            }

            if (pending) {
                pending = false;
                notify();
                changed = 1;
            }
        }
    }

    return result;
}
