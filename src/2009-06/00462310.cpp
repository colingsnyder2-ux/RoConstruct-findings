// roc 2009-06 00462310  unit: Scintilla::CScintillaView  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462310
//
// 00462310  8b442404             mov eax, dword ptr [esp + 4]
// 00462314  53                   push ebx
// 00462315  55                   push ebp
// 00462316  56                   push esi
// 00462317  57                   push edi
// 00462318  8bf1                 mov esi, ecx
// 0046231a  50                   push eax
// 0046231b  b9ac689e00           mov ecx, 0x9e68ac
// 00462320  ff15acfc8900         call dword ptr [0x89fcac]
// 00462326  8b442424             mov eax, dword ptr [esp + 0x24]
// 0046232a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0046232e  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00462332  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00462336  50                   push eax
// 00462337  53                   push ebx
// 00462338  893db4689e00         mov dword ptr [0x9e68b4], edi
// 0046233e  891dbc689e00         mov dword ptr [0x9e68bc], ebx
// 00462344  892db8689e00         mov dword ptr [0x9e68b8], ebp
// 0046234a  a3c0689e00           mov dword ptr [0x9e68c0], eax
// 0046234f  8b0e                 mov ecx, dword ptr [esi]
// 00462351  57                   push edi
// 00462352  894c2420             mov dword ptr [esp + 0x20], ecx
// 00462356  55                   push ebp
// 00462357  b9ac689e00           mov ecx, 0x9e68ac
// 0046235c  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00462362  8b542424             mov edx, dword ptr [esp + 0x24]
// 00462366  50                   push eax
// 00462367  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 0046236d  8bce                 mov ecx, esi
// 0046236f  ffd0                 call eax
// 00462371  85c0                 test eax, eax
// 00462373  7530                 jne 0x4623a5
// 00462375  8b542424             mov edx, dword ptr [esp + 0x24]
// 00462379  8b0e                 mov ecx, dword ptr [esi]
// 0046237b  50                   push eax
// 0046237c  52                   push edx
// 0046237d  53                   push ebx
// 0046237e  57                   push edi
// 0046237f  894c2424             mov dword ptr [esp + 0x24], ecx
// 00462383  55                   push ebp
// 00462384  b9ac689e00           mov ecx, 0x9e68ac
// 00462389  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0046238f  50                   push eax
// 00462390  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00462394  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 0046239a  8bce                 mov ecx, esi
// 0046239c  ffd2                 call edx
// 0046239e  5f                   pop edi
// 0046239f  5e                   pop esi
// 004623a0  5d                   pop ebp
// 004623a1  5b                   pop ebx
// 004623a2  c21400               ret 0x14
// 004623a5  8b06                 mov eax, dword ptr [esi]
// 004623a7  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 004623ad  8bce                 mov ecx, esi
// 004623af  ffd2                 call edx
// 004623b1  5f                   pop edi
// 004623b2  5e                   pop esi
// 004623b3  5d                   pop ebp
// 004623b4  5b                   pop ebx
// 004623b5  c21400               ret 0x14
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