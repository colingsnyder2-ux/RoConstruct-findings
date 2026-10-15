// from server: 94% by colin
// roc 2008-06 0044f700  unit: ReportAbuseVerb  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044f700
//
// 0044f700  e821122500           call 0x6a0926
// 0044f705  8b4004               mov eax, dword ptr [eax + 4]
// 0044f708  8b4020               mov eax, dword ptr [eax + 0x20]
// 0044f70b  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0044f70e  6a00                 push 0
// 0044f710  6800810000           push 0x8100
// 0044f715  6811010000           push 0x111
// 0044f71a  51                   push ecx
// 0044f71b  ff150c2e8000         call dword ptr [0x802e0c]
// 0044f721  c20400               ret 4

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
