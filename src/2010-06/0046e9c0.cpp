// roc 2010-06 0046e9c0  unit: Scintilla::CScintillaView  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e9c0
//
// 0046e9c0  8b442404             mov eax, dword ptr [esp + 4]
// 0046e9c4  53                   push ebx
// 0046e9c5  55                   push ebp
// 0046e9c6  56                   push esi
// 0046e9c7  57                   push edi
// 0046e9c8  8bf1                 mov esi, ecx
// 0046e9ca  50                   push eax
// 0046e9cb  b9f04eb800           mov ecx, 0xb84ef0
// 0046e9d0  ff158cce9e00         call dword ptr [0x9ece8c]
// 0046e9d6  8b442424             mov eax, dword ptr [esp + 0x24]
// 0046e9da  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0046e9de  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0046e9e2  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0046e9e6  50                   push eax
// 0046e9e7  53                   push ebx
// 0046e9e8  893df84eb800         mov dword ptr [0xb84ef8], edi
// 0046e9ee  891d004fb800         mov dword ptr [0xb84f00], ebx
// 0046e9f4  892dfc4eb800         mov dword ptr [0xb84efc], ebp
// 0046e9fa  a3044fb800           mov dword ptr [0xb84f04], eax
// 0046e9ff  8b0e                 mov ecx, dword ptr [esi]
// 0046ea01  57                   push edi
// 0046ea02  894c2420             mov dword ptr [esp + 0x20], ecx
// 0046ea06  55                   push ebp
// 0046ea07  b9f04eb800           mov ecx, 0xb84ef0
// 0046ea0c  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0046ea12  8b542424             mov edx, dword ptr [esp + 0x24]
// 0046ea16  50                   push eax
// 0046ea17  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 0046ea1d  8bce                 mov ecx, esi
// 0046ea1f  ffd0                 call eax
// 0046ea21  85c0                 test eax, eax
// 0046ea23  7530                 jne 0x46ea55
// 0046ea25  8b542424             mov edx, dword ptr [esp + 0x24]
// 0046ea29  8b0e                 mov ecx, dword ptr [esi]
// 0046ea2b  50                   push eax
// 0046ea2c  52                   push edx
// 0046ea2d  53                   push ebx
// 0046ea2e  57                   push edi
// 0046ea2f  894c2424             mov dword ptr [esp + 0x24], ecx
// 0046ea33  55                   push ebp
// 0046ea34  b9f04eb800           mov ecx, 0xb84ef0
// 0046ea39  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0046ea3f  50                   push eax
// 0046ea40  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0046ea44  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 0046ea4a  8bce                 mov ecx, esi
// 0046ea4c  ffd2                 call edx
// 0046ea4e  5f                   pop edi
// 0046ea4f  5e                   pop esi
// 0046ea50  5d                   pop ebp
// 0046ea51  5b                   pop ebx
// 0046ea52  c21400               ret 0x14
// 0046ea55  8b06                 mov eax, dword ptr [esi]
// 0046ea57  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 0046ea5d  8bce                 mov ecx, esi
// 0046ea5f  ffd2                 call edx
// 0046ea61  5f                   pop edi
// 0046ea62  5e                   pop esi
// 0046ea63  5d                   pop ebp
// 0046ea64  5b                   pop ebx
// 0046ea65  c21400               ret 0x14
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