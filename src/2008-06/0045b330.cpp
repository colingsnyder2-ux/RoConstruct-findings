// from server: 100% by king_originala
// roc 2008-06 0045b330  unit: CRobloxWnd  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045b330
//
// 0045b330  56                   push esi
// 0045b331  6a00                 push 0
// 0045b333  6a00                 push 0
// 0045b335  68007f0000           push 0x7f00
// 0045b33a  6a00                 push 0
// 0045b33c  8bf1                 mov esi, ecx
// 0045b33e  ff15d02d8000         call dword ptr [0x802dd0]
// 0045b344  50                   push eax
// 0045b345  6a2b                 push 0x2b
// 0045b347  e8405c2400           call 0x6a0f8c
// 0045b34c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045b350  81492000000006       or dword ptr [ecx + 0x20], 0x6000000
// 0045b357  894128               mov dword ptr [ecx + 0x28], eax
// 0045b35a  83791464             cmp dword ptr [ecx + 0x14], 0x64
// 0045b35e  8d4114               lea eax, [ecx + 0x14]
// 0045b361  c744240864000000     mov dword ptr [esp + 8], 0x64
// 0045b369  8d542408             lea edx, [esp + 8]
// 0045b36d  7c02                 jl 0x45b371
// 0045b36f  8bd0                 mov edx, eax
// 0045b371  8b12                 mov edx, dword ptr [edx]
// 0045b373  8910                 mov dword ptr [eax], edx
// 0045b375  83791064             cmp dword ptr [ecx + 0x10], 0x64
// 0045b379  8d4110               lea eax, [ecx + 0x10]
// 0045b37c  c744240864000000     mov dword ptr [esp + 8], 0x64
// 0045b384  8d542408             lea edx, [esp + 8]
// 0045b388  7c02                 jl 0x45b38c
// 0045b38a  8bd0                 mov edx, eax
// 0045b38c  8b12                 mov edx, dword ptr [edx]
// 0045b38e  51                   push ecx
// 0045b38f  8bce                 mov ecx, esi
// 0045b391  8910                 mov dword ptr [eax], edx
// 0045b393  e872532400           call 0x6a070a
// 0045b398  5e                   pop esi
// 0045b399  c20400               ret 4

extern "C" void* (__stdcall *LoadCursorA)(void*, const char*);
extern const char* __stdcall RegisterWindowClass(unsigned int, void*, void*, void*);

struct CreateStruct {
    void* createParams;
    void* instance;
    void* menu;
    void* parent;
    int cy;
    int cx;
    int y;
    int x;
    long style;
    const char* name;
    const char* className;
    unsigned long extendedStyle;
};

template<class T>
inline const T& maximum(const T& a, const T& b)
{
    return a < b ? b : a;
}

struct WindowBase {
    int PreCreateWindow(CreateStruct*);
};

struct CRobloxWnd : WindowBase {
    int PreCreateWindow(CreateStruct*);
};

int CRobloxWnd::PreCreateWindow(CreateStruct* cs)
{
    cs->className = RegisterWindowClass(
        0x2b, LoadCursorA(0, (const char*)0x7f00), 0, 0);
    cs->style |= 0x06000000;
    cs->cx = maximum(cs->cx, 100);
    cs->cy = maximum(cs->cy, 100);
    return WindowBase::PreCreateWindow(cs);
}
