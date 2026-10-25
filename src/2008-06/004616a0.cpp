// from server: 100% by king_originala
// roc 2008-06 004616a0  unit: Scintilla::CScintillaView  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004616a0
//
// 004616a0  8b442404             mov eax, dword ptr [esp + 4]
// 004616a4  53                   push ebx
// 004616a5  55                   push ebp
// 004616a6  56                   push esi
// 004616a7  57                   push edi
// 004616a8  8bf1                 mov esi, ecx
// 004616aa  50                   push eax
// 004616ab  b9b82f9300           mov ecx, 0x932fb8
// 004616b0  ff15b83e8000         call dword ptr [0x803eb8]
// 004616b6  8b442424             mov eax, dword ptr [esp + 0x24]
// 004616ba  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004616be  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004616c2  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004616c6  50                   push eax
// 004616c7  53                   push ebx
// 004616c8  893dc02f9300         mov dword ptr [0x932fc0], edi
// 004616ce  891dc82f9300         mov dword ptr [0x932fc8], ebx
// 004616d4  892dc42f9300         mov dword ptr [0x932fc4], ebp
// 004616da  a3cc2f9300           mov dword ptr [0x932fcc], eax
// 004616df  8b0e                 mov ecx, dword ptr [esi]
// 004616e1  57                   push edi
// 004616e2  894c2420             mov dword ptr [esp + 0x20], ecx
// 004616e6  55                   push ebp
// 004616e7  b9b82f9300           mov ecx, 0x932fb8
// 004616ec  ff15e03e8000         call dword ptr [0x803ee0]
// 004616f2  8b542424             mov edx, dword ptr [esp + 0x24]
// 004616f6  50                   push eax
// 004616f7  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 004616fd  8bce                 mov ecx, esi
// 004616ff  ffd0                 call eax
// 00461701  85c0                 test eax, eax
// 00461703  7530                 jne 0x461735
// 00461705  8b542424             mov edx, dword ptr [esp + 0x24]
// 00461709  8b0e                 mov ecx, dword ptr [esi]
// 0046170b  50                   push eax
// 0046170c  52                   push edx
// 0046170d  53                   push ebx
// 0046170e  57                   push edi
// 0046170f  894c2424             mov dword ptr [esp + 0x24], ecx
// 00461713  55                   push ebp
// 00461714  b9b82f9300           mov ecx, 0x932fb8
// 00461719  ff15e03e8000         call dword ptr [0x803ee0]
// 0046171f  50                   push eax
// 00461720  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00461724  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 0046172a  8bce                 mov ecx, esi
// 0046172c  ffd2                 call edx
// 0046172e  5f                   pop edi
// 0046172f  5e                   pop esi
// 00461730  5d                   pop ebp
// 00461731  5b                   pop ebx
// 00461732  c21400               ret 0x14
// 00461735  8b06                 mov eax, dword ptr [esi]
// 00461737  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 0046173d  8bce                 mov ecx, esi
// 0046173f  ffd2                 call edx
// 00461741  5f                   pop edi
// 00461742  5e                   pop esi
// 00461743  5d                   pop ebp
// 00461744  5b                   pop ebx
// 00461745  c21400               ret 0x14

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
