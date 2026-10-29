// roc 2011-06 0048b2d0  unit: Scintilla::CScintillaView  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b2d0
//
// 0048b2d0  8b442404             mov eax, dword ptr [esp + 4]
// 0048b2d4  53                   push ebx
// 0048b2d5  55                   push ebp
// 0048b2d6  56                   push esi
// 0048b2d7  57                   push edi
// 0048b2d8  8bf1                 mov esi, ecx
// 0048b2da  50                   push eax
// 0048b2db  b95c8cc100           mov ecx, 0xc18c5c
// 0048b2e0  ff15a42da400         call dword ptr [0xa42da4]
// 0048b2e6  8b442424             mov eax, dword ptr [esp + 0x24]
// 0048b2ea  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0048b2ee  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0048b2f2  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0048b2f6  50                   push eax
// 0048b2f7  53                   push ebx
// 0048b2f8  893d648cc100         mov dword ptr [0xc18c64], edi
// 0048b2fe  891d6c8cc100         mov dword ptr [0xc18c6c], ebx
// 0048b304  892d688cc100         mov dword ptr [0xc18c68], ebp
// 0048b30a  a3708cc100           mov dword ptr [0xc18c70], eax
// 0048b30f  8b0e                 mov ecx, dword ptr [esi]
// 0048b311  57                   push edi
// 0048b312  894c2420             mov dword ptr [esp + 0x20], ecx
// 0048b316  55                   push ebp
// 0048b317  b95c8cc100           mov ecx, 0xc18c5c
// 0048b31c  ff15c82da400         call dword ptr [0xa42dc8]
// 0048b322  8b542424             mov edx, dword ptr [esp + 0x24]
// 0048b326  50                   push eax
// 0048b327  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 0048b32d  8bce                 mov ecx, esi
// 0048b32f  ffd0                 call eax
// 0048b331  85c0                 test eax, eax
// 0048b333  7530                 jne 0x48b365
// 0048b335  8b542424             mov edx, dword ptr [esp + 0x24]
// 0048b339  8b0e                 mov ecx, dword ptr [esi]
// 0048b33b  50                   push eax
// 0048b33c  52                   push edx
// 0048b33d  53                   push ebx
// 0048b33e  57                   push edi
// 0048b33f  894c2424             mov dword ptr [esp + 0x24], ecx
// 0048b343  55                   push ebp
// 0048b344  b95c8cc100           mov ecx, 0xc18c5c
// 0048b349  ff15c82da400         call dword ptr [0xa42dc8]
// 0048b34f  50                   push eax
// 0048b350  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0048b354  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 0048b35a  8bce                 mov ecx, esi
// 0048b35c  ffd2                 call edx
// 0048b35e  5f                   pop edi
// 0048b35f  5e                   pop esi
// 0048b360  5d                   pop ebp
// 0048b361  5b                   pop ebx
// 0048b362  c21400               ret 0x14
// 0048b365  8b06                 mov eax, dword ptr [esi]
// 0048b367  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 0048b36d  8bce                 mov ecx, esi
// 0048b36f  ffd2                 call edx
// 0048b371  5f                   pop edi
// 0048b372  5e                   pop esi
// 0048b373  5d                   pop ebp
// 0048b374  5b                   pop ebx
// 0048b375  c21400               ret 0x14
// copied from an identical function in another client (function ?f@S@ns_ROCX000001@@QAEHPBXHHHH@Z)

namespace ns_ROCX000001 {
struct S;

struct Font {
    unsigned long data[2];
};

struct State {
    Font font;
    int third;
    int second;
    int fourth;
    int fifth;
};

extern State state;
extern int (__thiscall *CreateFont)(Font *, const void *);
extern void *(__thiscall *GetFontHandle)(Font *);

struct VTable {
    void *reserved[106];
    int (__thiscall *fallback)(S *, void *, int, int, int, int, int);
    int (__thiscall *prepare)(S *, void *, int, int, int, int);
    void *remaining[6];
    int (__thiscall *finish)(S *);
};

struct S {
    VTable *vtable;
    int f(const void *, int, int, int, int);
};

int S::f(const void *description, int second, int third, int fourth, int fifth)
{
    CreateFont(&state.font, description);
    state.third = third;
    state.fourth = fourth;
    state.second = second;
    state.fifth = fifth;

    if (!vtable->prepare(this, GetFontHandle(&state.font),
                         second, third, fourth, fifth))
        return vtable->fallback(this, GetFontHandle(&state.font),
                                second, third, fourth, fifth, 0);

    return vtable->finish(this);
}
}
