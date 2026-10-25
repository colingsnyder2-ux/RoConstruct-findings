// from server: 100% by king_originala
// roc 2008-06 004590d0  unit: LockPlayModeVerb  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004590d0
//
// 004590d0  e851782400           call 0x6a0926
// 004590d5  8b4004               mov eax, dword ptr [eax + 4]
// 004590d8  8b4020               mov eax, dword ptr [eax + 0x20]
// 004590db  8b4820               mov ecx, dword ptr [eax + 0x20]
// 004590de  6a00                 push 0
// 004590e0  68ff800000           push 0x80ff
// 004590e5  6811010000           push 0x111
// 004590ea  51                   push ecx
// 004590eb  ff150c2e8000         call dword ptr [0x802e0c]
// 004590f1  c20400               ret 4

typedef void* HWND;
typedef int BOOL;

struct W { char p[0x20]; HWND h; };
struct V { char p[0x20]; W* w; };
struct U { char p[4]; V* v; };
extern "C" U* __cdecl sub_6A0926();
extern "C" __declspec(dllimport) BOOL __stdcall PostMessageA(HWND, unsigned int, unsigned int, long);

struct ToggleFullscreenVerb
{
    BOOL f(void*);
};

BOOL ToggleFullscreenVerb::f(void*)
{
    W* w = sub_6A0926()->v->w;
    return PostMessageA(w->h, 0x111, 0x80ff, 0);
}
