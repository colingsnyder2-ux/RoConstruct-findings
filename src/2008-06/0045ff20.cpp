// from server: 100% by colin
// roc 2008-06 0045ff20  unit: CSaveToRobloxDialog  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ff20
//
// 0045ff20  64a100000000         mov eax, dword ptr fs:[0]
// 0045ff26  6aff                 push -1
// 0045ff28  6809167c00           push 0x7c1609
// 0045ff2d  50                   push eax
// 0045ff2e  64892500000000       mov dword ptr fs:[0], esp
// 0045ff35  56                   push esi
// 0045ff36  8bf1                 mov esi, ecx
// 0045ff38  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0045ff3c  83c8ff               or eax, 0xffffffff
// 0045ff3f  668901               mov word ptr [ecx], ax
// 0045ff42  8d4c2418             lea ecx, [esp + 0x18]
// 0045ff46  ff15043f8000         call dword ptr [0x803f04]
// 0045ff4c  6a01                 push 1
// 0045ff4e  8d54241c             lea edx, [esp + 0x1c]
// 0045ff52  52                   push edx
// 0045ff53  68ed130180           push 0x800113ed
// 0045ff58  6878728100           push 0x817278
// 0045ff5d  8bce                 mov ecx, esi
// 0045ff5f  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0045ff67  e822142400           call 0x6a138e
// 0045ff6c  6816b78000           push 0x80b716
// 0045ff71  8d4c241c             lea ecx, [esp + 0x1c]
// 0045ff75  ff15f02f8000         call dword ptr [0x802ff0]
// 0045ff7b  85c0                 test eax, eax
// 0045ff7d  7423                 je 0x45ffa2
// 0045ff7f  8d4c2418             lea ecx, [esp + 0x18]
// 0045ff83  ff15e03e8000         call dword ptr [0x803ee0]
// 0045ff89  50                   push eax
// 0045ff8a  ff1568288000         call dword ptr [0x802868]
// 0045ff90  83c404               add esp, 4
// 0045ff93  83f801               cmp eax, 1
// 0045ff96  750a                 jne 0x45ffa2
// 0045ff98  8b06                 mov eax, dword ptr [esi]
// 0045ff9a  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 0045ffa0  eb08                 jmp 0x45ffaa
// 0045ffa2  8b06                 mov eax, dword ptr [esi]
// 0045ffa4  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 0045ffaa  8bce                 mov ecx, esi
// 0045ffac  ffd2                 call edx
// 0045ffae  8d4c2418             lea ecx, [esp + 0x18]
// 0045ffb2  ff15143f8000         call dword ptr [0x803f14]
// 0045ffb8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045ffbc  64890d00000000       mov dword ptr fs:[0], ecx
// 0045ffc3  5e                   pop esi
// 0045ffc4  83c40c               add esp, 0xc
// 0045ffc7  c20800               ret 8

struct Text;
struct S;

extern int (__cdecl *atoiCall)(const char *);

struct Text {
    char *data;
    __declspec(dllimport) Text();
    __declspec(dllimport) ~Text() throw();
    __declspec(dllimport) int compare(const char *) const;
    __declspec(dllimport) const char *c_str() const;
};









struct VTable {
    void *slots[88];
    void (__thiscall *accept)(S *);
    void (__thiscall *reject)(S *);
};

struct S {
    VTable *vtable;
    void getProperty(const char *, long, Text *, int);
    void f(void *, short *);
};

void S::f(void *, short *cancel) {
    *cancel = -1;
    Text result;
    getProperty("DialogResult", (long)0x800113ed, &result, 1);
    if (result.compare("") != 0 && atoiCall(result.c_str()) == 1)
        vtable->accept(this);
    else
        vtable->reject(this);
}
