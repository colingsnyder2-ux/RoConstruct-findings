// from server: 100% by king_originala
// roc 2008-06 0050b620  unit: G3D::Log  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050b620
//
// 0050b620  6aff                 push -1
// 0050b622  68f8be7c00           push 0x7cbef8
// 0050b627  64a100000000         mov eax, dword ptr fs:[0]
// 0050b62d  50                   push eax
// 0050b62e  64892500000000       mov dword ptr fs:[0], esp
// 0050b635  81ec98000000         sub esp, 0x98
// 0050b63b  68400c8100           push 0x810c40
// 0050b640  8d4c2420             lea ecx, [esp + 0x20]
// 0050b644  ff1558248000         call dword ptr [0x802458]
// 0050b64a  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 0050b651  50                   push eax
// 0050b652  8d4c2404             lea ecx, [esp + 4]
// 0050b656  c78424a400000000000000 mov dword ptr [esp + 0xa4], 0
// 0050b661  ff1558248000         call dword ptr [0x802458]
// 0050b667  8d4c241c             lea ecx, [esp + 0x1c]
// 0050b66b  51                   push ecx
// 0050b66c  8d542404             lea edx, [esp + 4]
// 0050b670  52                   push edx
// 0050b671  8d4c2440             lea ecx, [esp + 0x40]
// 0050b675  c68424a800000001     mov byte ptr [esp + 0xa8], 1
// 0050b67d  e82e72f6ff           call 0x4728b0
// 0050b682  6878c48d00           push 0x8dc478
// 0050b687  8d44243c             lea eax, [esp + 0x3c]
// 0050b68b  50                   push eax
// 0050b68c  e8fb5e1900           call 0x6a158c

struct String;
typedef void (__thiscall *StringConstructor)(String *, const char *);
extern StringConstructor constructString;
extern const char messageText[];
extern unsigned char exceptionInfo[];

struct String {
    unsigned char storage[28];
    String(const char *text);
    ~String();
};

inline String::String(const char *text) {
    constructString(this, text);
}

struct Exception {
    unsigned char storage[96];
    Exception(const String &, const String &);
};

extern "C" __declspec(noreturn) void __stdcall raiseException(void *, void *);

void fail(int, const char *text) {
    String message(messageText);
    String detail(text);
    Exception exception(detail, message);
    raiseException(&exception, exceptionInfo);
}
