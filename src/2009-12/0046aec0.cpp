// roc 2009-12 0046aec0  unit: Scintilla::CScintillaView  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046aec0
//
// 0046aec0  8b442404             mov eax, dword ptr [esp + 4]
// 0046aec4  53                   push ebx
// 0046aec5  55                   push ebp
// 0046aec6  56                   push esi
// 0046aec7  57                   push edi
// 0046aec8  8bf1                 mov esi, ecx
// 0046aeca  50                   push eax
// 0046aecb  b9e8b5b000           mov ecx, 0xb0b5e8
// 0046aed0  ff155cde9800         call dword ptr [0x98de5c]
// 0046aed6  8b442424             mov eax, dword ptr [esp + 0x24]
// 0046aeda  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0046aede  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0046aee2  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0046aee6  50                   push eax
// 0046aee7  53                   push ebx
// 0046aee8  893df0b5b000         mov dword ptr [0xb0b5f0], edi
// 0046aeee  891df8b5b000         mov dword ptr [0xb0b5f8], ebx
// 0046aef4  892df4b5b000         mov dword ptr [0xb0b5f4], ebp
// 0046aefa  a3fcb5b000           mov dword ptr [0xb0b5fc], eax
// 0046aeff  8b0e                 mov ecx, dword ptr [esi]
// 0046af01  57                   push edi
// 0046af02  894c2420             mov dword ptr [esp + 0x20], ecx
// 0046af06  55                   push ebp
// 0046af07  b9e8b5b000           mov ecx, 0xb0b5e8
// 0046af0c  ff1580de9800         call dword ptr [0x98de80]
// 0046af12  8b542424             mov edx, dword ptr [esp + 0x24]
// 0046af16  50                   push eax
// 0046af17  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 0046af1d  8bce                 mov ecx, esi
// 0046af1f  ffd0                 call eax
// 0046af21  85c0                 test eax, eax
// 0046af23  7530                 jne 0x46af55
// 0046af25  8b542424             mov edx, dword ptr [esp + 0x24]
// 0046af29  8b0e                 mov ecx, dword ptr [esi]
// 0046af2b  50                   push eax
// 0046af2c  52                   push edx
// 0046af2d  53                   push ebx
// 0046af2e  57                   push edi
// 0046af2f  894c2424             mov dword ptr [esp + 0x24], ecx
// 0046af33  55                   push ebp
// 0046af34  b9e8b5b000           mov ecx, 0xb0b5e8
// 0046af39  ff1580de9800         call dword ptr [0x98de80]
// 0046af3f  50                   push eax
// 0046af40  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0046af44  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 0046af4a  8bce                 mov ecx, esi
// 0046af4c  ffd2                 call edx
// 0046af4e  5f                   pop edi
// 0046af4f  5e                   pop esi
// 0046af50  5d                   pop ebp
// 0046af51  5b                   pop ebx
// 0046af52  c21400               ret 0x14
// 0046af55  8b06                 mov eax, dword ptr [esi]
// 0046af57  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 0046af5d  8bce                 mov ecx, esi
// 0046af5f  ffd2                 call edx
// 0046af61  5f                   pop edi
// 0046af62  5e                   pop esi
// 0046af63  5d                   pop ebp
// 0046af64  5b                   pop ebx
// 0046af65  c21400               ret 0x14
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