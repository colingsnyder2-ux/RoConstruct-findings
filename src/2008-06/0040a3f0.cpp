// from server: 100% by king_originala
// roc 2008-06 0040a3f0  unit: boost::any::_N::?$holder  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a3f0
//
// 0040a3f0  83ec0c               sub esp, 0xc
// 0040a3f3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040a3f7  50                   push eax
// 0040a3f8  8d4c2404             lea ecx, [esp + 4]
// 0040a3fc  ff155c288000         call dword ptr [0x80285c]
// 0040a402  68c4158d00           push 0x8d15c4
// 0040a407  8d4c2404             lea ecx, [esp + 4]
// 0040a40b  51                   push ecx
// 0040a40c  c74424082cba8000     mov dword ptr [esp + 8], 0x80ba2c
// 0040a414  e873712900           call 0x6a158c

extern void (__thiscall *copy_bad_cast)(void *, const void *);
extern "C" __declspec(noreturn) void __stdcall throw_exception(void *, void *);

void __cdecl raise_bad_cast(const void *source)
{
    unsigned long object[3];
    copy_bad_cast(object, source);
    object[0] = 0x0080BA2CUL;
    throw_exception(object, reinterpret_cast<void *>(0x008D15C4UL));
}
