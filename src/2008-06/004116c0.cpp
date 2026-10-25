// from server: 100% by colin
// roc 2008-06 004116c0  unit: CBrush  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004116c0
//
// 004116c0  83ec0c               sub esp, 0xc
// 004116c3  8b442410             mov eax, dword ptr [esp + 0x10]
// 004116c7  50                   push eax
// 004116c8  8d4c2404             lea ecx, [esp + 4]
// 004116cc  ff1588288000         call dword ptr [0x802888]
// 004116d2  6854238d00           push 0x8d2354
// 004116d7  8d4c2404             lea ecx, [esp + 4]
// 004116db  51                   push ecx
// 004116dc  c7442408a8df8000     mov dword ptr [esp + 8], 0x80dfa8
// 004116e4  e8a3fe2800           call 0x6a158c

extern void (__thiscall *copy_bad_cast)(void *, const void *);
extern "C" __declspec(noreturn) void __stdcall throw_exception(void *, void *);

void __cdecl raise_bad_cast(const void *source)
{
    unsigned long object[3];
    copy_bad_cast(object, source);
    object[0] = 0x0080BA2CUL;
    throw_exception(object, reinterpret_cast<void *>(0x008D15C4UL));
}
