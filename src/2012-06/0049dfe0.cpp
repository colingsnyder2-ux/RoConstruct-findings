// roc 2012-06 0049dfe0  unit: Scintilla::CScintillaView  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049dfe0
//
// 0049dfe0  8b442404             mov eax, dword ptr [esp + 4]
// 0049dfe4  53                   push ebx
// 0049dfe5  55                   push ebp
// 0049dfe6  56                   push esi
// 0049dfe7  57                   push edi
// 0049dfe8  8bf1                 mov esi, ecx
// 0049dfea  50                   push eax
// 0049dfeb  b90417d700           mov ecx, 0xd71704
// 0049dff0  ff157847b200         call dword ptr [0xb24778]
// 0049dff6  8b442424             mov eax, dword ptr [esp + 0x24]
// 0049dffa  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0049dffe  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0049e002  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0049e006  50                   push eax
// 0049e007  53                   push ebx
// 0049e008  893d0c17d700         mov dword ptr [0xd7170c], edi
// 0049e00e  891d1417d700         mov dword ptr [0xd71714], ebx
// 0049e014  892d1017d700         mov dword ptr [0xd71710], ebp
// 0049e01a  a31817d700           mov dword ptr [0xd71718], eax
// 0049e01f  8b0e                 mov ecx, dword ptr [esi]
// 0049e021  57                   push edi
// 0049e022  894c2420             mov dword ptr [esp + 0x20], ecx
// 0049e026  55                   push ebp
// 0049e027  b90417d700           mov ecx, 0xd71704
// 0049e02c  ff159847b200         call dword ptr [0xb24798]
// 0049e032  8b542424             mov edx, dword ptr [esp + 0x24]
// 0049e036  50                   push eax
// 0049e037  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 0049e03d  8bce                 mov ecx, esi
// 0049e03f  ffd0                 call eax
// 0049e041  85c0                 test eax, eax
// 0049e043  7530                 jne 0x49e075
// 0049e045  8b542424             mov edx, dword ptr [esp + 0x24]
// 0049e049  8b0e                 mov ecx, dword ptr [esi]
// 0049e04b  50                   push eax
// 0049e04c  52                   push edx
// 0049e04d  53                   push ebx
// 0049e04e  57                   push edi
// 0049e04f  894c2424             mov dword ptr [esp + 0x24], ecx
// 0049e053  55                   push ebp
// 0049e054  b90417d700           mov ecx, 0xd71704
// 0049e059  ff159847b200         call dword ptr [0xb24798]
// 0049e05f  50                   push eax
// 0049e060  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0049e064  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 0049e06a  8bce                 mov ecx, esi
// 0049e06c  ffd2                 call edx
// 0049e06e  5f                   pop edi
// 0049e06f  5e                   pop esi
// 0049e070  5d                   pop ebp
// 0049e071  5b                   pop ebx
// 0049e072  c21400               ret 0x14
// 0049e075  8b06                 mov eax, dword ptr [esi]
// 0049e077  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 0049e07d  8bce                 mov ecx, esi
// 0049e07f  ffd2                 call edx
// 0049e081  5f                   pop edi
// 0049e082  5e                   pop esi
// 0049e083  5d                   pop ebp
// 0049e084  5b                   pop ebx
// 0049e085  c21400               ret 0x14
// copied from an identical function in another client (function ?f@S@@QAEHPBXHHHH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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