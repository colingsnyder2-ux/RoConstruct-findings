// from server: 72% by king_originala
// roc 2008-06 00467b50  unit: DxUserInput  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00467b50
//
// 00467b50  83ec20               sub esp, 0x20
// 00467b53  56                   push esi
// 00467b54  57                   push edi
// 00467b55  8bf1                 mov esi, ecx
// 00467b57  8d7e34               lea edi, [esi + 0x34]
// 00467b5a  57                   push edi
// 00467b5b  ff15d4228000         call dword ptr [0x8022d4]
// 00467b61  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 00467b67  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00467b6a  8d442418             lea eax, [esp + 0x18]
// 00467b6e  50                   push eax
// 00467b6f  52                   push edx
// 00467b70  ff15842d8000         call dword ptr [0x802d84]
// 00467b76  8b442420             mov eax, dword ptr [esp + 0x20]
// 00467b7a  2b442418             sub eax, dword ptr [esp + 0x18]
// 00467b7e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00467b82  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00467b86  89442408             mov dword ptr [esp + 8], eax
// 00467b8a  db442408             fild dword ptr [esp + 8]
// 00467b8e  894c2408             mov dword ptr [esp + 8], ecx
// 00467b92  db442408             fild dword ptr [esp + 8]
// 00467b96  6a0a                 push 0xa
// 00467b98  d905ac9b8100         fld dword ptr [0x819bac]
// 00467b9e  83c660               add esi, 0x60
// 00467ba1  dcca                 fmul st(2), st(0)
// 00467ba3  8d542414             lea edx, [esp + 0x14]
// 00467ba7  d9ca                 fxch st(2)
// 00467ba9  56                   push esi
// 00467baa  52                   push edx
// 00467bab  d95c2414             fstp dword ptr [esp + 0x14]
// 00467baf  dec9                 fmulp st(1)
// 00467bb1  d95c2418             fstp dword ptr [esp + 0x18]
// 00467bb5  e826f7ffff           call 0x4672e0
// 00467bba  d900                 fld dword ptr [eax]
// 00467bbc  8b742438             mov esi, dword ptr [esp + 0x38]
// 00467bc0  d8442414             fadd dword ptr [esp + 0x14]
// 00467bc4  83c40c               add esp, 0xc
// 00467bc7  57                   push edi
// 00467bc8  d91e                 fstp dword ptr [esi]
// 00467bca  d94004               fld dword ptr [eax + 4]
// 00467bcd  d8442410             fadd dword ptr [esp + 0x10]
// 00467bd1  d95e04               fstp dword ptr [esi + 4]
// 00467bd4  ff15f4218000         call dword ptr [0x8021f4]
// 00467bda  5f                   pop edi
// 00467bdb  8bc6                 mov eax, esi
// 00467bdd  5e                   pop esi
// 00467bde  83c420               add esp, 0x20
// 00467be1  c20400               ret 4

struct Vec2 {
    float x;
    float y;
};

struct Rect {
    long left;
    long top;
    long right;
    long bottom;
};

struct Window {
    char padding[0x20];
    void* handle;
};

extern "C" void __stdcall EnterCriticalSection(void*);
extern "C" void __stdcall LeaveCriticalSection(void*);
extern "C" int __stdcall GetClientRect(void*, Rect*);
extern Vec2 __cdecl sample(void*, int);

struct DxUserInput {
    char padding0[0x34];
    char criticalSection[0x2c];
    char input[0x10c];
    Window* window;

    Vec2 f();
};

Vec2 DxUserInput::f()
{
    Vec2 result;
    EnterCriticalSection(criticalSection);

    Rect rect;
    GetClientRect(window->handle, &rect);

    Vec2 center;
    center.x = (rect.right - rect.left) * 0.5f;
    center.y = (rect.bottom - rect.top) * 0.5f;

    Vec2 offset = sample(input, 10);
    result.x = offset.x + center.x;
    result.y = offset.y + center.y;

    LeaveCriticalSection(criticalSection);
    return result;
}
