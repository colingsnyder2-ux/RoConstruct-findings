// from server: 100% by king_originala
// roc 2008-06 00501890  unit: boost::bad_lexical_cast  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501890
//
// 00501890  83ec14               sub esp, 0x14
// 00501893  56                   push esi
// 00501894  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00501898  56                   push esi
// 00501899  8d4c2408             lea ecx, [esp + 8]
// 0050189d  ff155c288000         call dword ptr [0x80285c]
// 005018a3  8b460c               mov eax, dword ptr [esi + 0xc]
// 005018a6  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005018a9  68905c8e00           push 0x8e5c90
// 005018ae  8d542408             lea edx, [esp + 8]
// 005018b2  52                   push edx
// 005018b3  c744240c24728200     mov dword ptr [esp + 0xc], 0x827224
// 005018bb  89442418             mov dword ptr [esp + 0x18], eax
// 005018bf  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005018c3  e8c4fc1900           call 0x6a158c
// 005018c8  5e                   pop esi

struct Exception {
    void* vtable;
    unsigned long base[2];
    const void* sourceType;
    const void* targetType;
};

typedef void (__thiscall *CopyBadCast)(void*, const void*);
extern CopyBadCast copyBadCast;

extern unsigned char lexicalCastVtable;
extern unsigned char lexicalCastThrowInfo;

extern "C" __declspec(noreturn) void __stdcall
throwException(void*, void*);

void throwLexicalCast(const Exception& source)
{
    Exception value;
    copyBadCast(&value, &source);
    value.vtable = &lexicalCastVtable;
    value.sourceType = source.sourceType;
    value.targetType = source.targetType;
    throwException(&value, &lexicalCastThrowInfo);
}
