// from server: 100% by king_originala
// roc 2008-06 0040a500  unit: boost::any::_N::?$holder  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a500
//
// 0040a500  83ec28               sub esp, 0x28
// 0040a503  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0040a507  50                   push eax
// 0040a508  8d4c2404             lea ecx, [esp + 4]
// 0040a50c  e87ff9ffff           call 0x409e90
// 0040a511  681c168d00           push 0x8d161c
// 0040a516  8d4c2404             lea ecx, [esp + 4]
// 0040a51a  51                   push ecx
// 0040a51b  c7442408dcb88000     mov dword ptr [esp + 8], 0x80b8dc
// 0040a523  e864702900           call 0x6a158c

struct ExceptionObject
{
    unsigned long words[10];
    void __thiscall copy(const void *source);
};

extern "C" __declspec(noreturn) void __stdcall throw_exception(void *, void *);

void __cdecl raise_exception(const void *source)
{
    ExceptionObject object;
    object.copy(source);
    object.words[0] = 0x0080B8DCUL;
    throw_exception(&object, reinterpret_cast<void *>(0x008D161CUL));
}
