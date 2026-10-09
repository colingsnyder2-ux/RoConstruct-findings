// from server: 43% by colin
// roc 2007-08 0056c740  unit: RBX::Lua::ThreadRef  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056c740
//
// 0056c740  6aff                 push -1
// 0056c742  68d9967500           push 0x7596d9
// 0056c747  64a100000000         mov eax, dword ptr fs:[0]
// 0056c74d  50                   push eax
// 0056c74e  64892500000000       mov dword ptr fs:[0], esp
// 0056c755  83ec44               sub esp, 0x44
// 0056c758  8b442458             mov eax, dword ptr [esp + 0x58]
// 0056c75c  50                   push eax
// 0056c75d  8d4c2404             lea ecx, [esp + 4]
// 0056c761  682c9f7a00           push 0x7a9f2c
// 0056c766  51                   push ecx
// 0056c767  e85450f9ff           call 0x5017c0
// 0056c76c  83c40c               add esp, 0xc
// 0056c76f  50                   push eax
// 0056c770  8d4c2420             lea ecx, [esp + 0x20]
// 0056c774  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0056c77c  e83f66eaff           call 0x412dc0
// 0056c781  68c0108400           push 0x8410c0
// 0056c786  8d542420             lea edx, [esp + 0x20]
// 0056c78a  52                   push edx
// 0056c78b  e80e440c00           call 0x630b9e

struct Lua_ThreadRef {
    void construct(void*);
};

extern "C" void* __cdecl sub_5017C0(void*, const char*, void*);
extern "C" void __cdecl sub_412DC0(void*, void*);
extern "C" void __cdecl sub_630B9E(void*, void*);

void Lua_ThreadRef::construct(void* arg) {
    char buf[0x44];
    void* p = sub_5017C0(buf, "%s cannot be assigned to", arg);
    sub_412DC0(buf, p);
    sub_630B9E(buf, (void*)0x8410C0);
}
