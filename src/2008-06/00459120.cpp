// from server: 100% by colin
// roc 2008-06 00459120  unit: ToggleFullscreenVerb  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00459120
//
// 00459120  e801782400           call 0x6a0926
// 00459125  8b4004               mov eax, dword ptr [eax + 4]
// 00459128  8b4020               mov eax, dword ptr [eax + 0x20]
// 0045912b  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0045912e  6a00                 push 0
// 00459130  68f4800000           push 0x80f4
// 00459135  6811010000           push 0x111
// 0045913a  51                   push ecx
// 0045913b  ff150c2e8000         call dword ptr [0x802e0c]
// 00459141  c20400               ret 4

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
    return PostMessageA(w->h, 0x111, 0x80f4, 0);
}
