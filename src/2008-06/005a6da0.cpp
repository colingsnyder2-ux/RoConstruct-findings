// from server: 92% by colin
// from server: 90% by king_originala
// roc 2008-06 005a6da0  unit: RBX::Workspace  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a6da0
//
// 005a6da0  6aff                 push -1
// 005a6da2  68a42f7d00           push 0x7d2fa4
// 005a6da7  64a100000000         mov eax, dword ptr fs:[0]
// 005a6dad  50                   push eax
// 005a6dae  64892500000000       mov dword ptr fs:[0], esp
// 005a6db5  51                   push ecx
// 005a6db6  53                   push ebx
// 005a6db7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a6dbb  55                   push ebp
// 005a6dbc  56                   push esi
// 005a6dbd  57                   push edi
// 005a6dbe  8bf9                 mov edi, ecx
// 005a6dc0  53                   push ebx
// 005a6dc1  8d4f04               lea ecx, [edi + 4]
// 005a6dc4  897c2414             mov dword ptr [esp + 0x14], edi
// 005a6dc8  c707b8418300         mov dword ptr [edi], 0x8341b8
// 005a6dce  ff1558248000         call dword ptr [0x802458]
// 005a6dd4  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005a6dd8  33c0                 xor eax, eax
// 005a6dda  55                   push ebp
// 005a6ddb  8d4f24               lea ecx, [edi + 0x24]
// 005a6dde  89442420             mov dword ptr [esp + 0x20], eax
// 005a6de2  894720               mov dword ptr [edi + 0x20], eax
// 005a6de5  ff1558248000         call dword ptr [0x802458]
// 005a6deb  6a01                 push 1
// 005a6ded  6a40                 push 0x40
// 005a6def  6a02                 push 2
// 005a6df1  8d7740               lea esi, [edi + 0x40]
// 005a6df4  55                   push ebp
// 005a6df5  8bce                 mov ecx, esi
// 005a6df7  c644242c01           mov byte ptr [esp + 0x2c], 1
// 005a6dfc  ff15d0238000         call dword ptr [0x8023d0]
// 005a6e02  6a01                 push 1
// 005a6e04  c644242002           mov byte ptr [esp + 0x20], 2
// 005a6e09  e802ffffff           call 0x5a6d10
// 005a6e0e  83c404               add esp, 4
// 005a6e11  68b0418300           push 0x8341b0
// 005a6e16  53                   push ebx
// 005a6e17  68a8418300           push 0x8341a8
// 005a6e1c  56                   push esi
// 005a6e1d  e82e36eaff           call 0x44a450
// 005a6e22  83c408               add esp, 8
// 005a6e25  50                   push eax
// 005a6e26  e82536eaff           call 0x44a450
// 005a6e2b  83c408               add esp, 8
// 005a6e2e  50                   push eax
// 005a6e2f  e81c36eaff           call 0x44a450
// 005a6e34  83c408               add esp, 8
// 005a6e37  8bce                 mov ecx, esi
// 005a6e39  ff15bc238000         call dword ptr [0x8023bc]
// 005a6e3f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a6e43  8bc7                 mov eax, edi
// 005a6e45  5f                   pop edi
// 005a6e46  5e                   pop esi
// 005a6e47  5d                   pop ebp
// 005a6e48  5b                   pop ebx
// 005a6e49  64890d00000000       mov dword ptr fs:[0], ecx
// 005a6e50  83c410               add esp, 0x10
// 005a6e53  c20800               ret 8

struct Text;
struct Output;

extern void (__thiscall *construct_text)(Text *, const char *);
extern void (__thiscall *construct_output)(Output *, const char *, int, int, int);
extern Output &(__thiscall *flush_output)(Output *);

extern const unsigned int table[];
extern const char prefix[];
extern const char suffix[];

void __cdecl set_logging(int);
Output &__cdecl append(Output &, const char *);

struct __declspec(dllimport) Text {
    char storage[28];
    Text(const char *);
    ~Text();
};

struct Output {
    Output(const char *, int, int, int);
    ~Output();
};

inline Text::Text(const char *s)
{
    construct_text(this, s);
}

inline Output::Output(const char *s, int mode, int protection, int flag)
{
    construct_output(this, s, mode, protection, flag);
}

struct Log {
    const unsigned int *vtable;
    Text name;
    int state;
    Text filename;
    Output output;

    Log(const char *, const char *);
};

Log::Log(const char *path, const char *label)
    : vtable(table),
      name(label),
      state(0),
      filename(path),
      output(path, 2, 64, 1)
{
    set_logging(1);
    append(append(append(output, prefix), label), suffix);
    flush_output(&output);
}
