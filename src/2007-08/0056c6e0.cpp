// from server: 39% by colin
// roc 2007-08 0056c6e0  unit: RBX::Lua::ThreadRef  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056c6e0
//
// 0056c6e0  6aff                 push -1
// 0056c6e2  68d9967500           push 0x7596d9
// 0056c6e7  64a100000000         mov eax, dword ptr fs:[0]
// 0056c6ed  50                   push eax
// 0056c6ee  64892500000000       mov dword ptr fs:[0], esp
// 0056c6f5  83ec44               sub esp, 0x44
// 0056c6f8  8b442458             mov eax, dword ptr [esp + 0x58]
// 0056c6fc  50                   push eax
// 0056c6fd  8d4c2404             lea ecx, [esp + 4]
// 0056c701  68109f7a00           push 0x7a9f10
// 0056c706  51                   push ecx
// 0056c707  e8b450f9ff           call 0x5017c0
// 0056c70c  83c40c               add esp, 0xc
// 0056c70f  50                   push eax
// 0056c710  8d4c2420             lea ecx, [esp + 0x20]
// 0056c714  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0056c71c  e89f66eaff           call 0x412dc0
// 0056c721  68c0108400           push 0x8410c0
// 0056c726  8d542420             lea edx, [esp + 0x20]
// 0056c72a  52                   push edx
// 0056c72b  e86e440c00           call 0x630b9e

struct LuaState;

struct ThreadRef {
    void* liveThreadRef;
    ThreadRef(void* ref);
};

extern "C" void __cdecl sub_5017C0(void*, const char*, void*);
extern "C" void __cdecl sub_412DC0(void*, void*);
extern "C" void __cdecl sub_630B9E(void*, void*);

void* g_7A9F10 = 0;
void* g_8410C0 = 0;

ThreadRef::ThreadRef(void* ref) {
    char buf[0x44];
    sub_5017C0(buf, "%s is not a valid member", ref);
    sub_412DC0(buf, &g_7A9F10);
    sub_630B9E(buf, &g_8410C0);
    this->liveThreadRef = 0;
}
